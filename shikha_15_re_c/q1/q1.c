#include<stdio.h>
 int findlargest(int arr[],int n);
 int findsmallest(int arr[],int n);

 int main()
 {
    int arr[]={2,4,6,8,10};
    int n = sizeof(arr) / sizeof(arr[0]);


    int largest =findlargest(arr ,n);
    int smallest=findsmallest(arr ,n);

    printf("largest element:%d\n" ,largest);
    printf("smallest element:%d\n" , smallest);

    return 0;
 }


 int findlargest(int arr[],int n)
 {
    if(n==1)
    {
        return arr[0];
    }

    int largest = findlargest(arr, n -1);
    if(arr[n-1] > largest)
    {
        return arr[n-1];
    }
    else
    {
        return largest;
    }
 }

 int findsmallest(int arr[],int n)
 {
    if(n==1)
    {
        return arr[0];
    }

    int smallest = findsmallest(arr, n -1);
    if(arr[n-1] < smallest)
    {
        return arr[n-1];
    }
    else
    {
        return smallest;
    }
 }