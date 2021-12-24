#include <stdio.h>
#include <stdlib.h>
void swap(int *p,int *c)
{
    int temp=*p;
    *p=*c;
    *c=temp;
}
void read_array(int a[],int n)
{
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
}
void bubble_sorted_array(int a[],int n)
{
    for(int i=0;i<n-1;i++)
    {
        for(int j=0;j<n-i-1;j++)
        {
            if(a[j]>a[j+1])
            {
                swap(&a[j],&a[j+1]);
            }
        }
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
    printf("\nSorted array by bubble sort method:\n");
    bubble_sorted_array(a,n);
    print_array(a,n);
    return 0;
}
