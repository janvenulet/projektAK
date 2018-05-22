#include<stdio.h>
extern void wyjscie();
char rozszerzenie [] = "jvpk";

int main(int argc, char **argv )
{
	char * plik = argv[1]; 	//wczytujemy nazwe pliku i rozszerzenia z konsoli
	char * nazwa;
	char * znak;
	int IOerror = 0 ,iteracja = 0;	
	do
	{
		*(znak) = *(plik + iteracja);
		if ( *znak > 96 && *znak < 123)
		{
			*(nazwa + iteracja) = *znak;
		}  
		else if ( *znak != 46 ) {IOerror= 1 ;break;}
		iteracja++;
	} while (iteracja < 30 || *znak != 46); 
	if (IOerror) {wyjscie();}
	int i = 0;	
	for ( i ; i<4 ; i++)
	{
		if (plik+iteracja != rozszerzenie+ i) {IOerror =1 ;break;}
	}
	if (IOerror) {wyjscie();}
	return 1;
}
