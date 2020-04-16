#include <stdio.h>

#define true 1
#define false 0

void main ()
{

	int ppp = 0;
	int c, Zeros;
	int linha, coluna;
	_Bool bo, ok = true;
	int Linha, Coluna;

	scanf("%d %d", &Linha, &Coluna);

	for (linha = 0; linha < Linha; ++linha)
	{

		Zeros = 0;
		bo = true;

		for (coluna = 0; coluna < Coluna; ++coluna)
		{

			scanf("%d", &c);
			if (c == 0 && bo)
				Zeros++;
			else
				bo = false;

		}

		if (linha != 0)
		{

			if ((Zeros > ppp || (Zeros == ppp && Zeros == Coluna)) && ok)
				ppp = Zeros;
			else
				ppp = 0, ok = false;

		}
		else
			ppp = Zeros;

	}

	if (ppp)
		printf("S\n");
	else
		printf("N\n");

}
