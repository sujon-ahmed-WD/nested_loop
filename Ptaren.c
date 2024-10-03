#include<stdio.h>
int main()
{
    int N ,row,col;
    printf("ENter the N value;\n");
    scanf("%d",&N);
    for(row=N; row>=1; row--)
    {
        for(col=1 ;col<=row;col++ )
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}