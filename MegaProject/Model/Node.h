//
//  Node.h
//  MegaProject
//
//  Created by Uffens, Noah on 2/5/18.
//  Copyright © 2018 Uffens, Noah. All rights reserved.
//

#ifndef Node_h
#define Node_h

template <class Type>
class Node
{
public:
    Node();
    Node(Type data);
    void setData(Type Data);
    Type getData();
};

template <class Type>
Node<Type> :: Node(Type data)
{
    this -> data = data
}
template <class Type>
Type Node<Type> :: getData
{
    return data;
}

#endif /* Node_h */
