//
//  Controller.cpp
//  MegaProject
//
//  Created by Uffens, Noah on 1/31/18.
//  Copyright © 2018 Uffens, Noah. All rights reserved.
//

#include "Controller.hpp"
#include "vector"
#include "iostream"

using namespace std;

void Controller:: start()
{
    consoleOutput();
//    howToVector();
//    homeworkArray();
//    Timer codeTimer;
//    codeTimer.startTimer();
//    cout << "look on the screen" << endl;
//    codeTimer.stopTimer();
//    codeTimer.displayInformation();
//    codeTimer.resetTimer();
//    codeTimer.startTimer();
//
//    vector<CrimeData> myData = FileController :: readCrimeDataToVector("/Users/nuff6998/Documents/SwiftCode/MegaProject/MegaProject/Data/crime.csv");
//
//    for (int i = 200; i < 215; i++)
//    {
//        cout << i << " is " << myData[i] << endl;
//    }
//    codeTimer.stopTimer();
//    codeTimer.displayInformation();
}

void Controller :: testArray()
{
    Array<int> noahArray(45);
    
    noahArray[0] = 123;
    noahArray.setAtIndex(0,321);
    cout << noahArray[0] << endl;
}

void Controller :: findMinAndMax()
{
    Timer searchTimer;
    searchTimer.startTimer();
    vector<CrimeData> myData = FileController :: readCrimeDataToVector("/Users/nuff6998/Documents/SwiftCode/MegaProject/MegaProject/Data/crime.csv");
    
    int minIndex = 0;
    int maxIndex = 0;
    
    for (int index = 1; index < myData.size(); index++)
    {
     if(myData [minIndex] > myData [index])
     {
         minIndex = index;
    }
        if (myData [maxIndex] < myData[index])
        {
            maxIndex = index;
        }
       
    }
    cout << "The smallest crime stat is at " << minIndex << " and it is " << myData[minIndex] << endl;
    cout << "the largest crime stat is at " << maxIndex << " and it is " << myData[maxIndex] << endl;
    searchTimer.stopTimer();
    searchTimer.displayInformation();
}

void Controller :: homeworkArray()
{
    int grah [4] = { 12, 13, 14, 15};
    double boo [3] = {11.4, 9.9, 32.9};
    string sucks [2] = {"hello", "Hi"};
    
    for (int i = 0; i < 4; i++)
    {
        cout << grah[i] << endl;
    }
    for (int i = 0; i < 3; i++)
    {
        cout << boo[i] << endl;
    }
    for (int i = 0; i < 2; i++)
    {
        cout << sucks[i] << endl;
    }
}

void Controller :: howToVector()
{
    vector<int> blegh (4, 100);
    vector<string> grrr (3, "sucker");
    
    for (int i = 0; i < 4; i++)
    {
        cout << blegh[i] << endl;
    }
    for (int i = 0; i< 3; i++)
    {
        cout << grrr[i] << endl;
    }
}

void Controller:: consoleOutput()
{
    cout << "noah" << endl;
    for (int i = 13; i < 32; i++)
    {
        cout << i << endl;
    }
    string n = "noah";
    cout << n << endl;
    cout << n << "noah" << endl;
}
