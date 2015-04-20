#include <stdio.h>

int main(void)
{
	int ub;
	int random = /*placeholder*/
	int guesses = 0;
	int curr_guess;
	printf("Enter an upper bound (under 150): ");
	scanf("%d", &ub);
	
	while (ub < 1 && ub > 150)
	{
		printf("Please enter a number between 1 and 150: ");
		scanf("%d", &ub);
	}
	int numbers[ub] = 0;
	numbers[random-1] = 2;

	while (1)
	{
		if (guesses == 0)
			printf("Enter in a number: \n");
		else printf("Enter another number: \n");
		if (scanf("%d", &curr_guess)!=1)
			{
				printf("Invalid number!");
				continue;
			}
		

		if (curr_guess > 0 && curr_guess < ub)
		{
			if (numbers[curr_guess-1] == 1)
			{
				printf("You've already guessed that number!")
				continue;
			}
			else if (numbers[curr_guess-1] == 2)
			{
				printf("Congratulations, you're the winner!");
				guesses++;
				break;
			}
			else 
			{
				printf("Nope, try again!");
				number[curr_guess-1]++;
				guesses++;
				continue;
			}
		}
		else
		{
			printf("Guess out of range!")
			continue;
		}
		
	}
	printf("Total guesses: %d", guesses);
}
