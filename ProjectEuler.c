#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void problem_1(){
    int sum = 0;
    for (int i = 0; i < 1000; i += 5){
        if (i % 3 == 0){
            sum += i;
        }
    }
    printf("%d\n", sum);
}

main(){
	printf("Hello World\n");
}
