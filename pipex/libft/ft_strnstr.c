#include "libft.h"

char *
	ft_strnstr(const char *hay, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;

	if ((!hay || !needle) && len == 0)
		return (0);
	if (!needle[0])
		return ((char *)hay);
	i = 0;
	while (hay[i] && i < len)
	{
		j = 0;
		while (hay[i + j] == needle[j] && (i + j) < len)
		{
			if (hay[i + j] == '\0' && needle[j] == '\0')
				return ((char *)(hay + i));
			j++;
		}
		if (needle[j] == '\0')
			return ((char *)(hay + i));
		i++;
	}
	return (0);
}
