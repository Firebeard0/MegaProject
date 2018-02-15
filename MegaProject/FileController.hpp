//
//  FileController.hpp
//  MegaProject
//
//  Created by Uffens, Noah on 1/31/18.
//  Copyright © 2018 Uffens, Noah. All rights reserved.
//

#ifndef FileController_hpp
#define FileController_hpp
#include "CrimeData.hpp"
#include "LinkedList.h"
#include <string>
#include <fstream>
#include <iostream>
#include <vector>
#include <sstream>

using namespace std;

class FileController
{
public:
    static vector<CrimeData> readCrimeDataToVector(string filename);
    static LinkedList<CrimeData> readDataToList(string filename);
};

#endif /* FileController_hpp */
