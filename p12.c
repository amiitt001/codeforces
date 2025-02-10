#include<stdio.h>
#include<ctype.h>
int main(){
    char user[101];
    int count = 0;
    scanf("%s",user);
    // for(int i =0; user[i] != '\0'; i++){
    // if(isupper(user[i])){
    //     user[i] = tolower(user[i]);
    // }
    //}
    for(int i =1 ; user[i] != '\0'; i++){
        for(int j =1; user[j] != '\0'; j++){
            if (user[i] != user[j])
            {
                count++;
            }
            
        }
    }
    if (count%2 == 0){
        printf("CHAT WITH HER!");
    }
    else{
    printf("IGNORE HIM!");
    }
    return 0;
}