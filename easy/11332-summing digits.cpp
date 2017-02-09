/* UVa 11332 - Summing digits, ad-hoc, easy*/

#include <iostream>

using namespace std;

int main()
{
    unsigned long N;
    unsigned int sum;
    
    while (cin >> N, N != 0) {
        do {
            sum = 0;
            while (N != 0) {
                sum += N % 10;
                N /= 10;
            }
            N = sum; 
        } while (sum > 9);
        cout << sum << endl;
    }
    
}