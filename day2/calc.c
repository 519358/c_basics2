#include <stdio.h>

double calc(double a,double b,char opt){

    double answer;
    switch(opt){
        case '+':
            answer=a+b;
            return answer;
        case '-':
            answer = a - b;
            return answer;
        case '*':
            answer=a*b;
            return answer;
        case '/':
            if(b!=0){
                answer=a/b;
            return answer;
            }else{
                printf("formula error\n");
                return 0 ;
            } 
    }

}

int main(void){

    double a;
    double b;
    char opt;
    printf("input formula like 1+1\n");
    scanf("%lf %c %lf",&a,&opt,&b);
    double answer=calc(a,b,opt);
    printf("%.2f %c %.2f=%.2f\n",a,opt,b,answer);
    return 0;

}