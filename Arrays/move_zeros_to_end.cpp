#include<bits/stdc++.h>
using namespace std;
vector<int> RemoveZeroes(vector<int> arr , int n)
{
    int j=-1;
    for(int i=0;i<n;i++)
    {
        if(arr[i]==0)
        {
            j=i;
            break;
        }
    }
    if(j==-1) return arr;

    for(int i=j+1;i<n;i++)
    {
        if(arr[i]!=0)
        {
            swap(arr[i] , arr[j]);
            j++;
        }
    }
    return arr;
}
int main()
{
    vector<int> arr = {1, 0, 2, 3, 2, 0, 0, 4, 5, 1};
    int n = 10;
    vector<int> ans = RemoveZeroes(arr , n);
    for (auto &it : ans) {
        cout << it << " ";
    }
    cout << '\n';
    return 0;
}
 