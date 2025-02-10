#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
void sort_array(int a[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (a[j] > a[j + 1])
            {
                int temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }
}
void solve()
{
    int n;
    scanf("%d", &n);
    int a[n], b[n], c[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &b[i]);
    }
    sort_array(a, n);

    bool distinct[100] = {false};
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if (!distinct[c[i] % 100])
        {
            distinct[c[i] % 100] = true;
            count++;
        }
    }
    if (count >= 3)
    {
        printf("YES\n");
    }
    else
    {
        printf("NO\n");
    }
}
int main()
{
    int t;
    scanf("%d", &t);
    while(t--)
    {
        solve();
    }
    return 0;
}