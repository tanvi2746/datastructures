#include<stdio.h>

int main(){
    int arr[5] = {10,20,30,40,50}, low=0, high=4, mid, key;
    
    printf("Enter the element to be searched:\n");
    scanf(" %d",&key);
    
    while(low<=high){
        mid = (low + high) / 2;
        if (arr[mid]==key){
            printf("Given element was found at position %d",mid+1);
            return 0;
        }
        else if (arr[mid]<key)
            low = mid + 1;
        else
            high = mid - 1;
    }
    printf("\nElement not found");
    return 0;
}
