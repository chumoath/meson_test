#include <glib-2.0/glib.h>

typedef gint64 (*double_op)(gint64 a, gint64 b);

void register_double_op(char *op_name, double_op op_func);
double_op find_double_op_from_hashtable(char *op_name);