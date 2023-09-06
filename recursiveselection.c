#include <stdio.h>
void swap(int a[], int i, int j) {
int temp = a[i];
a[i] = a[j];
a[j] = temp;
}
void selectionSortRecursive(int a[], int n, int i) {
if (i >= n - 1) {
return; // Base case: If we've reached the end of the array, return
}
int minIndex = i;
for (int j = i + 1; j < n; j++) {
if (a[j] < a[minIndex]) {
minIndex = j;
}
}
if (minIndex != i) {
swap(a, i, minIndex);
}
printf("\n pass %d \n", i + 1);
for (int k = 0; k < n; k++) {
printf("%d\t", a[k]);
}
selectionSortRecursive(a, n, i + 1); // Recursive call for the next index
}
int main() {
int a[10], n;
printf("Enter the number of elements in the array: ");
scanf("%d", &n);
printf("Enter the elements of the array:\n");
for (int i = 0; i < n; i++) {
scanf("%d", &a[i]);
}
selectionSortRecursive(a, n, 0);
printf("\nSorted array:\t");
for (int i = 0; i < n; i++) {
printf("%d\t", a[i]);
}
return 0;
}