#include <stdio.h>
int n, x1, x2, max=0;
int arr[101]={0};

int main() {
    scanf("%d", &n);
    for(int i=0; i<n; i++){
        scanf("%d %d", &x1, &x2);
        for(int j=x1-1; j<x2; j++){
            arr[j]++;
        }
    }
    for(int i=0; i<101; i++){
        if(arr[i]>max){
            max=arr[i];
        }
    }
    printf("%d", max);
}