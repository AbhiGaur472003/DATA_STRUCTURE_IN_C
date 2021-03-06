#include <stdio.h>
#include <stdlib.h>

void Swap(int *ar,int c,int b){
    int t=ar[c];
    ar[c]=ar[b];
    ar[b]=t;
}
void heapify(int *ar,int a,int b){
    int g=b;
    int l=2*b+1,r=2*b+2;
    if(l<a && ar[l]>ar[g])
        g=l;
    if(r<a && ar[r]>ar[g])
        g=r;
    if(g!=b){
        Swap(ar,b,g);
        heapify(ar,a,g);
    }
}
void HeapSort(int *ar,int n){
    for(int i=n/2-1;i>=0;i--)
        heapify(ar,n,i);

    for(int i=n-1;i>0;i--){
        Swap(ar,0,i);
        heapify(ar,i,0);
    }
}
void Display(int *a,int n){
    for(int i=0;i<n;i++){
        printf("%d ",a[i]);
    }
    printf("\n");
}

int main(){
    int ar[10]={2,40,9,5,3,67,34,7,21,89};
    printf("\nBefore Sorting :");
    Display(ar,10);
    HeapSort(ar,10);
    printf("\nAfter Sorting: ");
    Display(ar,10);
}
