//
//  Timer.cpp
//  MegaProject
//
//  Created by Uffens, Noah on 1/31/18.
//  Copyright © 2018 Uffens, Noah. All rights reserved.
//

#include "Timer.hpp"

using namespace std;

Timer :: Timer()
{
    executionTime = 0;
}

void Timer :: resetTimer()
{
    executionTime = 0;
}


void Timer :: startTimer()
{
    executionTime = clock();
}

void Timer :: stopTimer()
{
    assert(executionTime != 0);
    executionTime = clock() - executionTime;
}

void Timer:: displayInformation()
{
    cout << "the execution time is: " << executionTime << endl;
    cout << "In Human time it is " << double (executionTime)/CLOCKS_PER_SEC << " seconds" << endl;
}

long Timer:: getTimeInMicroseconds()
{
    return executionTime;
}
