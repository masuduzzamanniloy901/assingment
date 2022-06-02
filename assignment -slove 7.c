#include <stdio.h>
#include <math.h>
int main()
{
printf("Prime Numbers from 1 To 300 are:\n ");
for (int num = 1; num <= 200; num += 1)
{
int flag = 1;
for (int i = 3; i <= sqrt(num); i += 1)
{
if (num % i == 0)
{
flag = 0;
break;
}
}
if (flag) printf("%d \n", num);
}
return 0;
}
