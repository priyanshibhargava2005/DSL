#include<stdio.h>

int bubble(int a[],int n)
{
int i,j,k,temp;
 
for(i=0;i<n-1;i++) 
{
for(j=0;j<n-(i+1);j++)
 {

 if(a[j]>a[j+1]) 
 {
temp=a[j];
a[j]=a[j+1];
a[j+1]=temp; 
}
 }
 printf("\n pass %d \n",i+1);
 for (int k = 0;k<n;k++){
     printf("%d",a[k]);
     printf("\t");
 }

}
 
 }
 int main(){
 	int a[10], i, j, n;
 	printf("enter number of elements in an array");
 	scanf("%d",&n);
 	printf("enter the elements of an array");
 	for(i=0;i<n;i++){
 		scanf("%d",&a[i]);
 	}
 	bubble(a,n);
 	printf("\nsorted array:\t");
 	for(i=0;i<n;i++){
 		printf("%d\t", a[i]);
 	}
 	
 	return 0;
 }