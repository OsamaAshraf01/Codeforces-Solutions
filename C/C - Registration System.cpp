// Link To Problem: https://codeforces.com/contest/4/problem/C

#include <iostream>
#include <bits/stdc++.h>

using namespace std;

set<string> users;
map<string, int> user_count;

int main(){
    int n, before;   string name;
    cin>>n;
    for(int i=0 ; i<n ; i++){
        cin>>name;

        before = users.size();
        users.insert(name);


        if(users.size() > before) // User doesn't exist
            cout<<"OK\n";
        else {
            user_count[name]++;
            cout << name << user_count[name] << "\n";
        }
    }
    return 0;
}