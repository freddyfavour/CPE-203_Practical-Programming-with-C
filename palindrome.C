#include <stdio.h>

int main()
{
    char str[100];
    int i, length, isPalindrome = 1;

    // Read the string from the user
    printf("Enter a string: ");
    scanf("%s", str);

    // Calculate the length of the string
    for (length = 0; str[length] != '\0'; length++)
        ;

    // Check if the string is a palindrome
    for (i = 0; i < length / 2; i++)
    {
        if (str[i] != str[length - i - 1])
        {
            isPalindrome = 0;
            break;
        }
    }

    // Display the result
    if (isPalindrome)
    {
        printf("%s is a palindrome.\n", str);
    }
    else
    {
        printf("%s is not a palindrome.\n", str);
    }

    return 0;
}
