#include <glib-2.0/glib.h>
#include "algorithm.h"

gint64 sub(gint64 a, gint64 b);

void __attribute__((constructor)) register_sub(void)
{
    register_double_op("-", sub);
}

gint64 sub(gint64 a, gint64 b)
{
    return a - b;
}