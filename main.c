#include "libft.h"
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
void test_strncmp(const char *s1, const char *s2, int n)
{
    int result = ft_strncmp(s1, s2, n);
    int expected = strncmp(s1, s2, n);

    if (result == expected)
    {
        printf("Test passed for strings \"%s\" and \"%s\" with n = %d\n", s1, s2, n);
    }
    else
    {
        printf("Test failed for strings \"%s\" and \"%s\" with n = %d\n", s1, s2, n);
        printf("  Custom result: %d\n", result);
        printf("  Expected result: %d\n", expected);
    }
}

int main(void)
{
    // Test cases
    test_strncmp("hello", "hello", 5);       // Identical strings
    test_strncmp("hello", "hello", 3);       // Identical substrings
    test_strncmp("hello", "hell", 5);        // First string longer
    test_strncmp("hell", "hello", 5);        // Second string longer
    test_strncmp("hello", "world", 5);       // Completely different strings
    test_strncmp("abc", "abcd", 4);           // Substring comparison
    test_strncmp("abcd", "abc", 4);           // Substring comparison (reverse)
    test_strncmp("", "abc", 3);               // First string empty
    test_strncmp("abc", "", 3);               // Second string empty
    test_strncmp("", "", 3);                   // Both strings empty

    return 0;
}