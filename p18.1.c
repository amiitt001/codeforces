#include <stdio.h>

int main() {
    int t;
    scanf("%d", &t);

    while (t--) {
        int n;
        scanf("%d", &n);

        int a[n], b[n], c[n];
        for (int i = 0; i < n; i++) {
            scanf("%d %d", &a[i], &b[i]);
        }
        for (int i = 0; i < n - 1; i++) {
            for (int j = 0; j < n - i - 1; j++) {
                if (a[j] > a[j + 1]) {
                    int temp = a[j];
                    a[j] = a[j + 1];
                    a[j + 1] = temp;
                }
            }
        }

        for (int i = 0; i < n; i++) {
            c[i] = a[i] + b[i];
        }

        for (int i = 0; i < n; i++) {
            if (c[i] > 3) {
                printf("YES\n");
            } else {
                printf("NO\n");
            }
        }
    }

    return 0;
}
