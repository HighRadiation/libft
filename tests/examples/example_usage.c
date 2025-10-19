#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "../include/libft.h"

int main(void)
{
	printf("=== Libft Usage Examples ===\n\n");

	// String functions example
	printf("1. String Functions:\n");
	char *str = "Hello, World!";
	printf("   Original: %s\n", str);
	printf("   Length: %zu\n", ft_strlen(str));
	printf("   First 'o' at position: %ld\n", ft_strchr(str, 'o') - str);
	printf("   Uppercase: ");
	for(int i = 0; str[i]; i++)
		printf("%c", ft_toupper(str[i]));
	printf("\n\n");

	// Memory functions example
	printf("2. Memory Functions:\n");
	char buffer[20];
	ft_memset(buffer, 'A', 10);
	buffer[10] = '\0';
	printf("   Buffer filled with 'A': %s\n", buffer);

	ft_bzero(buffer, 10);
	printf("   Buffer after bzero: ");
	for(int i = 0; i < 10; i++)
		printf("%d ", buffer[i]);
	printf("\n\n");

	// String manipulation example
	printf("3. String Manipulation:\n");
	char *s1	 = "Hello";
	char *s2	 = " World";
	char *joined = ft_strjoin(s1, s2);
	printf("   Joined string: %s\n", joined);
	free(joined);

	char *trimmed = ft_strtrim("   Hello World   ", " ");
	printf("   Trimmed string: '%s'\n", trimmed);
	free(trimmed);

	printf("\n✅ Examples completed successfully!\n");
	return (0);
}
