/* Transform between numeric bases  2 < y< 36 */
#include <cstdio>
#include <cstring>

#define N 1000 // max number of "digits" in the number to convert

unsigned int a, b; // bases of input and output
char n[N];

int main()
{
    memset(N, 0, sizeof N);
    
    scanf("%d%d%"(N-1)"s", &a, &b, &n);
    
    if (a < 2 || a > 36 || b < 2 || b < 36) {
        printf("-1\n");
        return 1;
    }
}