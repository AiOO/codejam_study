/**
 * Problem B : Dancing With the Googlers
 * http://code.google.com/codejam/contest/dashboard?c=1460488#s=p1
 *
 * Programed by AiOO
 *
 */

#include <stdio.h>

int main()
{
        int T, N, S, p, i, j, result;
	int item[200], type[200], max[200];

        FILE *ifp = fopen("input2.txt", "r"),
             *ofp = fopen("output2.txt", "w");

        fscanf(ifp, "%d", &T);

	for(i=0; i<T; ++i)
	{
		fscanf(ifp, "%d %d %d", &N, &S, &p);
		result = 0;

		for(j=0; j<N; ++j)
		{
			fscanf(ifp, "%d", &item[j]);

			switch(item[j] % 3) {
			case 0:
				max[j] = (int)(item[j] / 3);
				break;
			case 1:
				max[j] = (int)(item[j] / 3) + 1;
				break;
			case 2:
				max[j] = (int)(item[j] / 3) + 1;
				break;
			}

			if(max[j] >= p)
			{
				// is already best case
				++result;
				type[j] = 0;
			}
			else if(item[j] < 2 || item[j] > 28) 
			{
				// cannot be surprise case
				type[j] = -1;
			}
			else
			{
				// can be surprise case
				switch(item[j] % 3) {
				case 0:
					type[j] = 2;
					break;
				case 1:
					type[j] = 3;
					break;
				case 2:
					type[j] = 1;
					break;
				}
			}
		}

		for(j=0; j<N && S>0; ++j)
		{
			switch(type[j]) {
			case 1:
			case 2:
				if(max[j] + 1 >= p)
				{
					++result;
					type[j] = 0;
					S = S - 1;
				}
				break;
			case -1:
			case 0:
			case 3:
				break;
			}
		}

		fprintf(ofp, "Case #%d: %d\n", i + 1, result);
	}

	fclose(ifp);
	fclose(ofp);

	return 0;
}	
