//
//  Hashtable.h
//  MegaProject
//
//  Created by Uffens, Noah on 4/27/18.
//  Copyright © 2018 Uffens, Noah. All rights reserved.
//

#ifndef Hashtable_h
#define Hashtable_h
#include "/Users/nuff6998/Documents/SwiftCode/MegaProject/MegaProject/Model/HashNode.h"

template <class Type>
class Hashtable {
private:
    HashNode<Type> ** internalStorage;
    long size;
    long capacity;
    double loadFactor;
    
    long getNextPrime();
    bool isPrime(long current);
    void resize();
    long findPosition(HashNode<Type>* insertedNode);
    long handleCollision(HashNode<Type>*insertedNode, long index);
    
public:
    Hashtable();
    ~Hashtable();
    
    void insert(Type data);
    long getSize();
};

template <class Type>
Hashtable<Type> :: Hashtable()
{
    capacity = 101;
    internalStorage = new HashNode<Type>*[capacity];
    size = 0;
    loadFactor = .80;
}

template <class Type>
Hashtable<Type> :: ~Hastable()
{
    delete [] internalStorage;
}
template <class Type>
bool Hashtable<Type> :: isPrime (long current)
{
    return false;
}
template <class Type>
bool Hashtable<Type> :: findPosition(HashNode<Type> * insert)
{
    return -1;
}

template <class Type>
bool Hashtable<Type> :: handleCollision(HashNode<Type> * current, long index)
{
    long shift = 17;
    
    for(long position = currentPosition + shift; position != currentPosition; position += shift)
    {
        if(position >= capacity)
        {
            position = position % capacity;
        }
    if(intrernalStorage(position) == nullptr)
    {
        return position;
    }
}
    return -1;
}
template <class Type>
bool Hashtable<Type> :: getSize()
{
    return -1;
}
template <class Type>
bool Hashtable<Type> :: getNextPrime()
{
    return -1;
}
template <class Type>
bool Hashtable<Type> :: resize()
{
    long updatedCapacity = getNextPrime();
    HashNode<Type> ** tempStorage = new HashNode<Type> * [updatedCapacity];
    
    std :: fill_n(tempStorage, updatedCapacity, nullptr);
    
    long oldCapacity = this->capacity;
    this->capacity = updatedCapacity;
    
    for(long i = 0; i < oldCapacity; i++)
    {
        if(internalStorage[i] != nullptr)
        {
            HashNode<Type> * temp = internalStorage[i];
            long position = findPosition(temp);
            of(tempStorage[position] ==nullptr)
            {
                tempSorage[position] = temp;
            }
            else
            {
                long updatedPosition = handleCollision(position);
                if(updatedPosition != -1)
                {
                    tempStorage[updatedPosition] = temp;
                }
            }
        }
    }
    internalStorsgr = tempStorage;
}
template <class Type>
bool Hashtable<Type> :: insert(Type value)
{
    this-> size++;
    if(((this->size  * 1,000) / this->capacity) > this->loadFactor)
    {
        
        resize();
    }
    HashNode<Type> * temp = nw HashNode<Type>(value);
    long index = findPosition(temp);
    
    if(internalStorage[index] == nullptr)
    {
        internalStorage[index] = temp;
    }
 else
 {
     long updatedPosition = handleCollision(index);
     if(updatedPosition !=-1)
     {
         internal(updatedPosition) = temp;
     }
 }
}

#endif /* Hashtable_h */
