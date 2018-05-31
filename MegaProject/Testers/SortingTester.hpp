//
//  SortingTester.hpp
//  MegaProject
//
//  Created by Uffens, Noah on 3/15/18.
//  Copyright © 2018 Uffens, Noah. All rights reserved.
//
#ifndef SortingTester_hpp
#define SortingTester_hpp


#include <iostream>
#include "/Users/nuff6998/Documents/SwiftCode/MegaProject/MegaProject/Controller/Controller.hpp"
#include "/Users/nuff6998/Documents/SwiftCode/MegaProject/MegaProject/Controller/Tools/Timer.hpp"

class SortingTester
{
private:
    int swapCount;
    void quickSort(vector<CrimeData> & data, int low, int high);
    int partition(vector<CrimeData> & data, int low, int high);
    void swap(vector<CrimeData>& info, int small, int large);
    
public:
    void testSorts();
};
#endif /* SortingTester_hpp */

