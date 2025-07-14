#include <stdio.h>

int main (void){

    int num[5]={0,1,2,3,4};
    int* p=num;
    size_t len=(sizeof(num))/(sizeof(*p));

    for (size_t i=0;i<len;i++){
        printf("*(p+i)=%d p[i]=%d\n",*(p+i),p[i]);

    }

    return 0;
}