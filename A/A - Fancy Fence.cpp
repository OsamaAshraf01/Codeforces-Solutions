// Link To Problem: https://codeforces.com/contest/270/problem/A

#include <iostream>
#define FOR(i, n) for(int i=0 ; i<n ; i++)
using namespace std;
 
bool isInt(double dN)
{
	int iN = dN;
	if(dN == iN)
		return true;
	return false;
}
 
int main() {
	int t, a;
	cin>>t;
	FOR(i, t)
	{
		cin>>a;
		isInt( 360.0/(180.0-a) ) ? cout<<"YES\n" : cout<<"NO\n";
	}
 
    return 0;
}