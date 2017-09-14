#include <stdio.h>
#include <conio.h>

struct company{
	char name[50];
	char address[50];
	int phone;
	int noOfEmployees;
};

int main(void)
{
	struct company new1;
	printf("Name of Company:\n");
	scanf("%s",new1.name);
	printf("Address of Company:\n");
	scanf("%s",new1.address);
	printf("Phone no. of Company:\n");
	scanf("%d",&new1.phone);
	printf("Number of employees:\n");
	scanf("%d",&new1.noOfEmployees);

	printf("\nName of Company:%s\nAddress of Company:%s\nPhone no. of \
Company:%d\nNumber of employees:%d\n",new1.name,new1.address,new1.phone,new1.noOfEmployees);
	return 0;
}
