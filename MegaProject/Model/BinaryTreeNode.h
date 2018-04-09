//
//  BinaryTreeNode.h
//  MegaProject
//
//  Created by Uffens, Noah on 3/27/18.
//  Copyright © 2018 Uffens, Noah. All rights reserved.
//

#ifndef BinaryTreeNode_h
#define BinaryTreeNode_h





 template <class Type>
BinaryTreeNode<Type> :: BinaryTreeNode() : Node<Type> ()
{
    root = nullptr;
    left = nullptr;
    right = nullptr;
}

template <class Type>
BinaryTreeNode<Type> :: BinaryTreeNode(Type data) : Node<Type>(data)
{
    root = nullptr;
    left = nullptr;
    right = nullptr;
}
template <class Type>
BinaryTreeNode<Type> * BinaryTreeNode<Type> :: getRootNode()
{
    return this->root;
}
template <class Type>
BinaryTreeNode<Type> * BinaryTreeNode<Type> :: getRightNode()
{
    return this->right;
}

#endif /* BinaryTreeNode_h */
