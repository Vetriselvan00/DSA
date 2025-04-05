#include<stdio.h>
int selection_sort(int arr[],int n)
{
    int min,temp;
    for(int pos = 0; pos<n-1;pos++)
    {
        min = pos;
        for(int i = pos; i<n; i++)
        {
            if(arr[i] < arr[min])
            min = i;
        }
        if(min!=pos)
        {
            temp = arr[min];
            arr[min] = arr[pos];
            arr[pos] = temp;
        }
    }
     for(int i = 0; i< n; i++)
           printf("%d ",arr[i]);
    }
int main()
{
    int arr[10] = {2,35,67,22,34,60,43,23,34,76};
    int n = 10;
    selection_sort(arr,n);
   
    return 0;
}
