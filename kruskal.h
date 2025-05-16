#ifndef KRUSKAL_H
#define KRUSKAL_H

#include <vector>

using namespace std;

struct Edge {
    int src, dest, weight;
};

struct Subset {
    int parent, rank;
};

int find(vector<Subset>& subsets, int i);
void unite(vector<Subset>& subsets, int x, int y);
vector<Edge> kruskal(vector<Edge>& edges, int numVertices);

#endif