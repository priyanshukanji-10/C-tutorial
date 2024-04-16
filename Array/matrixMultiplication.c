#include <stdio.h>

void multiplyMatrix(int r1, int c1, int r2, int c2, int matrix1[r1][c1], int matrix2[r2][c2]);

int main()
{
    int r1, r2, c1, c2;

    printf("Matrix multiplication:\n");
    printf("Enter r1:");
    scanf("%d", &r1);
    printf("Enter c1:");
    scanf("%d", &c1);

    printf("Enter matrix1 %d x %d:\n", r1, c1);
    int matrix1[r1][c1];
    for (int i = 0; i < r1; i++)
    {
        for (int j = 0; j < c1; j++)
        {
            printf("Enter value of matrix1[%d][%d]: ", i, j);
            scanf("%d", &matrix1[i][j]);
        }
    }

    printf("Enter r2:");
    scanf("%d", &r2);
    printf("Enter c2:");
    scanf("%d", &c2);

    printf("Enter matrix2 %d x %d:\n", r2, c2);
    int matrix2[r2][c2];
    for (int i = 0; i < r2; i++)
    {
        for (int j = 0; j < c2; j++)
        {
            printf("Enter value of matrix2[%d][%d]: ", i, j);
            scanf("%d", &matrix2[i][j]);
        }
    }

    multiplyMatrix(r1, c1, r2, c2, matrix1, matrix2);
    return 0;
}

void multiplyMatrix(int r1, int c1, int r2, int c2, int matrix1[r1][c1], int matrix2[r2][c2])
{
    if (c1 != r2)
    {
        printf("Number of columns in matrix 1 must be equal to number of rows in matrix 2\n");
        return;
    }

    int result[r1][c2];

    printf("Resultant matrix:\n");
    for (int i = 0; i < r1; i++)
    {
        for (int j = 0; j < c2; j++)
        {
            result[i][j] = 0;

            for (int k = 0; k < r2; k++)
            {
                result[i][j] += matrix1[i][k] * matrix2[k][j];
            }

            printf("%d\t", result[i][j]);
        }

        printf("\n");
    }
}
