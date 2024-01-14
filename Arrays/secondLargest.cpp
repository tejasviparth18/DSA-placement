#include<bits/stdc++.h>
using namespace std;
int secondLargest(int arr[],int n)
{
    int largest=arr[0];
    int sLargest=INT_MIN;
    for(int i=0;i<n;i++)
    {
        if(arr[i]>largest)
        {
            sLargest=largest;
            largest = arr[i];
        }
        else if(arr[i]<largest && arr[i]>sLargest)
        {
            sLargest=arr[i];
        }
    }
    return sLargest;
}
int main() {
  int arr1[] = {2,5,1,3,0};
  int n = 5;
  int max = secondLargest(arr1, n);
  cout << "The second largest element in the array is: " << max << endl;
 
  int arr2[] =  {8,10,5,7,9};
  n = 5;
  max = secondLargest(arr2, n);
  cout << "The second largest element in the array is: " << max<<endl;
  return 0;
}
