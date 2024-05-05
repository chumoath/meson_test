#include <stdio.h>
#include <stdlib.h>
#include "algorithm.h"

int main(int argc, const char *argv[])
{
    int a, b, ret;
    char op;

    if (argc != 4) {
        exit(1);
    }

    a = atoi(argv[1]);
    b = atoi(argv[3]);
    op = argv[2][0];
    
    switch (op)
    {
    case '+':
        ret = add(a, b);
        break;
    case '-':
        ret = sub(a, b);
        break;
    default:
        break;
    }

    printf ("ret = %d\n", ret);
    exit(0);
}