#include <stdio.h>

int main(void){
    int num1, num2;
    int a = 0, b = 0;

	scanf("%d %d", &num1, &num2);

	
	while (num1 != 0) {
		a *= 10;
		a += num1 % 10;
		num1 /= 10;
	}
	while (num2 != 0) {
		b *= 10;
		b += num2 % 10;
		num2 /= 10;
	}
	
	if (a > b)
		printf("%d\n", a);
	else
		printf("%d\n", b);
        
    return 0;
}