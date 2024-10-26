// ft_strmapi.h
#ifndef FT_STRMAPI_H
#define FT_STRMAPI_H

char *ft_strmapi(char const *s, char (*f)(unsigned int, char));

#endif

// main.c
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <assert.h>
#include "libft.h"

// Test helper functions
static char to_upper(unsigned int i, char c)
{
    (void)i; // Unused
    if (c >= 'a' && c <= 'z')
        return c - 32;
    return c;
}

static char add_index(unsigned int i, char c)
{
    return c + i;
}

static char return_null(unsigned int i, char c)
{
    (void)i;
    (void)c;
    return '\0';
}

static char do_nothing(unsigned int i, char c)
{
    (void)i;
    return c;
}

// Test invalid parameters
static void test_invalid_params()
{
    printf("\nTesting Invalid Parameters:\n");

    char *result;

    // Test NULL string
    result = ft_strmapi(NULL, to_upper);
    assert(result == NULL);
    printf("✓ NULL string test passed\n");

    // Test NULL function
    result = ft_strmapi("test", NULL);
    assert(result == NULL);
    printf("✓ NULL function test passed\n");

    // Test both NULL
    result = ft_strmapi(NULL, NULL);
    assert(result == NULL);
    printf("✓ Both NULL test passed\n");
}

// Test edge cases
static void test_edge_cases()
{
    printf("\nTesting Edge Cases:\n");

    // Test empty string
    char *result = ft_strmapi("", to_upper);
    assert(result != NULL);
    assert(strlen(result) == 0);
    free(result);
    printf("✓ Empty string test passed\n");

    // Test single character
    result = ft_strmapi("a", to_upper);
    assert(strcmp(result, "A") == 0);
    free(result);
    printf("✓ Single character test passed\n");

    // Test string with special characters
    result = ft_strmapi("!@#$%^&*()", do_nothing);
    assert(strcmp(result, "!@#$%^&*()") == 0);
    free(result);
    printf("✓ Special characters test passed\n");

    // Test string with spaces
    result = ft_strmapi("   ", do_nothing);
    assert(strcmp(result, "   ") == 0);
    free(result);
    printf("✓ Spaces only test passed\n");

    // Test very long string (but smaller to avoid memory issues)
    char *long_str = malloc(1001);
    memset(long_str, 'a', 1000);
    long_str[1000] = '\0';
    result = ft_strmapi(long_str, do_nothing);
    assert(strcmp(result, long_str) == 0);
    free(long_str);
    free(result);
    printf("✓ Long string test passed\n");
}

// Test function behaviors
static void test_function_behaviors()
{
    printf("\nTesting Function Behaviors:\n");

    // Test uppercase conversion
    char *result = ft_strmapi("hello", to_upper);
    assert(strcmp(result, "HELLO") == 0);
    free(result);
    printf("✓ Uppercase conversion test passed\n");

    // Test index addition
    result = ft_strmapi("aaaaa", add_index);
    assert(result[0] == 'a' && result[1] == 'b' && result[2] == 'c' &&
           result[3] == 'd' && result[4] == 'e');
    free(result);
    printf("✓ Index addition test passed\n");

    // Test function that returns null characters
    result = ft_strmapi("test", return_null);
    assert(strlen(result) == 0);
    free(result);
    printf("✓ Null character return test passed\n");
}

int main()
{
    test_invalid_params();
    test_edge_cases();
    test_function_behaviors();

    printf("\nAll tests completed successfully!\n");
    return 0;
}