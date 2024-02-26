// Link To Problem: https://codeforces.com/contest/1927/problem/B

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

map<char, int> frequency;

char get_letter(int freq){
    int a = int('a');
    for(int i=0 ; i< 26 ; i++)
        if(frequency[char(a + i)] == freq)
            return char(a + i);
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t, n, f;
    cin>>t;
    while(t--) {
        frequency.clear();
        cin>>n;
        string ans;
        for(int i = 0 ; i<n ; i++){
            cin>>f;
            char letter = get_letter(f);
            frequency[letter]++;
            ans += letter;
        }

        cout<<ans<<"\n";
    }

    return 0;
}
