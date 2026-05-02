#include <stdio.h>

int main() {
    char str[100];
    int i;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    printf("Individual characters are: \n");

    // for লুপের মাধ্যমে প্রতিটি অক্ষর আলাদা করা
    for (i = 0; str[i] != '\0' && str[i] != '\n'; i++) {
        // %c ব্যবহার করে প্রতিটি ক্যারেক্টার এবং একটি স্পেস প্রিন্ট করা হচ্ছে
        printf("%c  ", str[i]); 
    }

    printf("\n");
    return 0;
}