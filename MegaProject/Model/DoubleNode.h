//
//  DoubleNode.h
//  MegaProject
//
//  Created by Uffens, Noah on 2/26/18.
//  Copyright © 2018 Uffens, Noah. All rights reserved.
//

#include "Node.h"

#ifndef DoubleNode_h
#define DoubleNode_h

template <Type>
class DoubleNode : public Node<Type> {
protected:
    DoubleNode<Type> * previous;
    DoubleNode<Type> * next;
    
public:
    DoubleNode();
    DoubleNode(Type data);
    DoubleNode(Type data, DoubleNode<Type> * previous, DoubleNode<Type> * next);
    
    DoubleNode<Type> * getPrevious();
    DoubleNode<Type> * getNext();
    
    void setPrevious(DoubleNode<Type> * previous);
    void setNext(DoubleNode<Type> * next);
};

template <class Type>
DoubleNode<Type> :: DoubleNode() : Node<Type>()
{
    previous = nullptr;
    next = nullptr;
}

template <class Type>
DoubleNode<Type> :: DoubleNode() : Node<Type>(data)
{
    previous = nullptr;
    next = nullptr;
}

template <class Type>
DoubleNode<Type> :: DoubleNode(Type data, DoubleNOde<Type> *previous, DoubleNode<Type> * next) : Node<Type>(data)
{
    this->previous = previous;
    this->next = next;
}

template <class Type>
void DoubleNode<Type> :: setNext(DoubleNode<Type>* next)
{
    this->next = next;
}

template <class Type>
void DoubleNode<Type> :: setPrevious(DoubleNode<Type>* previous)
{
    this->previous = previous;
}

template <class Type>
DoubleNode<Type> * DoubleNode<Type> :: getPrevious()
{
    
    return previous;
}

template <class Type>
DoubleNode<Type> * DoubleNode<Type> :: getNext()
{
    return next();
}




#endif /* DoubleNode_h */