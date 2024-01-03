#include <stdio.h>

/*
 *Function to compare strings
 *Reutrns 0 for same strings, 1 for bigger ascii value, -1 for smaller ascii value
 */
int cmp (char *compare_with, char *compare_to)
{
    int i, j, k;
    // counting length of strings
    for (i = 0; compare_with[i]!='\0'; i++);
    for (j = 0; compare_to[j]!='\0'; j++);

    for (k = 0; compare_with[k] != '\0' && compare_to[k] != '\0'; k++)
    {
        if (compare_with[k]>compare_to[k])
        {
            return 1;
        }
        if (compare_with[k]<compare_to[k])
        {
            return -1;
        }
    }

    if (i>j)
    {
        return 1;
    }
    else if (i<j)
    {
        return -1;
    }
    else return 0;
    
}

/*
 *Function to find out which animal it is.
 */
int animal (char *word1, char *word2, char *word3)
{
    if (cmp(word1, "vertebrado")==0)
    {
        if (cmp(word2, "ave")==0)
        {
            if (cmp(word3, "carnivoro")==0)
            {
                printf("aguia\n");
            }
            else if (cmp(word3, "onivoro")==0)
            {
                printf("pomba\n");
            }
            else
            {
                printf("Wrong input\n");
            }
        }
        else if (cmp(word2, "mamifero")==0)
        {
            if (cmp(word3, "onivoro")==0)
            {
                printf("homem\n");
            }
            else if (cmp(word3, "herbivoro")==0)
            {
                printf("vaca\n");
            }
            else
            {
                printf("Wrong input\n");
            }
        }
        else
        {
            printf("Wrong input\n");
        }
    }
    else if (cmp(word1, "invertebrado")==0)
    {
        if (cmp(word2, "inseto")==0)
        {
            if (cmp(word3, "hematofago")==0)
            {
                printf("pulga\n");
            }
            else if (cmp(word3, "herbivoro")==0)
            {
                printf("lagarta\n");
            }
            else
            {
                printf("Wrong input\n");
            }
        }
        else if (cmp(word2, "anelideo")==0)
        {
            if (cmp(word3, "hematofago")==0)
            {
                printf("sanguessuga\n");
            }
            else if (cmp(word3, "onivoro")==0)
            {
                printf("minhoca\n");
            }
            else
            {
                printf("Wrong input\n");
            }
        }
        else
        {
            printf("Wrong input\n");
        }
    }
    else
    {
        printf("Wrong input\n");
    }

    return 0;
}

int main() {
 
    char word1[20], word2[20], word3[20];
    scanf("%s", word1);
    scanf("%s", word2);
    scanf("%s", word3);
    animal(word1, word2, word3);
    
    return 0;
}