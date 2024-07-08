#include <stdio.h>

int main() {
    int arr[] = {10, 20, 30, 40, 50};
    int size = sizeof(arr) / sizeof(arr[0]);
    
    printf("%d\n",size);
    printf("Addresses of  elements of an array\n");
    int i=1;
    while(i<=size){
        printf("Address of arr[%d] element: %p\n", i, &arr[i]);
        i++;
    }
    

    return 0;
}