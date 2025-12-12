#include <stdio.h>

int list[100];

int main()
{
    printf("Enter list: ");
    scanf("%d", &list[0]);

    int i;

    for (i=0; i<100; i++) 
    {
       if (list[i] % 2 == 0) 
       {
        printf("Even numbers: %d ", list[i]);
       }
    }
}