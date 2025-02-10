#include<stdio.h>
int main(){
    int t,n;
    int temp;
    int a[n], b[n], c[n];
    scanf("%d",&t);
    for(int i =0;i<t;i++){
        scanf("%d", &n);
        for(int j =0; j<n;j++){
            scanf("%d", &a[j]);
            scanf("%d", &b[j]);
        }
    }
    for(int i =0; i<n;i++){
if(a[i] > a[i+1]){
temp = a[i];
a[i] = a[i + 1];
a[i + 1] = temp;
}
    }
    for(int i = 0;i<n;i++){
        c[i] = a[i] + b[i];
    }
    for(int i = 0;i<n;i++){
        if(c[i] > 3){
            printf("YES");
        }
        else{
            printf("NO");
        }
    }
    return 0;
}