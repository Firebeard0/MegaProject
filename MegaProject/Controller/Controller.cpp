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
    Timer codeTimer;
    codeTimer.startTimer();
    cout << "look on the screen" << endl;
    codeTimer.stopTimer();
    codeTimer.displayInformation();
    codeTimer.resetTimer();
    codeTimer.startTimer();
    
    vector<CrimeData> myData = FileController :: readCrimeDataToVector("/Users/nuff6998/Documents/SwiftCode/MegaProject/MegaProject/Data/crime.csv");
    
    for (int i = 200; i < 215; i++)
    {
        cout << i << " is " << myData[i] << endl;
    }
    codeTimer.stopTimer();
    codeTimer.displayInformation();
}
