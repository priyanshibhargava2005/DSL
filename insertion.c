#include<stdio.h>
void insertion(int a[], int n){
    int  i,j, k, temp;
    for(i=1;i<n;i++){
        temp=a[i];
        j=i-1;
        while(j>=0&&a[j]> temp){
            a[j+1]=a[j];
            j=j-1;
        }
        a[j+1]=temp;
        printf("\npass %d\n", i);
        for(k=0;k<n;k++){
            printf("%d",a[k]);
            printf("\t");
        }
          
    }
    
}
void print(int a[], int n){
    int i;
    printf("\nsorted array\t");
    for(i=0;i<n;i++){
        printf("%d", a[i]);
        printf("\t");
    }
}
int main(){
    int i, a[6], n;
    printf("enter the number of elements in an array");
    scanf("%d",&n);
    printf("enter the elements of an array");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    insertion(a,n);
    print(a,n);
    return 0;
}