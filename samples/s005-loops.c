/* loops */

#include <stdio.h>
#include <stdlib.h>

void main (void)
{
  /* "for (statement; condition; post_iteration_step) { steps }" */
  for (int a = 0; a < 2; a++)
  {
    int loop_number = a + 1;
    printf("a > This is loop # %d\n", loop_number);
  }
  /*
    Output:
    => a > This is loop # 1
    => a > This is loop # 2
  */

  /* loops can be followed by a block `{}` or a single statement */
  for (int b = 0; b < 3; b++)
    printf("b > This is loop # %d\n", b);
  /*
    Output:
    => b > This is loop # 0
    => b > This is loop # 1
    => b > This is loop # 2
  */

  int c, d, e;
  c = d = e = 0;

  /* "while (condition) { steps }" */
  while (c < 2)
  {
    ++c;
    printf("c > value is %d\n", c);
  }
  /*
    Output:
    => c > value is 1
    => c > value is 2
  */

  /* also acceptable: */
  while (d < 2)
    printf("d > value is %d\n", ++d);
  /*
    Output:
    => d > value is 1
    => d > value is 2
  */

  /* for statements you need executed at least once */
  do
  {
    printf("e > value is %d\n", e++);
  } while(e == 1);
  /*
    Output:
    => e > value is 0
    => e > value is 1
  */

  /* for(;;) and while() create infinite loops */
  /* 'break' can skip out of the loop */
  for (;;)
  {
    break;
    printf("Print me\n");
  }
  /* Output: */

  /* 'continue' can skip an iteration */
  for (int x = 1; x <= 3; x++)
  {
    if (x == 2)
      continue;
    printf("%d\n", x);
  }
  /*
    Output:
    => 1
    => 3
  */

  exit(0);
}
