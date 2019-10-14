#include <cstdio>
#include <cmath>
#include <time.h>

using namespace std;

//Example 1, 2. Compare the Performance of Loop and Recursion
void PrintN_loop(int N)
{
    for (int i = 1; i <= N; i ++) printf("%d\n", i);
}
void PrintN_recursion(int N)
{
    if (N)
    {
        PrintN_recursion(N - 1);
        printf("%d\n", N);
    }
}

// Example 3. Compute a Polynomial in a given x, f(x) = a0 + a1 * x + a2 * x^2 + ...
// f(x) = a0 + x(a1 + x(...(an-1 + x(an))...))
double f1(int n, double a[], double x)
{
    double p = a[0];
    for (int i = 1; i <= n; i ++)
    {
        p += a[i] * pow(x, i);
    }
    return p;
}
double f2(int n, double a[], double x)
{
    double p = a[n];
    for (int i = n; i > 0; i --)
    {
        p = a[i - 1] + x * p;
    }
    return p;
}


int main()
{
    

    
    return 0;
}