#include <stdio.h>
#include <time.h>
#include <math.h>
#include <stdlib.h>

// Function game
int game(char you, char computer)
{
    // if has choose the same thing
    if (you == computer)
        return -1;

    // if User choose Rock and Computer choose Paper
    if (you == 'r' && computer == 'p')
        return 0;

        // if User choose Rock and Computer choose Scissor
        else if (you == 'r' && computer == 's')
            return 1;

    // if User choose Paper and Computer choose Scissor
        else if (you == 'p' && computer == 's')
        return 0;

        // if User choose Paper and Computer choose Rock
        if (you == 'p' && computer == 'r')
            return 1;

    // if User choose Scissor and Computer choose Rock
    if (you == 's' && computer == 'r')
            return 0;

        // if User choose Scissor and Computer choose Paper
        else if (you == 's' && computer == 'p')
            return 1;
}

// Game play
int main()
{
    // Stores the random number
    int n;
    char you, computer, result;

    // Chooses the random number every time
	srand(time(NULL));

    // Make the random number less than 100, divided it by 100
	n = rand() % 100;

    // roughly divided among rock, paper and scissor
    // n : 0-33 = Rock
    if(n <= 33)
        computer = 'r';
    // n : 34 - 66 = paper
    else if(n > 33 && n <= 66)
        computer = 'p';
    // n : 67++ = scissor
    else
        computer = 's';

    // Show Rules
    printf("Rock is 'r'\n");
    printf("Paper is 'p'\n");
    printf("Scissor is 's'\n");

    // Input from user
    printf("You choose : ");
    scanf("%c",&you);
    printf("You choose : %c and Computer choose : %c\n",you, computer);

    // Function Call to play the game
	result = game(you, computer);

	if (result == -1) {
		printf("Always!\n");
	}
	else if (result == 1) {
		printf("You Win\n");
	}
	else { 
		printf("You Lost\n");
	}

    return 0;

}