#include <stdio.h>

int main() {
    char str[100];
    int i;
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    for (i = 0; str[i] != '\0' && str[i] != '\n'; i++) {
 }
printf("Length = %d\n", i);
 return 0;
}j