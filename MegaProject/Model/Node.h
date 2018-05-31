//
//  Node.h
//  MegaProject
//
//  Created by Uffens, Noah on 2/5/18.
//  Copyright © 2018 Uffens, Noah. All rights reserved.
//

#ifndef Node_h
#define Node_h

#include <stdio.h>

template <class Type>
class Node
{
protected:
    Type data;
public:
    Node();
    Node(Type data);
    void setData(Type Data);
    Type getData();
};

template <class Type>
Node<Type> :: Node()
{
    
}

template <class Type>
Node<Type> :: Node(Type data)
{
    this->data = data;
}

template <class Type>
void Node<Type> :: setData(Type data)
{
    this->data = data;
}
template <class Type>
Type Node<Type> :: getData()
{
    return data;
}

#endif /* Node_h */
