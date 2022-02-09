/*
    the code that will be used to handle opening the file and getting the content line by line.
*/

#include <stdio.h>
#include <stdlib.h>

char    get_single_line(char file_name, char mode)
{
    FILE *file_pnt;
    char singleLine[150];

    file_pnt = fopen("numbers.dict", "r");
    
    //check if ther's no problem while opening the file
    if (file_name == NULL)
    {
        perror("Unable to open the file");
        exit(1);
    }
    
    while (!feof(file_pnt))
    {

    }
   
   fclose(file_pnt);
}