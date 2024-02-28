/*
#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <math.h>
#define SIZE 10000
using namespace std;

class waterf{
public:
	int arraysta[SIZE], arrayend[SIZE];
	int sta, end;
	int information(int N);
};

int main()
{
	waterf F;

	int N, L;

	cin >> N >> L;

	F.information(N);

	for (int i = 0; i < N; i++)
	{
		printf("%d %d\n", F.arraysta[i], F.arrayend[i]);
	}
	
	int result = 0;
	for (int i = 0; i < N; i++)
	{
		result += F.arrayend[i] - F.arraysta[i];
	}

	if (result % L != 0)
	{
		result = result / L + 1;
	}
	else if (result == 0)
	{
		result = result / L;
	}
	cout << result << endl;


}

int waterf::information(int N)
{
	srand((unsigned)time(NULL));

	for (int i = 0; i < N; i++)
	{
		arraysta[i] = rand() % 10;
		for (int j = 0; j < i; j++)
		{
			if (arraysta[i] == arraysta[j])
				i--;
		}
	}

	for (int i = 0; i < N; i++)
	{
		arrayend[i] = arraysta[i] + rand() % 10 + 1;
		for (int j = 0; j < i; j++)
		{
			if (arrayend[i] == arrayend[j])
				i--;
		}
	}

	return 0;
}
*/