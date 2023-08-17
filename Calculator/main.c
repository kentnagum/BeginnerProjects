#include <stdio.h>
#include <stdlib.h>
double a, b, answer;
char op;
int solve();

int main()
{
    printf("Enter first number:");
    scanf("%lf", &a);
    printf("Enter operator:");
    scanf(" %c", &op);
    printf("Enter second number:");
    scanf("%lf", &b);
    solve();
    return 0;
}
int solve(){
    double result;
    if(op == '+'){
        result = a + b;
    }else if(op == '-'){
        result = a - b;
    }else if(op == '/'){
        result = a / b;
    }else if(op = '*'){
        result = a * b;
    }else {
        printf("INVALID OPERATOR!!!");
    }
    printf("%f", result);
    return result;
}
