#include<stdio.h>
int insertion_sort(int arr[],int n)
{ 
    int temp,j;
    for(int i = 0; i<= n-1 ; i++)
    {
        temp = arr[i];
        j = i - 1;
        while(j>=0 && arr[j] > temp)
        {
            arr[j+1] = arr[j];
            j--;
            }
            arr[j+1] = temp;
    }
    }

int main()
{
    int arr[10] = { 30,154,19,2,01,78,56,23,57,63};
    int n = 10;
    insertion_sort(arr,n);
    for(int i = 0; i< n; i++)
    printf("%d\n",arr[i]);
}
