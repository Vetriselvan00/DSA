#include<stdio.h>
# define MAX 10
void bubble_sort(int arr[],int n)
{
       for(int i = 0; i<=n-1; i++)
        {
            for(int j = 0; j<  n-1-i;j++)
            {

                if(arr[j] > arr[j+1])
                {

                    arr[j] = arr[j] ^ arr[j+1];
                    arr[j+1] = arr[j] ^ arr[j+1];
                    arr[j] = arr[j] ^ arr[j+1];
                }
            }
}
}
int binary_search(int arr[],int low,int high,int target)
{
    int pos = -1;
    while(low<=high)
    {
         int mid = low + (high - low) / 2;
        if(arr[mid] == target)
        {
           return mid;
        }
        else if(arr[mid] > target)
            high = mid - 1;
        else
            low = mid + 1;
    }
    return pos;
}
int main()
{

    int arr[MAX] = {54,6,123,56,145,65,12,55,12,10};
    int low = 0;
    int high = MAX - 1;
    int t;
    int n = 10;
    
    bubble_sort(arr,MAX);
    for(int i = 0; i<n; i++)
    printf("%d ",arr[i]);
    printf("\n");
    
    printf("ENTER THE TARGET : ");
    scanf("%d",&t);
    int result = binary_search(arr,low,high,t);

    if(result != -1)

          printf("THE GIVEN TARGET %d in ARRAY %d",t,result);
        else
            printf("NOT IN ARRAY");
    return 0;
}
