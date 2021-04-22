#include <iostream>

using namespace std;

int binarySearch(int* arr, int n, int x) {
  int r = n - 1; //chi so phan tu cuoi
  int l = 0;     // chi so phan tu dau
  int *p=arr;
  while (r >= l){
    int mid = l + (r - l) / 2;

    if (*(p+mid) == x)
      return mid;

    if (*(p+mid) > x)
      r = mid - 1;

    if (*(p+mid) < x)
      l = mid + 1;
}

    //ko tim thay return -1
  return -1;
}

int main(void) {
  int arr[] = {1,2,3,4,5};
  int n = sizeof(arr) / sizeof(arr[0]);
  int x = 4;
  int result = binarySearch(arr, n, x);
  if (result == -1)
    cout << "khong tim thay" ;
  else
    cout << result;
  return 0;
}
