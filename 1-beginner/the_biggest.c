#include <stdio.h>

int main()
{

    int a, b, c, the_biggest;

    scanf("%d%d%d", &a, &b, &c);

    the_biggest = (a + b + abs(a - b)) / 2;

    if (the_biggest >= c)
    {
        printf("%d eh o maior\n", the_biggest);
    }
    else
    {
        printf("%d eh o maior\n", c);
    }

    return 0;
}
