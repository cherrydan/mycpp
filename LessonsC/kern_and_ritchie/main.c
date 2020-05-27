#include <stdio.h>
#include <stdlib.h>


void reverse(char s[])
{
    int i = 0;

    while(s[i] != '\0')
        {
            i++;
        }
    for(int k = i; k >= 0; k--)
        {
            printf("%c", s[k]);

        }

}


int main()
{
    char s1[] = "Hello, world!";
    reverse(s1);

    return 0;
}
