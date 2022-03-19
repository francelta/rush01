#include <stdio.h>
#include <unistd.h>

int	main(void)
{
	char j, x, c;
	int numerofilas = 9;
	int numerocolumnas = 5;
	char esquina = 'o';
	char fila = '-';
	char columna = '|';

	//Tapa de la caja

	/*write(1, &esquina, 1);
	for (int i = 2; i < numerofilas; i++)
	{
		write(1, &fila, 1);
	}
	write(1, &esquina, 1);*/

	write(1, &esquina, 1);
	int i = 2;
	while (i < numerofilas)
	{
		write(1, &fila, 1);
		i++;
	}
	write(1, &esquina, 1);

	//Cuerpo de la caja

	if (numerofilas > 2)
	{
		while (i < numerocolumnas)
		{
			write(1, &"\n", 1);
			write(1, &columna, 1);
			i++;
			while (j < numerofilas)
			{
				write(1, &" ", 1);
				j++;
			}
			write(1, &columna, 1);
		}
	}

	//Base de la caja
	write(1, &esquina, 1);
	int i = 2;
	while (i < numerofilas)
	{
		write(1, &fila, 1);
		i++;
	}
	write(1, &esquina, 1);
}