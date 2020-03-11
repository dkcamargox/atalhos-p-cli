#include <stdio.h>
#include <string.h>
int main(int argc, char const *argv[])
{
	char str[30] = "\0";
	char str_cli[7];
	int i;
	for (i = 1; i < argc; ++i)
	{
		strcat(str, argv[i]);
		strcat(str, " ");
	}

	sprintf(str_cli,"mysql --no-beep %s", str);
	system(str_cli);
	return 0;
}