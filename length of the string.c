#include <stdio.h>
int main() {
    char str[100], rev[100];
    int i = 0, length = 0;
    printf("Enter a string: ");
    gets(str);  
    while (str[length] != '\0') {
        length++;
    }
    for (i = 0; i < length; i++) {
        rev[i] = str[length - i - 1];
    }
    rev[i] = '\0';
    printf("Length of the string = %d\n", length);
    printf("Reversed string = %s\n", rev);
    return 0;
}










