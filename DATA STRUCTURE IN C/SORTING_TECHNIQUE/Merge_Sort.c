#include <stdio.h>
#include <stdlib.h>

void mergeA(int *ar,int a,int m,int b){
    int n1=m-a+1,n2=b-m;
    int l[n1],r[n2];
    for(int i=0;i<n1;i++){
        l[i]=ar[a+i];
    }
    for(int j=0;j<n2;j++){
        r[j]=ar[m+1+j];
    }
    int i=0,j=0,k=a;
    while(i<n1 && j<n2){
        if(l[i]<r[j]){
            ar[k]=l[i];
            i++;
        }
        else{
            ar[k]=r[j];
            j++;
        }
        k++;
    }
    while(i<n1){
        ar[k]=l[i];
        i++;
        k++;
    }
    while(j<n2){
        ar[k]=r[j];
        j++;
        k++;
    }
}
void MergeSort(int *ar,int a,int b){
    if(a<b){
        int mid=(a+b)/2;
        MergeSort(ar,a,mid);
        MergeSort(ar,mid+1,b);
        mergeA(ar,a,mid,b);
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
    MergeSort(ar,0,9);
    printf("\nAfter Sorting: ");
    Display(ar,10);
}
