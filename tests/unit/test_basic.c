#include <assert.h>
#include <stdio.h>
#include <string.h>

#include "../../include/libft.h"

void test_ft_strlen(void)
{
	// Test basic string length
	assert(ft_strlen("Hello") == 5);
	assert(ft_strlen("") == 0);
	assert(ft_strlen("42") == 2);

	printf("✓ ft_strlen tests passed!\n");
}

void test_ft_strchr(void)
{
	char *str = "Hello World";

	// Test finding existing character
	assert(ft_strchr(str, 'H') == str);
	assert(ft_strchr(str, 'o') == str + 4);
	assert(ft_strchr(str, '\0') == str + 11);

	// Test character not found
	assert(ft_strchr(str, 'x') == NULL);

	printf("✓ ft_strchr tests passed!\n");
}

int main(void)
{
	printf("Running libft unit tests...\n\n");

	test_ft_strlen();
	test_ft_strchr();

	printf("\n✅ All tests passed!\n");
	return (0);
}
