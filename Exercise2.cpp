#include <stdio.h>

bool kiemtra(int a){
	 if (a < 2) {
        return false;
	 }
	for (int i = 2 ; i*i <= a; i++) 
	{
		if(a % i == 0) return false;
	}

	return true;

}
int main () {
	printf(" input integer number that >0  x :\n");
	int x;
	do { 
	scanf("%d", &x);
	if ( x <= 0) { printf(" x need to be a integer and > 0  \n");}
	} while ( x <= 0);
	int a[x];
	printf(" input integer array  a have  x lenght \n");
	for (int i = 0; i < x; i++){
		scanf("%d", &a[i]);
	}
	int dem = 0;
    for ( int i = 0; i < x; i++) {
	
    if ( kiemtra(a[i])) {
    	printf (" %d in %d of array a is  a prime number \n", a[i], i);
    	dem++;
	} 	
}
if ( dem == 0) {
		printf (" NO prime number");
}
	return 0;
	}
