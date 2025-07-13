#include <stdio.h>

int main(void){

    int arr[5]={0,1,2,3,4};
    size_t len=sizeof(arr)/sizeof(arr[0]);

    int* left=arr;
    int* right=&arr[len];
    for (int i=0;i<len;i++){
        
    }
}