#include <stdio.h>
#include <string.h>
#include <dirent.h>
#include <stdlib.h>
#include <stdbool.h>
#define MAX_LIMIT 100

        int main(void)
{
    DIR *p, *c;
    char temp[512];
  struct dirent *pp;

  bool copy_characters = false;


  char str[100];
  printf("Enter the description of the rule\n");
 gets(str);
 strlwr(str);


  p = opendir ("./");
  int i=0;
  if (p != NULL)
  {
    while ((pp = readdir (p))!=NULL) {

      int length = strlen(pp->d_name);
      if (strncmp(pp->d_name + length - 4, ".txt", 4) == 0) {
            printf("%s\n",pp->d_name);
            FILE *file;
      char c;
file = fopen(pp->d_name, "r");
if (file) {
         int line_num = 1;


    while(fgets(temp, 512, file) != NULL) {

        strlwr(temp);
		if((strstr(temp, str)) != NULL) {
			printf("A match found on line: %d\n", line_num);
            const int desired_line;

        for (;;) {
		c = fgetc(pp->d_name);
		if (EOF == c) {
			break;
		} else if ('\n' == c) {
			++line_num;
			if (desired_line == line_num) {
				copy_characters = true;
			} else if (copy_characters) {
				break;
			}
		} else if (copy_characters) {
			putchar(c);
		}
	}
	putchar('\n');


	return 0;
		}
		line_num++;
       // putchar(c);
    }

    fclose(file);
}
         // puts (pp->d_name);
    //
      }
     // printf("%s\n",pp->d_name);

    }

    (void) closedir (p);
}
}


            //printf("%s\n", de->d_name);


