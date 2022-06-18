#include <stdio.h>
#include <stdlib.h>

FILE * fptr;


main()

{

    char fileLine[100];
 fptr = fopen("C:\\users\\mateu\\Desktop\\File\\Info.txt","r");

    if (fptr != 0)
    {
        while (!feof(fptr))
        {
            fgets(fileLine, 100, fptr);
            if (!feof(fptr))
            {
                puts(fileLine);
            }
        }
    }
    else
    {
    printf("\n File open error.\n");
    }

    fclose(fptr);

    return(0);
}
