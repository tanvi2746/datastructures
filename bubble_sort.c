#include<stdio.h>

int main(){
    int a[5] = {50,30,10,40,20}, n = 5, temp;
    
    printf("Unsorted array:\n");
    for(int i=0; i<n; i++)
        printf("%d\t",a[i]);
        
    for(int i=0; i<n-1; i++){                         //loop should continue for n-1 passes
        for(int j=0; j<n-i-1; j++) {                  //loop that sorts the array from last position each element in a pass
            if( a[j] > a[j+1] ){
                temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;
            }
        }
    }
    printf("\nSorted array:\n");
    for(int i=0; i<n; i++)
        printf("%d\t",a[i]);
    
    return 0;
}
