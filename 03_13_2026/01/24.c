#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*Generate the random number*/
    int guess_num, result, different,count;
    int r_num = rand() % 100;

    /*get the value from user*/
  for(count=1;count<=5;count++)
  {
    printf("Enter what do you guess number? you can play five time ");
    scanf("%d", &guess_num);

    /*decision making logic*/
    if (guess_num > r_num)
        result = 1;
    else if (guess_num < r_num)
        result = -1;
    else
        result = 0;

    switch(result)
    {
        case 1:
            printf("Too High\n");
            break;

        case -1:
            printf("Too Low\n");
            break;

        case 0:
            printf("Congratulations! You guessed the correct number!\n");
            break;
    }

    /*provide a hint*/
    if(result != 0)
    {
        different = abs(guess_num - r_num);

        if(different <= 5)
            printf("You were very close! Try again next time\n");
        else
            printf("Better luck next time!\n");
    }

    /*End the game*/
  }
  count +=1;
  printf("Random number is %d play another time bye\n", r_num);

    return 0;
}

