// Link To Problem: https://codeforces.com/contest/680/problem/B

#include <bits/stdc++.h>
#define lp(n) for(int i=0 ; i<n ; i++)
using namespace std;





int main() {
    int n, a, dist, arrested=0;
    cin >> n >> a;   a--;
    vector<int> criminals(n); vector<bool> visited(n, false);
    for(int& x : criminals) cin>>x;


   for(int i=0 ; i<n ; i++){
       if(!visited[i]) {
           dist = abs(a - i);
           if (a + dist < n) {
               arrested += (criminals[i] && criminals[a + dist] ? 2 : 0);
               if((i == a+dist) && criminals[i])
                   arrested--;
               visited[a + dist] = true;
           } else
               arrested += criminals[i];

           visited[i] = true;
       }
   }

   cout << arrested;

    return 0;
}
