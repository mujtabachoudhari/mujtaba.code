#include <stdio.h>
int main()
{
    //    it is working but only when we enter a non-negative integer number,
    //     if i enter any negative value or any english letter then it gives infinite results.

    int n;
    printf("enter number: ");
    scanf("%d", &n);

    int i = 0;

    while (i <= n)
    {
        printf("%d \n", i);
        i++;
    }

    return 0;
}
