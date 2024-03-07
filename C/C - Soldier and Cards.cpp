// Link To Problem: https://codeforces.com/contest/546/problem/C

#include <iostream>
#include <bits/stdc++.h>
#define lp(n) for(int i=0 ; i<n ; i++)
#define rep(i, n) for(int i=0 ; i<n ; i++)
#define all(v) (v.begin(), v.end())
#define sz(v) (int)(v.size())

using namespace std;
typedef vector<int> vi;
typedef deque<int> di;

void fight(deque<int>& soldier1, deque<int>& soldier2){
    int top1 = soldier1.front(), top2 = soldier2.front();
    if(top1 > top2){
        soldier1.push_back(top2);
        soldier1.push_back(top1);
    }
    else{
        soldier2.push_back(top1);
        soldier2.push_back(top2);
    }
    soldier1.pop_front();
    soldier2.pop_front();
}

vector< pair<di, di> > nodes;
deque<int> soldier1, soldier2;
int n, k1, k2, x, steps=0, winner;   bool cycle = false;
map<pair<di, di>, bool> visited;

void dfs(pair<di, di> node){
    if(node.first.empty() || node.second.empty()) {
        winner = node.first.empty() ? 2 : 1;
        return;
    }
    if(visited[node]){
        cycle = true;
        return;
    }
    steps++;
    visited[node] = true;
    fight(node.first, node.second);
    dfs(node);
}

int main() {
    cin>>n;
    cin>>k1;
    lp(k1) {
        cin >> x;
        soldier1.push_back(x);
    }
    cin>>k2;
    lp(k2) {
        cin >> x;
        soldier2.push_back(x);
    }

    dfs(make_pair(soldier1, soldier2));

    cycle ? cout<<-1 : cout<<steps<<" "<<winner;

    return 0;
}
