/* UVa 11364 - Parking */

#include <cstdio>

unsigned int tests; /* number of tests  1 <= t <= 100 */
unsigned int N; /* number of shops to visit 1 <= N <= 20 */
unsigned int num, min, max;

int main()
{
    scanf("%d", &tests);
    while (tests--) {
        scanf("%d", &N);
        max = 0;
        min = 1000;
        while (N--) {
            scanf("%d", &num);
            if (num > max)
                max = num;
            if (num < min)
                min = num;
        }
        printf("%d\n", (max - min) * 2);
    }
}
