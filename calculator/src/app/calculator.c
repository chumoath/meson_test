#include <stdio.h>
#include <stdlib.h>
#include "algorithm.h"
#include <glib-2.0/glib.h>
#include <readline/readline.h>
#include <readline/history.h>

void execute_cmd(char *cmd)
{
    gchar *output = g_strcompress(cmd);
    gchar** tokens = g_strsplit(output, " ", -1);
    guint length = g_strv_length(tokens);
    if (length < 3) {
        return;
    }

    gint64 a = g_ascii_strtoll(tokens[0], NULL, 10);
    gint64 b = g_ascii_strtoll(tokens[2], NULL, 10);
    char* op = tokens[1];
    double_op op_func = find_double_op_from_hashtable(op);
    if (op_func == NULL) {
        printf ("op %s not found\n", op);
        goto exit;
    }

    printf ("%ld %c %ld = %ld\n", a, tokens[1][0], b, op_func(a, b));

exit:
    g_strfreev(tokens);
    g_free(output);

}

// clear up white spaces
char* stripwhite (char *string)
{
    register char *s, *t;

    for (s = string; whitespace (*s); s++)
        ;

    if (*s == 0)
        return (s);

    t = s + strlen (s) - 1;
    while (t > s && whitespace (*t))
        t--;

    *++t = '\0';

    return s;
}

// TODO: 将op改为动态扩展的；让每个模块自己注册；用好constructor；多参考开源代码框架如何实现

int main(int argc, const char *argv[])
{
    char *line, *cmd;

    rl_bind_key( TAB, rl_insert );

    while ( 1 ) {
        line = readline(">>> ");
        if (!line)
            continue;

        cmd = stripwhite( line );
        if ( *cmd ) {
            add_history( cmd );
            execute_cmd( cmd );
        }
        g_free(line);
    }

    exit(0);
}