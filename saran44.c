#include<stdio.h>
#include<conio.h>
void  main()
{
    char c;
    printf("Enter a character: ");
    scanf("%c",&c);

    if((c>='A' && c<='Z'))
        printf("%c is an alphabet.",c);
    else
        printf("%c is not an alphabet.",c);

    return 0;
    }
