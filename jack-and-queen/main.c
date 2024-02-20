#include<stdio.h>

#include<conio.h>

int main()

{

int N;

printf("Enter total number of cards : ");

scanf("%d", &N);

if(N < 1 || N > 52)

{

 printf("Invalid Input");

 return 0;

}

int A[N];

printf("Enter the values on the cards that are turned: \n");

for(int i = 0; i < N; i++)

{

 scanf("%d", &A[i]);

 if(A[i] < 1 || A[i] > 13)

 {

  printf("Invalid Input");

  return 0;

 }

}

int Point_A = 0, Point_B = 0;

for(int i = 0; i < N; i++)

{

 if(i%2 == 0)

 {

  if(A[i] == 1 && A[i+1] < 11 && A[i+1] != 1 && A[i+2] < 11 && A[i+2] != 1 && A[i+3] < 11 && A[i+3] != 1 && A[i+4] < 11 && A[i+4] != 1)

  {

   printf("Player A scores 4 points.\n");

   Point_A = Point_A + 4;

  }

  if(A[i] == 13 && A[i+1] < 11 && A[i+1] != 1 && A[i+2] < 11 && A[i+2] != 1 && A[i+3] < 11 && A[i+3] != 1)

  {

   printf("Player A scores 3 points.\n");

   Point_A = Point_A + 3;

  }

  if(A[i] == 12 && A[i+1] < 11 && A[i+1] != 1 && A[i+2] < 11 && A[i+2] != 1)

  {

   printf("Player A scores 2 points.\n");

   Point_A = Point_A + 2;

  }

  if(A[i] == 11 && A[i+1] < 11 && A[i+1] != 1)

  {

   printf("Player A scores 1 point.\n");

   Point_A = Point_A + 1;

  }

 }

 else

 {

  if(A[i] == 1 && A[i+1] < 11 && A[i+1] != 1 && A[i+2] < 11 && A[i+2] != 1 && A[i+3] < 11 && A[i+3] != 1 && A[i+4] < 11 && A[i+4] != 1)

  {

   printf("Player B scores 4 points.\n");

   Point_B = Point_B + 4;

  }

  if(A[i] == 13 && A[i+1] < 11 && A[i+1] != 1 && A[i+2] < 11 && A[i+2] != 1 && A[i+3] < 11 && A[i+3] != 1)

  {

   printf("Player B scores 3 points.\n");

   Point_B = Point_B + 3;

  }

  if(A[i] == 12 && A[i+1] < 11 && A[i+1] != 1 && A[i+2] < 11 && A[i+2] != 1)

  {

   printf("Player B scores 2 points.\n");

   Point_B = Point_B + 2;

  }

  if(A[i] == 11 && A[i+1] < 11 && A[i+1] != 1)

  {

   printf("Player B scores 1 point.\n");

   Point_B = Point_B + 1;

  }

 }

}

printf("Player A = %d point(s)\n", Point_A);

printf("Player B = %d point(s)", Point_B);

return 0;

}