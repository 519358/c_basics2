#include "mathlib.h"

double average(void){

    int x,arg;
    printf("enter the nuber of argument:");scanf("%d",&x);
    if(x==0){
        printf("error:0");
        return 1;
    }

    int sum=0;
    for (int i=0;i<x;i++){
        scanf("%d",&arg);
        sum +=arg;
    }

    return ((double)sum)/x;

}