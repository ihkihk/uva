/* Transform between numeric bases  2 < y < 36 */
#include <cstdio>
#include <cstring>

#define N 1000 // max number of "digits" in the number to convert
#define str(a) expand(a)
#define expand(a) #a

unsigned int a, b; // bases of input and output
char n[N];
char digits[N];

int main()
{
    memset(n, 0, sizeof n);
    scanf("%d%d%"str(N)"s", &a, &b, &n);
    
    if (a < 2 || a > 36 || b < 2 || b > 36) {
        printf("-1\n");
        return 1;
    }
    
    unsigned long long num = 0;
    unsigned int pos = 1;
    
    // Convert the digit string to a number
    int i = strlen(n);
    unsigned int digit = 0;
    while (--i >= 0) {
        if (n[i] > 'a')
            n[i] -= 32; // transform to uppercase
        
        digit = n[i] <= '9' ? n[i]-'0' : n[i]-'A'+10;
        if (digit >= a) {
            printf("Invalid digit '%c' for base %d\n", n[i], a);
            return 2;
        }
            
        num += digit * pos;
        pos *= a;
    }
    
    printf("number: %d\n", num);
    
    // Convert the number to the new base
    i = 0;
    while (num > 0) {
        digit = (num % b);
        digit = digit < 10 ? digit+'0' : digit-10+'A';
        digits[i++] =  digit;
        num /= b;
    }
    
    while (--i >= 0) {
        printf("%c", digits[i]);
    }
    
    printf("\n");
}