#include <iostream>
using namespace std;

int main()
{
	int n, k, i, x;
	cout << "add exponent: ";
	cin >> n; //the number of rows
	for (i = 0; i <= n; i++)
	{
		x = 1;
		for (k = 0; k <= i; k++)
		{
			cout << x << "x^" << i - k << " * b^" << k << '\t';
			x = x * (i - k) / (k + 1);
		}
		cout << endl;
	}

	system("pause");
	return 0;
}


