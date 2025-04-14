#include<stdio.h>
int partition(int q[],int low,int high)
{
    int pivot = q[low];
    int i = low +1;
    int j = high;
    int temp;
    while(i<j)
    {
        while(q[j]<=pivot)
        i++;
        while(q[j]>pivot)
        j--;
        i(i<j);
        {
            temp = i;
            i = j;
            j = temp;
        }

    }

}
void quick_sort(int q[],int low,int high)
{
    if(low<high)
    {
        int f = partition(q[],int low, int high);
        quick_sort(int q,int low,int j-1);
        quick_sort(int q,int j+1,int high);
    }
}

void printarray(int arr[],int n)
{
    for(int i = 0; i<n;i++)
       printf("%d",arr[i]);
  printf("\n");
}
int main()
{
    int q[10] = { 24,98,23,95,42,56,12,49,31,42};
    int n = 10;

    printarray(q,n);

    quick_sort(q,0,n-1);
    printf("sorted array\n");
    printarray(q,n);
    return 0;
}
