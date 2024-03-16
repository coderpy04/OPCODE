    //<------------------- ΗΔɌΞ ƘɌI⟆ΗŊΔ !!-------------------->//

    #include<bits/stdc++.h>
    #include<iostream>
    #define double           long double
    #define int              long long
    #define ll               long long
    #define nl               cout<<'\n'
    #define vec              vector<int>
    #define mpi              map<int,int>
    #define pi               pair<int,int>
    #define vpi              vector<pair<int,int>>
    #define pb               push_back
    #define mp(a,b)          make_pair(a,b)
    #define bitcntll         __builtin_popcountll
    #define ff               first
    #define ss               second             
    #define sz(s)            (long long)(s.size())
    #define in(v)            for(auto &item : v) cin>>item
    #define out(v)           for(int i=0;i<sz(v);i++) cout<<v[i]<<" "
    #define inp(v)           for(auto &item : v) cin>>item.ff>>item.ss
    #define sze(s)           (long long)(s.size())
    #define veci(v,n)        vector<int>v(n);for(int i=0;i<n;i++){cin>>v[i];}
    #define sq(a)            (a*a)
    #define cb(a)            (a*a*a)
    #define min3(a,b,c)      min(a,min(b,c))
    #define max3(a,b,c)      max(a,max(b,c))
    #define alwayshigh(v)    *max_element(v.begin(),v.end())
    #define sometimeslow(v)  *min_element(v.begin(),v.end()) 
    #define fi(i,s,e)        for(int i=s;i<e;i++)
    #define fd(i,s,e)        for(int i=s;i>e;i--)
    #define sz(s)            (long long)(s.size())
    #define couty            cout<<"YES"<<endl
    #define coutn            cout<<"NO"<<endl
    #define cout(a)          cout<<a<<endl
    #define all(x)           (x).begin(), (x).end()
    #define rall(x)          (x).rbegin(), (x).rend()
    #define testcase         int t; cin>>t; while(t--)
    #define uMadeMeRude      ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    using namespace std;
    int cont=1e9+7;
    int msz= 2e5+1;

    void toxic()
    {
    int n; cin>>n;
    int f=0;
    vec a;

    fi(i,0,n){
        int x; cin>>x;
        if(i==0){
            if(x>=10){
                a.pb(x/10);
                a.pb(x%10);
            }
            else a.pb(x);
        }
        else{
            if(a[i-1]<=x){
                if(a[i-1]<= x/10 && x/10<= x%10){
                    a.pb(x/10);
                    a.pb(x%10);
                }
                else{
                    a.pb(x);
                }
            }
            else{
                a.pb(x);
            }

        }
    }
    //vout(a);
    if(is_sorted(all(a))) couty;
    else coutn;
    }
    
    signed main()
    {
    uMadeMeRude
    testcase 
    {
    toxic(); 
    }
    return 0;
    } 
