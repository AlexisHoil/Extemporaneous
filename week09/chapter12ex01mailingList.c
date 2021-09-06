#include <stdio.h>

int main(void)
{
	int list_length; 
	int counter;     

	struct mailing {
		char name[30];
		char last_name[30];
		char gender[10];
		char mail[40];
	};

	struct mailing list[] = {
		{
			"Alexis",
			"Hoil",
			"Male",
			"1909090@upy.edu.mx",
		},
	};

	list_length = sizeof(list) / sizeof(list[0]);

	for (counter = 0; counter < list_length; ++counter) {
		printf("First name: %s\n", list[counter].name);
		printf("Last name: %s\n", list[counter].last_name);
		printf("Gender: %s\n", list[counter].gender);
		printf("mail: %s\n", list[counter].mail);

	}

	return 0;
}