int	max(int *tab, unsigned int len)
{
	unsigned int i = 0;
	int max_value;

	if (len == 0)
		return 0;

	max_value = tab[0];

	while (i < len) {
		if (tab[i] > max_value)
			max_value = tab[i];
		i++;
	}

	return (max_value);
}
