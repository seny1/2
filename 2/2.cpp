#include "2.h"

int main()
{
    setlocale(LC_ALL, "ru");
    int programm;
    cout << "Какую программу вы хотите запустить? (1 или 2) ";
    cin >> programm;

    if (programm == 1)
    {
		void (*Option_of_arr)(int* arr, int size);
		const int size = 10;
		int arr[size];
		srand(time(NULL));
		for (int i = 0; i < size; i++)
		{
			arr[i] = rand() % 20;
			cout << arr[i] << '|';
		}
		cout << '\n';
		cout << "------------------------------";
		cout << '\n';

		if (arr[0] <= 10)
		{
			Option_of_arr = add_1;
		}
		else
		{
			Option_of_arr = deduct_1;
		}
		Option_of_arr(arr, size);
    }
	else if (programm == 2)
	{
		void(*action)(int* arr, int size);
		const int size = 10;
		int arr[size];
		srand(time(NULL));
		for (int i = 0; i < size; i++)
		{
			arr[i] = 5 - (rand() % 10);
			cout << arr[i] << '|';
		}
		cout << "\n";
		action = Option_of_arr(arr, size);
		action(arr, size);
	}
}
