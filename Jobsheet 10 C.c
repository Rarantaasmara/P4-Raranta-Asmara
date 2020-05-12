#include<stdio.h>
main(){
char nama [3][5][7];
int i,j;
for(i=0;i<3;i++){
for (j=0;i<3;i++){
printf("Masukan Nim:[%d][%d]=",i,j);
	scanf("%s",nama[i][j]);
	}
}
}
