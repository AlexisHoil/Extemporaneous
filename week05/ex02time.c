#include <stdio.h>


char line [100];
int h, m, s, seconds;

int main(void) {
	
	

	printf("Enter seconds: ");
  fgets(line, sizeof(line), stdin);
  sscanf(line, "%d", &seconds);
	
	h = seconds / 3600;
	seconds = seconds % 3600;
	m = seconds / 60;
	s = seconds % 60;
	
	printf(" Hours:%d minutes: %d second: %d", h, m, s);
	
}