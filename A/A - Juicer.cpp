// Link To Problem: https://codeforces.com/contest/709/problem/A

#include <iostream>
#include <vector>

using namespace std;

vector<int> oranges;

int main()
{
    int n, b, d, a, squeezed_juice=0, emptitions=0;
    cin>>n>>b>>d;
    for(int i=0 ; i<n ; i++){
        cin>>a;
        oranges.push_back(a);
    }
    for(int i=0 ; i<n ; i++){
        if(oranges[i] <= b){
            squeezed_juice += oranges[i];
            if(squeezed_juice > d){
                emptitions++;
                squeezed_juice=0;
            }
        }
    }
    cout<<emptitions<<endl;
    return 0;
}