#include <stdio.h>
int main()
{
    int N, row, col;
    printf("Enter N = ");
    scanf("%d", &N);
    for (row = 1; row <= N; row++)
    {
        for (col = 1; col <= row; col++)
        {
            printf("%d ", col);
        }
        printf("\n");
    }
    return 0;
}