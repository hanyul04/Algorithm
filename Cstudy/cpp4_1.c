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
        printf("1. �Է�, 2. ��ü�������, 3. �����������, 4. �����������, 5. ����\n");
        scanf("%d", &num);

        if(num==1){
            if(i<10){
                printf("�Ʒ��� ������ ���ʷ� �Է��ϼ���.\n");
                printf("    �й�    ��������   ��������\n");
                scanf("%d %d %d", &id, &korean, &math);
                data[i][0] = id;
                data[i][1] = korean;
                data[i][2] = math;
                i++;
            } 
        }

        else if(num == 2){
            for(k=0;k<i;k++)
                printf("�й� : %d, �������� : %d, �������� : %d\n", data[k][0], data[k][1], data[k][2]);
        }

        else if(num == 3){
            for(k=0;k<i;k++)
                ko_sum += data[k][1];
            ko_average = (double)ko_sum/i;
            printf("���� ����� %lf�Դϴ�.\n", ko_average);
        }

        else if(num == 4){
            for(k=0;k<i;k++)
                ma_sum += data[k][2];
            ma_average = (double)ma_sum/i;
            printf("���� ����� %lf�Դϴ�.\n", ma_average);
        }
    }

    if(num == 5){
        printf("���α׷��� �����մϴ�.\n");
    }

    return 0;
}