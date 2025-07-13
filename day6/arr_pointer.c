#include <stdio.h>

int main(void){
    int arr[5]={0,1,2,3,4};
    int* p =arr;

    printf("arr[2]=%d\n",arr[2]);
    printf("p[2]=%d\n",p[2]);
    printf("*(p+2)=%d\n",*(p+2));

    return 0;
}