//
// Created by chumoath on 2024/5/8.
//
#include <glib-2.0/glib.h>
#include "algorithm.h"

GHashTable *double_ops = NULL;

void register_double_op(char *op_name, double_op op_func)
{
    if (double_ops == NULL) {
        double_ops = g_hash_table_new(g_str_hash, g_str_equal);
    }

    g_hash_table_insert(double_ops, g_strdup(op_name), (gpointer)op_func);
}


double_op find_double_op_from_hashtable(char *op_name)
{
    if (double_ops == NULL)
        return NULL;

    return (double_op) g_hash_table_lookup(double_ops, op_name);
}