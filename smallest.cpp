#include<iostream>
using namespace std;

int main() {
    int x=10;
    int y=5;
    cout<<x<<" "<<y<<endl;
    y=x+y++;
    cout<<x<<" "<<y<<endl;
    x=y+(++x);
    cout<<x<<" "<<y<<endl;
    y=y+++(x++);
    cout<<x<<" "<<y<<endl;
    x=++y+x++;
    cout<<x<<" "<<y<<endl;
    x=++x+(++x);
    cout<<x<<" "<<y<<endl;
}