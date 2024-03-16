#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	
	{
		int a,b;
		cin>>a,b;
		
		int count=0;int max=0;
		
		count=count-a+b;
		if(count>max){
			max=count;
		}
		cout<<max<<endl;
	}
	
	
	   
return 0;
}
