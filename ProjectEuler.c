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

void problem_2(){
    int list[] = {2, 3};
    int sum = 0;
    while (list[0] <= 4000000){
        int temp = list[0] + list[1];
        if (list[0] % 2 == 0){
            sum += list[0];
        }
        list[0] = list[1];
        list[1] = temp;
    }
    printf("%d\n", sum);
}

void problem_3(){
    long num = 600851475143;
    int temp = 0;
    while (num%2 == 0){
        num = num/2;
    }
    
    for (int i = 3; i < num/2; i+=2){
        for (int j = 3; j <= i/2; j +=2){
            if (i%j != 0){
                while (num%i == 0){
                    num = num/i;
                    if (num > i){
                        temp = num;
                    }
                    else{
                        temp = i;
                    }
                }
            }
        }
    }
    if (temp != 0){
        printf("%d\n", temp);
    }
    else{
        printf("%ld\n", num);
    }
}

main(){
	printf("Hello World\n");
}
