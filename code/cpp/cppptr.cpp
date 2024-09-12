#include <iostream>
using namespace std;
int main()
{
    int a = 6;
    int *b = &a;
    cout<<&a<<endl;
    cout<<b<<endl;
    *b = *b + 1;
    cout<<*b<<endl;
    int * c = new int [3];
    cout<<c[1]<<endl;
    return 0;
}
