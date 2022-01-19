#include <stdio.h>

int main(){

	int prev, c;
	prev = c = 0;

	while ((c = getchar()) != EOF){
		if (c == ' ' || c == '\t' || c == '\n' ){
			if (prev != ' ' && prev != '\t' && prev != '\n')
				putchar('\n');
			prev = '\n';
		}
		else{
			putchar(c);
			prev = c;
		}
	}
	return 0;
}