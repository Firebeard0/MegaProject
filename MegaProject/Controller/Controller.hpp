//
//  Controller.hpp
//  MegaProject
//
//  Created by Uffens, Noah on 1/31/18.
//  Copyright © 2018 Uffens, Noah. All rights reserved.
//

#ifndef Controller_hpp
#define Controller_hpp

#include <iostream>
#include <vector>
#include "Tools/Timer.hpp"
#include "FileController.hpp"
#include "/Users/nuff6998/Documents/SwiftCode/MegaProject/MegaProject/Model/Array.hpp"
#include "/Users/nuff6998/Documents/SwiftCode/MegaProject/MegaProject/Testers/ArrayTester.hpp"
#include "/Users/nuff6998/Documents/SwiftCode/MegaProject/MegaProject/Testers/RecursionTester.hpp"

class Controller
{
public:
 void start();
private:
    void findMinAndMax();
    void testArray();
    void homeworkArray();
    void howToVector();
    void consoleOutput();
    void testArrayUse();
    void testAdvancedArray();
};

#endif /* Controller_hpp */
