#include <stdio.h>
int SumArray(int [], int);

int main(){
    int array[50], n;
    printf("array size: ");scanf("%d",&n);
    printf("Enter the array: ");
    //taking array input
    for(int i=0;i<n;i++)scanf("%d", &array[i]);
    printf("sum of elements of array: %d", SumArray(array, n));
    return 0;
}

int SumArray(int a[], int size){
    int ans = 0;
    while(size--)ans += a[size];
    return ans;
}