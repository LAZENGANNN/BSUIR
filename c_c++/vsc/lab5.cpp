#include <iostream>

using namespace std;

int main()
{
	int length, op;

	cout << "array length: \n";
	cin >> length;

	int *arr = new int[length];

	cout << "select option: \n 1)randomise array (default)\n 2)input array \n";
	cin >> op;

	switch (op)
	{
	default:
		cout << "wrong input, option 1 selected";
	case 1:
		cout << "array:\n[ ";
		for (int i = 0; i < length; i++)
		{
			arr[i] = rand() % 21 - 10;
			cout << arr[i] << " ";
		}
		cout << "]";
		break;
	case 2:
		for (int i = 0; i < length; i++)
		{
			int a;
			cout << "type a[" << i << "]";
			cin >> a;
			arr[i] = a;
		}
		cout << "array:\n[ ";
		for (int i = 0; i < length; i++)
		{
			cout << arr[i] << " ";
		}
		cout << "]";
		break;
	}

	// 6. Сумму элементов массива, расположенных между первым и вторым отрицательными элементами.

	int sum = 0;
	bool d = false;

	for (int i = 0; i < length; i++)
	{

		if (arr[i] < 0)
		{
			if (d == false)
			{
				d = true;
				cout << "\n 1st negative " << arr[i];
			}
			else
			{
				d = false;
				cout << "\n 2nd negative " << arr[i];
			}
		}

		if (d == true)
		{
			cout << endl
				 << arr[i] << endl;
			sum += arr[i];
		}
	}

	cout << "\nresult: " << sum;
}
