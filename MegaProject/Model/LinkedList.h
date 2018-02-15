//
//  LinkedList.h
//  MegaProject
//
//  Created by Uffens, Noah on 2/14/18.
//  Copyright © 2018 Uffens, Noah. All rights reserved.
//

#ifndef LinkedList_h
#define LinkedList_h

LinkedList<CrimeData> FileController :: readDataToList(string filename)
{
    LinkedList<CrimeData> crimes;
    
    string currentCSVLine;
    int rowCount = 0;
    
    ifstream dataFile(fileName);
    
    if (dataFile.is_open())
    {
        while (!dataFile.eof())
        {
            getline(dataFile, currentCSVLine, '/r');
            if (rowCount != 0;)
                {
                   if (currentCSVLine.length() != 0)
                   {
                       CrimeData row(currentCSVLine);
                       crimes.add(row);
                   }
                }
            rowCount++;
        }
        dataFile.close();
}
    else
    {
        cerr << "NO FILE" << endl;
    }
    
    return crimes;
}



#endif /* LinkedList_h */
