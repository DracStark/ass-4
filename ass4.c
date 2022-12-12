#include <string.h>
#include <stdlib.h>
#include <stdio.h>

int main()
{
    int countFor1 = 0;
    int countFor2 = 0;

    char string[100];
    char toFind1[] = "winhtut";
    char toFind2[] = "NationalCyberCity";

    FILE *fptr = fopen("words.txt", "r");
    if (fptr == NULL)
    {
        printf("Error file missing\n");
        exit(-1);
    }

    while (fscanf(fptr, "%s", string) == 1)
    {

        if (strstr(string, toFind1) != NULL)
        {
            countFor1++;
        }
        if (strstr(string, toFind2) != NULL)
        {
            countFor2++;
        }
    }
    printf("We have found the words %s %d times and %s %d times in the file.\n", toFind1, countFor1, toFind2, countFor2);

    fclose(fptr);

    return 0;
}