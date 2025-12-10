#include <stdio.h>

int len;
char *str;

int main()
{
    printf("Nhap chuoi: ");
    scanf("%s", str);

    len = strlen(str);

    if (len > 1)
    {
        int i;

        for (i = 0; i <= len / 2; i++)
        {
            swap(&str[i], &str[len - i]);
        }

    }
    else
    {
        printf("%s", str);
    }

    return 0;
}