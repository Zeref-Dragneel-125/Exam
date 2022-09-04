//
// Created by Thuta Zaw on 9/5/2022.
//


#include "stdio.h"
#include "string.h"

void addition(int first, int second, int* res);
void subtraction(int first, int second, int* res);
void multiply(int first, int second, int* res);
void division(int first, int second, int* res);

int main() {

    char l_username[20];
    char l_password[15];
    int option = 0;
    int x = 0;

    while(x < 1){
        printf("Enter your username : ");
        scanf("%s", &l_username);

        printf("Enter your password : ");
        scanf("%s", &l_password);

        if(strcmp(l_username, "Thuta") == 0){

            if(strcmp(l_password, "12345") == 0){
                printf("Login successfully!\n");
                break;
            }else{
                printf("wrong password!\n");
            }

        }else{
            printf("User doesn't exist, please try again!\n");
        }
    }

    int firstNumber = 0;
    int secondNumber = 0;
    char operator;
    int a = 0;
    int b = 0;
    int result = 0;

    while(a == b){
        printf("Please enter first number : ");
        scanf("%d", &firstNumber);

        printf("Please enter second number : ");
        scanf("%d", &secondNumber);

        printf("Enter operator + or - or * or / : ");
        scanf(" %c", &operator);

        switch(operator){
            case '+':
                addition(firstNumber, secondNumber, &result);
                printf("%d + %d = %d\n", firstNumber, secondNumber, result);
                break;
            case '-':
                subtraction(firstNumber, secondNumber, &result);
                printf("%d - %d = %d\n", firstNumber, secondNumber, result);
                break;
            case '*':
                multiply(firstNumber, secondNumber, &result);
                printf("%d * %d = %d\n", firstNumber, secondNumber, result);
                break;
            case '/':
                division(firstNumber, secondNumber, &result);
                printf("%d / %d = %d\n", firstNumber, secondNumber, result);
                break;
            default:
                printf("Please enter only operator, try again!!\n");
        }
        printf("Press1 to quit program : ");
        scanf("%d", &option);
        if(option == 1){
            break;
        }
    }
}

void addition(int first, int second, int* res){
    *res = first + second;
}

void subtraction(int first, int second, int* res){
    *res = first - second;
}

void multiply(int first, int second, int* res){
    *res = first * second;
}

void division(int first, int second, int* res){
    *res = first / second;
}



