#include <stdio.h>
#include <string.h>
#include <dirent.h>
#include <stdlib.h>
#define MAX_LIMIT 100
int main(void)
{
    char des[MAX_LIMIT];
    printf("Enter the description of the rule\n");
    fgets(des, MAX_LIMIT, stdin);

    FILE *fp;
    //char filename[]="Section177.txt",line[200],search_string[]="Rules";

    struct dirent *de;  // Pointer for directory entry

    // opendir() returns a pointer of DIR type.
    DIR *dr = opendir(".");

    if (dr == NULL)  // opendir returns NULL if couldn't open directory
    {
        printf("Could not open current directory" );
        return 0;
    }


    // for readdir()
    while ((de = readdir(dr)) != NULL)
        {
            fp=fopen(de->d_name,"r");

        if(!fp)
        {
                perror("could not find the file");
                exit(0);
        }

        while ( fgets ( des, MAX_LIMIT, fp ) != NULL ) /* read a line */
        {
                if(strstr(des,des))
                fputs ( de->d_name, stdout ); /* write the line */
        }
        fclose ( fp );
        return 0;

        closedir(dr);
        return 0;

}

        }


            //printf("%s\n", de->d_name);


