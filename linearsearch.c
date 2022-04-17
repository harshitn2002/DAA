#include <stdio.h>
#define MAX_SIZE 100  
int main()
{
    int arr[MAX_SIZE];
    int size, i, key, flag;

    printf("Enter size of array: ");
    scanf("%d", &size);

    printf("Enter elements in array: ");
    for(i=0; i<size; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("\nEnter element to search: ");
    scanf("%d", &key);

    flag = 0; 
    
    for(i=0; i<size; i++)
    {
        
        if(arr[i] == key)
        {
            flag =  1;
            break;
        }
    }

    if(flag == 1)
    {
        printf("\n%d is found", key);
    }
    else
    {
        printf("\n%d is not found in the array", key);
    }

    return 0;
}
