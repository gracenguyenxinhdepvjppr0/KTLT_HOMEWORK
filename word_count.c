#include <stdio.h>

char *str;

int word_count(char *s)
{
    int i;
    int count = 0;

    while (s[0] = ' ')
    {
      for (i = 0; i < strlen(s); i++)
      {
        s[i] = s[i+1];
      }  
    }

    for (i = 0; i < strlen(s); i++)
    {
        if (s[i] == ' ')
        {
            count ++;
        }
    }

    return count; 
}

int main()
{
    printf("Enter a string: ");
    scanf("%s", str);
    printf("\nWords counted: %d", word_count(*str));

    return 0;
}