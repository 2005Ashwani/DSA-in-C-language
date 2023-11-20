/* COMBINING TWO RECORD OF ARRAY IN A SINGLE ARRAY IN SHORTED FORM*/
//lec-16
#include <stdio.h>
#include <stdlib.h>
void array1();
void array2();
void array3();
void shorting();
int size, a[20], b[20], c[40], size_1, size_2, i, j, temp;

int main()
{
    array1();
    array2();
    array3();
    shorting();
}
// THIS FOR ARRAY-1
void array1()
{
    printf("Enter the size of the array A: ");
    scanf("%d", &size_1);
    if (size_1 > 20)
    {
        printf("Error");
    }
    // THIS IS TO GET INPUT
    for (i = 0; i < size_1; i++)
    {
        printf("\n Enter element a[%d] : ", i);
        scanf("%d", &a[i]);
    }
    // THIS IS TO SHOW THE OUTPUT
    for (i = 0; i < size_1; i++)
    {
        printf("\n Enter elements are a[%d] = %d", i, a[i]);
    }
    printf("\n");
}

// THIS FOR ARRAY-2
void array2()
{
    printf("\nEnter the size of the array B: ");
    scanf("%d", &size_2);
    if (size_2 > 20)
    {
        printf("Error");
    }
    // THIS IS TO GET INPUT
    for (i = 0; i < size_1; i++)
    {
        printf("\n Enter element b[%d] : ", i);
        scanf("%d", &b[i]);
    }

    // THIS IS TO SHOW THE OUTPUT
    for (i = 0; i < size_1; i++)
    {
        printf("\nEnter elements are b[%d] = %d ", i, b[i]);
    }
}

void array3()
{
    j = 0;
    // THIS IS TO MERGE THE ARRAY-1
    for (i = 0; i < size_1; i++)
    {
        c[j] = a[i];
        j++;
    }
    // THIS IS TO MERGE THE ARRAY-2
    j = 0;
    for (i = size_1; i < (size_1 + size_1); i++)
    {
        c[i] = b[j];
        j++;
    }
    // THIS IS TO PRINT THE ARRAY-3 AFTER THE MERGE OF ARRAY-1 AND ARRAY-2
    for (i = 0; i < (size_1 + size_2); i++)
    {
        printf("\nThe element after the merging is c[%d] = %d", i, c[i]);
    }
}
void shorting()
{
    size = size_1 + size_2;
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < (size - i - 1); j++)
        {
            if (c[j] > c[j + 1])
            {
                temp = c[j];
                c[j] = c[j + 1];
                c[j + 1] = temp;
            }
        }
    }
    for (int i = 0; i < size; i++)
    {
        printf("\n\nThe array after shorting c[%d] = %d", i, c[i]);
    }
}