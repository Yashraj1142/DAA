#include<stdio.h>

int BinSearch(int beg, int end, int arr[], int key){
    if(beg>end){
        return -1;
    }

    else{
        int mid = (beg+end)/2;
        if(arr[mid]==key){
            return mid;
        }
        if(key<arr[mid]){
            return BinSearch(beg, mid-1, arr, key);
        }
        else{
            return BinSearch(mid+1, end, arr, key);
        }
    }
}

int main(){
    int n;
    printf("Enter the size of the array: ");
    scanf("%d", &n);

    printf("\nMust Enter a sorted array\n");
    int arr[n];
    for(int i=0;i<n;i++){
        printf("Enter the element (smallest first): ");
        scanf("%d", &arr[i]);
    }

    int key;
    printf("Enter the element to find: ");
    scanf("%d", &key);

    if(BinSearch(0, n-1, arr, key)==-1){
        printf("NO such element in the list.");
    }
    else{
        printf("Element is at position: %d", BinSearch(0, n-1, arr, key));
    }
}