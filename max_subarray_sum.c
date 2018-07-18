//A program to find the maximum sub-array sum with time complexity of 0(n) where n is the number of elements in the array. 

#include<stdio.h>
int n,i,j;
int local_max,global_max;
//find the maximum of two elements
int max(int a,int b) 
{
    return ((a>b)?a:b);
}
//find the sum of maximum subarray elements. 
int max_subarray_sum(int x[])
{
    local_max=global_max=x[0];
    for(i=1;i<n;i++)
    {
        local_max=max(x[i],local_max+x[i]);
        global_max=max(local_max,global_max);

    }
    return global_max;
}
//main function for taking the inputs, calling the method, displaying the result. 
int main()
{
    int a[100];
    printf("Enter the size of the array\n");
    scanf("%d",&n);
    printf("Enter the elements in the array\n");
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);

    int max=max_subarray_sum(a);
    printf("The maximum sum of subarray is %d",max);
    return 0;
}
