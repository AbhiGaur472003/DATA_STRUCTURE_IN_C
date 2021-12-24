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
void selection_sorted_array(int a[],int n)
{
    int min;
    for(int i=0;i<n-1;i++)
    {
        min=i;
        for(int j=i+1;j<n;j++)
        {
            if(a[j]<a[min])
            {
                min=j;
            }
        }
        swap(&a[i],&a[min]);
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
    printf("\nSorted array by selection sort method:\n");
    selection_sorted_array(a,n);
    print_array(a,n);
    return 0;
}


