#include<iostream>
#include <cstdlib>
#include <time.h>
using namespace std;
void swap(int arr[], int i, int j)
    {
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
    }

   int partition(int arr[], int low, int high,int &co,int &sw)
    {
        
        srand(time(NULL));
        int random = low + rand() % (high - low);
        swap(arr[random], arr[high]);
         
        int pivot=arr[high];
        int i = low - 1;
     
        for(int j = low; j <= high - 1; j++)
        {
            if (arr[j] < pivot)
            { 
                co++;
                i++;
                swap(arr, i, j);
            }
        }
        swap(arr, i + 1, high); 
        sw++;
        return (i + 1);
    }
    void quickSort(int arr[], int low, int high,int &co,int &sw)
    {
        if (low < high)
        {
            int pi = partition(arr, low, high,co,sw);
            quickSort(arr, low, pi - 1,co,sw);
            quickSort(arr, pi + 1, high,co,sw);
        }
    }
    void printArray(int arr[], int size)
    {
        for(int i = 0; i < size; i++)
            cout<<arr[i]<<endl;
             
    }
     
    int main()
    {
       int n,co=0,sw=0; 
       cout<<"Enter the number of elements:";
       cin>>n;
        int arr[n];
        cout<<"Enter the elements: ";
        for(int i=0;i<n;i++)
            cin>>arr[i];
        quickSort(arr, 0, n - 1,co,sw);
       cout<<"Sorted array: ";
        printArray(arr, n); 
        cout<<"Total number of comparisions: "<<co<<endl;
        cout<<"Total number of swaps: "<<sw; 
        return 0;
}

     
