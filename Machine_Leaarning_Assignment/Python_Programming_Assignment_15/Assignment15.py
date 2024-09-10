import pandas as pd
from sklearn import preprocessing
from sklearn.neighbors import KNeighborsClassifier
from sklearn.model_selection import train_test_split
from sklearn import metrics


def MarvellousWinePredictor(data_path):
    # Step 1 : Load data
    data = pd.read_csv(data_path)
    print(data)

    print("Size of Actual dataset : ", len(data),"\n")

    # Step 2 : Clean, Prepare and manipulate data
    feature_names = ['Alcohol','Malic acid', 'Ash', 'Alcalinity of ash',
                     'Magnesium', 'Total phenols', 'Flavanoids', 'Nonflavanoid phenols',
                     'Proanthocyanins', 'Color intensity', 'Hue', 'OD280/OD315 of diluted wines',
                     'Proline']  
    print("Names of Features : ", feature_names,"\n")

    labels_names = ['Class']
    print("Names of labels : ",labels_names)

    le = preprocessing.LabelEncoder()
    Alcohol_Encoded = le.fit_transform(data['Alcohol'])
    Malic_acid_Encoded = le.fit_transform(data['Malic acid'])
    Ash_Encoded = le.fit_transform(data['Ash'])
    Alcalinity_of_ash_Encoded = le.fit_transform(data['Alcalinity of ash'])
    Magensium_Encoded = le.fit_transform(data['Magnesium'])
    Total_phenols_Encoded = le.fit_transform(data['Total phenols'])
    Flavanoids_Encoded = le.fit_transform(data['Flavanoids'])
    Nonflavanoid_phenols_Encoded = le.fit_transform(data['Nonflavanoid phenols'])
    Proanthocyanins_Encoded = le.fit_transform(data['Proanthocyanins'])
    Color_intensity_Encoded = le.fit_transform(data['Color intensity'])
    Hue_Encoded = le.fit_transform(data['Hue'])
    OD280_OD315_of_diluted_wines_Encoded = le.fit_transform(data['OD280/OD315 of diluted wines'])
    Prolline_Encoded = le.fit_transform(data['Proline'])

    features = list(zip(Alcohol_Encoded,Malic_acid_Encoded,Ash_Encoded,Alcalinity_of_ash_Encoded,
                        Magensium_Encoded,Total_phenols_Encoded,Flavanoids_Encoded,Nonflavanoid_phenols_Encoded,
                        Proanthocyanins_Encoded,Color_intensity_Encoded,Hue_Encoded,OD280_OD315_of_diluted_wines_Encoded,
                        Prolline_Encoded))
    target = le.fit_transform(data['Class'])
    

    # Split dataset into training set and test set
    data_train, data_test, target_train, target_test = train_test_split(features, target, test_size=0.3)

    # Step 3 : Train Model
    knn = KNeighborsClassifier(n_neighbors=3)

    # Train the model using the traninig sets
    knn.fit(data_train,target_train)

    # Predict the response for test dataset
    y_pred = knn.predict(data_test)

    # Model Accuracy, how often is the classifier correct?
    print("Accuracy : ",metrics.accuracy_score(target_test,y_pred))


def main():
    print("\n-----Mavervellous Infosystesm by Piyush Khairnar-----")
    print("--------------Machine Learning Application---------------\n")
    print("Wine predcitor application using K Nearest Knighbor algorithm\n")
    MarvellousWinePredictor("WinePredictor.csv")

if __name__ == "__main__":
    main()
