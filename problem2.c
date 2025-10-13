#include <stdio.h>
#include <stdlib.h>
#include <string.h>

unsigned __int64 c = 0x000000000fffffffff;

void updateB(unsigned int *b)
{
    memcpy(b, &c, sizeof(c));
}

int main(int argc, char **argv)
{
    unsigned int orig_a = 10, a = 10;
    unsigned int b = 10;
    printf("a= %d, b = %d\n", a, b);
    updateB(&b);
    printf("a= %d, b = %d\n", a, b);
    if (a == orig_a)
    {
        printf("Success. Variable 'a' is unchanged\n");
    }
    else
    {
        printf("Error. Variable 'a' has been changed\n");
    }
    return 0;
}
