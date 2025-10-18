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

    int max = array[0][0];
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if (array[i][j] > max)
            {
                max = array[i][j];
            }
        }
    }

    printf("The Largest Value is : %d", max);

    return 0;
}