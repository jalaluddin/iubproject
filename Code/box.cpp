#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<math.h>

int main()
{
	int t = 0;

	scanf("%d", &t);

	while(t--)
	{
		double ab, bc, cd;
		scanf("%lf%lf%lf", &ab, &bc, &cd);

		double ad = sqrt(ab * ab + bc * bc + cd * cd);

		printf("%.2lf\n", ad);
	}

	return 0;
}