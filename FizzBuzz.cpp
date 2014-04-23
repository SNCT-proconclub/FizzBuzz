#include <stdio.h>


int main()
{
    int i;

    for (i = 1; i < 100; i++) {
        if (i % 15 == 0) {
            printf("FizzBuzz");
        }
        else if (i % 21 == 0){
            printf("FizzBouze");
        }
        else if (i % 35 == 0){
            printf("BuzzBouze");
        }
        else if (i % 3 == 0) {
            printf("Fizz");
        }
        else if (i % 5 == 0) {
            printf("Buzz");
        }
        else if (i % 7 == 0) {
            printf("Bouze");
        }
        else {
            printf("%d", i);
        }
	    printf("\n");
    }
    return 0;
}
