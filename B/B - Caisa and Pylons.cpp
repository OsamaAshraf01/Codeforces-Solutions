// Link To Problem: https://codeforces.com/contest/463/problem/B

#include <bits/stdc++.h>
#define lp(n) for(int i=0 ; i<n ; i++)
using namespace std;



int main() {
    long long n, totalPaid=0, requiredEnergy, currentEnergy=0;
    cin>>n;
    vector<int> heights(n+1, 0);
    for(int i=1 ; i<n+1 ; i++){
        cin >> heights[i];
        requiredEnergy = heights[i] - heights[i-1];

        if(requiredEnergy > currentEnergy) { // Not Enough Energy
            totalPaid += requiredEnergy - currentEnergy;
            currentEnergy = 0;
        }
        else  // Decrease/Increase Energy Case
            currentEnergy -= requiredEnergy;
    }

    cout << totalPaid;


    return 0;
}
