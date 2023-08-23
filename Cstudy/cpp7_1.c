#include<stdio.h>


int cnt;

void recursive(int cur, int sum){
    if(cur>sum)
        return;
    if(cur==sum)
        cnt++;
    
    recursive(cur+1, sum);
    recursive(cur+2, sum);
    recursive(cur+3, sum);

}

int main(){
    int testcase=0;
    int sum=0;

    scanf("%d", &testcase);

    for(int i=0;i<testcase;++i){
        scanf("%d", &sum);
        recursive(0, sum);
        printf("%d\n", cnt);
        cnt=0;
    }

    

    return 0;
}