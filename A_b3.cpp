#include <iostream>

using namespace std;

count_even(int *a, int n)
{
    int *p=a;
    for(int i=0;i<n;i++){
        if(*(p+i)%2==0){
            cout << *(p+i) << " ";
        }
    }

}

int main()
{
    int str[100],n;
    //int *p=str;
    cin >> n;
    for(int i=0;i<n;i++){
        cin >> str[i];
    }
    count_even(str,n);
}
