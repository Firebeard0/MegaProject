//
//  AVLtree.h
//  MegaProject
//
//  Created by Uffens, Noah on 4/17/18.
//  Copyright © 2018 Uffens, Noah. All rights reserved.
//

#ifndef AVLtree_h
#define AVLtree_h

#include"/Users/nuff6998/Documents/SwiftCode/MegaProject/MegaProject/Model/BinarySearchTree.h"

template <class Type>
class AVLtree : public BinarySearchTree<Type> {
private:
    BinaryTreeNode<Type> * leftRotation (BinaryTreeNode<Type> * parent);
    BinaryTreeNode<Type> * rightRotation (BinaryTreeNode<Type> * parent);
    BinaryTreeNode<Type> * leftRightRotation (BinaryTreeNode<Type> * parent);
    BinaryTreeNode<Type> * rightLeftRotation (BinaryTreeNode<Type> * parent);
    
    BinaryTreeNode<Type> * balanceSubTree (BinaryTreeNode<Type> * parent);
    
    BinaryTreeNode<Type> * insertNode (BinaryTreeNode<Type> * parent, Type value);
    BinaryTreeNode<Type> * removeNode (BinaryTreeNode<Type> * parent, Type value);
    
    int heightDifference(BinaryTreeNode<Type>* parent);
public:
    AVLtree();
    
    void insert(Type itemToInsert);
    
    void remove(Type value);
};

template <class Type>
int AVLtree<Type> :: heightDifference(BinaryTreeNode<Type> * node) {
    int balance;
    int leftHeight = this->calculateHeight(node->getLeftNode());
    int rightHeight = this->calculateHeight(node->getRightNode());
    balance = leftHeight - rightHeight;
    return balance;


}

template <class Type>
BinaryTreeNode<Type> * AVLtree<Type> :: leftRotation(BinaryTreeNode<Type> * parent) {
    BinaryTreeNode<Type> * changedNode;
    changedNode = parent->getLeftNode();
    
    parent->setLeftChild(changedNode->getRightNode());
    
    changedNode->setRightChild(parent);
    
    return changedNode;
}

template <class Type>
BinaryTreeNode<Type> * AVLtree<Type> :: rightLeftRotation (BinaryTreeNode<Type> * parent)
{
    BinaryTreeNode<Type> * changedNode;
    changedNode = parent ->getRightNode();
    
    parent->setRightChild(leftRotation(changedNode));
    
    return rightRotation(parent);
}
template <class Type>
BinaryTreeNode<Type> * AVLtree<Type> :: leftRighttRotation (BinaryTreeNode<Type> * parent)
{
    BinaryTreeNode<Type> * changedNode;
    changedNode = parent ->getLeftNode();
    
    parent->setLeftChild(rightRotation(changedNode));
    
    return leftRotation(parent);
}

template <class Type>
BinaryTreeNode<Type> * AVLtree<Type> :: balanceSubTree (BinaryTreeNode<Type> * parent) {
    BinaryTreeNode<Type> * changedNode;
    changedNode= parent->getLeftNode();
    
    parent->setLeftChild(rightRotation(changedNode));
    return leftRotation(parent);
    

}

template <class Type>
BinaryTreeNode<Type> * AVLtree<Type> :: balanceSubTree (BinaryTreeNode<Type> * parent)
{
    int balanceFactor = heightDifference(parent);
    
    if(balanceFactor > 1)
    {
        if (heightDifference(parent->getLeftNode()) > 0)
        {
            parent = leftRotation(parent);
        }
        else
        {
            parent = leftRightRotation(parent);
        }
    }
    else if(balanceFactor< -1)
    {
        if(heightDifference(parent->getRightNode())> 0)
        {
            parent = rightLeftRotation(parent);
        }
        else
        {
            parent = rightRotation(parent);
        }
    }
    return parent;
}

template <class Type>
void AVLtree<Type> :: insert(Type item)
{
    insertNode(this->getRoot(), item);
}

template <class Type>
void AVLtree<Type> :: remove(Type item)
{
    removeNode(this->getRoot(), item);
}

template <class Type>
AVLtree<Type> :: AVLtree() : BinarySearchTree<Type>()
{
    this->root = nullptr;
}

template <class Type>
BinaryTreeNode<Type> * AVLtree<Type> :: removeNode(BinaryTreeNode<Type> * parent, Type inserted)
{
    if ( parent == nullptr)
    {
        return parent;
    }
    if(inserted < parent->getNodeData())
    {
        parent->setLeftChild(removeNode(parent->getLeftNode(), inserted));
    }
    else if(inserted > parent->getNodeData())
    {
        parent->setRightChild(removeNode(parent->getRightNode(), inserted));
    }
    else
    {
        BinaryTreeNode<Type> * temp;
        if(parent->getLeftNode() == nullptr & parent->getRightNode() == nullptr)
        {
            temp = parent;
            delete temp;
        }
        else if(parent->getLeftNode() == nullptr)
        {
            *parent = *parent->getRightNode();
        }
        else if(parent->getRightNode() == nullptr)
        {
            *parent = *parent->getLeftNode();
        }
        else
        {
            BinaryTreeNode<Type> * leftMost = this->getLeftMostChild(parent->getRightNode());
            parent->setNodeData(leftMost->getNodeData());
            parent->setRightChild(removeNode(parent->getRightNode(), leftMost->getNodeData()));
        }
        
    }
    
    if(parent == nullptr)
    {
        return parent;
    }
    return balancedSubTree(parent);
}


template <class Type>
BinaryTreeNode<Type> * AVLtree<Type> :: insertNode(BinaryTreeNode<Type> * parent, Type inserted)
{
    if(parent == nullptr)
    {
        parent = new BinaryTreeNode<Type>(inserted);
        return parent;
    }
    else if(inserted < parent->getNodeData())
    {
        parent->setLeftChild(insertNode(parent->getLeftNode(), inserted));
        parent = balanceSubTree(parent);
    }
    else if(inserted > parent->getNodeData())
    {
        parent->setRightChild(insertNode(parent->getRightNode(), inserted));
        parent = balanceSubTree(parent);
    }
    return parent;
}
    
                             
                             


#endif /* AVLtree_h */
