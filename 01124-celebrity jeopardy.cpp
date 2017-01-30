/* UVa 001124 - Celebrity jeopardy, ad-hoc super-easy */

#include <cstdio>

const int N = 10000;
char buf[N];

int main()
{
    while (fgets(buf, sizeof buf, stdin) != NULL)
        printf("%s", buf);
}
