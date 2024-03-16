//------------------- ΗΔɌΞ ƘɌI⟆ΗŊΔ !!--------------------//
 
#include<bits/stdc++.h>
#include <iostream>
#define int long long
 
#define vll             vector<int>
#define pll             pair<int, int>
#define ppll            pair<int, pair<int, int>>
#define vpll            vector<pll>
#define pb              emplace_back
#define ff              first
#define ss              second
 
#define sq(a)           (a*a)
#define min3(a,b,c)     min(a,min(b,c))
#define max3(a,b,c)     max(a,max(b,c))
 
#define fi(i,s,e)       for(int i=s;i<e;i++)
#define fd(i,s,e)       for(int i=s;i>e;i--)
 
#define couty           cout<<"YES"<<endl
#define coutn           cout<<"NO"<<endl
#define cout(a)         cout<<fixed<<setprecision(a)
 
#define all(x)          (x).begin(), (x).end()
#define rall(x)         (x).rbegin(), (x).rend()
 
#define test            int t; cin>>t; while(t--)
#define NeedForSpeed    ios::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr);
#define mod 10e+7
 
 
#pragma GCC optimize ("Ofast")
#pragma GCC optimize ("unroll-loops")
#pragma GCC optimize ("03")
#pragma GCC optimize("fast-math")
#pragma GCC target ("sse,sse2,sse3,ssse3,sse4,popcnt,abm,avx2,mmx,fma,avx,tune=native")
 
 
using namespace std;
 
 
void solve(){
    long double n,k;  cin>>n>>k;
	long double sum1=0;
    long double sum=0;
	for(int i=0;i<n;i++){
		long double p;  cin>>p;
		sum+=4*p;
		sum1+=sq(p);
	}
	long double a=n*4;
    long double b=sum;
    long double c=(sum1-k);
	long double d=sq(b)-(4*a*c);
	long double ans=(sqrt(d)-b)/(2*a);
	cout<<setprecision(numeric_limits<double>::digits10+1)<<ans<<endl;
 
 
 
}
 
 
 
 
 
 
 
 
signed main() {
NeedForSpeed
    test
    solve();
}