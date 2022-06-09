#include <iostream>
#include <memory>
#include <cstring>
using namespace std;

// Fly me to the alpha centauri
void Result()
{
	int t;
	scanf("%d", &t);
	for (int i = 0; i < t; ++i)
	{
		long x, y, length;
		scanf("%ld %ld", &x, &y);
		length = y - x;
		long pos = 1;
		long turn = 1;
		long pos_pow = 0;

		while (pos < length)
		{
			pos_pow++;

			turn++;	pos += pos_pow;
			if (pos >= length)break;

			turn++; pos += pos_pow;
			if (pos >= length)break;
		}
		if (pos > length)turn--;
		printf("%ld\n", turn);
	}
}

int main()
{
	Result();
	return 0;
}