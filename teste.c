#include <unistd.h>
#include <stdio.h>
#include <limits.h>

int main(int argc, char const *argv[]) {
	char cwd[PATH_MAX];
	char str_cli[80];
	char file_w_dir[100];
	FILE *file;
	if (getcwd(cwd, sizeof(cwd)) == NULL) {
	   exit(1);
	}
	strcat(str_cli, argv[1]);
	puts(str_cli);
	puts(cwd);
	sprintf(file_w_dir, "%s\\%s", cwd, str_cli);
	puts(file_w_dir);
	
	file  = fopen (file_w_dir, "w");
	if (file == NULL) {
		exit(2);
	}
	fclose(file);
	
	return 0;
}
