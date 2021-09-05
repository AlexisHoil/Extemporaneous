#include <stdio.h>

char line[100];
int rows, row_count, columns, columns_count, value, n;
int main(void)
{
	printf("Enter number:");
	fgets(line, sizeof(line), stdin);
    sscanf(line, "%d", &n);
	rows = n;
	columns = n;
	for (row_count = 0; row_count < rows; ++row_count) {
		for (columns_count = 0; columns_count < columns; ++columns_count) {
		value = (row_count + 1) * (columns_count + 1);
		printf("%5d ", value);
		}
		printf("\n");
	}
}