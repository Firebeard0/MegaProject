//
//  GraphTester.hpp
//  MegaProject
//
//  Created by Uffens, Noah on 5/31/18.
//  Copyright © 2018 Uffens, Noah. All rights reserved.
//

#ifndef GraphTester_hpp
#define GraphTester_hpp

#include <iostream>
#include "/Users/nuff6998/Documents/SwiftCode/MegaProject/MegaProject/Model/Graph.h"

class GraphTester
{
private:
    Graph<string> puzzle;
    void setup();
    void compareTraversals();
    void findCheapestTraversals();
public:
    void testGraphs();
};

#endif /* GraphTester_hpp */
