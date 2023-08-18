#include <stdio.h>
#include <string.h>
#include <ctype.h>
void main()
{
    char word1[100], word2[100], word3[100];
    printf("\nEnter the 3 words after enter: ");
    gets(word1);
    gets(word2);
    gets(word3);

    for (int i = 0; i < strlen(word1); i++)
    {
        if (word1[i] == 'a' || word1[i] == 'e' || word1[i] == 'i' || word1[i] == 'o' || word1[i] == 'u' || word1[i] == 'A' || word1[i] == 'E' || word1[i] == 'I' || word1[i] == 'O' || word1[i] == 'U')
        {
            word1[i] = '%';
        }
    }
    for (int i = 0; i < strlen(word2); i++)
    {
        if (word2[i] != 'a' && word2[i] != 'e' && word2[i] != 'i' && word2[i] != 'o' && word2[i] != 'u' && word2[i] != 'A' && word2[i] != 'E' && word2[i] != 'I' && word2[i] != 'O' && word2[i] != 'U')
        {
            word2[i] = '#';
        }
    }
    for(int i = 0; i < strlen(word3); i++)
    {
        word3[i] = toupper(word3[i]);
    }
    //ROHIT SHARMA IS A VAZHAAAAA!!!!!
    printf("\nWord is:%s%s%s",word1,word2,word3);
}