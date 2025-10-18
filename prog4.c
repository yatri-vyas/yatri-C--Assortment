#include <stdio.h>

int main()
{
    int row, col;

    printf("Enter the row of an array : ");
    scanf("%d", &row);
    printf("Enter the col of an array : ");
    scanf("%d", &col);

    int array[row][col];

    printf("Enter array's element : \n");
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            printf("array[%d][%d] : ", i, j);
            scanf("%d", &array[i][j]);
        }
    }

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            printf("%d ", array[i][j]);
        }
        printf("\n");
    }

    int num1, num2, sum = 0;

    printf("Enter row number : ");
    scanf("%d", &num1);

    printf("Elements of row %d : ", num1);
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if (num1 == i)
            {
                printf("%d ", array[i][j]);
                sum += array[i][j];
            }
        }
    }
    printf("\nThe sum of row %d is : %d .", num1, sum);

    printf("\n Enter column number:");
    scanf("%d", &num2);
    printf("Elements of column %d: ", num2);
    sum = 0;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if (num2 == j)
            {
                printf("%d ", array[i][j]);
                sum += array[i][j];
            }
        }
    }
    printf("\nThe sum of column %d is : %d .", num2, sum);
    return 0;
}