
#include<iostream>
#include<iomanip>
#include<string>
#include<conio.h>

using namespace std;

int main()
{
	int i, nilai, benar=0, salah=0;
	string user, pass;
	char pilihanlogin, pilihan, jawab, pilih;
	ulang :
	cout<<"                                          SELAMAT DATANG\n";
	cout<<"                                                DI\n";
	cout<<"                                      KUIS COBA-COBA BERHADIAH\n";
	cout<<"                           =============================================\n";
	cout<<"                                            SilahkanLogin!\n";
	cout<<"\t\t\t\t\t\t\t\t\t\n";
	cout<<"\t\t\t\t Masukkan Ussername : ";cin>>user;cout<<"\n";
	cout<<"\t\t\t\t Masukkan Password  : ";cin>>pass;cout<<"\t\t\n";
			if (user == "ranta" && pass == "123")
			{
				cout<<"\t\t\t Login Berhasil\t\t\n";
			}
			else
			{
				cout<<"\t\t\t Ussername dan password anda salah silahkancobakembali \t\t\n";
				cout<<"\t\t\t Cobalagi ?[y/t]  : ";cin>>pilihanlogin;cout<<"\t\t\n";
					if (pilihanlogin=='y' || pilihanlogin=='Y')
					{system("cls");
					goto ulang;}
					else{goto selesai;}
					if (pilihanlogin=='t' || pilihanlogin=='T')
					{goto selesai;}		
			}
			
			
	cout<<"-------------------------------------------------------------------------\n";
	system("cls");
	{
ulangjwb :
	cout<<"PILIH SALAH SATU JAWABAN YANG MENURUT ANDA BENAR, ANTARA A, B, C, ATAU D!\n";
	cout<<"=========================================================================\n";
	cout<<"1. Berikut ini yang merupakan gejala dari covid-19,kecuali ??\n";
	string pilgan1[50]={"a. demam ","b. batuk kering","c. sakit tenggorokan","d. bau badan"};
	for (i=0;i<=3;i++)
	{cout<<pilgan1[i]<<"\n";}
cout<<"JawabanAnda : ";
cin>>jawab;
if(jawab == 'd' || jawab == 'D')
        {benar++;}
else{
        salah++;}
    cout<<"==========================================================================\n";        
cout<<"2. Menurut data terkini tentang covid-19, negara manakah yang merupakan negara dengan jumlah terinfeksi virus terbanyak??\n";
    string pilgan2[50]={"a. Indonesia","b. Italia","c. Amerika","d. China"};
	for (i=0;i<=3;i++)
	{cout<<pilgan2[i]<<"\n";}
cout<<"JawabanAnda : ";
cin>>jawab;
if(jawab == 'c' || jawab == 'C')
        {benar++;}
else{
        salah++;}
    cout<<"==========================================================================\n";        
	cout<<"3.Berikut ini cara untuk mengurangi penyebaran covid-19 adalah ??\n";
	string pilgan3[50]={"a. jalan jalan","b. liburan kepantai","c. kumpul kumpul bersama teman","d. diam dirumah"};
	for (i=0;i<=3;i++)
	{cout<<pilgan3[i]<<"\n";}
cout<<"JawabanAnda : ";
cin>>jawab;
if(jawab == 'd' || jawab == 'D')
        {benar++;}
else{
        salah++;}
	cout<<"==========================================================================\n";				
	cout<<"4. jika kita habis berpergian ke daerah yang terjangkit covid-19 apa yang harus dilakukan agar tidak membahayakan keluarga??\n";
	string pilgan4[50]={"a. mengajak teman bukber","b. melakukan isolasi diri selama 14 hari","c. bersilaturahmi kerumah tetangga","d. jalan-jalan bersama keluarga"};
    for (i=0;i<=3;i++)
	{cout<<pilgan4[i]<<"\n";}
	cout<<"JawabanAnda : ";
cin>>jawab;
if(jawab == 'b' || jawab == 'B')
        {benar++;}
else{
        salah++;}
    cout<<"==========================================================================\n";       
cout<<"5. berikut ini yang merupakan alasan terbesar terjadinya banyak penyebaran covid-19 diindonesia??\n";
    string pilgan5[50]={"a. sering olahraga","b.kurangnya kesadaran dalam diri masyarakat ","c. selalu mencuci tangan","d. main game online"};
	for (i=0;i<=3;i++)
	{cout<<pilgan5[i]<<"\n";}
cout<<"JawabanAnda : ";
cin>>jawab;
if(jawab == 'b' || jawab == 'B')
        {benar++;}
else{
        salah++;}
	cout<<"==========================================================================\n";
	cout<<"6. apa yang harus dilakukan jika kita terpaksa melakukan aktifitas diluar selama masa covid-19 ini??\n";
	string pilgan6[50]={"a. menggunakan masker ","b. makan telur rebus","c. tidak mempersiapkan apapun","d. makan dimana saja"};
	for (i=0;i<=3;i++)
	{cout<<pilgan6[i]<<"\n";}
	cout<<"JawabanAnda : ";
cin>>jawab;
if(jawab == 'a' || jawab == 'A')
        {benar++;}
else{
        salah++;}     
	cout<<"==========================================================================\n";
	cout<<"7. alasan dari perintah untuk melakukan karantina diri selama 14 hari adalah ??\n";
	string pilgan7[50]={"a. untuk rebahan","b. push rank sampe top global","c.agar mengetahui kita tertular atau tidak ","d.tidak ada alasan "};
	for (i=0;i<=3;i++)
	{cout<<pilgan7[i]<<"\n";}
cout<<"JawabanAnda : ";
cin>>jawab;
if(jawab == 'c' || jawab == 'C')
        {benar++;}
else{
        salah++;}
	cout<<"==========================================================================\n";
	cout<<"8. Siapa nama juru bicara pemerintah khusus penanganan covid-19???\n";
	string pilgan8[50]={"a. Prabowo","b. Nadiem makarim","c. Rangga(sunda empire) ","d. Achmad Yurianto"};
    for (i=0;i<=3;i++)
	{cout<<pilgan8[i]<<"\n";}
	cout<<"JawabanAnda : ";
cin>>jawab;
if(jawab == 'd' || jawab == 'D')
        {benar++;}
else{
        salah++;}
	cout<<"==========================================================================\n";
	cout<<"9. Kota yang merupakan awal dari penyebaran covid-19 adalah??\n";
	string pilgan9[50]={"a. wuhan","b. jakarta","c. madrid","d. roma"};
	for (i=0;i<=3;i++)
	{cout<<pilgan9[i]<<"\n";}
	cout<<"JawabanAnda : ";
cin>>jawab;
if(jawab == 'a' || jawab == 'A')
        {benar++;}
else{
        salah++;}
	cout<<"==========================================================================\n";
	cout<<"10. jakarta merupakan salah satudaerah yang banyakterinfeksi covid-19, jakarta merupakan daerah dengan infeksi terbanyak ke??\n";
	string pilgan10[50]={"a. 1","b. 7","c. 2","d. 15"};
	for (i=0;i<=3;i++)
	{cout<<pilgan10[i]<<"\n";}
	cout<<"JawabanAnda : ";
cin>>jawab;
if(jawab == 'a' || jawab == 'A')
        {benar++;}
else{
        salah++;} 
			
	cout<<"Apakah anda yakin dengan jawaban anda??[y/t]\n";cin>>pilihan;cout<<"\n";
					if (pilihan=='y' || pilihan=='Y')
					{goto nilai;}
					
					if (pilihan=='t' || pilihan=='T')
					{system("cls"); 
					goto ulangjwb;
					cout<<endl;}												

	}		nilai :
					cout<<"=====================================================\n";
					cout<<"PerolehanNilai :"<<endl;
		nilai = benar*10;
		cout<<"    JumlahBenar : "<<benar<<" soal "<<endl;
		cout<<"    JumlahSalah : "<<salah<<" soal "<<endl;
		cout<<"    Nilai Anda   : "<<nilai<<"\n"<<endl;
			selesai :
			cout<<"==========================="<<endl;
			cout<<"Program Selesai, Terimakasi\n";
			cout<<"==========================="<<endl;
	
}
