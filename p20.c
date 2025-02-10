#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
void main()
{
    int t, n;
    scanf("%d", &t);
    for (int i = 0; i < t; i++)
    {
        scanf("%d", &n);
        int a[n], b[n], c[n];
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &a[j]);
            for (int i = 0; i < n - 1; i++)
            {
                for (int k = 0; k< n - i - 1; k++)
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
    for (int j = 0; j < n; j++)
    {
        scanf("%d", &b[j]);
    }
    for(int j =0 ;j<n;j++){
        c[j] = a[j] + b[j];
    }
        bool distinct[1000001] = {false};
        int count = 0;
        
        for (int i = 0; i < n; i++) {
            c[i] = a[i] + b[i];
            if (!distinct[c[i]]) {
                distinct[c[i]] = true;
                count++;
            }
        }
         
        if (count >= 3) {
            printf("YES\n");
        } else {
            printf("NO\n");
        } 
    }
}