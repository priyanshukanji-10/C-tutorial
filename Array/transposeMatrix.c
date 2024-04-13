#include <stdio.h>

int main()
{
    int m, n;
    // Getting inputs of rows and columns.
    printf("Enter number of rows:");
    scanf("%d", &m);
    printf("Enter number of columns:");
    scanf("%d", &n);
    int matrix[m][n]; // 2D Array

    // Input values into the matrix
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("Enter value of matrix[%d][%d]: ", i, j);
            scanf("%d", &matrix[i][j]);
        }
    }

    // Transpose the matrix
    int transposed[n][m]; // Transposed matrix

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            transposed[i][j] = matrix[j][i];
        }
    }

    // Print the transposed matrix
    printf("Transposed Matrix:\n");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            printf("%d ", transposed[i][j]);
        }
        printf("\n");
    }

    return 0;
}
void transpose(int **p, int n)
{
}
