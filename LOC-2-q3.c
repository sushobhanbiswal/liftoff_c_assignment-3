#include <stdio.h>
void main()
{
    char s[200];
    int c, i;
    c=0;
 
    printf("Enter the string:\n");
    scanf("%[^\n]s", s);
    for (i = 0;s[i] != '\0';i++)
    {
        if (s[i] == ' ' && s[i+1] != ' ')
            c++;    
    }
    printf("Number of words in given string are: %d\n", c + 1);
}