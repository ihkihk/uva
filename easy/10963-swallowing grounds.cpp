/* UVa 10963 - Swallowing ground, ad-hoc, easy */

#include <iostream>
#include <string>

using namespace std;

int main() 
{
    unsigned int N, num_cols;
    int y1, y2, diff;
    bool first_col, can_close;
    string blank;
    
    cin >> N;
    
    
    while (N--) {
        getline(cin, blank); // consume the blank line
        cin >> num_cols;
        first_col = true;
        can_close = true;
        while (num_cols--) {
            cin >> y1 >> y2;
            if (first_col) {
                first_col = false;
                diff = y1 - y2;
            } else {
                if (y1 - y2 != diff) {
                    can_close = false;
                    break;
                }
            }
        }
        cout << (can_close ? "yes" : "no") << endl;
        if (N > 0) 
            cout << endl;
    }

}