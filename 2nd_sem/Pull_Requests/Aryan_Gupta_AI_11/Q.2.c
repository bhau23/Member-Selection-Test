#include <stdio.h>
int main()
{
    int N;
    int sum = 0;

    printf("Enter the upper limit:");
    scanf("%d", &N);

    for (int i = 1; i < N; i++)
    {
        if (i % 3 == 0 || i % 5 == 0)
        {
            sum = sum + i;
        }
    }
    printf("The sum is:%d", sum);

    return 0;
}