#include <bits/stdc++.h>
using namespace std;

int main()
    {
      string s;int c1=0;
      cin>>s;
      for(int i=0;i<s.size();i++){
        for(int j=i;j<s.size();j++){
               if(s[i]==s[j]){
                c1++;
               }
        }
      }
      cout<<c1<<endl;
      if(c1%2==0){
        cout<<"CHAT WITH HER!"<<endl;
      }
      else{
        cout<<"IGNORE HIM!"<<endl;
      }
    }
