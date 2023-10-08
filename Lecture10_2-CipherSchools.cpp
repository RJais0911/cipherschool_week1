#include<iostream>
using namespace std;

// void swap(int x,int y){
//     int temp;
//     temp=x;
//     x=y;
//     y=temp;

//     cout<<"Values inside fn are: "<<x<<" "<<y<<endl;
// }

void swap(int& x,int& y){
    int temp;
    temp=x;
    x=y;
    y=temp;

    cout<<"Values inside fn are: "<<x<<" "<<y<<endl;
}

int main(){
    int a=5;
    int b=6;
    swap(a,b);

    cout<<"Values in main fn are: "<<a<<" "<<b<<endl;

    return 0;
    
}