#include "ft_printf.h"

#include <stdio.h>

int main() {
    // Test case 1: Null String Argument
    ft_printf("Null string: %s\n", (char *)NULL);
    printf("Null string: %s\n", (char *)NULL);

    // Test case 2: Invalid Format Specifier
    ft_printf("Invalid format: %k\n", 42);
    printf("Invalid format: %k\n", 42);

    // Test case 3: Escaped Percent Sign
    ft_printf("Escaped percent: %%\n");
    printf("Escaped percent: %%\n");

    // Test case 4: Very Long String
    ft_printf("Long string: %s\n", "This is a very long string to test the handling of long strings in the printf function. It should be displayed correctly.");
    printf("Long string: %s\n", "This is a very long string to test the handling of long strings in the printf function. It should be displayed correctly.");

    // Test case 5: Integer Overflow
    ft_printf("Integer overflow: %d\n", 2147483647 + 1);
    printf("Integer overflow: %d\n", 2147483647 + 1);

    // Test case 6: Character Argument as Integer
    ft_printf("Character as integer: %d\n", 'A');
    printf("Character as integer: %d\n", 'A');

    // Test case 7: Multiple Consecutive Format Specifiers
    ft_printf("Multiple formats: %d %d %d\n", 1, 2, 3);
    printf("Multiple formats: %d %d %d\n", 1, 2, 3);

    // Test case 8: Mixing Different Specifiers
    ft_printf("Mixed formats: %d %s %c %x %p\n", 42, "test", 'A', 255, (void *)0x12345678);
    printf("Mixed formats: %d %s %c %x %p\n", 42, "test", 'A', 255, (void *)0x12345678);

    // Test case 9: Null Character in String
    ft_printf("String with null: %s\n", "Hello\0World");
    printf("String with null: %s\n", "Hello\0World");

    // Test case 10: Large Number of Arguments
    ft_printf("Large number of arguments: %d %d %d %d %d %d %d %d %d %d\n",
              1, 2, 3, 4, 5, 6, 7, 8, 9, 10);
    printf("Large number of arguments: %d %d %d %d %d %d %d %d %d %d\n",
           1, 2, 3, 4, 5, 6, 7, 8, 9, 10);

    return 0;
}

