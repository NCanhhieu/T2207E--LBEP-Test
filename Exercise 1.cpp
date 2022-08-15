#include <stdio.h>
#include <string.h>

int main () {
   int x;
   printf (" input x lenght of string S1: \n");  //gia tri chieu dai chuoi 1
   do {                                             // kiem tra chieu dai chuoi 1 co <0 ko
   	scanf("%d", &x);
   	if ( x <=0 ) { printf (" x need to be   > 0 and a  interger \n ");
	   } 
   } while ( x <=0);
   char s1[x];
   printf (" input string S1: \n");
   scanf("%s", s1);                                  // nhap chuoi 1
    int y;
   printf (" input y lenght of string S2: \n");   // gia tri chiue dai chuoi 2
   do {                                              // kiem tra chieu dai chuoi 2 co <0 ko                
   	scanf("%d", &y);
   	if ( y <=0 ) { printf (" y need to be > 0 and a  interger \n ");
	   } 
   } while ( y <=0);
   char s2[y];
   printf (" input string S2: \n");
   scanf("%s",s2);                                 // nhap chuoi 2
   
   if ( strlen(s1) > strlen(s2)) {                                   //  neu chuoi 1 dai hon chuoi 2, dao chieu
   	    char stemp[x];
   	    strcpy(stemp,s2);
   	    strcpy(s2,s1);
   	    strcpy(s1,stemp);
   }
   bool  T = false;
	int i = 0;
		while ( s2[i] != 0){                     //khi nao s2 chua het thi con va
			if ( s2[i] == s1[0]) {
				int j = 0;
				while( s1[j] != 0 && s2[i] != 0 && s1[j] == s2[i]){
					i++;
					j++;
				}
				if( s1[j] == 0) {
					T = true;
					break;
				}
			} else { 
				i++;}
		}
   if (T) { 
   printf ("YES");
   } else { 
   	printf ("NO");
   }
  return 0;	
}
