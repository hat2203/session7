// nhap mot mang chuoi sau do nhap mot chuoi kiem tra xem chuoi do co trong mang khong
#include <stdio.h>
#include <string.h>
int main (){
	int n;
	printf ("nhap n:");
	scanf ("%d",&n);
	char arrs[n][50];
	printf ("nhap mang chuoi :\n");
	for (int i=0;i<n;i++){
		scanf ("%s",arrs[i]);
	}
	char arrs1[50];
	printf ("nhap chuoi:\n");
	scanf ("%s", arrs1);
	bool f=true;
	for (int i=0;i<n;i++){
	if (strcmp(arrs1,arrs[i])==0){
		printf ("co thuoc mang");
		f=false;
		break;
	}
	
}
	if(f){
		printf ("khong thuoc mang");
	}	
}
