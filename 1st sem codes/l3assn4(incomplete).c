/*Demonstrate the differences among getch(),getche(),getchar();
  scanf() and gets(),puts() & printf()					*/

  #include<stdio.h>
  #include <conio.h>


  int main(void)
  {
	  char a;
	 printf("Press any key to continue while in the program!!!\n\n");
	  printf("This program will teach you about the differences\
 between getch(),getche(),getchar(),scanf(),gets(),puts() and printf()\n\n");
	  getch();
	  printf("getch() basically takes input from user but doesn't display them on the screen,\
	  neither does it require for the user to press 'enter' in order to accept the input.\n");
	  getch();
	  printf("DEMO\n");
	  getch();
	  printf("Please enter a character");
	  a=getch();
	  printf("\nNotice how you didn't have to press 'enter' for the computer to accept your input.\n");
	  printf("Did you also notice that you pressed %c but it wasn't displayed on the screen?\n",a);
	  printf("That is how getch() works\n\n");
	  getch();

	  printf("Moving on to getche()\n");
	  getch();
	  printf("getche() is similar to getch() except for the fact that it displays the input you provide,\n");
	  getch();
	  printf("DEMO\n");
	  printf("Please enter a character:");
	  a=getche();
	  printf("\nNotice the similarity.\n");
	  getch();
	  printf("But this time,the input character %c that you provided to the computer was displayed on the screen.\n\n",a);
	  getch();

	  printf("Moving on to getchar()\n");
	  printf("getchar is also similar to getch() and getche() as in it takes character value input from user.\n");
	  printf("\nBut getchar() requires for the user to press 'enter' in order to validate the input.\n");
	  printf("Also,the input that the user  provides is displayed on the screen.");
	  getch();
	  printf("\nDEMO\n");
	  printf("Please enter a character:");
	  a=getchar();
	  printf("\nNotice the similarity.\n");
	  printf("But this time,you had to validate the input character %c that you provided to the computer",a);
	  printf(" and it was displayed on the screen.\n");
	  getch();

	  printf("scanf() is the function which is used in C to take input from users.");

	  printf("scanf() is the function which is used in C in order to take input from users.\n");
	  return 0;
  }
