#include <stdio.h>

int main()
{
    char *str = "Hello, world";

    char *ptr = str;

    printf("%c\n",*ptr);
    printf("%c\n",*ptr++);
    printf("%c\n",*(ptr+2));
    printf("%c\n",*ptr);
    printf("%d\n",&ptr);
}

/*
    Given a single linked list and two position p1, p2.
    Reverse that portion of linked list.
*/