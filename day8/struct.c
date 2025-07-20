#include <stdio.h>
#include <string.h>

typedef enum { Friend, Family, Work } Group;

typedef struct {
    char  name[30];
    char  phone_num[30];
    Group g;
} Contact;

#define MAX 100
static Contact book[MAX];
static int     num = 0;                /* いま登録済み件数 */

/* --------- 便利関数 --------- */
const char* group_to_str(Group g)
{
    return (g == Friend) ? "Friend" :
           (g == Family) ? "Family" :
                           "Work";
}

/* --------- 追加 --------- */
void add_contact(Contact* c, int* count)
{
    int tmp;
    printf("enter name:\n");
    fgets(c->name, sizeof(c->name), stdin);
    c->name[strcspn(c->name, "\n")] = 0;        /* 改行除去 */

    printf("enter the phone number (No '-'):\n");
    fgets(c->phone_num, sizeof(c->phone_num), stdin);
    c->phone_num[strcspn(c->phone_num, "\n")] = 0;

    printf("enter group (0:Friend 1:Family 2:Work):\n");
    if (scanf("%d%*c", &tmp) != 1 || tmp < 0 || tmp > 2) {
        puts("⚠️  invalid group!");
        return;
    }
    c->g = (Group)tmp;

    (*count)++;
    puts("✅ added!");
}

/* --------- 一覧表示 --------- */
void show_contacts(int count)
{
    puts("----- CONTACT LIST -----");
    for (int i = 0; i < count; ++i) {
        printf("%d. %-10s  %-15s  [%s]\n",
               i + 1,
               book[i].name,
               book[i].phone_num,
               group_to_str(book[i].g));
    }
}

/* --------- メイン --------- */
int main(void)
{
    int opt;

    while (1) {
        puts("\n----- menu -----");
        puts("0: add contact");
        puts("1: watch contact");
        puts("2: finish");
        printf("select> ");

        if (scanf("%d%*c", &opt) != 1) {  /* %*c で改行捨てる */
            puts("入力エラー");
            return 1;
        }

        switch (opt) {
            case 0:
                if (num >= MAX) {
                    puts("上限です！");
                    break;
                }
                add_contact(&book[num], &num);  /* ★ ポインタ渡し */
                break;

            case 1:
                show_contacts(num);
                break;

            case 2:
                puts("bye");
                return 0;

            default:
                puts("⚠️  無効な選択肢");
        }
    }
}
