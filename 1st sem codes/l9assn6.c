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
		display(s[i].name,s[i].roll,s[i].address,s[i].age,s[i].mrkphy,s[i].mrkc,s[i].mrkmth,s[i].avr);
		
	}
	return 0;
}

void display(char name[50],int roll,char address[50],int age,int mrkphy,int mrkc,int mrkmth,float avr)
{
		printf("\nName:%s\nRoll no:%d\nAddress:%s\nAge:%d\n",name,roll,address,age,mrkphy,mrkc,mrkmth,avr);
		printf("Marks secured in Physics:%d\n",mrkphy);
		printf("Marks secured in C:%d\n",mrkc);
		printf("Marks secured in Maths:%d\n",mrkmth);
		printf("\nAverage marks=%.2f\n",avr);
}
