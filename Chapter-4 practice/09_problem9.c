#include <stdio.h>

int main()
{
    int n = 65;
    int not_prime = 0;

    if (n == 0 || n == 1)
    {
        not_prime = 1;
    }
    else
    {
        int i = 2;
        do
        {
            if (n % i == 0)
            {
                not_prime = 1;
                break;
            }
            i++;
        } while (i < n);
    }

    if (not_prime)
    {
        printf("The number is not prime: %d\n", n);
    }
    else
    {
        printf("The number is prime: %d\n", n);
    }

    return 0;
}