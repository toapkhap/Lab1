#include<stdio.h>

int main () {

int a;

printf ("Enter a number: ");
scanf ("%d", &a);

if (a>0) {
	printf ("This is a positive number");
} else if (a==0) {
	printf ("The number is zero");
} else {
	printf ("This is a negative number");
}
return 0;
}

