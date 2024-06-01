// Link To Problem: https://codeforces.com/contest/47/problem/B

#include <bits/stdc++.h>
#define lp(n) for(int i=0 ; i<n ; i++)
#define rep(i, n) for(int i=0 ; i<n ; i++)
using namespace std;

map<char, bool> visited, recStack;
map<char, vector<char>> edges;


bool isCyclicUtil(char node)
{
    if (!visited[node]) {
        // Mark the current node as visited
        // and part of recursion stack
        visited[node] = true;
        recStack[node] = true;

        // Recur for all the vertices adjacent to this
        // vertex
        vector<char>::iterator i;
        for (i = edges[node].begin(); i != edges[node].end(); ++i) {
            if ((!visited[*i] && isCyclicUtil(*i)) || recStack[*i])
                return true;
        }
    }

    // Remove the vertex from recursion stack
    recStack[node] = false;
    return false;
}

bool isCyclic()
{
    // Call the recursive helper function
    // to detect cycle in different DFS trees
    for (int i = 'A'; i <= 'C'; i++)
        if (!visited[(char)i] && isCyclicUtil((char)i))
            return true;

    return false;
}

int main() {
    string relation;

    // Get Edges
    lp(3){
        cin >> relation;
        if(relation[1] == '>')
            edges[relation[2]].push_back(relation[0]);
        else
            edges[relation[0]].push_back(relation[2]);
    }

    // Check for Cycle
    if(isCyclic())
        cout << "Impossible";
    else{
        map<int, char> freq;
        for(char i = 'A' ; i<='C' ; i++)
            freq[3 - (int)edges[i].size()] = i;

        for(auto& edge : freq) cout << edge.second;
    }

    return 0;
}
