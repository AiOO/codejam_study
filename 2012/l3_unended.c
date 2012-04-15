#include <stdio.h>
#include <string.h>

char data[2000000][10];

int main()
{
	int i, j, k, T, min, max;
	char tmp[8];

	FILE *ifp = fopen("input3.txt", "r"),
	     *ofp = fopen("output3.txt", "w");

	fscanf(ifp, "%d", &T);

	for(i=0; i<T; ++i)
	{
		fscanf(ifp, "%d %d", &min &max);

		for(j=min; j<=max; ++j)
		{:
			sprintf(tmp, "%d", j);
			for
		}
	}

	fclose(ifp);
	fclose(ofp);

	return 0;
}
