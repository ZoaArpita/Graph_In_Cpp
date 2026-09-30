#include <iostream>
#include <vector>
using namespace std;

//using adjacency matrix

class M_Graph {
    vector<vector<int>> adj_matrix; //DM graph representation as n*n array matrix

public:
    M_Graph(int n) {
        adj_matrix = vector<vector<int>>(n,vector<int>(n,0));
    }

    //1 if edge between u and v 0 otherwise


    void M_add_edge(int u, int v) {
        adj_matrix[u][v] = 1;
        adj_matrix[v][u]=1; //undirected graphs
    }

    void M_print() {
        cout<<"Adjacency Matrix Graph"<<endl;
        int n = adj_matrix.size();
        for (int i ;i< n;i++) {
            for (int j =0;j<n;j++) {
                cout<<adj_matrix[i][j]<<" ";

            }cout<<endl;
        }
    }


};

int main() {
    M_Graph g(4);
    g.M_add_edge(0, 1);
    g.M_add_edge(0, 2);
    g.M_add_edge(1, 3);
    g.M_add_edge(2, 3);
    g.M_print();
}