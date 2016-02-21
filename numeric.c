#include <stdio.h>
#include <ctype.h>

int main (int argc, char *argv [])
{
    int country_code, oper, i, j, d;
    if (argv [1] == NULL) {
        printf ("Usage: numeric <start country code>\n\n"); 
        return 0;
    }

    for (country_code = atoi (argv [1]); country_code <= 193; country_code++)
    {
        for (oper = 100; oper <= 999; oper++)
        {
            for (i = 100; i <= 999; i++)
            {
                for (j = 10; j <= 99; j++)
                {
                    for (d = 10; d <= 99; d++)
                    {
                        printf ("%d-%d-%d-%d-%d\n", country_code, oper, i, j, d);
                    }
                }
            }
        }
    }

    return 0;
}