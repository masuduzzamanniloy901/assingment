#include <stdio.h>
int main()
{
int number,i,sum=0;
printf("Enter a Number to Sum n terms of Odd Number: \n");
scanf("%d",&number);
for(i=1;i<=number;i+=2){

if(number %2 ==1){
    sum+=i;
printf("Sum Of odd Numbers is: %d\n",sum);
}
else{
    printf("the given number is not odd number\n");
}
}
return 0;
}
