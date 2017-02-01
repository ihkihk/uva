/* UVa 12279 - Emoogle Balance, ad-hoc, super-easy */

#include <cstdio>

int main()
{
    unsigned int T, num, c = 1;
    
    while(scanf("%d", &T), T) {
        unsigned int reasons = 0, given = 0;
        int balance;
        while (T--) {
            scanf("%d", &num);
            if (num)
                reasons++;
            else
                given++;
        }
        printf("Case %d: %d\n", c++, reasons-given);
    }
}
