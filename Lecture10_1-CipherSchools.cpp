#include<iostream>
using namespace std;

int fn(int x,int y){
    int c;
    c=x+y;
    return c;
}

int main(){
    int a=5;
    int b=6;
    int c=10;
    int ans=fn(a,b);
    cout<<ans;

    cout<<"\n"<<c;

    return 0;
    
}