#include <stdio.h>

int main ()
{

   int n1, antecessor, sucessor;

   scanf("%d", &n1);

   antecessor = (n1) - 1;
   sucessor = (n1) + 1;

   printf("%d %d", antecessor, sucessor);

   return 0;
}
