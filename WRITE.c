

#include <stdio.h>
#include <stdlib.h>

FILE * fptr;
struct Info {
    char title[40];
};
main()
{


    int Count;

    struct Info things[3];
    for (Count = 0; Count < 3; Count++)
    {
        printf("Give me the best thing nr. %d.\n", (Count+1));
       gets(things[Count].title);

    }

    fptr = fopen("C:\\users\\mateu\\Desktop\\File\\Info.txt","w");

    if (fptr == 0)
    {
        printf("\n File open error.\n");
        exit (1);
    }

    for (Count = 0; Count < 3; Count++)
    {
        fprintf(fptr, "Nr:%d.%s ", (Count+1),things[Count].title);
        fprintf(fptr, "\n\n");
    }
    fclose(fptr);

    return(0);
}
