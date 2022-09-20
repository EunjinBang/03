#include <stdio.h>
#include <stdlib.h>
int main(int argc, char *argv[]) { 
	char text;
	
	printf("enter a character :");
	scanf("%c", &text);
	
	printf("the next character of %c (%d) is %c (%d)", text, text, text+1, text+1);
	
	return 0;
}
