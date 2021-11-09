#include <stdio.h>

int main(){
    int sum = 0;
    int begin = 0, end = 0, d = 0;
    printf("Please enter the number of begin:\n");
    scanf("%d", &begin);
    printf("Please enter the number of end:\n");
    scanf("%d", &end);
    printf("Please enter the lenth of step:\n");
    scanf("%d", &d);

    for (int i = begin; i <= end; i += d)
    {
        sum += i;
    }

    printf("The number of sum is:%d\n", sum);

    return 0;
}


























