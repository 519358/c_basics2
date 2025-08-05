#include <stdio.h>
#include <stdlib.h>

int main(void) {
    char path[256];  // ファイルパス格納用

    printf("読み込むファイルパスを入力してください: ");
    if (scanf("%255s", path) != 1) {   // 最大255文字まで読み込み
        fprintf(stderr, "❌ ファイルパスの読み取りに失敗しました\n");
        return EXIT_FAILURE;
    }

    FILE *fp = fopen(path, "rb");
    if (!fp) {
        perror("fopen");
        return EXIT_FAILURE;
    }

    // --- ① ファイルサイズ取得 ---
    fseek(fp, 0, SEEK_END);
    long size = ftell(fp);      
    rewind(fp);

    // --- ② mallocでバッファ確保 ---
    unsigned char *buf = malloc(size);
    if (!buf) {
        perror("malloc");
        fclose(fp);
        return EXIT_FAILURE;
    }

    // --- ③ freadで読み込み ---
    if (fread(buf, 1, size, fp) != (size_t)size) {
        perror("fread");
        free(buf);
        fclose(fp);
        return EXIT_FAILURE;
    }

    fclose(fp);

    // --- ④ 標準出力に出す（バイナリ対応） ---
    fwrite(buf, 1, size, stdout);

    free(buf);
    return EXIT_SUCCESS;
}
