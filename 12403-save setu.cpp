/* UVa 12403 - Save Setu, ad-hoc, super-easy */

#include <cstdio>
#include <cstring>

int main()
{
    unsigned int T;
    char s[20];
    unsigned long total = 0;
    unsigned long sum = 0;
    
    scanf("%d\n", &T);
    while (T--) {
        fgets(s, 21, stdin);
        if (!strncmp("donate", s, 6)) {
            sscanf(s, "donate %ld", &sum);
            total += sum;
        } else
            printf("%ld\n", total);
    }
}
