#include <stdio.h>
//Functions to be used
int IsSymm(int [30][30], int);
int IsDiag(int [30][30], int);
int IsLowtri(int [30][30], int);
int DiagSum(int [30][30], int);

int main(){
    int arr[30][30], n;
    printf("enter order n of matrix: ");
    scanf("%d", &n);
    printf("enter the matrix: \n");

    for (int i=0;i<n;i++){
        for (int j=0;j<n;j++){ 
            scanf("%d", &arr[i][j]);
        }
    }
    //Displaying the obtained results...
    IsSymm(arr, n)==1?printf("Symmetric\n"): printf("not Symmetric\n");
    IsDiag(arr, n)==1?printf("Diagonal\n"): printf("not Diagonal\n");
    IsLowtri(arr, n)==1?printf("Lower Triangle\n"): printf("not Lower Triangle\n");
    printf("diagonal sum: %d", DiagSum(arr,n));
    return 0;
}

int IsSymm(int arr[30][30], int n){
    for(int i=1;i<n;i++){
        for(int j=0;j<i;j++){
            if(arr[i][j] != arr[j][i]) return 0;
        }
    }
    return 1;
}

int IsDiag(int arr[30][30], int n){
    for(int i=1;i<n;i++){
        for(int j=0;j<i;j++){
            if(arr[i][j] | arr[j][i]!=0) return 0;
        }
    }
    return 1;    
}

int IsLowtri(int arr[30][30], int n){
    for(int i=1;i<n;i++){
        for(int j=0;j<i;j++){
            if(arr[j][i]!=0) return 0;
        }
    }
    return 1;
}

int DiagSum(int arr[30][30], int n){
    int sum = n%2?-arr[n/2][n/2]:0;
    for(int i=0;i<n;i++){
        sum += arr[i][i] + arr[i][n-i-1];
    }   
    return sum;
}