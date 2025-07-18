#include <stdio.h>

size_t my_strlen(const char* s){
    const char* p=s;
    while(*p){
        p++;
    }
    return (size_t)(p-s);
}

int main(void){
    printf("enter your charcter array:\n");
    char buf[100];
    if(!fgets(buf,sizeof(buf),stdin)){
        return 1;
    }

    for(char *p=buf;*p;p++){
        if(*p=='\n'){
            *p='\0';
        }
    }

    printf("my_strlen=%zu",my_strlen(buf));
    return 0;

}