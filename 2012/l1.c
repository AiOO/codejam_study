/**
 * Problem A : Speaking in Tongues
 * http://code.google.com/codejam/contest/dashboard?c=1460488#s=p0
 *
 * Programed by AiOO
 *
 */

#include <stdio.h>
#include <string.h>

int main()
{
	char table[] = "yhesocvxduiglbkrztnwjpfmaq";
	char input[200];
	int count, i, j;

	FILE *ifp = fopen("input.txt", "r"),
	     *ofp = fopen("output.txt", "w");

	fscanf(ifp, "%d", &count);
	fgets(input, 200, ifp);

	for(i=0; i<count; ++i)
	{
		fgets(input, 200, ifp);
		printf("%d: %s", i, input);

		for(j=0; j<strlen(input); ++j)
		{
			if('a' <= input[j] && input[j] <= 'z')
				input[j] = table[(int)(input[j] - 'a')];
		}

		fprintf(ofp, "Case #%d: %s", i + 1, input);
		//printf("%s\n", input);
	}

	fclose(ifp);
	fclose(ofp);

	return 0;
}
