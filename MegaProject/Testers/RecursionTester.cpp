//
//  RecursionTester.cpp
//  MegaProject
//
//  Created by Uffens, Noah on 3/5/18.
//  Copyright © 2018 Uffens, Noah. All rights reserved.
//

#include "RecursionTester.hpp"

int RecursionTester :: fib(int number)
{
    if (number == 0 || number == 1)
    {
        return 1;
    }
    else
    {
        return fib (number - 1) + fib (number - 2);
    }
}

string RecursionTester :: mystery(string word)
{
    if (word.length() == 1)
    {
        return word;
    }
    else
        
    {
        return word + mystery(word.substr(0, word.length() - 1));
    }
}

void RecursionTester:: testRecursionNumbers()
{
    Timer recursionTimer;
    cout << "testing fibonacci with 10" << endl;
    recursionTimer.startTimer();
    cout << fib(10) << endl;
    recursionTimer.stopTimer();
    recursionTimer.displayInformation();
}


vpod RecursionTester :: testRecursionString()
{
    
}
