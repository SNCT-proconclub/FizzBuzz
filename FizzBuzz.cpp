#include <stdio.h>
#include <math.h>


int main()
{
    int i,j;
    double t;

    for (i = 1; i < 100; i++) {
        if (i % 15 == 0) {
            printf("FizzBuzz");
        }
        else if (i % 3 == 0) {
            printf("Fizz");
        }
        else if (i % 5 == 0) {
            printf("Buzz");
        }
        else {
            printf("%d", i);
        }

	if((i - 3) % 10 == 0){
		printf("?");
	}

        t = sqrt(i); //平方根の値を算出。
        j = (int)t; //整数値のみを引き出す。

        if((j*100) % (int)(t*100) == 0){
            printf("!");
        }

        //printf("  %lf",t);テスト用

	printf("\n");

    }
    return 0;
}
