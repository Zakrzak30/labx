#include<stdio.h>

int main(){
	int tab[8];
	char tekst;
	int i, j, obraz, reszta;

	while( tekst != EOF ){
		scanf("%c", &tekst );
		obraz = (int)tekst;
		for( i=0; i<8; i++ )
			tab[i] = 0;
			j = 7;
		while( obraz != 0 ){
			
			reszta = obraz%2;
			obraz = obraz/2;
			if( reszta == 1 )
				tab[j] = 1;
			j--;
		}
		for(i=0; i<8; i++)
			printf("%d", tab[i]);
		printf("\n");
	}
return 0;
}
