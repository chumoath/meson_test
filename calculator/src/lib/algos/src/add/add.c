#include <glib-2.0/glib.h>
#include "algorithm.h"

gint64 add(gint64 a, gint64 b);

void __attribute__((constructor)) register_add(void)
{
    register_double_op("+", add);
}

gint64 add(gint64 a, gint64 b)
{
    return a + b;
}