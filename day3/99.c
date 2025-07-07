#include <stdio.h>

void calc_99(){
    for(int i=1;i<=12;++i){
            for (int j=1;j<=12;++j){
                int answer=i*j;
                printf("%4d",answer);
            }
            printf("\n");
        }
        printf("\n");
}

int main(void){
    calc_99();
}
