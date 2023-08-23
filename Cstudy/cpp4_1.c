#include <stdio.h>

int main(void){
    int num, k;
    int ko_sum = 0;
    int ma_sum = 0;
    double ko_average, ma_average;
    int i = 0;
    int id, korean, math;
    int data[10][3];
    
    for(num = 0;num != 5;){
        printf("1. 입력, 2. 전체정보출력, 3. 국어점수평균, 4. 수학점수평균, 5. 종료\n");
        scanf("%d", &num);

        if(num==1){
            if(i<10){
                printf("아래의 내용을 차례로 입력하세요.\n");
                printf("    학번    국어점수   수학점수\n");
                scanf("%d %d %d", &id, &korean, &math);
                data[i][0] = id;
                data[i][1] = korean;
                data[i][2] = math;
                i++;
            } 
        }

        else if(num == 2){
            for(k=0;k<i;k++)
                printf("학번 : %d, 국어점수 : %d, 수학점수 : %d\n", data[k][0], data[k][1], data[k][2]);
        }

        else if(num == 3){
            for(k=0;k<i;k++)
                ko_sum += data[k][1];
            ko_average = (double)ko_sum/i;
            printf("국어 평균은 %lf입니다.\n", ko_average);
        }

        else if(num == 4){
            for(k=0;k<i;k++)
                ma_sum += data[k][2];
            ma_average = (double)ma_sum/i;
            printf("수학 평균은 %lf입니다.\n", ma_average);
        }
    }

    if(num == 5){
        printf("프로그램을 종료합니다.\n");
    }

    return 0;
}