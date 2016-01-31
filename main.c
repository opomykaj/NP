#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x,bit;
    printf("Podaj liczbe:");
    scanf("%d",&x);
    bit=x&16;       // reprezentacja 1 bitowa tylko na 5 bicie
    if (bit)
    printf("Bit nr. 5 zapala sie\n");
    bit=x&1024;     // reprezentacja 1 bitowa tylko na 11 bicie
    if(bit)
    printf("Bit nr. 11 zapala sie\n");
}
