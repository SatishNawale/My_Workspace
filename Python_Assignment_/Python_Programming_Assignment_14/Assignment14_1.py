# Assignment14_1: There is one data set of whether conditions.
# That data contains information as wether and we have to decide whether to play or not.
# Data set contains the target variables as Play which indicates whether to play or not.


import pandas as pd # type: ignore
from sklearn.model_selection import train_test_split # type: ignore
from sklearn.preprocessing import LabelEncoder # type: ignore
from sklearn.neighbors import KNeighborsClassifier # type: ignore
from sklearn.metrics import accuracy_score, classification_report, confusion_matrix # type: ignore

# Initialize the LabelEncoders globally so they can be used in different functions
label_encoder_whether = LabelEncoder()
label_encoder_temperature = LabelEncoder()
label_encoder_play = LabelEncoder()

# Step 5: Calculate Accuracy
def check_accuracy(data_test, target_test, knn_model):
    y_pred = knn_model.predict(data_test)
    accuracy = accuracy_score(target_test, y_pred)

    print(f"\nAccuracy: {accuracy}")
    print("\nClassification Report:")
    print(classification_report(target_test, y_pred, target_names=label_encoder_play.classes_))
    print("Confusion Matrix:")
    print(confusion_matrix(target_test, y_pred))

# Step 4: Test the model
def test_model(whether, temperature, knn_model):
    whether_encoded = label_encoder_whether.transform([whether])[0]
    temperature_encoded = label_encoder_temperature.transform([temperature])[0]
    # Create a DataFrame for the input with the same column names used during training
    input_fobj = pd.DataFrame([[whether_encoded, temperature_encoded]], columns=['Whether', 'Temperature'])
    # Predict using the trained model
    prediction = knn_model.predict(input_fobj)
    # Decode the prediction
    return label_encoder_play.inverse_transform(prediction)[0]

def get_user_input(knn_model):
    whether = input("Please enter Whether (Sunny, Overcast, Rainy): ").capitalize()
    temperature = input("Please enter Temperature (Hot, Mild, Cool): ").capitalize()
    prediction = test_model(whether, temperature, knn_model)
    print(f"\nPrediction for (Whether = {whether}, Temperature = {temperature}) : {prediction}")

def main():
# Step 1: Load the CSV file
    fobj = pd.read_csv('PlayPredictor.csv')

# Step 2: Clean, Prepare and Manipulate Data
    # Drop the 'Unnamed: 0' column as it is not needed
    fobj = fobj.drop(columns=['Unnamed: 0'])

    # Fit and transform the data using LabelEncoder
    fobj['Whether'] = label_encoder_whether.fit_transform(fobj['Whether'])
    fobj['Temperature'] = label_encoder_temperature.fit_transform(fobj['Temperature'])
    fobj['Play'] = label_encoder_play.fit_transform(fobj['Play'])

    # Split into features and target
    features = fobj[['Whether', 'Temperature']]
    labels = fobj['Play']

# Step 3: Train the data
    # Split the data into training and testing sets
    data_train, data_test, target_train, target_test = train_test_split(features, labels, test_size=0.2)

    # Initialize and fit the KNN model
    knn_model = KNeighborsClassifier(n_neighbors=3)
    knn_model.fit(data_train, target_train)

    # Get user input and predict
    get_user_input(knn_model)

    # Check model accuracy
    check_accuracy(data_test, target_test, knn_model)

if __name__ == "__main__":
    main()