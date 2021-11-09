#include <stdio.h>

void arrDaozhi(int* arr, int sz)
{
    for (int i = 0; i < sz / 2; i++)
    {
        int temp = arr[i];
        arr[i] = arr[sz - 1 - i];
        arr[sz - 1 - i] = temp;
    }
}


void outputArr(int arr[], int sz)
{
    for (int i = 0; i < sz; i++)
    {
        printf("%d\t", arr[i]);
    }
    printf("\n");
}

int main(){
    int arr[10] = { 0 };
    int sz = sizeof(arr) / sizeof(arr[0]);
    for (int i = 0; i < 10; i++)
    {
        arr[i] = i;
    }
    outputArr(arr, sz);
    arrDaozhi(arr, sz);
    outputArr(arr, sz);

    return 0;
}
































