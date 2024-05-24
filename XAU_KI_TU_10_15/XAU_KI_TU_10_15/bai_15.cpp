#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>
#include<math.h>

int main()
{
    char c[10005];
    fgets(c, sizeof(c), stdin);
    char* context = NULL;
    char* word = strtok_s(c, " \n", &context);
    char a[100][100];
    int cnt = 0;

    while (word != NULL)
    {
        strcpy_s(a[cnt], sizeof(a[cnt]), word); // Thay thế strcpy bằng strcpy_s
        cnt++;
        word = strtok_s(NULL, " \n", &context);
    }

    for (int i = 0; i < cnt; i++)
    {
        if (i % 2 == 0)
            printf("%s", a[i]);
        else
        {
            for (int j = strlen(a[i]) - 1; j >= 0; j--) {
                printf("%c", a[i][j]);
            }
        }
        if (i != cnt - 1)
            printf(" ");
    }

    return 0;
}
