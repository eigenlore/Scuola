#include <stdio.h>
#include <stdlib.h>
#define N 1000000
#define DT 1e-4
#define V0 0
#define X0 1
#define ALPHA 0

int main()
{
	double x[N], v[N], a[N];

	x[0] = X0;
	v[0] = V0;
	a[0] = x[0];

	for (int i = 0; i < N - 2; i++)
	{
		x[i + 1] = x[i] + v[i] * DT;
		v[i + 1] = v[i] + a[i] * DT;
		a[i + 1] = -x[i + 1]*x[i + 1]*x[i + 1] - ALPHA * v[i + 1];

		printf("%f\n", x[i + 1]);
	}

	return 0;
}

