#include <stdio.h>
#include <stdlib.h>

int Parition1(int *a,int l,int h){
    int p=a[h];
    int i=l-1;
    for(int j=l;j<h;j++){
        if(a[j]<p){
            i++;
            int temp=a[i];
            a[i]=a[j];
            a[j]=temp;
        }
    }
    a[h]=a[i+1];
    a[i+1]=p;
    return i+1;
}

void QuickSort(int *a,int l,int h){
    if(l<h){
        int p=Parition1(a,l,h);
        QuickSort(a,l,p-1);
        QuickSort(a,p+1,h);
    }
}
void Display(int *a,int n){
    for(int i=0;i<n;i++){
        printf("%d ",a[i]);
    }
    printf("\n");
}
int main()
{
    int ar[10]={2,40,9,5,3,67,34,7,21,89};
    printf("\nBefore Sorting :");
    Display(ar,10);
    QuickSort(ar,0,9);
    printf("\nAfter Sorting: ");
    Display(ar,10);
    return 0;
}
