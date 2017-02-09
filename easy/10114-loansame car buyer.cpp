/* UVa 10114 - Loansome Car Buyer, ad-hoc, easy */

#include <iostream>

using namespace std;


int main()
{
    int dur, periods;
    double downp, loan;
    
    while (cin >> dur >> downp >> loan >> periods, dur >= 0) {
        unsigned int cur_month = 0;
        
        double cur_depr_rate, next_depr_rate;
        int next_depr_month;
        double cur_value = loan + downp;
        
        double cur_loan = loan;
        double monthly_payment = loan / (double)dur;
        
        cin >> next_depr_month >> cur_depr_rate; // this will read depr rate for month 0
        if (--periods > 0)
            cin >> next_depr_month >> next_depr_rate;
        else
            next_depr_month = dur + 1;
        cur_value -= cur_value * cur_depr_rate;
        

        while (cur_value < cur_loan) {
            if (cur_month++ > dur)
                break;
            cur_loan -= monthly_payment;
            if (cur_month == next_depr_month) {
                cur_depr_rate = next_depr_rate;
                if (--periods > 0)
                    cin >> next_depr_month >> next_depr_rate;
            }
            cur_value -= cur_value * cur_depr_rate;
        }
        
        cout << cur_month << " " << ((cur_month == 1) ? "month" : "months") << endl;
    }
}
