/* UVa 11547 - Automatic answer, ad-hoc, super-easy */

#include <cstdio>

int main()
{
    unsigned int t;
    int n, ans;
    
    scanf("%d", &t);
    while (t--) {
        scanf("%d", &n);
        ans = (n * 63 + 7492) * 5 - 498;
        if (ans < 0)
            ans *= -1;
        printf("%d\n", ans % 100 / 10);
    }
}
