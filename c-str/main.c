#include <stdio.h>
#include <stdlib.h>
#include <string.h> 

int main(int argc, char *argv[]) {
	char *s1 = "i'm happy";
	char s2[20] = "i love study!";
	char s3[] = "I love study";
	
	int n2 = strlen(s2);
	printf("I love study!");
	strrev(s2);
	printf("\n"); 
	printf(s2);
	
	
	return 0;
}
