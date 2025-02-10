#include<stdio.h>
int main(){
    int n;
    scanf("%d", &n);
    int A1[n],A2[n], A3[n];
    for(int i =0; i<n;i++){
        scanf("%d",&A1);
    }
    for(int i =0; i<n;i++){
        scanf("%d",&A2);
    }
    for(int i =0; i<n;i++){
        scanf("%d",&A3);
    }for(int i =0;i<n;i++){
        if(A1[i] + A2[i] + A3[i] == 0){
            printf("YES");
            break;
        }else{
            printf("NO");
            break;
        }
    }
    return 0;
}

