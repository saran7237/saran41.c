#include <stdio.h>
void main()
{
    char c;
    int isLowercaseVowel, isUppercaseVowel;
    printf("Enter an alphabet: ");
    scanf("%c",&c);
    isLowercaseVowel = (d == 'a' || d == 'e' || d == 'i' || d == 'o' || d== 'u');
   isUppercaseVowel = (d == 'A' || d== 'E' || d == 'I' || d == 'O' || d == 'U');
    if (isLowercaseVowel || isUppercaseVowel)
        printf("%d is a vowel.", d);
    else
        printf("%d is a consonant.", d);
    return 0;
}
