//
//  Graph.hpp
//  Graph
//
//  Created by Tolman, Caiden on 3/8/19.
//  Copyright © 2019 Caiden.Tolman. All rights reserved.
//

#ifndef Graph_hpp
#define Graph_hpp

#include <set>
#include <queue>
#include <assert.h>

using namespace std;
template <class Type>
class Graph
{
private:
    static const int Maximum = 50;
    bool adjacencyMatrix [MAXIMUM][MAXIMUM];
    int weightCostMatrix [MAXIMUM][MAXUMUM];
    Type graphData[MAXIMUM];
    int vertexCount;
    void depthFirstTraversal(Graph<Type> & graph, int vertex, bool markedVertices[]);
public:
    Graph();
    void addVertex(const Type& value);
    void addEdge(int source, int target);
    void add; edgeCost;
};

#endif /* Graph_hpp */
