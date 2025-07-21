#include <stdio.h>
#include <stdlib.h>

int main(void){
    
    size_t len=0;
    int x;
    size_t cap=4;
    printf("Ctrl+Dまで入力してね。\n");
    int* data=malloc(cap*sizeof(*data));

    while(scanf("%d",&x)==1){
        if(len==cap){
            cap*=2;
            int* tmp=realloc(data,cap*sizeof(*data));
            data=tmp;
        }
        data[len++]=x;
    }

    for (int i=0;i<(int) len;i++){
        printf("%d ",data[len-i-1]);
    }
    puts(" ");
    printf("%zu\n",len);
    free(data);
}