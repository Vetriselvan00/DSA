#include<stdio.h>
int bubble_sort(int arr[],int n)
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
}
int main()
{
    int arr[10] = {2,35,67,22,34,60,43,23,34,1};
    int n = 10;
    int result = bubble_sort(arr,n);
    for(int i = 0; i< n; i++)
    {
    printf("%d\n",arr[i]);
    }
    return 0;
}
