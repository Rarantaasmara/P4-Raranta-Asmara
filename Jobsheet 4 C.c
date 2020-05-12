#include <stdio.h>
#include <conio.h>
Int main (){
int matrika [2][2];
int matrikb [2][2];
int hasil [2][2];
int i, j;
printf ("Pengurangan Matriks\n");
for (i = 0; i< 2; i++){
for (j = 0; j < 2; j++){
printf ("Masukkan nilai index %d, %d = ", i, j);
scanf ("%d", &matrika[i][j]);
}
}
printf ("\n");
for (i = 0; i< 2; i++){
for (j = 0; j < 2; j++){
printf ("Masukkan nilai index %d, %d = ", i, j);
scanf ("%d", &matrikb[i][j]);
}
}for (i = 0; i< 2; i++){
for (j = 0; j < 2; j++){
hasil [i][j]=matrika[i][j]-matrikb[i][j];
printf ("%d ", hasil[i][j]);
}
printf ("\n");
}
getch();
}
