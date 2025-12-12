#include <stdio.h>

int number;

bool prime_check(int n)
{
    if (n < 2) 
        return false;
    for (int i = 2; i <= n/2; i++) 
    {
        if (n % i == 0)
            return false;
    }
    return true;
}

int main()
{
    printf("Enter a number: ");
    scanf("%d", &number);
    
    if (prime_check(number))
        printf("%d is a prime number.\n", number);
    else
        printf("%d is not a prime number.\n", number);
    return 0;
}