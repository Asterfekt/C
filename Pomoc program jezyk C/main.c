#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    FILE *slowa = fopen("slowa.txt", "r");
    FILE *wymowa = fopen("wymowa.txt", "w");
    char slowo[50];

    while (fgets(slowo, sizeof(slowo), slowa) != NULL)
    {
        // usuwamy znak nowej linii z końca slowa
        slowo[strcspn(slowo, "\n")] = 0;
        fprintf(wymowa, "<voice required=\"Name=Microsoft Paulina Desktop\"><rate absspeed=\"0\"><pitch absmiddle=\"0\">%s</pitch></rate></voice><silence msec=\"1000\"/\n>", slowo);
        if (fgets(slowo, sizeof(slowo), slowa) != NULL)
        {
            // usuwamy znak nowej linii z końca slowa
            slowo[strcspn(slowo, "\n")] = 0;
            fprintf(wymowa, "<voice required=\"Name=Microsoft Hazel Desktop\"><rate absspeed=\"0\"><pitch absmiddle=\"0\">%s</pitch></rate></voice><silence msec=\"2000\"/>\n<voice required=\"Name=Microsoft Hazel Desktop\"><rate absspeed=\"-5\"><pitch absmiddle=\"0\">%s</pitch></rate></voice>\n\n\n", slowo, slowo);
                }
    }

    fclose(slowa);
    fclose(wymowa);
    return 0;
}