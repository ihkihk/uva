/* 11799 - horror dash, ad-hoc, easy */

#include <iostream>

using namespace std;

int main()
{
    unsigned int T, N, c = 1;
    
    cin >> T;
    
    while (T--) {
        cin >> N;
        unsigned int g[N];
        unsigned int index = N;
        while (index--) {
            cin >> g[index];
        }
        // sort the array via insertion sort
        for (int i = 1; i < N; i++) {
            int j = i;
            while (j > 0 and g[j-1] > g[j]) {
                int tmp = g[j];
                g[j] = g[j-1];
                g[j-1] = tmp;
                j--;
            }
        }
        cout << "Case " << c++ << ": " << g[N-1] << endl;
        
    }

}