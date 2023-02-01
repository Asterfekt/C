#include <stdlib.h>
#include <stdio.h>
#include <string.h>
 
#define LEN 21
#define WORD_CNT 5
 
int compare(const void* a, const void* b)
{
    char* a_ = (char*)a;
    char* b_ = (char*)b;
 
    return strcmp(a_, b_);
}
 
int main()
{
    char words[WORD_CNT][LEN];
 
    for (int i=0; i<WORD_CNT; i++)
    {
        fgets(words[i], LEN, stdin);
    }
 
    qsort(words, WORD_CNT, LEN*sizeof(char), compare);
 
    for (int i=0; i<WORD_CNT; i++)
    {
        printf("\n %s", words[i]);
    }
 
    return 0;
}
