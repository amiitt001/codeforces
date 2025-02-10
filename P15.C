#include <stdio.h>

int main() {
    int n, count = 0;
    scanf("%d", &n);
    
    char color[n + 1];  // +1 to accommodate null terminator for safety
    scanf("%s", color);

    for (int i = 0; i < n - 1; i++) {  // Fix: Loop from 0 to n-2
        if (color[i] == color[i + 1]) {  // Compare adjacent elements
            count++;
        }
    }

    printf("%d\n", count);
    return 0;
}
