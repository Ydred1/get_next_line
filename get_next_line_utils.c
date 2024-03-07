#include "get_next_line.h"
#include <stdlib.h>


size_t	ft_strlen(const char *str)
{
	size_t	length;

	length = 0;
	while (str[length])
		length++;
	return (length);
}

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	char	*src_ptr;
	char	*dst_ptr;
	size_t	dst_len;

	src_ptr = (char *) src;
	dst_ptr = dst;
	dst_len = ft_strlen(dst);
	if (size <= dst_len)
		return (ft_strlen(src) + size);
	while (*dst_ptr)
	{
		dst_ptr++;
		size--;
	}
	while (*src_ptr && size - 1)
	{
		*dst_ptr++ = *src_ptr++;
		size--;
	}
	*dst_ptr = '\0';
	return (dst_len + ft_strlen(src));
}

char    *str_extend(char *string, int extend)
{}
    char    *newstring;

    newstring = malloc((ft_strlen(string + extend) * sizeof(char));

    return (newstring);
}