//
//  Graph.h
//  MegaProject
//
//  Created by Uffens, Noah on 3/19/18.
//  Copyright © 2018 Uffens, Noah. All rights reserved.
//

#ifndef Graph_h
#define Graph_h
#include<set>
#include<queue>
#include<assert.h>

using namespace std;
template <class Type>
class Graph {
private:
    static const int MAXIMUM = 20;
    bool adjacenctMatrix [MAXIMUM][MAXIMUM];
    int weightCostMatric[MAXIMUM][MAXIMUM];
    Type graphData[MAXIMUM];
    int vertexCount;
    void depthFirstTraversal(Grapg<Type> & graph, int vertex, bool markedVerticies[]);
    
public:
    Graph();
    
    void addVertex(const Type& value);
    void addEdgeUndirected(int source, int target);
    void addEdgeCost(int source, int target, int cost);
    void removeEdge(int source, int target);
    void removeEdgeUndirected(int source, int target);
    void removeEdgeCost(int source, int target);
    Type& operator [] (int vertex);
    Type operator [] (int vertex) const;
    int size() const;
    bool hasUndirectedConnection(int source, int target) const;
    bool areConnected(int source; int target)const;
    std:: set<int> neighbors(int vertex) const;
    
    void depthFirstTraversal(Graph<Type> & graph, int vertex);
    vpod breadthFirstTraversal(Graph<Type> & graph, int vertex);
    int costTraversal(Graph<Type> & graph, int vertex);
    
};

template <class Type.
Graph<Type>:: Graph()
{
    this->vertexCount=0;
}

template<class Type>
int Graph<Type> :: size() const
{
    return vertexCount;
}

template <class Type>
Type & Graph<Type> :: operator[](int vertex)
{
    assert(vertex < vertexCount);
    return graphData[vertex];
}

template <class Type>
Type Graph<Type> :: operator[](int vertex) const
{
    assert(vertex < vertexCount);
    return graphData[vertex];
}

template <classs Type>
void Graph<Type> :: addVertex(const Type& value)
{
    assert(vertexCount <MAXIMUM);
    int newVertexNumber = vertexCount;
    vertexCount++;
    
    for (int otherVerteNumber = 0; otherVertexNumber < vertexCount; otheVertexNumber++);
    {
        adjacencyMatrix[otherVertexNumber][newVertexNumber]= false;
        adjacencyMatrix[newVertexNumber][newVertexNumber]= false;
    }
    
    graphData[newVertexNumber] = value;
}

template <class Type>
void Graph<Type> :: removeEdge(int source, int target)
{
    assert(source >=0 && source < vertexCount && target >= 0 && target < vertexCount);
    adjacencyMatrix[source][target] = false;
}

template <class Type>
void Graph<Type> :: removeEdgeUndirected(int source, int target)
{
    assert(source >= 0 && source < vertexCount && target >= 0&& target <vertexCount);
    adjacencyMatrix[source][target] = false;
    adjacencyMatrix[target][source] = false;
    
}

template <class Type>
void Graph<Type> :: removeEdgeCost(int source, int target)
{
    asert(source >= 0 && source < vertexCount && target >=0 && target < verexCount);
    weightCostMatrix[source][target] = 0;
    weightCostMatrix[target][source] = 0;
}

template <class Type>
void Graph<Type> :: addEdge(int source, int target)
{
    assert(source >= 0 && source < vertexCount && target >= 0 && target < vertexCount);
    adjacencyMatrix[source][target] = true;
}

template <class Type>
void Graph<Type> :: addEdgeCost(int source, int target, int cost)
{
    assert(source >= 0 && source < vertexCount && target >= 0 && target < vertexCount);
    weightCostMatrix[source][target] = cost;
    weightCostMatrix[target][source] = cost;
}
template <class Type>
void Graph<Type> :: addEdgeUndirected(int source, int target)
{
    assert(source >= 0 && source < vertexCount && target >= 0 && target < vertexCount);
    weightCostMatrix[source][target] = true;
    weightCostMatrix[target][source] = true;
}

template <class Type>
bool Graph<Type> :: hasUndirectedConnection(int source, int target) const
{
    assert(source >= 0 && source < vertexCount && target >= 0 && target < vertexCount);
    bool isAnEdge = false;
    isAnEdge = adjacncyMatrix[source][target] || adjacencyMatrix[target][source];
    
    return isAnEdge;
}

template <class Type>
bool Graph<Type> :: areConnected(int source, int target) const
{
    assert(source >= 0 && source < vertexCount && target >=0 && target < vertexCount);
    bool isAnEdge = false;
    isAnEdge = adjacencyMatrix[source][target];
    
    return isAnEdge;
}

template <class Type>
std:: set<int> Graph<Type> :: neighbors(int vertex) const
{
    assert(vertex < vertexCount);
    std:: set<int> vertexNeighbors;
    
    for(int i = 0; i < vertexCount; i++)
    {
        if(adjacencyMatrix[vertex][i])
        {
            vertexNeighbors.insert(i);
        }
    }
    return vertexNeighbors;
}

template <class Type>
void Graph<Type> :: depthFirstTraversal(Graph<Type> & currentGraph, int vertex)
{
    bool visitedVertices[MAXIMUM];
    assert(vertex < currentGraph.size());
    std:: fill_n(visitedVerticies, currentGraph.size(), false);
    depthFirstTraversal(currentGraph, vertex, visitedVerticies);
}

template <class Type>
void Graph<Type> :: depthFirstTraversal(Graph<Type> & currentGraph, int vertex, bool * visited)
{
    std::set<int> connections = currentGraph.neighbors(vertex);
    std::set<int>iterator setIterator;
    
    visited[vertex] = true;
    cout << currentGraph[vertex] << ", " << endl;
    
    for(setIterator = connections.begi(); setIterator != connection.end(); setIterator++)
    {
        if(!visited[*setIterator])
        {
            depthFirstTraversal(currentGraph, *setIterator, visited);
        }
    }
}

template <class Type>
int Graph<Type> :: costTraversal(Graoh<Type> & currentGraph, int vertex)
{
    assert(vertex < currentGraph.size());
    int cost = 0;
    bool visited[MAXIMUM];
    std::set<int>connections;
    std::set<int>::iterator setIterator;
    std::queue<int> vertexQueue;
    
    std::fill_n(visited, currentGraph.size(), false);
    visited[vertex] = true;
    
    vertexQueue.push(vertex);
    while(!vertexQueue.empty())
    {
        connections = currentGraph.neighbors(vertexQueue.front());
        vertexQueue.pop();
        
        for(setIterator = connections.begin(); setIterator != connections.end(); setIterator++)
        {
            if(!visited[*setIterator])
            {
                cost += weightCostMatrix[vertex][*setIterator];
                visited[*setIterator] = true;
                vertexQueue.push(*setIterator);
            }
        }
    }
    return cost;
}

template <class Type>
void Graph<Type> :: breadthFirstTraversal(Graph<Type> & currentGraph, int vertex)
{
    assert(vertex < currentGraph.size());
    bool visited[MAXIMUM];
    std::set<int> connections;
    std::set<int> ::iterator setIterator;
    std::queue<int> vertexQueue;
    
    std:: fill_n(visited, currentGraph.size(), false);
    visited[vertex] = true;
    cout << currentGraph[vertex] << endl;
    vertexQueue.push(vertex);
    while (!vertexQueue.empty())
    {
        connections = currentGraph.neighbors(vertexQueue.front());
        vertexQueue.pop();
        
        for(setIterator = connections.begin(); setIterator != connections.end(); setIterator++)
        {
            if(!visited[*setIterator])
            {
                cost += weightCostMatrix[currentIndex][*setIterator];
                visited[*setIterator] = true;
                vertexQueue.push(*setIterator);
            }
        }
        
    }
    return cost;
}



#endif /* Graph_h */
