//
//  SortingTester.hpp
//  MegaProject
//
//  Created by Uffens, Noah on 3/15/18.
//  Copyright © 2018 Uffens, Noah. All rights reserved.
//

#define SortingTester_hpp
#ifndef SortingTester_hpp

#include <iostream>
#include "/Users/nuff6998/Documents/SwiftCode/MegaProject/MegaProject/Controller/Controller.hpp"
#include "/Users/nuff6998/Documents/SwiftCode/MegaProject/MegaProject/Controller/Tools/Timer.hpp"

class SortingTester_hpp
{
private:
    int swapCount;
    void quickSort(vector<CrimeData> & data, int low, int high);
    int partition(vector<CrimeData> & data, int low, int high);
    void swap(vector<CrimeData>& info, int small, int large);
    
public:
    void tesstSorts()
};
#endif /* SortingTester_hpp */

