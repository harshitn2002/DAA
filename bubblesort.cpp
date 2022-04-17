#include<bits/stdc++.h>
using namespace std;
void sort(int arr[], int n)
{
    for(int i=0;i<n-1;i++)
        for(int j=0;j<n-1-i;j++)
           if(arr[j] > arr[j+1])
              swap(arr[j], arr[j+1]);
}
void print(int arr[], int size)
{
    for(int i=0;i<size;i++)
       cout<<arr[i]<<" ";
    cout<<endl;
}
int main()
{
    int arr[] = {10,2,1,41,0};
    int n = sizeof(arr) / sizeof(arr[0]);
    sort(arr,n);
    cout<<"Sorted array is : \n";
    print(arr,n);
    return 0;
}
