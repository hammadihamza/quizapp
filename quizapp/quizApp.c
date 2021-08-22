#include <stdio.h>

int main()
{
int score=0;
int answer;

printf("\n\n**********Welcome to the C quiz***************************************\nThe quiz has 5 very basic questions on the C Programming Language.\nYou get +3 for each correct answer & -1 for each wrong/invalid answer.\n**********************************************************************\n\n\n");

printf("\n Q1) Why is it called C programming language but not A or B or D?\n\n");
printf("Options Are as follows:\n");
printf(" [1]C stands for Code \n [2]The inventor's name starts with a C \n [3]It  was developed after a language called 'B' \n [4]None of the above\n");
scanf("%d", &answer);

if(answer==3)
{
printf("Correct!\n\n\n");
score=score+3;
}
else
{
printf("Wrong Answer\n\n\n");
score=score-1;
}

printf("\n Q2) C programming language was developed at?\n");
printf("Options Are as follows:\n");
printf(" [1]IBM\n [2]Bell \n [3]MIT \n [4]Microsoft \n");
scanf("%d", &answer);

if(answer==2)
{
printf("Correct!\n\n\n");
score=score+3;
}
else
{
printf("Wrong Answer\n\n\n");
score=score-1;
}

printf("\n Q3) Which of these is not a C keyword as per ANSI C ?\n");
printf("Options Are as follows:\n");
printf(" [1]default\n [2]goto\n [3]enter\n [4]break\n");
scanf("%d", &answer);

if(answer==3)
{
printf("Correct!\n\n\n");
score=score+3;
}
else
{
printf("Wrong Answer\n\n\n");
score=score-1;
}

printf("\n Q4) What is ANSI ?\n");
printf("Options Are as follows:\n");
printf("[1]Area of Natural and Scientific Interest\n [2]American National Standards Institute\n [3]American National Standardization Institute\n [4]American National Society Of Intellectuals\n");
scanf("%d", &answer);

if(answer==2)
{
printf("Correct!\n\n\n");
score=score+3;
}
else
{
printf("Wrong Answer\n\n\n");
score=score-1;
}

printf("\n Q5)Which of these concepts is NOT supported by C ?\n");
printf("Options Are as follows:\n");
printf(" [1]Pointers\n [2]Functions\n [3]Strings\n [4]Namespaces\n");
scanf("%d", &answer);

if(answer==4)
{
printf("Correct!\n\n\n");
score=score+3;
}
else
{
printf("Wrong Answer\n\n\n");
score=score-1;
}

printf("\n\n\n\n *********Your Total Score is %d out of 15*********\n\n\n\n", score);


return 0;
}

