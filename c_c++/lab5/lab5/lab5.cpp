#include <iostream>

using namespace std;

int main()
{
	//system("color 0A");

	int length, op;

	char ch;

	cout << "array length: \n";
	cin >> length;

	int* arr = new int[length];

	cout << "randomize array? [+] \n";
	cin >> ch;

	if (ch == 43) {
		srand(time(0));
		cout << "array:\n[ ";
		for (int i = 0; i < length; ++i)
		{
			arr[i] = rand() % 21 - 5; // от -5 до 15
			cout << arr[i] << " ";
		}
		cout << "]";
	}
	else {
		for (int i = 0; i < length; ++i)
		{
			int a;
			cout << "type a[" << i << "] ";
			cin >> a;
			arr[i] = a;
		}
	}

	// 6. Сумму элементов массива, расположенных между первым и вторым отрицательными элементами.

	int sum = -2;
	bool d = false;

	for (int i = 0; i < length; ++i)
	{
		if (arr[i] < 0)
		{
			if (d == false)
			{
				sum += 1;
				d = true;
				cout << "\n 1st negative: " << arr[i];
				continue;
			}
			else
			{
				d = false;
				cout << "\n 2nd negative: " << arr[i];
				break;
			}
		}

		if (d == true)
		{
			cout << endl << arr[i];
			sum += arr[i];
		}
	}

	if (sum == -2) {
		cout << "\n no negative elements";
	}
	else if (sum == -1) {
		cout << "\n nothing to summarize";
	}
	else if (d == true) {
		cout << "\n 2nd negative not found";
	}	
	else {
		sum += 1;
		cout << "\n result: " << sum;
	}
}