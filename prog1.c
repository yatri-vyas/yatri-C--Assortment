#include <stdio.h>

int main()
{
    int size;

    printf("Enter the Size of an Array :");
    scanf("%d", &size);

    int array[size];

    for (int i = 0; i < size; i++)
    {
        printf("array[%d] : ", i);
        scanf("%d", &array[i]);
    }

    for (int i = 0; i < size; i++)
    {
        if ( array[i] <= 0)
        {
            printf("\n Negative Value: %d", array[i]);
        }
    }

    return 0;
}