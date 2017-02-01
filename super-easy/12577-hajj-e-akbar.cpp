/* UVa 12577 - Hajj-e-Akbar */

#include <cstdio>
#include <cstring>

int main()
{
    char s[20];
    unsigned int c = 1;
    
    while (scanf("%s", &s), strncmp("*", s, 1)) {
        if (!strncmp(s, "Hajj", 4)) {
            printf("Case %d: Hajj-e-Akbar\n", c++);
        } else {
            printf("Case %d: Hajj-e-Asghar\n", c++);
        }
    }
}
