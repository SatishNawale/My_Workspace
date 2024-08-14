#   Advertising Case Study Using Liner Regression

import numpy as np
import pandas as pd
from sklearn import metrics
from sklearn.linear_model import LinearRegression
from sklearn.model_selection import train_test_split
import matplotlib.pyplot as plot

def MarvellousAdvertisementPredictor(data_path):
    # Load the dataset
    data = pd.read_csv(data_path, index_col=0)
    print("Size of Actual dataset", len(data))

    # Define features names
    feature_names = ['TV', 'radio', 'newspaper']
    print("Names of Features", feature_names)

    # Seperate the features and the target
    X = data[feature_names]
    target = data['sales']

    # Split the dataset into training and testing sets
    X_train, X_test, target_train, target_test = train_test_split(X, target, test_size = 1/2)

    print("Size of Training dataset", len(X_train))
    print("Size of Testing dataset", len(X_test))

    # Create the Linear Regression model
    linreg = LinearRegression()

    # Train the model
    linreg.fit(X_train, target_train)

    # Make prediction on the test set
    target_pred = linreg.predict(X_test)

    # Print actual and predicted values
    print("Testing set (actual values) : ")
    print(target_test)

    print("Result of Testing : ")
    print(target_pred)

    # Calculate and print the RMSE
    rmse = np.sqrt(metrics.mean_squared_error(target_test,target_pred))
    print("Root Mean Squared Error : ", rmse)

    # Plotting the results
    plot.figure(figsize=(10, 6))
    plot.scatter(target_test, target_pred, color='blue', edgecolor='k')
    plot.plot([min(target_test), max(target_test)], [min(target_test), max(target_test)], color='red', linewidth=2)
    plot.xlabel("Actual Sales")
    plot.ylabel("Predicted Sales")
    plot.title("Actual vs Predicted Sales")
    plot.show()

def main():
    MarvellousAdvertisementPredictor("MarvellousAdvertising.csv")

if __name__ == "__main__":
    main()
