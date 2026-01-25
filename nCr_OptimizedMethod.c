#include <stdio.h>
#include <math.h>
int main()
{
  int n, r, i;

  printf("n = ");
  scanf("%d", &n);
  printf("r = ");
  scanf("%d", &r);
  if (n - r < r)
  {
    r = n - r;
  }
  long result = 1;

  for (i = 1; i <= r; i++)
  {
    result = result * (n - i + 1) / i;
  }

  printf("nCr=%d", result);
  return 0;
}
