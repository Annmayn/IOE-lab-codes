#include <stdio.h>
#include <conio.h>

void display(char[],int,char[],int,int,int,int,float);

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
	int i,a,b,c;
	struct student s[48];
	struct student *ptr;
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
		s[i].avr=(float)(s[i].mrkphy+s[i].mrkc+s[i].mrkmth)/3;
		ptr=&s[i];
		
		printf("\nName:%s\nRoll no:%d\nAddress:%s\nAge:%d\n",ptr->name,ptr->roll,ptr->address,ptr->age);
	}
	
	return 0;
}

