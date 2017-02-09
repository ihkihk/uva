/* UVa 00621 - Secret Research, ad-hoc, easy */

#include <iostream>
#include <string>

using namespace std;

int main()
{
    unsigned int T;
    cin >> T;
    
    while (T--) {
        string num;
        
        cin >> num;
        
        if (num == "1" or num == "4" or num == "78")
            cout << "+" << endl;
        else if (*(num.end() - 2) == '3' and *(num.end() - 1) == '5')
            cout << "-" << endl;
        else if (num[0] == '9' and *(num.end()-1) == '4')
            cout << "*" << endl;
        else
            cout << "?" << endl;
    }
}
