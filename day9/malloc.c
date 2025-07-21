#include <stdio.h>
#include <stdlib.h>

int main(void){

    size_t cap=4;
    size_t len=0;

    int* data=malloc(cap*sizeof(int));
    if(!data){
        perror("malloc");
        return 1;
    }

    int x;
    printf("Ctrl+Dまで入力してね\n");
    while(scanf("%d",&x)==1){
        if(len==cap){
            cap*=2;
            int* tmp=realloc(data,cap*sizeof(data));
            data=tmp;
        }
        data[len++]=x;
    }

    for(int i=0;i<(int)len;i++){
        printf("%d ",data[i]);
    }

    puts(" ");
    free(data);
    return 0;

}