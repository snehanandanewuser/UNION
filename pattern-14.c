#include <stdio.h>

int main() 
{
    int i, j, n;
    printf("Enter the number of lines:\n");
    scanf("%d", &n);
    for (i = n; i >= 1; i--) 
    {
        for (j = 1; j <= i; j++) 
        {
            printf("%c", (char)(i + 64));
        }
        printf("\n");
    }

    return 0;
}
