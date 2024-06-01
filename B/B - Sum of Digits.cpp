// Link To Problem: https://codeforces.com/contest/102/problem/B

#include <bits/stdc++.h>
#define lp(n) for(int i=0 ; i<n ; i++)
using namespace std;

int accumulate(int n){
    int result=0;
    while(n) {
        result += n%10;
        n /= 10;
    }
    return result;
}


int countCasting(int n){
    int count = 0;

    int acc = accumulate(n);
    while(acc != n){
        count ++;
        n = acc;
        acc = accumulate(n);
    }

    return count;
}

int main() {
    string s;
    cin >> s;

    if(s.size() > 1){
        int initialCastResult = 0;

        for(char& c : s) initialCastResult += (c - '0');

        cout << 1 + countCasting(initialCastResult);
    }
    else
        cout << 0;

    return 0;
}
