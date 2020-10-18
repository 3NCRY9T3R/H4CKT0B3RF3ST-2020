#include<stdio.h>
#include<math.h>
void binary();
void sum(int num[]);
void arithmetic_shift();
int comparison[5] = {1, 0, 0, 0, 0};
int first_number[5] = {0}, second_number[5] = {0}, anumcp[5] = {0};
int compare_num1[5] = {0}, compare_num2[5] = {0}, product[5] = {0}, result[5] = {0};
int num1 = 0, num2 = 0, num3 = 0;
int m = 0, n = 0;
int main()
{
      int count, x = 0;
      printf("Enter Two Numbers to Multiply (Less Than 16)\n");
      do
      {
            printf("Enter A:");
            scanf("%d", &num1);
            printf("Enter B:");
            scanf("%d", &num2);
      }
	  while(num1 >=16 || num2 >=16);
      printf("\nExpected Product of %d * %d = %d", num1, num2, num1 * num2);
      binary();
      printf("\n\nBinary Equivalents\n");
      printf("\nA:\t");
      for(count = 4; count >= 0; count--)
      {
            printf("%d", first_number[count]);
      }
      printf("\nB:\t");
      for(count = 4; count >= 0; count--)
      {
            printf("%d", second_number[count]);
      }
      printf("\nB'+ 1 = ");
      for(count = 4; count >= 0; count--)
      {
            printf("%d", compare_num2[count]);
      }
      printf("\n");
      for(count = 0; count < 5; count++)
      {
            if(first_number[count] == x) 
            {
                  printf("\n-->");
                  arithmetic_shift();
                  x = first_number[count];
            }
            else if(first_number[count] == 1 && x == 0)
            {
                  printf("\n-->");
                  printf("\nSUB B: ");
                  sum(compare_num2);
                  arithmetic_shift();
                  x = first_number[count];
            }
            else
            {
                  printf("\n-->");
                  printf("\nADD B: ");
                  sum(second_number);
                  arithmetic_shift();
                  x = first_number[count];
            }
      }
      printf("\nProduct:\t");
      for(count = 4; count >= 0; count--)
      {
            printf("%d", product[count]);
      }
      for(count = 4; count >= 0; count--)
      {
            printf("%d", anumcp[count]);
      }
      printf("\n");
      return 0;
}
 
void binary()
{
      m = fabs(num1);
      n = fabs(num2);
      int r2, remainder, count, temp;
      for(count = 0; count < 5; count++)
      {
            remainder = m % 2;
            m = m / 2;
            r2 = n % 2;
            n = n / 2;
            first_number[count] = remainder;
            anumcp[count] = remainder;
            second_number[count] = r2;
            if(r2 == 0)
            {
                  compare_num2[count] = 1;
            }
            if(remainder == 0)
            {
                  compare_num1[count] =1;
            }
      }
      num3 = 0;
      for(count = 0; count < 5; count++)
      {
            result[count] = comparison[count]+ compare_num2[count] + num3;
            if(result[count] >= 2)
            {
                  num3 = 1;
            }
            else
            {
                  num3 = 0;
            }
            result[count] = result[count] % 2;
      }
      for(count = 4; count >= 0; count--)
      {
            compare_num2[count] = result[count];
      }
      if(num1 < 0)
      {
            num3 = 0;
            for(count = 4; count >= 0; count--)
            {
                  result[count] = 0;
            }
            for(count = 0; count < 5; count++)
            {
                  result[count] = comparison[count] + compare_num1[count] + num3;
                  if(result[count] >= 2)
                  {
                        num3 = 1;
                  }
                  else
                  {
                        num3 = 0;
                  }
                  result[count] = result[count] % 2;
            }
            for(count = 4; count >= 0; count--)
            {
                  first_number[count] = result[count];
                  anumcp[count] = result[count];
            }
      }
      if(num2 < 0)
      {
            for(count = 0; count < 5; count++)
            {
                  temp = second_number[count];
                  second_number[count] = compare_num2[count];
                  compare_num2[count] = temp;
            }
      }
}
 
void sum(int num[])
{
      int count;
      num3 = 0;
      for(count = 0; count < 5; count++)
      {
            result[count] = product[count] + num[count] + num3;
            if(result[count] >= 2)
            {
                  num3 = 1;
            }
            else
            {
                  num3 = 0;
            } 
            result[count] = result[count] % 2;
      }
      for(count = 4; count >= 0; count--)
      {
            product[count] = result[count];
            printf("%d", product[count]);
      }
      printf(":");
      for(count = 4; count >= 0; count--)
      {
            printf("%d", anumcp[count]);
      }
}
void arithmetic_shift()
{
      int x = product[4], y = product[0], count;
      for(count = 1; count < 5  ; count++)
      {
            product[count - 1] = product[count];
      }
      product[4] = x;
      for(count = 1; count < 5; count++)
      {
            anumcp[count - 1] = anumcp[count];
      }
      anumcp[4] = y;
      printf("\nArithmetic Shift");
      for(count = 4; count >= 0; count--)
      {
            printf("%d", product[count]);
      }
      printf(":");
      for(count = 4; count >= 0; count--)
      {
            printf("%d", anumcp[count]);
      }
}
