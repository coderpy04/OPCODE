#include <bits/stdc++.h>
using namespace std;

int main (){
    string s;
    cin>>s;
    int c1=0;int c2=0;
    for(int i=0;i<s.size();i++){
      //  cin>>a[i];
        if(s[i]=='A'){
            c1++;
        }
        else
        c2++;
    }
    if(c1>c2){
        cout<<"Anton"<<endl;
    }
    else if(c1==c2){
        cout<<"Friendship"<<endl;
    }
    else{
        cout<<"Danik"<<endl;
    }
    
}