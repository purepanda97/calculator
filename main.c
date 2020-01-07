#include <studio.h>

int add(int, int);
int sub(int, int);
int div(int, int);
int multi(int, int);

int main(int argc, char* argv[])
{
    int a, b, c;
    char operator;

    printf("Please enter a expression");
	printf("수식을 입력하세요:");
    scanf("%d %c %d", &a, &operator, &b);

    switch(operator)
    {
        case '+':
        c = a + b;
        break;
        
        case '-':
        c = a - b;
        break;

        case '*';
        c = a * b;
        break;

        case '/';
        c = a / b;
        break;
    }
}
