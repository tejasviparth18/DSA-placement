#include<bits/stdc++.h>
using namespace std;
int LinearSearch(int n,int num,int arr[])
{
    for(int i=0;i<n;i++)
    {
        if(arr[i]==num)
        return i;
    }
    return -1;
}
int main()
{
   int arr[]={1,2,3,4,5};
    int num = 4;
    int n = sizeof(arr)/sizeof(arr[0]);
    int val = LinearSearch(n,num,arr);
    printf("%d",val);
}