#include <stdio.h>

int get_height(void){
    int height=0;
    
    printf("높이를 입력하세요 : ");
    scanf("%d", &height);

    return height;
}

int print_triangle(int height){
    int i, k;

    for(i=0;i<height;i++){
        for(k=height-1;k>i;k--){
            printf("$");
        }

        for(k=0;k<2*i+1;k++){
            printf("*");
        }

        for(k=height-1;k>i;k--){
            printf("$");
        }

        printf("\n");
    }

    return 0;
}

int main(void){
    int height;

    height = get_height();
    print_triangle(height);

    return 0;
}