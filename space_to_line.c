#include <stdio.h>
int main(void){
	printf("Enter a string:\n");
	char a;
	while (1){
		a = getchar();
		if (a == ' ')
			putchar('\n');
		else if (a == '.')
			break;
		else
			putchar(a);
	}
	putchar('\n');
	return 0;
}
