#include <cs50.h>
#include <stdio.h>

int main(void)
{
    string answer = get_string("What's your name? "); /* question */
    printf("hello, %s\n", answer); /* hello + answer */
}