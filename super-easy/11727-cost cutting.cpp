/* UVa 11727 - Cost cutting, ad-hoc, super-easy */

#include <cstdio>

int main()
{
    unsigned int T, c = 1;
    unsigned int s[3], ans;
    
    scanf("%d", &T);
    while (T--) {
        scanf("%d%d%d", &s[0], &s[1], &s[2]);
        for (int i = 1; i >= 0; i--) {
            for (int j = 0; j <= i; j++) {
                if (s[j] > s[j+1]) {
                    int tmp = s[j];
                    s[j] = s[j+1];
                    s[j+1] = tmp;
                }
            }
        }
        printf("Case %d: %d\n", c++, s[1]);
    }
}
