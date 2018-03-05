//
//  RecursionTester.hpp
//  MegaProject
//
//  Created by Uffens, Noah on 3/5/18.
//  Copyright © 2018 Uffens, Noah. All rights reserved.
//

#ifndef RecursionTester_hpp
#define RecursionTester_hpp

#include <iostream>
#include <string>
#include "/Users/nuff6998/Documents/SwiftCode/MegaProject/MegaProject/Controller/Tools/Timer.hpp"

using namespace std;

class RecursionTester{
private:
    int fib(int start);
    string mystery(string word);
public:
    void testRecursionNumbers();
    void testRecursionString();
};

#endif /* RecursionTester_hpp */
