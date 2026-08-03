#include <stdio.h>

int reverse(int n)
{
    int rev = 0;

    while (n != 0)
    {
        rev = rev * 10 + n % 10;
        n /= 10;
    }

    return rev;
}

int isPalindrome(int n)
{
    return n == reverse(n);
}

int main()
{
    int n;

    printf("Enter a number: ");
    scanf("%d", &n);

    if (isPalindrome(n))
        printf("Palindrome Number\n");
    else
        printf("Not a Palindrome Number\n");

    return 0;
}
