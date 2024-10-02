#include <iostream>
#include <cstdlib>

int main()
{
	srand(time(NULL));

	const int arr_size = 10;
	int arr[arr_size], user_arr[arr_size], rnum, count_of_hits = 0, coins = 0;
	char restart;


	do
	{
		for (int i = 0; i < arr_size; i++)
		{
			rnum = std::rand() % 11;
			arr[i] = rnum;
		}

		for (int i = 0; i < arr_size; i++)
		{
			std::cout << "Enter " << i + 1 << " number: ";
			std::cin >> user_arr[i];
		}

		for (int i = 0; i < arr_size; i++)
		{
			if (arr[i] == user_arr[i])
			{
				count_of_hits = count_of_hits + 1;
			}
		}

		std::cout << "Random list: ";
		for (int i = 0; i < arr_size; i++)
		{
			std::cout << arr[i] << " ";
		}
		std::cout << "\n";

		std::cout << "Your list: ";
		for (int i = 0; i < arr_size; i++)
		{
			std::cout << user_arr[i] << " ";
		}
		std::cout << "\n";

		std::cout << "Number of matches: " << count_of_hits << "\n";

		if (count_of_hits == 0)
		{
			std::cout << "You are a loser!\n";
		}
		else if (count_of_hits >= 1 && count_of_hits < 4)
		{
			std::cout << "At least you were able to do something! +10 farit coins\n";
			coins += 10;
		}
		else if (count_of_hits >= 4 && count_of_hits < 8)
		{
			std::cout << "You're cool, you were able to score more than half! +100 farit coins\n";
			coins += 100;
		}
		else if (count_of_hits >= 8 && count_of_hits <= 10)
		{
			std::cout << "Game over! +1000 farit coins\n";
			coins += 1000;
		}

		std::cout << "Your balance: " << coins << "\n";

		std::cout << "Shall we repeat the game? (y/n)\n";
		std::cin >> restart;

	} while (restart == 'Y' || restart == 'y');

	return 0;
}