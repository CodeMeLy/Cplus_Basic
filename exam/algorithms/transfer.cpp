#include <stdio.h>
#include <math.h>
long long solution(long long n, long long u, long long v)
{
  long long m = 0, k = 0;
  while (n > 0)
  {
    long long t = n % 10;
    if (t == u)
    {
      t = v;
    }
    m += (long long)pow(10, k) *t;
    k++;
    n /= 10;
  }
  return m;
}
int main()
{
  int test;
  scanf("%d", &test);
  while (test--)
  {
    long long c, d;
    scanf("%lld %lld", &c, &d);
    printf("%lld %lld\n",solution(c,6,5) + solution(d,6,5), solution(c,5,6)+solution(d,5,6));
  }
}