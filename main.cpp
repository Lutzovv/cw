#include <iostream>
#include <cstdlib>

int main()
{
	srand(time(NULL));

	const int arr_size = 20;
	int arr[arr_size];
	int rnum;

	for (int i = 0; i < arr_size; i++)
	{
		rnum = std::rand() % 16 - 5;
		arr[i] = rnum;
	}

	for (int i = 0; i < arr_size; i++)
	{
		std::cout << arr[i] << " ";
		
		if (i == 9) { std::cout << "\n"; }
	}

	return 0;
}