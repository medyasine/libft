#include "libft.h"
#include <stdio.h>
#include <string.h>
#include <stdbool.h>


void test_ft_memcpy(void *dest, const void *src, size_t n)
{
    // Save original destination for comparison
    unsigned char *original_dest = malloc(n);
    if (!original_dest)
    {
        perror("Failed to allocate memory for comparison");
        return;
    }
    
    // Copy source to original destination using standard memcpy
    memcpy(original_dest, src, n);
    
    // Copy source to destination using ft_memcpy
    ft_memcpy(dest, src, n);

    // Compare the two memory blocks
    if (memcmp(dest, original_dest, n) == 0)
    {
        printf("Test passed for memcpy with %zu bytes.\n", n);
    }
    else
    {
        printf("Test failed for memcpy with %zu bytes.\n", n);
    }

    // Free the allocated memory
    free(original_dest);
}

int main(void)
{
    // Allocate memory for test
    size_t size = 10;
    unsigned char *src = (unsigned char *)"HelloWorld"; // Source data
    unsigned char *dest1 = malloc(size);  // Destination for ft_memcpy
    unsigned char *dest2 = malloc(size);  // Destination for standard memcpy

    if (!dest1 || !dest2)
    {
        perror("Failed to allocate memory for destination");
        return 1;
    }

    // Test cases
    test_ft_memcpy(dest1, src, 10);     // Full string
    test_ft_memcpy(dest1, src, 5);      // Partial string
    test_ft_memcpy(dest1, src, 0);      // Zero bytes
    test_ft_memcpy(dest1, src, 1);      // Single byte
    test_ft_memcpy(dest1, src, 15);     // More bytes than available

    // Clean up
    free(dest1);
    free(dest2);

    return 0;
}