#include <stdio.h>
#include <stdlib.h>

int main () {

    int num;
    int num2;
    float answer = 0;
    char word;

    printf("Input a mathematical symbol\n");
    scanf("%c", &word);
    printf("Your symbol was: %c, now input a number\n", word);

    if (word == '/') {

        scanf("%d", &num);
        printf("Your number hello was: %d, now input another number\n", num);
        scanf("%d", &num2);
        printf("Your new number was: %d\n", num2);

        answer = (float)num/(float)num2;

        printf("%d / %d = %f", num, num2, answer);

        return 0;

    } else {

        scanf("%d", &num);
        printf("Your number was: %d, now input another number\n", num);
        scanf("%d", &num2);
        printf("Your new number was: %d\n", num2);

        if(word == '+') {

            answer = (float)num + (float)num2;
            printf("%d + %d = %f", num, num2, answer);

        }

        if(word == '-') {

            answer = (float)num - (float)num2;
            printf("%d - %d = %f", num, num2, answer);

        }

        if(word == '*') {

            answer = (float)num * (float)num2;
            printf("%d * %d = %f", num, num2, answer);

        }

        return 0;

    }

}
