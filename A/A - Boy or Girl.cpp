// Link To Problem: https://codeforces.com/contest/236/problem/A

#include <iostream>
#include <bits/stdc++.h>

using namespace std;

set<char> characters;

int main() {
    string s;
    cin>>s;
    for(char c : s)characters.insert(c);

    cout<<(characters.size() % 2 == 0 ? "CHAT WITH HER!" : "IGNORE HIM!");
    return 0;
}
