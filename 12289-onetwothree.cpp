/* UVa 12289 - one, two, three, ad-hoc, super-easy */

#include <cstdio>
#include <cstring>

int main()
{
    unsigned int N;
    char w[6];
    
    scanf("%d", &N);
    
    while(N--) {
        scanf("%5s", &w);
        if (strlen(w) > 3)
            printf("3\n");
        else
            if (w[0] != 'o' && w[1] != 'n')
                printf("2\n");
            else
                printf("1\n");
    }
}
