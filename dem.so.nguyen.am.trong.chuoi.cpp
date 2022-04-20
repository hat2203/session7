// nhap mot chuoi n, dem so lan xuat hien cua cac nguyen am
# include <stdio.h>
# include <string.h>
int main (){
	int n;
	printf ("nhap n :");
	scanf ("%d", &n);
	char arrs [n];
	printf ("nhap chuoi : ");

		scanf ("%s", arrs);
	
	int dem=0;
	for (int i=0;i< strlen(arrs);i++){
		if (arrs[i]=='a' || arrs[i]=='e' || arrs[i]=='i' || arrs[i]=='o' || arrs[i]=='u'){
			dem++;
		}
	}
	printf ("chuoi chua %d nguyen am",dem);
}


