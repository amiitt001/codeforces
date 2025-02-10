#include<stdio.h>
#include<ctype.h>
#include<string.h>
int main(){
    char user[101];
    int count = 0;
    scanf("%s",user);
    for(int i =0 ; user[i] != '\0'; i++){
        for (int j = i+1; user[j]!='\0'; j++)
        {
            printf("Checking '%c' against '%c'\n", user[j], user[i]);
            if(user[j]!=user[i]){
                printf("counting... %d\n", count+1);
                count++;
            }else{
                user[j]='';
            }
        }
        
    }
    printf("%d\n", count);
    if (count%2 == 0){
        printf("CHAT WITH HER!");
    }else{
    printf("IGNORE HIM!");
    }
    return 0;
}