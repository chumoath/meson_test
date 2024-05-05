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
    
    // TODO: 将op改为动态扩展的；让每个模块自己注册；用好constructor；多参考开源代码框架如何实现
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