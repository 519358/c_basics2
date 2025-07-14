#include <stdio.h>

int main(void){

    char* p="hello";
    char s[]="hello";

    s[0]='H';
    //p[0]='H';
    printf("%s\n",s);

    return 0;

}