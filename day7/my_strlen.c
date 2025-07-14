#include <stdio.h>

size_t my_strlen(const char* s){
    const char* p=s;
    while(*p !='\0'){
        p++;
    }
    return (size_t)(p-s); 
}

int main(void){

    char s[]="hello";
    size_t len=my_strlen(s);
    printf("%zu\n",len);

    return 0;
}
