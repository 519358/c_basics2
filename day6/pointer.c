#include <stdio.h>

int main(void) {
    int arr[5]={1,2,3,4,5};
    int* p=arr;
    printf("%d,%d",&arr[1],*(p+1));
    return 0;
}