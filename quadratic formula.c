#include<stdio.h>
main()
{
  float a,b,c,finalAnswer1,supAnswer,finalAnswer2;
  printf("input A");
  scanf("%f",&a);
  printf("input B");
  scanf("%f",&b);
  printf("input C");
  scanf("%f",&c);
  supAnswer=sqrt((b*b)-(4*a*c));
  finalAnswer1=((-b)+supAnswer)/(2*a);
  finalAnswer2=((-b)-supAnswer)/(2*a);
  printf("first answer is %f \n",finalAnswer1);
  printf("second answer is %f",finalAnswer2);
}