#include <unistd.h>
#include <stdio.h>
#include <limits.h>

int main(int argc, char const *argv[]) {
	char cwd[PATH_MAX];
	char str_cli[80];
	char file_w_dir[100];
	FILE *file;
	if (getcwd(cwd, sizeof(cwd)) == NULL) { //testa se pregou o arquivo
	   exit(1);	//se sim ele da um exit()
	}
	strcat(str_cli, argv[1]);	//argv[1] é o primeiro argumento passado por linha de comando colocamos ele
								//	dentro de uma string porque vai ser o nome do arquivo
	sprintf(file_w_dir, "%s\\%s", cwd, str_cli); //concatenamos o diretório completo com o nome do arquivo
	file  = fopen (file_w_dir, "at+");	//criamos esse arquivo
	if (file == NULL) {	//testamos
		exit(2);	//saimos
	}
	puts("Done");
	fclose(file); //fecha o arquivo
	return 0;
}
