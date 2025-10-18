#include <stdio.h>

int main()
{
    int row, col;

    printf("Enter the row of an array : ");
    scanf("%d", &row);
    printf("Enter the col of an array : ");
    scanf("%d", &col);

    int array[row][col];

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            printf("array[%d][%d] : ", i, j);
            scanf("%d", &array[i][j]);
        }
    }

    printf("Normal Matrix :\n");
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            printf("%d ", array[i][j]);
        }
        printf("\n");
    }

    printf("Transpose Matrix :\n");
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            printf("%d ", array[j][i]);
        }
        printf("\n");
    }

    return 0;
}