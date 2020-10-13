#include <stdio.h>
#include <math.h>
void main()
{
  long n, t, r = 0, c, d;

  printf("Enter an integer\n");
  scanf("%ld", &n);

  while (1)
  {
    n++;
    t = n;

    while(t)
    {
      r = r*10; 
      r = r + t%10;
      t = t/10;
    }

    if (r == n)
    {
      d = n/2;

      for (c = 2; c <= d; c++)
      {
        if (n%c == 0)
          break;
      }
      if (c == d+1)
        break;
    }
    r = 0;
  }

  printf("%ld\n",n);

}
