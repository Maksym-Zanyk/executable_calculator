#include <iostream>
#include <cstring>


int main(int argc, char const *argv[]) {


    int number1 = atoi(argv[1]);
    int number2 = atoi(argv[3]);

    if(argc != 4){
        printf("Usage: Calc_execute 'number1' 'opcode' 'number2'");
    } else {
        if (strcmp(argv[2], "add") == 0) {
            printf("%d + %d = %d", number1, number2, number1 + number2);
        }
        else if (strcmp(argv[2], "sub") == 0) {
            printf("%d - %d = %d", number1, number2, number1 - number2);
        }
        else if (strcmp(argv[2], "mul") == 0) {
            printf("%d * %d = %d", number1, number2, number1 * number2);
        }
        else if (strcmp(argv[2], "div") == 0) {
            if(number2 == 0){
                printf("Division by zero.");
                return 1;
            } else{
            printf("%.2f / %.2f = %.2f", (float)number1, (float)number2, (float)number1 / (float)number2);
            }
        }
    }


    return 0;
}
