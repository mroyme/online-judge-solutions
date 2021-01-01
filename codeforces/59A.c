#include <stdio.h>
#include <ctype.h>

void str_toupper(char *s) 
{
	while(*s) {
		*s = toupper(*s);
		s++;
	}
}

void str_tolower(char * s) 
{
	while(*s) {
		*s = tolower(*s);
		s++;
	}
}

int main(void)
{
	char s[100];
	scanf("%s", s);

	int upper = 0;
	int lower = 0;
	for (int i = 0; s[i] != '\0'; i++) {
		if (isupper(s[i])) {
			upper++;
		} else {
			lower++;
		}
	}

	if (upper > lower) {
		str_toupper(s);
	} else {
		str_tolower(s);
	}

	printf("%s", s);
}
