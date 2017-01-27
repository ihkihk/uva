 /* UVa 11172 - Relational Operator, ad-hoc, super-easy */
 
 #include <cstdio>
 using namespace std;
 
 long a, b;
 int N = 0;
 
 int main()
 {
     scanf("%ld", &N);
     while (N--) {
         scanf("%ld %ld", &a, &b);
         printf("%c\n", a < b ? '<' : (a > b) ? '>' : '=');
     }
 }