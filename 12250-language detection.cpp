/* UVa 12250 - Language Detection, ad-hoc, super-easy */

#include <cstdio>
#include <cstring>

const unsigned int N = 14;

struct map {
    const char* s;
    const char* lang;
};

map hellos[] = {
    {"HELLO", "ENGLISH"},
    {"HOLA", "SPANISH"},
    {"HALLO", "GERMAN"},
    {"BONJOUR", "FRENCH"},
    {"CIAO", "ITALIAN"},
    {"ZDRAVSTVUJTE", "RUSSIAN"}
};

int main()
{
    char S[N+1];
    bool found;
    unsigned int c = 1;
    
    while (scanf("%s", S), strncmp(S, "#", 1)) {
        found = false;
        for (unsigned int i = 0; i < sizeof(hellos) / sizeof(map); i++) {
            if (!strncmp(S, hellos[i].s, N)) {
                printf("Case %d: %s\n", c++, hellos[i].lang);
                found = true;
                break;
            }
        }
        if (!found)
            printf("Case %d: UNKNOWN\n", c++);
    }
}
