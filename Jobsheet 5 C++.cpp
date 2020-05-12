#include <iostream>
#include <conio.h>
using namespace std;
int matrika[2][2]; 
int matrikb[2][2]; 
int matrikc[2][2]; 
int temp;
int main (){ 
for (int x = 0;x<2;x++){          
for (int y =0;y<2;y++){ 
cout <<"masukan nilai matrik A baris ke-"<<(x+1)<<" kolom ke-"<<(y+1)<<" : "; 
cin>>matrika[x][y]; 
} 
} 
cout<<endl;
cout<<"Matrik A :"<<endl; 
for (int x = 0;x<2;x++){ 
for (int y =0;y<2;y++){ 
cout <<matrika[x][y]<<"   "; 
} 
cout<<endl; 
} 
cout<<endl; 
for (int x = 0;x<2;x++){ 
for (int y =0;y<2;y++){ 
cout <<"masukan nilai matrik B baris ke-"<<(x+1)<<" kolom ke-"<<(y+1)<<" : "; 
cin>>matrikb[x][y]; 
} 
} 
cout<<endl;
cout<<"Matrik B :"<<endl; 
for (int x = 0;x<2;x++){ 
for (int y =0;y<2;y++){ 
cout <<matrikb[x][y]<<"   "; 
} 
cout<<endl; 
} 
for (int x = 0;x<2;x++){ 
for (int y =0;y<2;y++){ 
matrikc[x][y]=0; 
for (int z =0;z<2;z++){ 
temp=matrika[x][z]*matrikb[z][y]; 
matrikc[x][y]=matrikc[x][y]+temp; 
} 
} 
}
cout<<endl; 
cout<<"Matrik hasil perkalian :"<<endl; 
for (int x = 0;x<2;x++){ 
for (int y =0;y<2;y++){ 
cout <<matrikc[x][y]<<"   "; 
} 
cout<<endl; 
} 
getch(); 
}
