#include <stdio.h>

int main()
{
    int mat1[3][3], mat2[3][3], result[3][3];
    int i, j, k;

    // Input the elements of the first matrix
    printf("Enter the elements of the first 3x3 matrix:\n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("Enter element mat1[%d][%d]: ", i, j);
            scanf("%d", &mat1[i][j]);
        }
    }

    // Input the elements of the second matrix
    printf("Enter the elements of the second 3x3 matrix:\n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("Enter element mat2[%d][%d]: ", i, j);
            scanf("%d", &mat2[i][j]);
        }
    }

    // Multiply the matrices
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            result[i][j] = 0;
            for (k = 0; k < 3; k++)
            {
                result[i][j] += mat1[i][k] * mat2[k][j];
            }
        }
    }

    // Display the result
    printf("Resultant 3x3 matrix after multiplication:\n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("%d ", result[i][j]);
        }
        printf("\n");
    }

    return 0;
}
