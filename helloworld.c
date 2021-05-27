#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{    char ch[100];
    fgets(ch,100,stdin);
    printf("Hello, World!\n");
    printf("%s",ch);

    return 0;
}
