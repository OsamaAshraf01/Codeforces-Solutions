// Link To Problem: https://codeforces.com/contest/727/problem/A

#include <iostream>
#include <bits/stdc++.h>
#include <vector>

//TODO: Try not to solve it using DFS

using namespace std;

int a, b;

int main() {
    int cnt=0;
    cin>>a>>b;
    deque<int> nodes;
    while(b >=a){
        cnt ++ ;
        nodes.push_front(b);

        if(b % 2 == 0)
            b /= 2;
        else if((b-1) % 10 != 0)
            break;
        else
            b = (b - 1) / 10;
    }

    if(nodes[0] == a){
        cout<<"YES\n"<<cnt<<"\n";
        for(int node : nodes)
            cout<<node<<" ";
    }
    else
        cout<<"NO\n";

    return 0;
}
