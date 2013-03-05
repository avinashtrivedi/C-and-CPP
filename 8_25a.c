#include <stdio.h>
#include <conio.h>
void main(int argc,char *argv[])
{
  if (remove("argv[1]") ==0)
  puts("argv[1] successfully removed\n");
  else puts("Error in deleting a file\n");
}
