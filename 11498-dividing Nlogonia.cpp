/* UVa 11498 - Division of Nlogonia */

#include <cstdio>

unsigned int K;
int N, M; /* coordinates of the division point */
int X, Y; /* coordinates of a house */

int main()
{
    while (scanf("%d", &K), K) {
        scanf("%d%d", &N, &M);
        while (K--) {
            scanf("%d%d", &X, &Y);
            if (X == N || Y == M) {
                printf("divisa\n");
                continue;
            }
            if (X > N)
                if (Y > M)
                    printf("NE\n");
                else
                    printf("SE\n");
            else 
                if (Y > M)
                    printf("NO\n");
                else
                    printf("SO\n");
        }
    }
}