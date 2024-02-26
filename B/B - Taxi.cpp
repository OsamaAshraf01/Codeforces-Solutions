// Link To Problem: https://codeforces.com/contest/158/problem/B

#include <iostream>
#include <bits/stdc++.h>

using namespace std;

void show(map<int, int>& mp){
    cout<<"-----\n";
    for(auto i : mp){
        cout<<'['<<i.first<<']'<<"\t"<<i.second<<"\n";
    }
    cout<<"-----\n";
}





int main(){
   int ans=0, n, group;
   map<int, int> mp;
   cin>>n;
   while(n--){
       cin>>group;
       mp[group]++;
   }
   // 4
   ans += mp[4];
   mp.erase(4);

   // 3 1
   ans += min(mp[1], mp[3]);
   mp[3] > mp[1] ? (mp[3]-=mp[1], mp.erase(1)) : (mp[1]-=mp[3], mp.erase(3));

   // 3
   ans += mp[3];
   mp.erase(3);

   // 2 2
   if(!(mp[2]%2)){
       ans+= mp[2]/2;
       mp.erase(2);
   }
   else{
       ans+=(mp[2]-1)/2;
       mp[2]=1;
   }


   // 2 1 1
   if(mp[2]) {
       ans++;
       mp[1] > 2 ? mp[1] -= 2 : mp[1] = 0;
   }

    ans += mp[1] / 4 + (mp[1] % 4 ? 1 : 0);



   cout<<ans;




    return 0;
}