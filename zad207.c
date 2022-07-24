/* Program treba ispisat tablicu mnozenja u piramidu pomocu for petlje.  */

#include<stdio.h>
int main() {
 int i, j,d;
 
 printf("Unesi do kojeg broja da mnozi :\n");
 scanf("%d",&d);

 for (i = 1; i <= d; i++) {
 	
 for (j = 1; j <= i; j++) {
 printf("%d  ", i * j);
}
 printf("\n");
}
 return(0);
}
