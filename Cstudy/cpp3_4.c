#include <stdio.h>

int main(void){
    int i, a=0, b=0;
    char str[100001];
    
    scanf("%s", &str);

    for(i=0; str[i]!='\0'; i++){
        if(str[i]=='(')
            a++;
        if(str[i]==')')
            b++;
    }
    printf("%d %d", a, b);
        
    return 0;
}