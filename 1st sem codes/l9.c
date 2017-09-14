#include <stdio.h>
#include <conio.h>

struct student{
	char name[50];
	int roll;
	char address[20];
	int age;
	int mrkphy;
	int mrkc;
	int mrkmth;
	float avr;
};

int main(void)
{
	int i;
	struct student s[48];
	for (i=0;i<48;i++)
	{
		printf("Enter the Name,Roll no.,Address and Age of student %d:\n",i+1);
		scanf("%s %d %s %d",s[i].name,&s[i].roll,s[i].address,&s[i].age);
		printf("Enter the marks secured in Physics :\n");
		scanf("%d",&s[i].mrkphy);
		printf("Enter the marks secured in C:\n");
		scanf("%d",&s[i].mrkc);
		printf("Enter the marks secured in Maths:\n");
		scanf("%d",&s[i].mrkmth);
		s[i].avr=(s[i].mrkphy+s[i].mrkc+s[i].mrkmth)/3;
	}
	
	for (i=0;i<48;i++)
	{
		printf("\nName:%s\nRoll no:%d\nAddress:%s\nAge:%d\n",s[i].name,s[i].roll,s[i].address,s[i].age);
		printf("Marks secured in Physics:%d\n",s[i].mrkphy);
		printf("Marks secured in C:%d\n",s[i].mrkc);
		printf("Marks secured in Maths:%d\n",s[i].mrkmth);
		printf("\nAverage marks=%.2f",s[i].avr);
	}
	return 0;
}
