#include <stdio.h>
#include <stdlib.h>

void write_file(char file[], char mode[], char content[])
{
  FILE *fp;
  fp = fopen(file, mode);
  fprintf(fp, content);
  fclose(fp);
}

const char * read_file(char file[], char mode[])
{
  char * result[255];
  FILE *fp;
  fp = fopen(file, mode);
  fgets(result, 255, (FILE*)fp);
  fclose(fp);
  return result;
}