#include <stdio.h>
#include <stdlib.h>
#include <errno.h>
#include <string.h>

int main (int argc,char* argv[]){
    if(argc!=3){
        puts("usage:./file.exe input_filepass output_filepass");
        return 1;
    }

    FILE* input=fopen(argv[1],"r");
    FILE* output=fopen(argv[2],"w");
    if(!input || !output){perror("fopen");return 1;};

    char* line[4096];
    while(fgets(*line,sizeof(*line),input)){
        *line[strcspn(*line,"\r\n")]='\0';

        char *tok = strtok(*line, ",");
        int first = 1;
        while (tok) {
            if (!first) fputc('\t', output);  // 2個目以降にタブを入れる
            fputs(tok, output);               // 項目そのものを書く
            first = 0;                     // 2回目以降の判定に使う
            tok = strtok(NULL, ",");      // 次の項目を取り出す
        }
        fputc('\n', output);
    }

    fclose(input);
    fclose(output);
    puts("Conversion done!");
    return 0;
}