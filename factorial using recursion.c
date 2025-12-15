 #include <stdio.h>
int multiply(int a, int b);
int main()
{
    int num1, num2;
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);
    printf("Multiplication = %d", multiply(num1, num2));
    return 0;
}
int multiply(int a, int b)
{
    if (b == 0)
        return 0;
    else
        return a + multiply(a, b - 1);
}


