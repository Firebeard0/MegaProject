//
//  Queue.h
//  MegaProject
//
//  Created by Uffens, Noah on 2/22/18.
//  Copyright © 2018 Uffens, Noah. All rights reserved.
//

#ifndef Queue_h
#define Queue_h

#include "LinkedList.h"

#include <iostream>

using namespace std;

template <class Type>
class Queue : public LinkeList<Type> {
    
public:
    Queue();
    ~Queue();
    
    void enqueue(Type data);
    Type dequeue();
    Type peek();
    void clear();
    
    void add(Type data);
    void adddAtIndex(int index, Type data);
    Type getFromIndex(int index);
    Type remove(int index);
};

template <class Type>
Queue<Type> :: Queue() : LinkedList<Type>()
{
    
}

template <class Type>
Queue<Type> :: ~Queue()
{
    for(LinearNOde<Type> * removed = this->front; removed != nullptr; removed = this->front)
    {
        this->front = removed->getNextNode();
        delete removed;
    }
}


#endif /* Queue_h */
