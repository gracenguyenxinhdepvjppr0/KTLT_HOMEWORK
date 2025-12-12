#inlcude <stdio.h>

int main()
{
    int i;
    for (i = 0; i < 10; i++) 
    {
        if (i % 3 == 0)
        {
            printf("fizz\n");
        }
        else if (i % 5 == 0) 
        {
            printf("buzz\n");
        }   
        else 
        {    
            printf("%d\n", i);
        }
    }
}