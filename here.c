#include <unistd.h>
#include <stdio.h>
#include <limits.h>

void main () {
  char cwd[PATH_MAX];
  if (getcwd(cwd, sizeof(cwd)) == NULL) { //testa se pregou o arquivo
	   exit(1);	//se sim ele da um exit()
	}
  printf(cwd); //print the curdir
}