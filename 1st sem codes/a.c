//kjioy
  #include <stdio.h>
  #include <conio.h>
  int main()
  {
      char a;
      scanf("%c",&a);
     (isupper(a)==1)?printf("It is upper.\n"):printf("It is lower.\n");
     (isalnum(a)==1)?printf("It is numeric.\n"):printf("It is not numeric.\n");
     (isblank(a)==1)?printf("It is blank."):printf("It is not blank.");
      (isalpha(a)==1)?printf("It is alphabetic.\n"):printf("It is not alphabetic.\n");
       (iscntrl(a)==1)?printf("It is a control character.\n"):printf("It is not a control character.\n");
       (isdigit(a)==1)?printf("It is a digit."):printf("It is not a digit.");
       (islower(a)==1)?printf("It is lower."):printf("It is not not lower.");
       (isgraph(a)==1)?printf("It is a graph."):printf("It is not a graph.");
       (isxdigit(a)==1)?printf("It is hexadecimal."):printf("It is not hexadecimal.");
      return 0;

  }
