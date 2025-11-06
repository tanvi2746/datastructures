#include <stdio.h>

int main() {
    int arr[5] = {10,20,30,40,50};
    int key, found = 0;
    
    printf("Enter the element to be searched:\n");
    scanf("%d",&key);
    
    for(int i=0; i<5; i++){
        if (arr[i] == key){
            printf("Given element found at position %d\n ",i+1);
            found = 1;
            break;
        }
    }
    
    if(!found)
        printf("Given element was not found");
        
    return 0;
}
