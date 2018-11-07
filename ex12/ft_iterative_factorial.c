int	ft_iterative_factorial(int nb)
{
	int i;
	
	i = 1;
	if (nb < 0 || nb >= 13)
		return (0);
	if (nb == 0 || nb == 1)
		return (1);
	while (nb > 1)
	{
		i = i * nb;
		nb--;
	}
	return (i);
}
