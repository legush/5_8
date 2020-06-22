#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;
int Fill(int m[10][10])
{
	for (int i = 0; i < 10; i++)
	{
		for (int j = 0; j < 10; j++)
		{
			m[i][j] = rand();
		}
	}
	return m[10][10];
}

int main()
{

	srand(time(0));
	int Matrix[10][10];
	Fill(Matrix);
	for (int i = 0; i < 10; i++)
	{
		for (int j = 0; j < 10; j++)
		{
			cout << Matrix[i][j] << "\t";
		}
		cout << endl;
	}
	return 0;
	int n, k;
	for (int i = 0; i <= int(n - 1); i++)
		for (int j = i + 1; j < n - i; j++)
		{
			k = Matrix[j][n - i - 1];
			Matrix[j][n - i - 1] = Matrix[i][j];
			Matrix[i][j] = Matrix[n - j - 1][i];
			Matrix[n - j - 1][i] = Matrix[n - 1 - i][n - 1 - j];
			Matrix[n - 1 - i][n - 1 - j] = k;
		}
	for (int i = 0; i < 10; i++)
	{
		for (int j = 0; j < 10; j++)
		{
			cout << Matrix[i][j] << "     ";
			cout << "\n";
		}
		return 0;
	}
}