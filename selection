#include <stdio.h>
int selection(int a[], int n)
{
    int i,j,k,temp,min,position;

for(i=0;i<n-1;i++) 
 { 
 min=i; 
 for(j=i+1;j<n;j++)
 {
 if(a[min]>a[j])
 {
min=j;
 }
 }
temp=a[i];
a[i]=a[min];
a[min]=temp;
printf("\nPass %d:\n",i+1);
for(k=0;k<n;k++){
    printf("%d", a[k]);
    printf("\t");
}

 }
 return 0;
}


int main() {
   int i, a[6], n;
    printf("enter the number of elements in an array");
    scanf("%d",&n);
    printf("enter the elements of an array");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    selection(a,n);
    printf("\nsorted array:\n");
    for(i=0;i<n;i++){
        printf("%d\t",a[i]);
    }
    return 0;
}