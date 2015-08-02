#include <stdio.h>

int main()
{
	long n, m;
	scanf("%ld %ld", &n, &m);

	long value[100000];
	for (int i = 0; i < n; ++i)scanf("%ld", &value[i]);

	long sum = 0, begin = 0, end = 0;        // Record for solution.
	long min = 99999999, minBegin = 0, minEnd = 0;   // Record for the case that solution doesn't exist.
	bool exist = false;                      // Mark whether solution exists.

	// What if n = 1?
	while (end < n)
	{
		sum = sum + value[end];      // Add the next value.

		// If equal, output.
		if (sum == m)
		{
			printf("%d-%d\n", begin + 1, end + 1);
			exist = true;
			++end;
		}
		else
		{
			// If less...
			if (sum < m)
			{
				++end;
			}
			else
			{
				// If more, that's complicated...
				while (1)
				{
					// In case that solution doesn't exist.
					if (sum - m < min)min = sum - m;

					// Minus the beginning, then judge.
					sum = sum - value[begin];
					++begin;
					if (sum < m)
					{
						++end;
						break;
					}
					if (sum == m)
					{
						printf("%d-%d\n", begin + 1, end + 1);
						exist = true;
						++end;
						break;
					}
				}
			}
		}
	}

	// No solution...Then scan again (must be in my opinion)
	// Notice that we already know the MIN value of (sum - m), so there are two important conclusion:
	// ==> If(sum>m), then we must have(sum-m>=min); If(sum-m<min),then we must have(sum<m);
	if (!exist)
	{
		sum = 0;

		while (minEnd < n)
		{
			sum = sum + value[minEnd];

			if (sum > m)
			{
				while (1)
				{
					if (sum - m == min)
					{
						printf("%ld-%ld\n", minBegin + 1, minEnd + 1);
						++minEnd;
						break;
					}
					sum = sum - value[minBegin];
					++minBegin;
					if (sum < m)
					{
						++minEnd;
						break;
					}
				}
			}
			else
			{
				++minEnd;
			}
		}
	}

	return 0;
}

//0	答案正确	1	180	10 / 10
//1	答案正确	1	308	7 / 7
//2	答案正确	10	1076	2 / 2
//3	答案正确	22	2228	2 / 2
//4	答案正确	1	380	2 / 2
//5	答案正确	9	1060	2 / 2

//using vector
//0	答案正确	1	268	10 / 10
//1	答案正确	1	308	7 / 7
//2	答案正确	11	1404	2 / 2
//3	答案正确	22	2292	2 / 2
//4	答案正确	1	256	2 / 2
//5	答案正确	9	1440	2 / 2