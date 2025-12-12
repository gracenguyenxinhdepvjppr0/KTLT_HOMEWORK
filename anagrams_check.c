#inlcude <stdio.h>
#include <string.h>

char *str1, *str2;

<<<<<<< HEAD
bool anagram(char *s1, *s2)
{
    int count[256] = {0};
    int i;

    for (i = 0; s1[i] && s2[i]; i++) 
    {
        count[(unsigned char)s1[i]]++;
        count[(unsigned char)s2[i]]--;
    }

    if (s1[i] || s2[i])
        return false;

    for (i = 0; i < 256; i++) 
    {
        if (count[i] != 0)
            return false;
    }

    return true;
}

int main()
{
    printf("Enter first string: ");
    scanf("%s", str1);
    printf("\nEnter second string: ");
    scanf("%s", str2);

    if (anagram(str1, str2))
        printf("The strings are anagrams.\n");
    else
        printf("The strings are not anagrams.\n");

    return 0;
}
=======
bool anagrams_check(char *s1, *s2)
{
}
>>>>>>> dfe3ef1865573f9fbaaf391c5df9bc2aff8c5490
