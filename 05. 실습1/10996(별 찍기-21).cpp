#include <iostream>
using namespace std;

int main()
{
	int n = 0;
	cin >> n;
	if (n == 1)
		cout << "*" << "\n";
	else
	{
		for (int i = 1; i <= 2 * n; i++)
		{
			if (i % 2 != 0)//�汝鶬�
			{
				if (n % 2 != 0)//�汝鶬兮�
				{
					for (int j = 0; j < n / 2 + 1; j++)
					{
						cout << "* ";
					}
				}
				else
				{
					for (int j = 0; j < n / 2; j++)
					{
						cout << "* ";
					}
				}
			}
			else//礎熱還
			{
				if (n % 2 != 0)//�汝鶬兮�
				{
					for (int j = 0; j < n / 2; j++)
					{
						cout << " ";
						cout << "*";
					}
				}
				else//礎熱薑熱
				{
					for (int j = 0; j < n / 2; j++)
					{
						cout << " ";
						cout << "*";
					}
				}
			}
			cout << "\n";
		}
	}
	return 0;
}