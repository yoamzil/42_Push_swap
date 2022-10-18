#include <unistd.h>

void	rot13(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] >= 'A' && str[i] <= 'M') || (str[i] >= 'a' && str[i] <= 'm'))
			str[i] += 13;
		else if ((str[i] >= 'N' && str[i] <= 'Z') || (str[i] >= 'n' && str[i] <= 'z'))
			str[i] -= 13;
		write(1, &str[i], 1);
		i++;
	}
	
}

int	main(int argc, char **argv)
{
	int	i;

	i = 0;
	if (argc == 2)
		rot13(argv[1]);
	write(1, "\n", 1);
	return (0);
}