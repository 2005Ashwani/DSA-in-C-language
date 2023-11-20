// How TO PRINT 2-D MATERIX
// LECT-19
#include <stdio.h>
#include <stdlib.h>
void mat();
int i, j, a[2][2];

void main()
{
    mat();
}
void mat()
{
    // TO GET INPUT
    for (i = 0; i < 2; i++)
    {
        for (size_t j = 0; j < 2; j++)
        {

            printf("Enter the materix a[%d][%d] ", i, j);
            scanf("%d", &a[i][j]);
        }
        printf("\n");
    }

    // TO GET OUTPUT

    for (i = 0; i < 2; i++)
    {
        for (size_t j = 0; j < 2; j++)
        {

            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
}