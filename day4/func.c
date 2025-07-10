#include <stdio.h>
#include <stdlib.h>   
#include <string.h>

int max(int count,char stream[]);
double average(int count,char stream[]);
unsigned long factorial(unsigned int n);

int main(void){
    int opt;
    do{    
        printf("select action:\n");
        printf("1.return maximum\n");
        printf("2.return average\n");
        printf("3.factorial\n");
        printf("4.break\n");
        scanf("%d",&opt);

        switch(opt){
            case 1:{
                int count;
                char stream[1024]; 
                printf("enter the number of stream.\n");
                scanf("%d",&count);
                getchar();  // 改行除去
                printf("enter the stream\n");
                fgets(stream,sizeof(stream),stdin);
                printf("%d\n",max(count,stream));
                break;
            }
            case 2:{
                int count;
                char stream[1024]; 
                printf("enter the number of stream.\n");
                scanf("%d",&count);
                getchar();  // ← ここを追加！

                printf("enter the stream\n");
                fgets(stream,sizeof(stream),stdin);
                printf("%lf\n",average(count,stream));
                break;
            }
            case 3:{
                unsigned int n;
                printf("enter the number\n");
                scanf("%d",&n);
                printf("%lu\n",factorial(n));
                break;
            }
            case 4:{
                printf("bye\n");
                break;
            }
            default:{
                printf("incompatible\n");
                break;
            }
        }
    }while(opt!=4);

    return 0;
}

int max(int count, char stream[]){
    int arr[100];
    char* token=strtok(stream," ");
    int i = 0;
    while (token != NULL && i < count) {
        arr[i++] = atoi(token);
        token = strtok(NULL, " ");
    }
    if (i != count) {
        printf("入力数が一致しません\n");
        return -1;
    }
    int max=arr[0];
    for(int j=1;j<count;j++){
        if(max<arr[j]){
            max=arr[j];
        }
    }
    return max;
}

double average(int count, char stream[]){
    int arr[100];
    char* token=strtok(stream," ");
    int i = 0;
    while (token != NULL && i < count) {
        arr[i++] = atoi(token);
        token = strtok(NULL, " ");
    }
    if (i != count) {
        printf("入力数が一致しません\n");
        return -1;
    }
    
    int sum=0;
    for (int j=0;j<count;j++){
        sum+=arr[j];
    }
    double ave=(double)sum/count;
    return ave;
}

unsigned long factorial(unsigned int n) {
    if (n == 0) return 1;
    return n * factorial(n - 1);   // ← 再帰呼び出し
}
