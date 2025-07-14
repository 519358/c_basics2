#include <stdio.h>

int main(void){

    int arr[5]={0,1,2,3,4};
    size_t len=sizeof(arr)/sizeof(arr[0]);

    int* left=arr;
    int* right=&arr[len-1];
    for (size_t i=0;i<len/2;i++){
        int tmp=*left;
        *left= *right;
        *right=tmp;

        left++;
        right--;
    }

    for (size_t j=0;j<len;j++){
        printf("%d",arr[j]);
        putchar(' ');
    }
    puts("");

    return 0;
}