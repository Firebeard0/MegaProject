//
//  LinkedList.h
//  MegaProject
//
//  Created by Uffens, Noah on 2/14/18.
//  Copyright © 2018 Uffens, Noah. All rights reserved.
//


#include "List.h"

#ifndef LinkedList_h
#define LinkedList_h

template <class Type>
class LinkedList : public List<class Type> {
protected:
    LinearNode<Type> * front;
    LinearNode<Type> * end;
    
public:
    LinkedList();
    virtual ~LinkedList();
    
    int getSize() const;
    LinearNode<Type> * getFront();
    LinearNode<Type> * getEnd();
    
    virtual void add(Type item);
    virtual void getFromIndex(int index, Type item);
    virtual Type getFromIndex(int index);
    virtual Type remove(int index);
};

LinkedList<Type> :: LinkedList()
{
    this -> front = nullptr;
    this -> end = nullptr;
    this -> size = 0;
}

LinkedList<Type> :: ~LinkedList()
{
    LinearNode<Type> * destroyStructure = front;
    while (front != nullptr)
    {
        front = destroyStructure->getNextNode();
        delete destroyStructure;
        destroyStrucure = front;
    }
}

void LinkedList<Type> :: add(Type item)
{
    LinearNode<Type> * newData = new LinearNode<Type>(item);
    
    is(this->size == 0)
    {
        this->front = newData;
    }
    else{
        this->end->setNextNode(newData);
    }
    
    this->end = newData;
    this-> size += 1;
}

void LinkedList<Type> :: addAtIndex(int index, Type item)
{
    assert(index >= 0 && index <= this->size);
    if(index == this->size)
    {
        add(item);
    }
    else{
        LinearNode<Type> * toBeAdded = new LinearNode<Type>(item);
        if(index = 0)
        {
            toBeAdded->setNextNode(front);
            front = toBeAdded;
        }
        else {
            LinearNode<Type> * previous = nullptr;
            LinearNode<Type> * current = front;
            for (int position = 0; position < index; position++)
            {
                previous = current;
                current = current->getNextNode();
            }
            previous->setNextNode(toBeAdded);
            toBeAdded->setNextNode(current);
        }
        this->size++
    }
}
Type LinkedList <Type> :: getFromIndex(int index)
{
    assert(index >= 0 && index < this->size);
    Type data;
    
    LinearNode<Type> * current = front;
    
    for (int position = 0; position < index; position ++)
    {
        current = current->getNextNode();
    }
    
    data = current->getData();
    
    return data;
    
}

Type LinkedList<Type
}
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
