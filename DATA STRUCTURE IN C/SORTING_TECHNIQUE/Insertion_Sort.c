#include <stdio.h>
#include <stdlib.h>
void read_array(int a[],int n)
{
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
}
void insertion_sorted_array(int a[],int n)
{
    int j,b;
    for(int i=1;i<n;i++)
    {
        b=a[i];
        j=i-1;
        while(j>=0&&a[j]>b)
        {
            a[j+1]=a[j];
            j--;
        }
        a[j+1]=b;
    }
}
void print_array(int a[],int n)
{
    for(int i=0;i<n;i++)
    {
        printf(" %d ",a[i]);
    }
}
int main()
{
    int n;
    printf("Enter the size of array:  ");
    scanf("%d",&n);
    int a[n];
    printf("\nEnter the array:\n");
    read_array(a,n);
    printf("\nSorted array by insertion sort method:\n");
    insertion_sorted_array(a,n);
    print_array(a,n);
    return 0;
}
