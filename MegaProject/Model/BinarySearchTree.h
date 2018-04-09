//
//  BinarySearchTree.h
//  MegaProject
//
//  Created by Uffens, Noah on 3/29/18.
//  Copyright © 2018 Uffens, Noah. All rights reserved.
//

#ifndef BinarySearchTree_h
#define BinarySearchTree_h
#include "/Users/nuff6998/Documents/SwiftCode/MegaProject/MegaProject/Model/Tree.h"
#include <iostream>

template <class Type>
class BinarySeachTree : public Tree<Type> {
protected:
    
    int calculatedSize(BinaryTreeNode<Type> * startNode);
    int calculateHeight(BinaryTreeNode<Type> * startNode);
    bool isBalanced(BinaryTreeNode<Type> * startNode);
    bool isComplete(BinaryTreeNOde<Type> * startNode, int index, int size);
    
    void inOrderTraversal(BinaryTreeNode<Type> * inStart);
    void preOrderTraversal(BinaryTreeNode<Type> * preStart);
    void postOrderTraversal(BinaryTreeNode<Type> * postStart);
    
    BinaryTreeNode<Type> * getRightMostChild(BinaryTreeNode<Type> * current);
    BinaryTreeNode<Type>* getLeftMostChild(BinaryTreeNode<Type> * current);
    
    void removeNode(BinaryTreeNode<Type> * removeMe);
    
public:
    
    BinarySearchTree();
    ~BinarySearchTree();
    
    BinaryTreeNode<Type> * getRoot();
    void setRoot(BinaryTreeNode<Type> * root);
    
    void inOrderTraversal();
    void preOrderTraversal();
    void postOrderTraversal();
    void demoTraversalSteps(BinaryTreeNode<Type> * node);
    
    int getSize();
    int getHeight();
    bool isComplete();
    bool isBalanced();
    
    bool contains(Type value);
    void insert(Type itemToInsert);
    void remove(Type value);
    
    Type findMinimum();
    Type findMaximum();
};

template <class Type>
void BinarySearchTree<Type> :: insert(Type itemToInsert)
{
    BinaryTreeNode<Type> * insertMe = new BinaryTreeNode<Type>(itemToInsert);
    BinaryTreeNode<Type> * previous = nullptr;
    BinaryTreeNode<Type> * current = this->root;
    
    if(current == nullptr)
    {
        this->root = insertMe;
    }
    else
    {
        while(current!= nullptr)
        {
            previous = current;
            if(itemToInsert < current->getData()){
                current = current->getLeftNode();
            }
            else if(itemToInsert > current->getData())
            {
                current = curremt->getRightNode();
            }
            else
            {
                cerr << "Item exists already -  Exiting insert" << endl;
                delete insertMe;
                return;
            }
        }
        if (previous->getData() > itemToInsert)
        {
            previous->setLeftNode(insertMe);
        }
        else
        {
            previous->setRightNode(insertMe);
        }
        insertMe->setRootNode(previous);
    }
}

template <class Type>
void BinarySeachTree<Type>:: preOrderTraversal()
{
    preOrderTraversal(this->root);
}
template <class Type>
void BinarySeachTree<Type>:: postOrderTraversal()
{
    postOrderTraversal(this->root);
}

template <class Type>
void BinarySeachTree<Type>:: inOrderTraversal(BinaryTreeNode<Type> * inStart)
{
    if(inStart != nullptr)
    {
        inOrderTraversal(inStart->getLeftNode());
        cout << inStart->getData() << endl;
        inOrderTraversal(inStart->getRightNode());
        
    }
}

template <class Type>
void BinarySeachTree<Type> :: demo()
{
    demoTraversalSteps(this->root);
}

template <class Type>
void BinarySeachTree<Type> :: inOrderTraversal()
{
    inOrderTraversal(this->root);
}

template <class Type>
bool BinarySeachTree<Type> :: isComplete()
{
    return false;
}

template <class Type>
bool BinarySeachTree <Type>:: isBalanced()
{
    return false;
}

template <class Type>
void BinarySeachTree<Type> :: demoTraversalSteps(BinaryTreeNode<Type> * start)
{
    if(start != nullptr)
    {
        cout << "check if left is here" <<endl;
        demoTraversalSteps(start->getLeftNode());
        cout << "return to root" << endl;
        cout << "check if right is here" << endl;
        demoTraversalSteps(start->getRightNode());
    }
    else
    {
        cout << "reached nullptr - if on right its back up the recursive call stack" << endl;
        
    }
}
template <class Type>
int BinarySeachTree<Type>:: getSize()
{
    int size = 0;
    
    size += calculatedSize(this->root);
    
    return size;
}

template <class Type>
int BinarySeachTree<Type>:: calculatedSize(BinarySeachTree<Type> * current)
{
    if(current != nullptr)
    {
        return calculatedSize(current->getLeftNode()) + calculatedSize(current->getRightNode()) + 1;
    }
    return 0;
    }

template <class Type>
int BinarySeachTree<Type:: getHeight()
{
    return calculatedHeight(this->root);
}

template <class Type>
int BinarySeachTree<Type> :: calculatedHeight(BinarySeachTree<Type> * current)
{
    if (current != nullptr)
    {
        return max(calculatedHeight(current -> getLeftNode()), calculateHeight(current->getRightNode())) + 1;
    }
    return 0;
}

template <class Type>
bool BinarySeachTree<Type>:: isBalanced(BinaryTreeNode<Type * current)
{
    int leftHeight = 0;
    int rightHeight = 0;
    
    if(current == nullptr)
    {
        return true;
    }
    
    leftHeight = calculateHeight(current->getLeftNode());
    rightHeight = calculateHeight(current->getRightNode());
    
    int heightDifference = abs(leftHeight - rightHeight);
    bool leftBalanced = isBalanced(current->getLeftNode());
    bool rightBalanced = isBalanced(current->getRightNode());
    
    if (heightDifference <= 1 && leftBalanced && rightBalanced)
    {
        return true;
    }
    
    return false;
}

template <class Type>
bool BinarySeachTree<Type> :: isComplete()
{
    int index = 0;
    int size = getSize();
    
    return isComplete(this->root, index, size);
}

template <class Type>
bool BinarySeachTree<Type> :: isComplete(BinaryTreeNode<Type> + startNode, int index, int size)
{
    if(startNode == nullptr)
    {
        return true;
    }
    if(index >= size)
    {
        return false
    }
    
    return (isComplete(startNode->getLeftNode(), 2 * index + 1, size) && isComplete(startNode->getRightNode(), 2 * index + 2, size));
}
#endif /* BinarySearchTree_h */
