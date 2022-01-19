#include <stdio.h>
#include <stdlib.h>
#include "../include/admin.h"
#include "../include/pwd.h"
#include "../include/interface.h"
#include "../include/indexation.h"
#include "../include/indexation_txt.h"
#include "../include/img.h"
#include "../include/pile_Img.h"
#include "../include/descripteurAudio.h"
#include "../include/pile_Audio.h"
#include "../include/pile_Texte.h"
#include "../include/recherche.h"
#include "../include/comparaison.h"


int main(int argc, char const *argv[])
{

	// lance l'affichage du menu principal
	//  puis demande le numero du menu souhaite et lance la fonction de gestion du menu selectionne 
	//  si le numero n'est pas bon on redemande un numero de menu
	//  le choix numero 0 modifie la valeur de la variable event afin de sortir de la boucle et pouvoir arreter le programme
	srand(time(NULL));
	afficheAccueil();
	int event = 1 ;
	long choixMenu;
	while(event != -1){
		afficheMenuPrincipal();
		choixMenu=lireLong();
		printf("\n");
		switch(choixMenu)
		{



			case 1:
				if (menuAdminVerif()== 0) event = -1;
				break;
			case 2:
				if (menuUtilisateur() == 0) event = -1;
				break;
			case 3:
				event = -1;
				break;
			default:
				afficheErreurMenu();
				break;
		}
	printf("\n");
	}
	printf("###########################################\n");
 	printf("#       fermeture de 'lapplication        #\n");
 	printf("###########################################\n");


	return 0;
}

/*
int main(int argc, char *argv[])
{
	char chaine[10000];
	lanceRechercheViaMotCle(*(argv+1),chaine);
	//char adresse[100];
	//strcpy(adresse, "./Requete/51.bmp");
	//lanceRechercheViaAdresse(adresse,chaine);
	printf("\n==========\n%s",chaine);
	return 0;
}


int main(int argc, char const *argv[])
{

	FILE * f;
	PILE_Texte pT=init_PILE_Texte();
	pT=Charger_Pile_DescripteurTexte(pT);
	f=fopen("./Database/Descripteur/dTtest.txt","a+");
	while(!PILE_Texte_estVide(pT)){
		pT=dePILE_Texte(pT,f);
	}
	fclose(f);


     
};
*/

