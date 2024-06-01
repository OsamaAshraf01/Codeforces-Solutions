// Link To Problem: https://codeforces.com/contest/1976/problem/A

#include <bits/stdc++.h>
using namespace std;

int lettersStart = 'a';
int lettersEnd = 'z';

int digitsStart = '0';
int digitsEnd = '9';

bool isStrong(const string& x){
    for(int i=1 ; i<x.size() ; i++){
        if(x[i] - x[i-1] < 0)
            return false;
    }

    return true;
}

int main() {
    int t, n;   string password;
    cin>>t;

    while(t--){
        cin >> n >> password;

        cout << (isStrong(password) ? "YES\n" : "NO\n");
    }
    return 0;
}
