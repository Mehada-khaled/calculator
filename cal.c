#include <stdio.h>

int main()
{
  int num1 ;
  int num2 ;
  char chr;
  int output ;
  scanf("%c", &chr);
  scanf("%d",&num1);
  scanf("%d",&num2);

  //Print the operators :
  
  printf("Your operators is : %c\n", chr);
  printf("num1 : %d\n",num1);
  printf("num2 : %d\n",num2);
  printf("<< enter to show your output >>\n");
  printf("  ");
 
  switch(chr)
  {
    case '+' :
    output =num1+num2;
    printf("your output : %d\n",output);
    break;

    case '-' :
    output =num1-num2;
    printf("your output : %d\n",output);
    break;

    case '*' :
    output =num1*num2;
    printf("your output : %d\n",output);
    break;

    case '%' :
    output =num1%num2;
    printf("your output : %d\n",output);
    break;

    default:
    printf("the end of program");

  }

  return 0;
}
