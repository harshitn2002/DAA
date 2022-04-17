#include<bits/stdc++.h>
using namespace std;
void swap(int *x, int *y)
{
    int temp = *x;
    *x = *y;
    *y = temp;
}
void sort(int arr[], int n)
{
    int i,j,min_idx;
    for(i=0;i<n-1;i++)
    {
      min_idx =i;
      for(j=i+1;j<n;j++)
      if(arr[j] < arr[min_idx])
         min_idx =j;
           
      swap(&arr[min_idx], &arr[i]);
    }
      
}
void print(int arr[], int size)
{
    for(int i=0;i<size;i++)
       cout<<arr[i]<<" ";
    cout<<endl;
}
int main()
{
    int arr[] = {5,4,3,2,1};
    int n = sizeof(arr) / sizeof(arr[0]);
    sort(arr,n);
    print(arr,n);
    return 0;
}
