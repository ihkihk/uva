/* UVa 272 - TEX Quotes, ad-hoc, super easy */

#include <cstdio>
#include <cstring>

using namespace std;

const int N = 10000; // number of chars per line

char in[N];
char out[N];

int main()
{
    memset(in, 0, sizeof in);
    memset(out, 0, sizeof out);

    while (fgets(in, N, stdin) != NULL) {
        char *c = in;
        char *t = out;
        char d, q = '`';

        while (d = *c++)
            if (d == '"') {
                *t++ = q; *t++ = q;
                q = q == '`' ? '\'' : '`';
            } else
                *t++ = d;

        printf("%s", out);
        memset(in, 0, sizeof in);
        memset(out, 0, sizeof out);
    }

    return 0;
}
