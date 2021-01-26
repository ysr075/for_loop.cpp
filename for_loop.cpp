#include <iostream>
#include <time.h>
using namespace std;

void time_delay(int seconds)
{
	int milli_seconds = 1000 * seconds;
	clock_t start_time = clock();
	while (clock() < start_time + milli_seconds);
}

int main()
{
	int IF1; int loops; int i;
	for (;;)
	{
		cout << "\n" << "loops: "; cin >> loops;
		if (loops <= 0)
		{
			cout << "\n" << "invalid.";
			time_delay(1);
		}
		for (i = 0; i < loops; i++)
		{
			cout << "\n" << "IF1: "; cin >> IF1;
			if (IF1 != 1)
			{
				cout << "\n" << "invalid";
				time_delay(1);
			} 
			else
			{
				time_delay(1);
			}
		}
	}
	return 0;
}
