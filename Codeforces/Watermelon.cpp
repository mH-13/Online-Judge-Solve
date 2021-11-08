#include <stdio.h>
int main()
{
    int i;
    scanf("%d", &i);
    if (i == 2)
    {
        printf("No");
    }
    else if (i % 2 == 0)
    {
        printf("Yes");
    }
    else
    {
        printf("No");
    }
    return 0;
}
