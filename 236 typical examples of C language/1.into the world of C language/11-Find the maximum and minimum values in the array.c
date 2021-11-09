#include <stdio.h>

int main(){
    int arr[3][4] = { 0 };
    printf("Please init the array:\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            printf("%d\t", arr[i][j]);
        }
        printf("\n");
    }
    int max = 0, min = 0;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            if (max < arr[i][j])
            {
                max = arr[i][j];
            }
        }
    }
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            if (min > arr[i][j])
            {
                min = arr[i][j];
            }
        }
    }
    printf("max : %d\t min : %d\n", max,min);
    return 0;
}















