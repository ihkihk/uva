/* UVa 11044 - Searching for Nessy, ad-hoc, super-easy */

#include <cstdio>

unsigned int N, n, m;

int main()
{
    scanf("%d", &N);
    while (N--)  {
        scanf("%d%d", &n, &m);
        unsigned int ans = (n / 3) * (m / 3);
        printf("%d\n", ans);
    }
}
