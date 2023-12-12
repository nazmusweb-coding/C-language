// Write a C program to count total number of vowels and consonants in a string.
#include <stdio.h>

void count (char string[])
{
    int consonant, vowel;
    consonant = vowel = 0;
    
    for (int i = 0; string[i]!='\n'; i++)
    {
        // i could have used if else and that you would be more efficient
        switch (string[i])
        {
            case 'a':
                vowel++;
                break;
            case 'e':
                vowel++;
                break;
            case 'i':
                vowel++;
                break;
            case 'o':
                vowel++;
                break;
            case 'u':
                vowel++;
                break;
            case 'A':
                vowel++;
                break;
            case 'E':
                vowel++;
                break;
            case 'I':
                vowel++;
                break;
            case 'O':
                vowel++;
                break;
            case 'U':
                vowel++;
                break;
            case ' ':
                continue;
                break;
            default:
                consonant++;
                break;
        }
        
    }

    printf("Vowels: %d\nConsonants: %d", vowel, consonant); 
}

int main ()
{
    char string[100];

    printf("Enter the string: ");
    fgets(string, sizeof(string), stdin);

    count(string);


    return 0;
}