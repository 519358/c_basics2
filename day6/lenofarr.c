#include <stdio.h>

int main(void){
    int arr[5]={0,1,2,3,4};
    int* p=arr;
    printf("%d",sizeof(arr)/sizeof(arr[0]));

    return 0;
}