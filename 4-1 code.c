#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("請輸入要加解密的文字:");
    char s[200];
    scanf("%[^\n]",s);
    if(s[0]=='+'){
        for(int i=1;i<strlen(s);i++){
            if(i%2==1){
                s[i]=s[i]+1;
            }
            else{
                s[i]=s[i]+2;
            }
        }
    }
    else{
        for(int i=1;i<strlen(s);i++){
            if(i%2==1){
                s[i]=s[i]-1;
            }
            else{
                s[i]=s[i]-2;
            }
        }
    }
    printf("%s\n",s);
    system("pause");
    return 0;
}
