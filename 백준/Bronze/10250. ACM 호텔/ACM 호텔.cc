#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	
	int T = 0, H = 0, W = 0, N = 0, A = 0;
	scanf("%d", &T);

	for (int i = 0; i < T; i++)
	{
		A = 0;
		scanf("%d %d %d", &H, &W, &N);
		if (N % H == 0)
		{
			A = H * 100 + N / H;

		}
		else
			A = (N % H) * 100 + (N / H + 1);
		printf("%d\n", A);
	}
	return 0;
}
