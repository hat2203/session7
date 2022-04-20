// nhap vao 1 tring, chuyen srting thanh in hoa het
//vi du: t2203E -> T2203E
#include <stdio.h>
#include <string.h>
int main (){
	char s[20];
	printf ("nhap chuoi=");
	scanf ("%s",s);
		 printf ("chuoi moi nhap la :%s",s);
		 for (int i=0;i<20;i++){
		 	
		 	if (s[i]<=122 && s[i]>=97){
		 		s[i]=s[i]-32;
			}
		 }
	printf ("\nchuoi nhap lai la : %s",s);
}
