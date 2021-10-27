#include <stdio.h>
#include <string.h>
int main()
{
    char string[100], word[20], max[20], min[20], c;
    int i = 0, j = 0, flag = 0;
    printf("Enter string: ");
    gets(string);
    for (i = 0; i < strlen(string); i++)
    {
        while (i < strlen(string) && string[i]!=32 && string[i]!=0)
        {
            word[j++] = string[i++];
        }
        if (j != 0)
        {
            word[j] = '\0';
            if (!flag)
            {
                flag = !flag;
                strcpy(max, word);
            }
            if (strlen(word) >= strlen(max))
            {
                strcpy(max, word);
            }
            j = 0;
        }
    }
    printf("The largest word is '%s' .\n", max);
    return 0;
}
