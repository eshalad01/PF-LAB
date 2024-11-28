#include <stdio.h>

struct phone {
    int areacode;
    int exchange;
    int number;
};

int main() {   
    struct phone num1, num2;
    num1.areacode = 212;
    num1.exchange = 767;
    num1.number = 8900;

    printf("Enter area code: ");
    scanf("%d", &num2.areacode);
    printf("Enter exchange: ");
    scanf("%d", &num2.exchange);
    printf("Enter number: ");
    scanf("%d", &num2.number);
    printf("My number is (%03d) %03d-%04d\n", num1.areacode, num1.exchange, num1.number);
    printf("Your number is (%03d) %03d-%04d\n", num2.areacode, num2.exchange, num2.number); //%03d specifies min length. it adds 0 automatically if limit is not filled
    return 0;
}
