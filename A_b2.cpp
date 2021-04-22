#include <iostream>

using namespace std;

void f(int a[])
{
    int *p=a;
    int k=sizeof(p);
    cout << k << endl;

}

int main()
{
    int str[4]={1,3,4,5};
    int n=sizeof(str);
    cout << n <<endl;
    f(str);
}

