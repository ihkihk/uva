/* Forming Quiz Teams, the solution for UVa 10911 above */

#include <algorithm>
#include <cmath>
#include <cstdio>
#include <cstring>

using namespace std;

int N;
double dist[20][20], memo[1 << 16];

double matching(int bitmask)
{
    // see that we initialize the array with -1 in the main function
    if (memo[bitmask] > -0.5)
        return memo[bitmask];
    if (bitmask == (1 << (2*N)) - 1)
        return memo[bitmask] = 0;
        
    double ans = 2000000000.0;
    for (int p1 = 0; p1 < 2 * N; p1++)
        if (!(bitmask & (1 << p1))) {
            for (int p2 = p1 + 1; p2 < 2 * N; p2++)
                if (!(bitmask & (1 << p2)))
                    ans = min(ans,
                                dist[p1][p2] + matching(bitmask | (1 << p1) | (1 << p2)));
            break;
        }
        
    return memo[bitmask] = ans;
}

int main()
{
    char line[1000], name[1000];
    int i, j, caseNo = 1, x[20], y[20];
    // to simplify testing, redirect input file to stdin
    // we use gets(line) to read input line by line
    // freopen("10911.txt", "r", stdin);
    while (sscanf(gets(line), "%d", &N), N) {
        for (i = 0; i < 2 * N; i++)
            sscanf(gets(line), "%s %d %d", &name, &x[i], &y[i]);
            
        for (i = 0; i < 2 * N; i++)
            for (j = 0; j < 2 * N; j++)
                dist[i][j] = hypot((double)x[i] - x[j], (double)y[i] - y[j]);
                
        // use DP to solve minimum weighted perfect matching on small general graph
        // this is a trick to initialize the memo table with -1
        memset(memo, -1, sizeof memo);
        printf("Case %d: %.2lf\n", caseNo++, matching(0));
    }
}
