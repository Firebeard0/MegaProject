//
//  Controller.cpp
//  MegaProject
//
//  Created by Uffens, Noah on 1/31/18.
//  Copyright © 2018 Uffens, Noah. All rights reserved.
//

#include "Controller.hpp"

using namespace std;

void Controller:: start()
{
    
    findMinAndMax();
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
