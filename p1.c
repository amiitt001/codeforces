#include <stdio.h>
#include <string.h>

int main()
{
    char word[101];
    int n, len;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        scanf("%s", word);
        len = strlen(word);
        if(len>n){
            printf("%c%d%c\n",word[0],len-2,word[len-1]);
        }else{
            printf("%s\n",word);
        }
    }

    return 0;
}
