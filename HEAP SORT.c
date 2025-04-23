#include<stdio.h>
#include<stdlib.h>
void swap(int *a,int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}
void print(int arr[],int n)
 {
     for(int i = 0; i<n; i++)
           printf("%d ",arr[i]);
    printf("\n");
 }
 void heap(int arr[],int n,int i)
 {
     int large = i;
     int left = 2*i+1;
     int right = 2*i+2;
     if(left<n && arr[left] > arr[large])
        large = left;
    if(right < n && arr[right] > arr[large])
        large = right;
     if ( large != i)
     {
        swap(&arr[i],&arr[large]);
        heap(arr,n,large);
     }
 }
 void heapsort(int arr[],int n)
 {
     for(int i = n/2-1; i>=0; i--)
        heap(arr,n,i);
    for(int i = n-1; i>0; i-- )
    {
       swap(&arr[0],&arr[i]);
       heap(arr,i,0);
    }
 }
 int main()
 {
     int arr[10] = {23,48,69,23,21,86,74,10,40,78};
     int n = 10;
     printf("orginal array : ");
     print(arr,n);
     heapsort(arr,n);
     printf("sorted array :");
     print(arr,n);
     return 0;
 }
