#include<stdio.h>
void bubble_sort(int arr[],int n)
{
    int temp;
    for(int i = 1; i<= n -1; i++)
    {
        for(int j = 0; j<n-i-1;j++)
        {
            if(arr[j] > arr[j+1])
            {
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
    for(int i = 0; i<n; i++)
    {
        printf("%d ",arr[i]);
    }
}
int main()
{
    int arr[10] = {2,35,67,22,34,60,43,23,34,90};
    int n = 10;
    bubble_sort(arr,n);
    return 0;
}
