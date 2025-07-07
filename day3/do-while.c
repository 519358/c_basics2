#include <stdio.h>

int calc_pi(int terms);
int power(int tei,int jou);

int main(void){
    int opt;
    do{
   
        printf("選択肢を入力してください\n");
        printf("1:円周率近似\n");
        printf("2.累乗計算\n");
        printf("3.処理終了\n");
        scanf("%d",&opt);
        switch(opt){
            case 1:{
                int terms;
                printf("何次近似？\n");scanf("%d",&terms);
                calc_pi(terms);
                break;
            }
            case 2:{
                int tei,jou;
                printf("底と累乗を入力してください。例)1 space 1\n");
                scanf("%d %d",&tei,&jou);
                power(tei,jou);
                break;
            }
            case 3:{
                printf("bye\n");
                break;
            }
            default:{
                printf("非対応コード\n");
                break;
            }
        }

    }while(opt!=3);

    return 0;
}


int calc_pi(int terms){
    double p = 0.0;
    double sign = 1;

    for (int i = 0; i < terms; i++) {
        double term = 1.0 / (2 * i + 1);  // 1, 1/3, 1/5, ...
        p += sign * term;                // + - + - ...
        sign *= -1;                      // 符号を交互に
    }
    printf("%lf\n",4*p);

    return 0;
}

int power(int tei,int jou){
    double result=1;
    for(int i=0;i<jou;i++){
        result*=tei;
    }
    printf("%lf\n",result);

    return 0;
}
