#includen "main.h"
/**
 * jack_bauer - prints ever minutes of the day of Jack bauer
 *
 */
void jack_bauer(void)
{
	int a, b, c, d;

	for (a = 0; a <= 2; a++)
	{
		for (b = 0; b < 10; b++)
		{
			for (c = 0 c < 5; c++)
			{
				for (d = 0; d < 10 ; d++)
				{
					if (a >= 2 && b >= 4)
					{
						break;
					}
					_putchar (a + '0');
					_putchar (b + '0');
					_putchar (':');
					_putchar (c + '0');
					_putchar (d + '0');
					_putchar ('\n');
				}
			}
		}
	}
}


