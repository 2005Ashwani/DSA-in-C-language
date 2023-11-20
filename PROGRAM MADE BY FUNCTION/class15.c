/* program of swapping two Arrays */
// lec-18
#include <stdio.h>
#include <stdlib.h>
void swaping();
void array1();
void array2();
int a[20], b[20], n_1, n_2, i, j;
int main()
{
    array1();
    array2();
    swaping();
}
void array1()
{
    printf("Enter the size of array A: ");
    scanf("%d", &n_1);
    if (n_1 > 20)
    {
        printf("Error");
    }

    // TO GET THE INPUT FROM THE USER
    for (i = 0; i < n_1; i++)
    {
        printf("Enter the of a_1[%d] = ", i);
        scanf("%d", &a[i]);
    }
    // TO PRINT THE INPUT
    for (j = 0; j < n_1; j++)
    {
        printf("\n The element at a[%d] = %d", j, a[j]);
    }
    printf("\n\n");
}

void array2()
{
    printf("\nEnter the size of array B: ");
    scanf("%d", &n_2);
    if (n_2 > 20)
    {
        printf("Error");
    }

    // TO GET THE INPUT FROM THE USER
    for (i = 0; i < n_2; i++)
    {
        printf("Enter the of b_1[%d] = ", i);
        scanf("%d", &b[i]);
    }
    // TO PRINT THE INPUT
    for (j = 0; j < n_2; j++)
    {
        printf("\n The element at b[%d] = %d", j, b[j]);
    }
}

void swaping()
{
    if (n_1 != n_2)
    {
        printf("\nThe swaping is not performed");
    }

    int temp;
    for (i = 0; i < n_1; i++)
    {
        temp = a[i];
        a[i] = b[i];
        b[i] = temp;
    }
    for (i = 0; i < n_1; i++)
    {
        printf("\nThe element of A after swaping is %d", a[i]);
    }
    printf("\n\n");
    for (i = 0; i < n_2; i++)
    {
        printf("\nThe element of B after swaping is %d", b[i]);
    }
}