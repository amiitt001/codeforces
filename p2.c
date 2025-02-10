#include <stdio.h>
int main()
{
    int n, problems = 0;
    int Petya, Vasya, Tonya;
    printf("Enter number of problems\n");
    scanf("%d", &n);
    printf("Enter certanity of Petya, Vasya,and Tonya\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d%d%d", &Petya, &Vasya, &Tonya);
        if (Petya + Vasya + Tonya >= 2)
        {
            problems++;
        }
    }
    printf("%d\n", problems);
    return 0;
}