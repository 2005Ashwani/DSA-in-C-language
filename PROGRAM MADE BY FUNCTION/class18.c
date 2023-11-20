#include <stdio.h>
#include <stdlib.h>
#include <math.h>
void sparxM();
int a[3][3], i, j;
void main()
{
    sparxM();
}
void sparxM()
{
    int zero = 0;

    // TO GET THE INPUT
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("Enter the elements of matrix a[%d][%d] = ", i, j);
            scanf("%d", &a[i][j]);
        }
        printf("\n");
    }
    // TO GET THE OUTPUT
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("\t%d", a[i][j]);
        }
        printf("\n");
    }

    for (i = 0; i < 3; i++)
    {
        for (i = 0; i < 3; i++)
        {

            if (a[i][j] == 0)
            {
                zero = zero + 1;
            }
        }
    }

    printf("The number of zeroes is %d", zero);
}