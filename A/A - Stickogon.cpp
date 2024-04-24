// Link To Problem: https://codeforces.com/contest/1957/problem/A

#include <bits/stdc++.h>
using namespace std;

int main(){
    int t, n, a, polygons;
    cin >> t;
    while(t--){
        cin>>n; polygons=0;
        map<int, int> numbers_freq;

        for(int i=0 ; i<n ; i++){
            cin>>a;
            numbers_freq[a]++;
        }

        for(auto& p : numbers_freq)
            if(p.second > 2)
                polygons += p.second / 3;

        cout<<polygons<<'\n';
    }
    return 0;
}
