/* #include<iostream>
using namespace std;
 
void func(int a, int b)
{
    a += b;
    cout << "In func, a = " << a << " b = " << b << endl;
}
int main(void)
{
    int x = 5, y = 7;
 
    // Passing parameters
    func(x, y);
    cout << "In main, x = " << x << " y = " << y;
    return 0;
} */

#include<iostream>
using namespace std;
 
void swapnum(int* i, int* j)
{
    int temp = *i;
    *i = *j;
    *j = temp;
}
 
int main(void)
{
    int a = 10, b = 20;
 
    // passing parameters
    swapnum(&a, &b);
 
    cout<< "a is " << a << " and b is " << b;
    return 0;
}
 