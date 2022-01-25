#include <iostream>
using namespace std;


using namespace std;

int main()
{
    int a=15;
    int *b=&a;
    int **c=&b;
    cout<<b<<endl;
    cout<<&a<<endl;
    cout<<*b<<endl;
    cout<<&b<<endl;
    cout<<c<<endl;
    cout<<**c;
    int d=10;
    return 0;
}
