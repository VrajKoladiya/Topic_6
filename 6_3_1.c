#include <stdio.h>

main() 
{
    int n, sum = 0, i;

    printf("Enter any number: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++)
	{
        sum += i;
    }

    printf("The sum of all numbers:%d\n",sum);

}