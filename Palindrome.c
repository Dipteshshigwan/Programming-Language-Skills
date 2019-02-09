#include <stdio.h>
#include <string.h>

int main()
{
    char strl[1000],revstrl[1000];
    gets(strl);
    revstrl = strrev(strl);
    if(strl == revstrl)
    printf("Palindrome ");
    else
    printf("Not Palindrome");
    
}
