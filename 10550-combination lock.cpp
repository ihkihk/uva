/* UVa 10550 Combination lock - ad-hoc, super easy */

#include <cstdio>

unsigned int i, a, b, c; /* initial position, first combo, 2nd combo, 3rd combo */

double angle(unsigned int min, unsigned int max, unsigned int start, unsigned int end, bool back)
{
    double step = 360.0 / (double)(max - min + 1);
    
    unsigned int diff;
    
    if (start > end)
        diff = start - end;
    else
        diff = end - start;
    
    if (((start > end) && !back) || ((start < end) && back))
        diff = (max - min + 1) - diff;

    return diff * step;
}

int main()
{
    while (scanf("%d %d %d %d", &i, &a, &b, &c), (a || b || c || i)) {
        double ans = 3*360.0; // two full turns + one full turn
        ans += angle(0, 39, i, a, true);
        ans += angle(0, 39, a, b, false);
        ans += angle(0, 39, b, c, true);
        printf("%d\n", (unsigned int)ans);
    }
}
