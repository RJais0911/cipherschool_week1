#include<iostream>
using namespace std;

int fn(int x,int y){
    if(x==y){
        return x,y;
    }
    else if(x>y){
        return x;
    }
    else{
        return y;
    }
}

int main(){
    int a=5;
    int b=6;
    int ans=fn(a,b);
    cout<<ans;

    return 0;
    
}