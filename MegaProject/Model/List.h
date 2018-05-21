//
//  List.h
//  MegaProject
//
//  Created by Uffens, Noah on 2/8/18.
//  Copyright © 2018 Uffens, Noah. All rights reserved.
//

#ifndef List_h
#define List_h
#include <assert.h>
#include "/Users/nuff6998/Documents/SwiftCode/MegaProject/MegaProject/Model/LinearNode.h"

template <class Type>
class List {
protected:
    int size;
    
public:
    virtual void add(Type item) = 0;
    virtual void addAtIndex(int index, Type item) = 0;
    virtual Type remove(int index) = 0;
    virtual Type getFromIndex(int index) = 0;
    
    virtual int getSize() const = 0;
    virtual LinearNode<Type> * getFront() = 0;
    virtual LinearNode<Type> * getEnd() = 0;
};

#endif /* List_h */
