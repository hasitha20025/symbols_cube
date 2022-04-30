#include <stdio.h>

int main() {

    int num,i,j;
    char symbol;
    printf("Input any symbols:-");
    scanf("%c",&symbol);
    printf("Input rows number:-");
    scanf("%d",&num);

    for (i = 1; i <= num; i++)
    {
        for (j = 1; j <= num; j++)
        {
            printf("%c",symbol);
            printf(" ");
        }
        printf("\n");
    }
    return 0;
}