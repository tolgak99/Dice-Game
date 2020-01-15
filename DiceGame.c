#include <stdio.h>   //
#include <stdlib.h>
#include <time.h>

int main()
{
	int i;

	int die1;
	int die2;
	int die3;
	int c, z, v, b, o, p;
	char cho;
	int count = 0;
	int die4;
	int point1 = 0, point2 = 0;
	int aga1, aga2;
	time_t runTime;
	int counter = 0;
	int count1, count2;

	srand((unsigned)time(&runTime));

	runTime = 2;
	printf("");

	die1 = ((rand() % 6) + 1);
	die2 = ((rand() % 6) + 1);
	die3 = ((rand() % 6) + 1);
	die4 = ((rand() % 6) + 1);

	c = die1;
	z = die2;
	v = die3;
	b = die4;



	printf("*********************\nWelcome to Dice Game\n*********************\n");
	printf("Input P to play the game, S to display the total score, Q to Quit:");
	scanf(" %c", &cho);

	if (runTime != 0 && cho == 'p') {

		printf("Throw the dice for player 1: %d %d\n", die1, die2);

		printf("Throw the dice for player 2: %d %d\n", die3, die4);

		if (c == z)
			point1 = point1 + 0;
		if (v == b)
			point2 = point2 + 0;

		if (c == 3 && z == 3)
		{
			for (count1 = 0; count1 <= 3; count++)
			{
				o = ((rand() % 6) + 1);
				p = ((rand() % 6) + 1);

				printf("New values for player1:\n");

				printf("%d ", o);
				printf("%d\n", p);

				point1 = point1 + (o + p);
				counter++;
			}
		}

		if (v == 3 && b == 3)
		{
			for (count2 = 0; count2 <= 3; count2++)
			{
				o = ((rand() % 6) + 1);
				p = ((rand() % 6) + 1);

				printf("New values for player2:\n");

				printf("%d ", o);
				printf("%d\n", p);

				point2 = point2 + (o + p);
				counter++;
			}
		}

		if (c == 6 && z == 6)
		{
			for (count1 = 0; count1 <= 3; count++)
			{
				o = ((rand() % 6) + 1);
				p = ((rand() % 6) + 1);

				printf("New values for player1:\n");

				printf("%d ", o);
				printf("%d\n", p);

				point1 = point1 + (o + p);
				counter++;
			}
		}

		if (v == 6 && b == 6)
		{
			for (count2 = 0; count2 <= 3; count2++)
			{
				o = ((rand() % 6) + 1);
				p = ((rand() % 6) + 1);

				printf("New values for player2:\n");

				printf("%d ", o);
				printf("%d\n", p);
				counter++;
				point2 = point2 + (o + p);
			}
		}


		if (c - z == 4 || z - c == 4)
		{
			o = ((rand() % 6) + 1);
			p = ((rand() % 6) + 1);
			point1 = point1 + 0;
			printf("New values for player1:\n");





			printf("%d ", o);
			printf("%d\n", p);

			while (o + p < 8)
			{
				o = ((rand() % 6) + 1);
				p = ((rand() % 6) + 1);
				point1 = point1 + 0;
				printf("New values for player1:\n");

				point1 = point1 + (o + p);

				counter++;

				printf("%d ", o);
				printf("%d\n", p);
			}


		}

		else if (die1 - die2 != 4 || die2 - die1 != 4)
		{
			point1 = (die1 + die2) / 2;

		}

		if (v - b == 4 || b - v == 4)
		{
			o = ((rand() % 6) + 1);
			p = ((rand() % 6) + 1);
			point2 = point2 + 0;
			printf("New values for player2:\n");





			printf("%d ", o);
			printf("%d\n", p);

			while (o + p < 8)
			{
				o = ((rand() % 6) + 1);
				p = ((rand() % 6) + 1);
				point2 = point1 + 2;
				printf("New values for player2:\n");

				point2 = point2 + (o + p);
				counter++;


				printf("%d ", o);
				printf("%d\n", p);
			}
		}
		else if (die3 - die4 != 4 || die4 - die3 != 4)
		{
			point2 = (die3 + die4) / 2;
		}

		

		printf("-------------------\n");
		





		while ((die1 + die2) != 2 * (die3 + die4) && cho != 'q')
		{
			counter++;
			printf("Input P to play the game, S to display the total score, Q to Quit:\n");
			scanf(" %c", &cho);

			if (runTime != 0 && cho == 'p')
			{
				die1 = ((rand() % 6) + 1);
				die2 = ((rand() % 6) + 1);
				die3 = ((rand() % 6) + 1);
				die4 = ((rand() % 6) + 1);

				c = die1;
				z = die2;
				v = die3;
				b = die4;

				printf("Throw the dice for player 1: %d %d\n", die1, die2);
				printf("Throw the dice for player 2: %d %d\n", die3, die4);

				if (c == z)
					point1 = point1 + 0;
				if (v == b)
					point2 = point2 + 0;

				if (c == 3 && z == 3)
				{
					for (count1 = 0; count1 <= 3; count++)
					{
						o = ((rand() % 6) + 1);
						p = ((rand() % 6) + 1);

						printf("New values for player1:\n");

						printf("%d ", o);
						printf("%d\n", p);

						point1 = point1 + (o + p);
						counter++;
					}
				}

				if (v == 3 && b == 3)
				{
					for (count2 = 0; count2 <= 3; count2++)
					{
						o = ((rand() % 6) + 1);
						p = ((rand() % 6) + 1);

						printf("New values for player2:\n");

						printf("%d ", o);
						printf("%d\n", p);
						counter++;
						point2 = point2 + (o + p);
					}
				}

				if (c == 6 && z == 6)
				{
					for (count1 = 0; count1 <= 3; count++)
					{
						o = ((rand() % 6) + 1);
						p = ((rand() % 6) + 1);

						printf("New values for player1:\n");

						printf("%d ", o);
						printf("%d\n", p);

						point1 = point1 + (o + p);
						counter++;
					}
				}

				if (v == 6 && b == 6)
				{
					for (count2 = 0; count2 <= 3; count2++)
					{
						o = ((rand() % 6) + 1);
						p = ((rand() % 6) + 1);

						printf("New values for player2:\n");

						printf("%d ", o);
						printf("%d\n", p);
						counter++;
						point2 = point2 + (o + p);
					}
				}

				if (c - z == 4 || z - c == 4)
				{
					o = ((rand() % 6) + 1);
					p = ((rand() % 6) + 1);
					point1 = point1 + 0;
					printf("New values for player 1:\n");





					printf("%d ", o);
					printf("%d\n", p);

					while (o + p < 8)
					{
						o = ((rand() % 6) + 1);
						p = ((rand() % 6) + 1);
						point1 = point1 + 0;
						printf("New values for player1:\n");
						counter++;
						point1 = point1 + (o + p);



						printf("%d ", o);
						printf("%d\n", p);
					}


				}

				else if (die1 - die2 != 4 || die2 - die1 != 4)
				{
					point1 = point1 + ((die1 + die2) / 2);

				}

				if (v - b == 4 || b - v == 4)
				{
					o = ((rand() % 6) + 1);
					p = ((rand() % 6) + 1);
					point2 = point2 + 0;
					printf("New values for player2:\n");





					printf("%d ", o);
					printf("%d\n", p);

					while (o + p < 8)
					{
						o = ((rand() % 6) + 1);
						p = ((rand() % 6) + 1);
						point2 = point1 + 2;
						printf("New values for player2:\n");

						point2 = point2 + (o + p);

						counter++;

						printf("%d ", o);
						printf("%d\n", p);
					}
				}
				else if (die3 - die4 != 4 || die4 - die3 != 4)
				{
					point2 = point2 + ((die3 + die4) / 2);
				}



				printf("-------------------\n");



			}

			if (runTime != 0 && cho == 's')
			{
				printf("Player 1: %d points\n", point1);
				printf("Player 2: %d points\n", point2);
				printf("Total of %d throws are performed.\n", (counter * 4) + 4);

				if (point1 > point2)
					printf("Winner is: Player 1\n");
				else
					printf("Winner is: Player 2\n");


			}






		}

		printf("Bye!\n");
	}

	return 0;
}
