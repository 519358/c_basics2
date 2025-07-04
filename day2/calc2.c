#include <stdio.h>
#include <stdlib.h>
#include <string.h>

double calc2(double x,char opt,double y){
    switch(opt){
        case '+': return x+y;
        case '-': return x-y;
        case '*': return x*y;
        case '/':
            if(y!=0){return x/y;}
            else{printf("0では割れません。そんなことも知らないの？"); return 0;}
        default:
            printf("不明な演算子。四則演算って知ってる？：%c",opt);
            return 0;
    }
}

int main(void){
    char line[100];
    double x, y, answer;
    char opt;

    while(1){
        printf("enter the formula like 1+1:\n");
        fgets(line,sizeof(line),stdin);

        if(strcmp(line,"q\n")==0){
            printf("bye\n");
            break;
        }

        char garbage[100];
        if(sscanf(line,"%lf %c %lf %s",&x,&opt,&y, garbage)==3){
            answer=calc2(x,opt,y);
            printf("%.2f\n",answer);
        }else{
            printf("そんな難しい計算はできない。勘弁してください。\n");
        }
    }
    return 0;
}
