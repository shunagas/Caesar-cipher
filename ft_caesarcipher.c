#include <stdio.h>
#include <stdlib.h>

size_t	ft_strlen(const char *str)
{
	size_t	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strmapi(const char *s, char (*f)(unsigned int, char))
{
	size_t		len;
	unsigned int	i;
	char		*result;

	len = ft_strlen(s);
    i = 0;
	result = malloc(sizeof(char) * (len + 1));
	if (result == NULL)
		return (NULL);
	while (s[i] != '\0')
	{
		result[i] = f(i, s[i]);
		i++;
	}
	result[i] = '\0';
	return (result);
}

char shiftCharacter(unsigned int n, char c)
{
    const int shiftAmount = 3;
    return (c - shiftAmount);
}

int main()
{
    const char *input = "Fdhvdu#flskhu";
    char *result = ft_strmapi(input, shiftCharacter);

    printf("Input: %s\n", input);
    printf("Result: %s\n", result);
    free(result);

    return 0;
}