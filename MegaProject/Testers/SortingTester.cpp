//
//  SortingTester.cpp
//  MegaProject
//
//  Created by Uffens, Noah on 3/15/18.
//  Copyright © 2018 Uffens, Noah. All rights reserved.
//

#include "SortingTester.hpp"
void SortingTester :: quickSort(vector<CrimeData> & data, int low, int high)
{
    if(low < high)
    {
        int partitionPoint = partition(data, low, high);
        quickSort(data, low, participationPoint - 1);
        quickSort(data, partitionPoint + 1, high);
    }
    
}

int SortingTester :: partition(vector<CrimeData> & data, int low, int high)
{
    CrimeData pivotValue = data[high];
    int smallest = low - 1;
    for (int i = low; i < high - 1; i++)
    {
        if (data[i] < pivotValue)
        {
            smallest++;
            swap(data, smallest, i);
        }
    }
    swap(data, smallest + 1, high);
    return smallest + 1;
}

void SortingTester :: swap(vector<CrimeData> & data, int low, int high)
{
    CrimeData temp = info[small];
    info[small] = info[large];
    info[large] = temp;
    swapCount++;
}

void SortingTester :: testSorts()
{
    
}
