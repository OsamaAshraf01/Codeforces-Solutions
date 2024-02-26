// Link To Problem: https://codeforces.com/contest/1277/problem/B

#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main(){
    int t, n, x, steps, value;  cin>>t;
    set<int, greater<>> nums;

    while(t--){
        cin>>n;
        nums.clear();

        while(n--){
            cin>>x;

            if(x % 2 == 0)
                nums.insert(x);
        }

        steps=0, value=0;

        while(!nums.empty()){

            value = *nums.begin();
            nums.erase(value);

            if(value % 4 == 0)
                nums.insert(value / 2);


            steps++;
        }

        cout<<steps<<"\n";
    }


    return 0;
}