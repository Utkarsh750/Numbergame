#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main()
{
  int number,guess,nguess=1;
  srand(time(0));
  number = rand()%1000+1;
  do
  {
    printf("Guess the number between 1 to 100\n");
    scanf("%d",&guess);
    if(guess>number)
    {
       printf("lower number please!\n");
    }
    else if(guess<number)
    {
      printf("higher number please\n");
    }
    else
    {
      printf("you guessed it in %d attempt \n",nguess);
    }
    nguess++;

  }while(guess!=number);
  return 0;
}
