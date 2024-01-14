#include<bits/stdc++.h>
using namespace std;
int largest(int arr[],int n)
{
    int max=0;
    for(int i=1;i<n;i++)
    {
        if(arr[i]>max)
        {
            max=arr[i];
        }
    }
    return max;
}
int main() {
  int arr1[] = {2,5,1,3,0};
  int n = 5;
  int max = largest(arr1, n);
  cout << "The largest element in the array is: " << max << endl;
 
  int arr2[] =  {8,10,5,7,9};
  n = 5;
  max = largest(arr2, n);
  cout << "The largest element in the array is: " << max<<endl;
  return 0;
}
