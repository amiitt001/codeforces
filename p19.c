#include <stdio.h>
#include <stdlib.h>


int compare(const void *a, const void *b) {
    return (*(int*)a - *(int*)b);
}

void solve() {
    int n;
    scanf("%d", &n);
    
    int final_count[n]; 
    for (int i = 0; i < n; i++) final_count[i] = 0;

    
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            int customers;
            scanf("%d", &customers);
            final_count[j] += customers;
        }

        int min_index = 0;
        for (int j = 1; j < n; j++) {
            if (final_count[j] < final_count[min_index]) {
                min_index = j;
            }
        }
        final_count[min_index] = 0;
    }

    
    qsort(final_count, n, sizeof(int), compare);

    
    int mex = 0;
    for (int i = 0; i < n; i++) {
        if (final_count[i] == mex) {
            mex++;
        } else if (final_count[i] > mex) {
            break;
        }
    }

    printf("%d\n", mex);
}

int main() {
    int t;
    scanf("%d", &t);
    
    while (t--) {
        solve();
    }
    
    return 0;
}
