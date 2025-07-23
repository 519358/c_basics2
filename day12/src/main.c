#include <stdio.h>
#include "mathlib.h"

int main(void) {
    int x,y;
    printf("input 2 nuber :");
    scanf("%d",&x);
    scanf("%d",&y);
    printf("sum=%d\n", add(x,y));
    printf("devide=%lf\n",devide(x,y));
    return 0;
}