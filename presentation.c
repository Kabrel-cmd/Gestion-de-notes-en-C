#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include "presentation.h"
#include "application.h"
#include "metier.h"

void Verification_de_la_Saisie_des_Etudiants(bool info_sur_Saisie_Etudiants)
{
   if(!info_sur_Saisie_Etudiants)
    {
        printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\tVeuillez d'abord saisir les ‚tudiants.");
        printf("\n\n\n\t\t\t\t\t\t\t\t");
        system("pause");
        system("cls");
    }
}

void Verification_de_la_Saisie_des_Notes(bool info_sur_Saisie_Notes)
{
    if(!info_sur_Saisie_Notes)
    {
        printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\tVeuillez d'abord saisir les notes.");
        printf("\n\n\n\t\t\t\t\t\t\t\t");
        system("pause");
        system("cls");
    }
}

void Menu_Principal(int Nombre_d_etudiants)
{
    printf("\t\t\t\t\t\t\t\t***ANNEE ACADEMIQUE 2023-2024***");
    printf("\n\t\t\t\t\t\t\t\tPROGRAMME DE GESTION DES NOTES #%d",Nombre_d_etudiants);
    printf("\n\t\t\t\t\t\t_ _ _ _ _ _ _ _ _ _ _ _ {MENU PRINCIPAL}_ _ _ _ _ _ _ _ _ _ _ _ ");
    printf("\n\n\n\n\n\t\t\t\t\t\t\t01.AFFICHAGE DES ETUDIANTS PAR ORDRE ALPHABETIQUE.");
    printf("\n\n\t\t\t\t\t\t\t02.ENREGISTREMENT DES ETUDIANTS.");
    printf("\n\n\t\t\t\t\t\t\t03.SAISIE DES NOTES DES ETUDIANTS.");
    printf("\n\n\t\t\t\t\t\t\t04.MODIFICATION DE LA NOTE D'UN ETUDIANT.");
    printf("\n\n\t\t\t\t\t\t\t05.MODIFICATION DES INFORMATIONS D'UN ETUDIANT / D'UNE ETUDIANTE.");
    printf("\n\n\t\t\t\t\t\t\t06.AFFICHAGE DES ETUDIANTS PAR AGE CROISSANT.");
    printf("\n\n\t\t\t\t\t\t\t07.AFFICHAGE DES ETUDIANTS PAR MOYENNE DECROISSANTE.");
    printf("\n\n\t\t\t\t\t\t\t08.AFFICHAGE DES NOTES LES PLUS ELEVEES PAR MATIERE ET VOIRE LE NOM DE L'ETUDIANT.");
    printf("\n\n\t\t\t\t\t\t\t09.AFFICHAGE DE LA REPARTITION DES ETUDIANTS.");
    printf("\n\n\t\t\t\t\t\t\t10.AFFICHAGE DES RESULTATS DES ETUDIANTS PAR ORDRE ALPHABETIQUE.");
    printf("\n\n\t\t\t\t\t\t\t11.AFFICHAGE DES RESULTATS DES ETUDIANTS PAR MOYENNE ELEVE.");
    printf("\n\n\t\t\t\t\t\t\t12.A PROPOS.");
    printf("\n\n\t\t\t\t\t\t\t13.SORTIR DU PROGRAMME.");
}

void Affichage_Liste_Etudiants_Ordre_Alphabetique(Etudiant classe[],int Nombre_d_etudiants)
{
   printf("\t\t\t\t\t\t\t\tLISTE DES ETUDIANTS(ES) PAR ORDRE ALPHABETIQUEUE : \n\n");
   Trier_Les_Noms_des_Etudiants_par_Ordre_Alphabetique(classe,Nombre_d_etudiants);
   Affichage_Etudiants_avec_Informations(classe,Nombre_d_etudiants);
}

void Saisie_des_Etudiants(Etudiant classe[],int Nombre_d_etudiants)
{
    printf("\t\t\t\t\t\t\t\t\tSAISIE DES INFORMATIONS DES ETUDIANTS(ES) : \n\n");
    for(int i = 0 ; i < Nombre_d_etudiants ; i++)
    {

            printf("\n\n\t\t\t\tEtudiant num‚ro %d :\n",i+1);
            Saisir_les_informations(&classe[i]);
            printf("\n\n\n\t\t\t\t\t\t\t\tLes informations ont ‚t‚ correctement enr‚gistrer. ");

    }
}

void Saisie_des_Notes(Etudiant classe[],int Nombre_d_etudiants)
{
    printf("\t\t\t\t\t\t\t\t\tSAISIE DES NOTES DES ETUDIANTS(ES) : \n\n");
    for(int i = 0 ; i < Nombre_d_etudiants ; i++)
    {
        if (classe[i].sexe == 'F') printf("\n\n\t\t\t\tNotes de l'‚tudiante %s %s :\n",classe[i].prenom,classe[i].nom);
        else printf("\n\n\t\t\t\tNotes de l'‚tudiant %s %s :\n",classe[i].prenom,classe[i].nom);
        Saisir_les_Notes(&classe[i]);
        if (classe[i].sexe == 'F') printf("\n\n\t\t\t\t\t\t\tMoyenne de l'‚tudiante %s %s : %.2f/20\n\n\t\t\t\t\t\t\tNombre de cr‚dit cumul‚s : %d/60\n",classe[i].prenom,classe[i].nom,classe[i].moyenne,classe[i].Nombre_de_credit);
        else printf("\n\n\t\t\t\t\t\t\tMoyenne de l'‚tudiant %s %s : %.2f/20\n\n\t\t\t\t\t\t\tNombre de cr‚dit cumul‚s : %d/60\n",classe[i].prenom,classe[i].nom,classe[i].moyenne,classe[i].Nombre_de_credit);
    }
}

void Modification_des_Notes(Etudiant classe[],int Nombre_d_etudiants)
{
        int position = 0 ;

        printf("\t\t\t\t\t\t\t\tMODIFICATION DE LA NOTE D'UN ETUDIANT / D'UNE ETUDIANTE : \n\n\n\t\t\tAffichage des ‚tudiants(es) : ");
        Informations_de_L_Etudiant(classe,Nombre_d_etudiants);
        printf("\n\n\t\t\tEntrez la position de l'‚tudiant ou de l'‚tudiante dont vous voullez modifier la notes en fonction de la liste : ");
        scanf("%d",&position);
        system("cls");
        if( position < Nombre_d_etudiants)
        {
            if (classe[position].sexe == 'F') printf("\n\n\t\t\tVoici l'‚tudiante que vous avez entr‚ %s %s :",classe[position].prenom,classe[position].nom);
            else printf("\n\n\t\t\tVoici l'‚tudiant que vous avez entr‚ %s %s :",classe[position].prenom,classe[position].nom);
            changement_des_Notes(&classe[position]);
        }
        if (position > Nombre_d_etudiants)
        {
            Choix_de_L_Etudiant_pas_Correct();
            printf("\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t");
            system("pause");
            system("cls");
        }
}

void Modification_des_informations(Etudiant classe[], int Nombre_d_etudiants)
{
        int position = 0 ;

        printf("\t\t\t\t\t\t\t\tMODIFICATION DES INFORMATION D'UN ETUDIANT / D'UNE ETUDIANTE : \n\n\n\t\t\tAffichage des ‚tudiants(es) : ");
        Informations_de_L_Etudiant(classe,Nombre_d_etudiants);
        printf("\n\n\t\t\tEntrez la position de l'‚tudiant ou de l'‚tudiante dont vous voullez modifier les informations en fonction de la liste : ");
        scanf("%d",&position);
        system("cls");
        if( position < Nombre_d_etudiants)
        {
            if (classe[position].sexe == 'F') printf("\n\n\t\t\tVoici l'‚tudiante que vous avez entr‚ %s %s :",classe[position].prenom,classe[position].nom);
            else printf("\n\n\t\t\tVoici l'‚tudiant que vous avez entr‚ %s %s :",classe[position].prenom,classe[position].nom);
            changement_des_informations(&classe[position]);
        }
        if (position > Nombre_d_etudiants)
        {
            Choix_de_L_Etudiant_pas_Correct();
            printf("\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t");
            system("pause");
            system("cls");
        }

}

void Affichage_Liste_Etudiants_Age_Croissant(Etudiant classe[], int Nombre_d_etudiants)
{
  printf("\t\t\t\t\t\t\t\tAFFICHAGE DES ETUDIANTS(ES) PAR AGE CROISSANT : \n\n");
  Trier_Etudiants_par_Age_Croissant(classe,Nombre_d_etudiants);
  Affichage_Etudiants_avec_Informations(classe,Nombre_d_etudiants);
}

void Affichage_Liste_Etudiants_Moyenne_Decroissante(Etudiant classe[], int Nombre_d_etudiants)
{
   printf("\t\t\t\t\t\t\t\tAFFICHAGE DES ETUDIANTS(ES) PAR MOYENNE DECROISSANTE : \n\n");
   Trier_Les_Moyennes_des_Etudiants(classe,Nombre_d_etudiants);
   for (int i = 0; i < Nombre_d_etudiants; i++)
   {
       if(classe[i].moyenne == classe[i+1].moyenne )
       {
         Trier_Les_Noms_des_Etudiants_par_Ordre_Alphabetique(classe,Nombre_d_etudiants);
       }
   }
   Affichage_Etudiants_avec_Moyenne(classe,Nombre_d_etudiants);
}

void Affichage_Liste_Etudiants_Notes_Eleve_par_Matiere(Etudiant classe[],int Nombre_d_etudiants)
{
    printf("\t\t\t\t\tAFFICHAGE DES NOTES LES PLUS ELEVEES PAR MATIERE VOIRE LE NOM DE L'ETUDIANT / L'ETUDIANTE : \n\n");
    Note_la_plus_Eleve_en_Anglais(classe,Nombre_d_etudiants);
    Note_la_plus_Eleve_en_Chimie(classe,Nombre_d_etudiants);
    Note_la_plus_Eleve_en_Francais(classe,Nombre_d_etudiants);
    Note_la_plus_Eleve_en_Informatique(classe,Nombre_d_etudiants);
    Note_la_plus_Eleve_en_Mathematique(classe,Nombre_d_etudiants);
    Note_la_plus_Eleve_en_Physique(classe,Nombre_d_etudiants);


}

void Affichage_de_la_Repartition_de_la_Classe(Etudiant classe[],int Nombre_d_etudiants)
{
    printf("\t\t\t\t\t\t\t\tUNIVERSITE INTERNATIONALE DE LIBREVILLE-UIL-BJ\n");
    printf("\n\t\t\t\t\t\t\t\t\tANNEE ACADEMIQUE 2023-2024 \n");
    printf("\n\t\t\t\t\t\t\t\tEPL-ECOLE POLYTECHNIQUE DE LIBREVILLE\n\n\n\n\n");
    printf("\n\n\t\t\t\tFILIERE : CLASSE PREPARATOIRE - PREPA 1");
    printf("\n\n\t\t\t\tAFFICHAGE DE LA REPARTITION DE LA CLASSE : \n");
    Effectif_de_La_classe(classe,Nombre_d_etudiants);
    Trier_Les_Noms_des_Etudiants_par_Ordre_Alphabetique(classe,Nombre_d_etudiants);
    Affichage_des_Resultats(classe,Nombre_d_etudiants);
    Classement_des_Etudiants_par_moyenne(classe,Nombre_d_etudiants);
    Rattrapage(classe,Nombre_d_etudiants);
    Redouble(classe,Nombre_d_etudiants);
    Bilan_de_la_classe(classe,Nombre_d_etudiants);

}


void Affichage_des_Decisions_par_ordre_alphabetique(Etudiant classe[],int Nombre_d_etudiants)
{
    printf("\t\t\t\t\t\t\t\tUNIVERSITE INTERNATIONALE DE LIBREVILLE-UIL-BJ\n");
    printf("\n\t\t\t\t\t\t\t\t\tANNEE ACADEMIQUE 2023-2024 \n");
    printf("\n\t\t\t\t\t\t\t\tEPL-ECOLE POLYTECHNIQUE DE LIBREVILLE\n\n\n\n\n");
    printf("\n\n\t\t\t\tFILIERE : CLASSE PREPARATOIRE - PREPA 1");
    printf("\n\n\t\t\t\tAFFICHAGE DES RESULTATS PAR ORDRE ALPHABETIQUE : \n\n");
    Trier_Les_Noms_des_Etudiants_par_Ordre_Alphabetique(classe,Nombre_d_etudiants);
    Resultats_Liste_Alphabetique(classe,Nombre_d_etudiants);
}

void Affichage_des_Decisions_par_moyenne_eleve(Etudiant classe[],int Nombre_d_etudiants)
{
    printf("\t\t\t\t\t\t\t\tUNIVERSITE INTERNATIONALE DE LIBREVILLE-UIL-BJ\n");
    printf("\n\t\t\t\t\t\t\t\t\tANNEE ACADEMIQUE 2023-2024 \n");
    printf("\n\t\t\t\t\t\t\t\tEPL-ECOLE POLYTECHNIQUE DE LIBREVILLE\n\n\n\n\n");
    printf("\n\n\t\t\t\tFILIERE : CLASSE PREPARATOIRE - PREPA 1");
    printf("\n\n\t\t\t\tAFFICHAGE DES RESULTATS PAR MOYENNE LES PLUS ELEVES : \n\n");
    Trier_Les_Moyennes_des_Etudiants(classe,Nombre_d_etudiants);
    for (int i = 0; i < Nombre_d_etudiants; i++)
    {
       if(classe[i].moyenne == classe[i+1].moyenne )
       {
         Trier_Les_Noms_des_Etudiants_par_Ordre_Alphabetique(classe,Nombre_d_etudiants);
       }
    }
    Resultats_Liste_par_moyenne_eleve(classe,Nombre_d_etudiants);
}

void Menu_A_propos()
{
    printf("\t\t\t\t\t\t\t\tANNEE ACADEMIQUE 2023-2024 - TP INFORMATIQUE 2");
    printf("\n\n\n\t\t\t\t\t\t\t\t\tDIRIGE PAR : M.St‚phane KAMGA");
    printf("\n\n\n\n\n\n\n\n\t\t\tREALISE PAR : Hugues Marc Kabrel LINDZONDZO");
}

void Sortir()
{
    printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\tMERCI D'AVOIR UTILISE MA PLATEFORME POUR LE TRAITEMENT DES RESULTATS DE VOS ETUDIANTS. ");
    printf("\n\n\n\t\t\t\t\t\t\t\t\t*****AUREVOIR*****\n\n\n");
}

void Choix_Invalide()
{
    printf("\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t_ _ _ _ _ _ _ _ _ _ _ _ VOTRE CHOIX EST INVALIDE _ _ _ _ _ _ _ _ _ _ _ _\n");
    printf("\n\n\n\t\t\t\t\t\t\tVOUS N'AVEZ PAS CHOISI UNE OPTION PROPOSEE PAR LE PROGRAMME.\n");
}
