#include<stdio.h>
int partition(int arr[],int lb,int ub)
{
    int pivot=arr[lb];
    int start=lb;
    int end=ub;
    while (start < end)
    {
        while (arr[start]<=pivot)
        {
            start++;
        }
        while (arr[end]>pivot)
        {
            end--;
        }
        if(start<end)
        {
            //swap start and end
            int temp=arr[start];
            arr[start]=arr[end];
            arr[end]=temp;
        }
    }
    //swap lb and pivot
    int temp=arr[lb];
    arr[lb]=arr[end];
    arr[end]=temp;
    return end;
    
}
void sort(int arr[],int lb,int ub)
{
    if(lb<ub)
    {
        int loc=partition(arr,lb,ub);
        sort(arr,lb,loc-1);
        sort(arr,loc+1,ub);
    }
}
int main()
{
    int arr[]={10,15,1,2,9,16,11,6,5,7,12};
    int size=sizeof(arr)/sizeof(arr[0]);
    sort(arr,0,size-1);
    for(int i=0;i<size;i++)
    {
        printf(" %d ",arr[i]);
    }
    return 0;
}