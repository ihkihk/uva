/* UVa 11559 - event planning, ad-hoc, easy */

#include <iostream>

using namespace std;

int main()
{
    unsigned int N, H, W, places, price;
    unsigned long B, cost, cost_min;
    
    while (cin >> N >> B >> H >> W, !cin.eof()) {
        cost_min = B + 1;
        while (H--) {
            unsigned int cost = 0;
            unsigned int weeks = W;
            cin >> price;
            while (weeks--) {
                cin >> places;
                if (places >= N) {
                    cost = price * N;
                }
            }
            if (cost > 0 and cost <= B and cost <= cost_min) {
                cost_min = cost;
            }
        }
        if (cost_min == B + 1)
            cout << "stay home" << endl;
        else
            cout << cost_min << endl;
    }
}