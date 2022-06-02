#include <stdio.h>
int main()
{
int number,i,sum=0;
printf("Enter a natural Number to Sum n terms of even Number: \n");
scanf("%d",&number);
if(number%2 ==0){for(i=1;i<=number;i+=2){
sum+=i;
}
printf("Sum Of even Numbers is: %d",sum);}

else{
    printf("the given number is not even number\n");
}
return 0;
}
