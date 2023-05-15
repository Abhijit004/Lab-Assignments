#include<stdio.h>

void sel_sort(int, int []);
void bubb_sort(int, int []);

int main(){
    int arr[100], n;
    printf("Enter size: "); scanf("%d", &n);
    printf("Enter array: ");
    for(int i = 0;i < n; i++)scanf("%d", &arr[i]);
    bubb_sort(n, arr);
    printf("Sorted array: ");
    for(int i = 0;i < n; i++)printf("%d ", arr[i]);   
    return 0;
}

//Applying selection sort
void sel_sort(int n, int arr[]){
    int min, t;
    for(int i = 0; i<n-1; i++){
        min = i;
        for(int j= i+1; j<n; j++)
            if(arr[j]<arr[min]) min = j;
        if(min!=i){
            t = arr[min];
            arr[min] = arr[i];
            arr[i] = t;
        }               
    }
}

//Applying bubble sort
void bubb_sort(int n, int arr[]){
    int swapped, t;
    for(int i = 0; i<n; i++){
        swapped = 0;
        for(int j= 0; j<n-i-1; j++){
            if(arr[j]>arr[j+1]){
                t = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = t;
                swapped = 1;
            }
        }
        if(swapped == 0) break;               
    }
}