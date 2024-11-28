#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "metier.h"
#include "application.h"


void Saisir_les_informations(Etudiant *classe)
{
    int valid = 0;

    while (!valid)
    {
        printf("\n\t\t\t\tVeuillez entrer un matricule de 5 caracteres : ");
        scanf("%5s",classe->matricule);
        if (strlen(classe->matricule) == 5 && getchar() == '\n')
        {
            valid = 1;
            printf("\n\n\t\t\t\tVous avez respect‚ la taille du matricule.\n");
        }
        else
        {
            printf("\n\n\t\t\t\tErreur : le matricule doit contenir exactement 5 caracteres.Veuillez r‚essayer.\n");
            // Vider le buffer d'entrée
            while (getchar() != '\n');
        }
    }

    while(1)
    {
        printf("\n\t\t\t\tVeuillez entrer le nom : ");
        scanf("%25[^\n]",classe->nom);
        if(strlen(classe->nom) >= 1 &&  strlen(classe->nom) <= 25 )
        {
            printf("\n\n\t\t\t\tVous avez respect‚ la taille du nom.\n");
            break;
        }
        else
        {
            printf("\n\n\t\t\t\tTaille invalide.maximum 25 caracteres. Veuillez r‚essayer.\n");
            // Effacer l'entrée précédente
            while (getchar() != '\n');
        }
    }
    getchar();

    while(1)
    {
        printf("\n\t\t\t\tVeuillez entrer le pr‚nom : ");
        scanf("%20[^\n]",classe->prenom);
        if(strlen(classe->prenom) >= 1 &&  strlen(classe->prenom) <= 20 )
        {
            printf("\n\n\t\t\t\tVous avez respect‚ la taille du pr‚nom.\n");
            break;
        }
        else
        {
            printf("\n\n\t\t\t\tTaille invalide.maximum 20 caracteres. Veuillez r‚essayer.\n");
            // Effacer l'entrée précédente
            while (getchar() != '\n');
        }
    }
    getchar();

    while (1)
    {
        printf("\n\t\t\t\tVeuillez entrer le sexe(M/F) : ");
        classe->sexe = getchar();

        if (classe->sexe == 'M' || classe->sexe == 'F') {
            printf("\n\n\t\t\t\tVous avez entr‚ le caractere correct.\n");
            break;
        }
        else
        {
            printf("\n\n\t\t\t\tCaractere invalide. Veuillez r‚essayer.\n");
            // Effacer l'entrée précédente
            while (getchar() != '\n');
        }
    }
    getchar();

    while(1)
    {
        printf("\n\t\t\t\tVeuillez entrer l 'ann‚e de naissance : ");
        scanf("%d",&classe->L_annee_de_naissance);
        if(classe->L_annee_de_naissance > 0 )
        {
            printf("\n\n\t\t\t\tVous avez entr‚ une ann‚e de naissance correcte.\n");
            break;
        }
        else
        {
            printf("\n\n\t\t\t\tAnn‚e de naissance invalide. Veuillez r‚essayer.\n");
            // Effacer l'entrée précédente
            while (getchar() != '\n');
        }
    }
    getchar();

    while(1)
    {
        printf("\n\t\t\t\tVeuillez entrer le mois de naissance : ");
        scanf("%d",&classe->Le_mois_de_naissance);
        if(classe->Le_mois_de_naissance >= 1 && classe->Le_mois_de_naissance <= 12 )
        {
            printf("\n\n\t\t\t\tVous avez entr‚ un mois correcte.\n");
            break;
        }
        else
        {
            printf("\n\n\t\t\t\tMois invalide. Veuillez r‚essayer.\n");
            // Effacer l'entrée précédente
            while (getchar() != '\n');
        }
    }
    getchar();

    while(1)
    {
       printf("\n\t\t\t\tVeuillez entrer le jour de naissance : ");
       scanf("%d",&classe->Le_jour_de_naissance);
      if(classe->Le_jour_de_naissance >= 1 && classe->Le_jour_de_naissance <= 31 )
      {
         printf("\n\n\t\t\t\tVous avez entr‚ un jour correcte.\n");
         break;
      }
      else
      {
         printf("\n\n\t\t\t\tJour invalide. Veuillez r‚essayer.\n");
            // Effacer l'entrée précédente
         while (getchar() != '\n');
      }
    }
    getchar();

    while(1)
    {
        printf("\n\t\t\t\tVeuillez entrer le lieu de naissance : ");
        scanf("%30s",classe->Le_lieu_de_naissance);
        if(strlen(classe->Le_lieu_de_naissance) >= 1 &&  strlen(classe->Le_lieu_de_naissance) <= 30 )
        {
            printf("\n\n\t\t\t\tVous avez respect‚ la taille du lieu de naissance.\n");
            break;
        }
        else
        {
            printf("\n\n\t\t\t\tTaille invalide.maximum 30 caracteres. Veuillez r‚essayer.\n");
            // Effacer l'entrée précédente
            while (getchar() != '\n');
        }
    }

}

void Informations_de_L_Etudiant(Etudiant classe[],int Nombre_d_etudiants)
{
    for(int i = 0 ; i < Nombre_d_etudiants ; i++)
    {
        if (classe[i].sexe == 'F') printf("\n\n\t\t\t%d.%s %s N‚e Le %u / %u / %u … %s  Sexe : %c  Matricule : %s",i,classe[i].nom,classe[i].prenom,classe[i].Le_jour_de_naissance,classe[i].Le_mois_de_naissance,classe[i].L_annee_de_naissance,classe[i].Le_lieu_de_naissance,classe[i].sexe,classe[i].matricule);
        else printf("\n\n\t\t\t%d.%s %s N‚ Le %u / %u / %u … %s  Sexe : %c  Matricule : %s",i,classe[i].nom,classe[i].prenom,classe[i].Le_jour_de_naissance,classe[i].Le_mois_de_naissance,classe[i].L_annee_de_naissance,classe[i].Le_lieu_de_naissance,classe[i].sexe,classe[i].matricule);
    }
 }

void Saisir_les_Notes(Etudiant *classe)
{
  while (1)
  {
    printf("\n\t\t\t\tVeuillez entrer la note en anglais : ");
    scanf("%f",&classe->notes[0]);
    if (classe->notes[0] >= 0 && classe->notes[0] <= 20)
    {
        printf("\n\t\t\t\tVous avez entr‚ une note correcte.\n");
        break;
    }
    else
    {
        printf("\n\t\t\t\tNote invalide.Veuillez r‚essayer.\n");
        // Effacer l'entrée précédente
        while (getchar() != '\n');
    }
  }

  while (1)
  {
    printf("\n\t\t\t\tVeuillez entrer la note en chimie : ");
    scanf("%f",&classe->notes[1]);
    if (classe->notes[1] >= 0 && classe->notes[1] <= 20)
    {
        printf("\n\t\t\t\tVous avez entr‚ une note correcte.\n");
        break;
    }
    else
    {
        printf("\n\t\t\t\tNote invalide.Veuillez r‚essayer.\n");
        // Effacer l'entrée précédente
        while (getchar() != '\n');
    }
  }

  while (1)
  {
    printf("\n\t\t\t\tVeuillez entrer la note en fran‡ais : ");
    scanf("%f",&classe->notes[2]);
    if (classe->notes[2] >= 0 && classe->notes[2] <= 20)
    {
        printf("\n\t\t\t\tVous avez entr‚ une note correcte.\n");
        break;
    }
    else
    {
        printf("\n\t\t\t\tNote invalide.Veuillez r‚essayer.\n");
        // Effacer l'entrée précédente
        while (getchar() != '\n');
    }
  }

  while (1)
  {
    printf("\n\t\t\t\tVeuillez entrer la note en informatique : ");
    scanf("%f",&classe->notes[3]);
    if (classe->notes[3] >= 0 && classe->notes[3] <= 20)
    {
        printf("\n\t\t\t\tVous avez entr‚ une note correcte.\n");
        break;
    }
    else
    {
        printf("\n\t\t\t\tNote invalide.Veuillez r‚essayer.\n");
        // Effacer l'entrée précédente
        while (getchar() != '\n');
    }
  }

  while (1)
  {
    printf("\n\t\t\t\tVeuillez entrer la note en math‚matique : ");
    scanf("%f",&classe->notes[4]);
    if (classe->notes[4] >= 0 && classe->notes[4] <= 20)
    {
        printf("\n\t\t\t\tVous avez entr‚ une note correcte.\n");
        break;
    }
    else
    {
        printf("\n\t\t\t\tNote invalide.Veuillez r‚essayer.\n");
        // Effacer l'entrée précédente
        while (getchar() != '\n');
    }
  }

  while (1)
  {
    printf("\n\t\t\t\tVeuillez entrer la note en physique : ");
    scanf("%f",&classe->notes[5]);
    if (classe->notes[5] >= 0 && classe->notes[5] <= 20)
    {
        printf("\n\t\t\t\tVous avez entr‚ une note correcte.\n");
        break;
    }
    else
    {
        printf("\n\t\t\t\tNote invalide.Veuillez r‚essayer.\n");
        // Effacer l'entrée précédente
        while (getchar() != '\n');
    }
  }
    classe->moyenne = ((classe->notes[0]*8)+(classe->notes[1]*7)+(classe->notes[2]*8)+(classe->notes[3]*10)+(classe->notes[4]*15)+(classe->notes[5]*12))/ 60 ;
    classe->Nombre_de_credit = Calcul_du_Nombre_de_credit(classe);
}

void Affichage_Etudiants_avec_Informations(Etudiant classe[],int Nombre_d_etudiants)
{
    for(int i = 0 ; i < Nombre_d_etudiants ; i++)
    {
        if (classe[i].sexe == 'F') printf("\n\n\t\t\t%d.%s %s N‚e Le %u / %u / %u … %s  Sexe : %c  Matricule : %s",i+1,classe[i].prenom,classe[i].nom,classe[i].Le_jour_de_naissance,classe[i].Le_mois_de_naissance,classe[i].L_annee_de_naissance,classe[i].Le_lieu_de_naissance,classe[i].sexe,classe[i].matricule);
        else printf("\n\n\t\t\t%d.%s %s N‚ Le %u / %u / %u … %s  Sexe : %c  Matricule : %s",i+1,classe[i].prenom,classe[i].nom,classe[i].Le_jour_de_naissance,classe[i].Le_mois_de_naissance,classe[i].L_annee_de_naissance,classe[i].Le_lieu_de_naissance,classe[i].sexe,classe[i].matricule);
    }
}

void Affichage_Etudiants_avec_Moyenne(Etudiant classe[], int Nombre_d_etudiants)
{
    for (int i = 0 ; i < Nombre_d_etudiants; i++)
    {
        printf("\n\n\t\t\t%d.%s %s Sexe : %c  Matricule : %s  Moyenne : %.2f/20\n",i+1,classe[i].prenom,classe[i].nom ,classe[i].sexe,classe[i].matricule,classe[i].moyenne);
    }
}

void Effectif_de_La_classe(Etudiant classe[],int Nombre_d_etudiants)
{
    int filles = 0 , garcon = 0 , Admis = 0 , Rattrape = 0 , Redouble = 0 ;

    for(int i = 0 ; i < Nombre_d_etudiants ; i++)
    {
        if(classe[i].sexe == 'M') garcon++;
        if (classe[i].sexe == 'F') filles++;
        if (classe[i].Nombre_de_credit >= 48 ) Admis++;
        if (classe[i].Nombre_de_credit >= 48 && classe[i].Nombre_de_credit < 60 ) Rattrape++;
        if (classe[i].Nombre_de_credit < 48 ) Redouble++;
    }
    printf("\n\t\t\t\tTotal des ‚tudiants / ‚tudiantes de la classe : %d\n\n\t\t\t\tNombre de filles : %d\n\n\t\t\t\tNombre de gar‡ons : %d",garcon+filles,filles,garcon);
    printf("\n\n\t\t\t\tNombre total des ‚tudiants / ‚tudiantes Admis : %d\n\n\t\t\t\tNombre total des ‚tudiants / ‚tudiantes Rattrapants : %d\n\n\t\t\t\tNombre total des ‚tudiants / ‚tudiantes Redoublants : %d",Admis,Rattrape,Redouble);
}

void Affichage_des_Resultats(Etudiant classe[],int Nombre_d_etudiants)
{

    for(int i = 0 ; i < Nombre_d_etudiants ; i++)
    {
        if(classe[i].sexe == 'M' ) printf("\n\n\n\t\t\t\tETUDIANT : %s %s \n",classe[i].prenom,classe[i].nom);
        else printf("\n\n\n\t\t\t\tETUDIANTE : %s %s \n",classe[i].prenom,classe[i].nom);
        Affiche_du_Releve_de_Notes(&classe[i]);
        if (classe[i].sexe == 'F') printf("\n\n\n\t\t\t\tMoyenne de l'‚tudiante %s %s : %.2f/20\n\n\t\t\t\tNombre de cr‚dit cumul‚s : %d/60",classe[i].prenom,classe[i].nom,classe[i].moyenne,classe[i].Nombre_de_credit);
        else printf("\n\n\n\t\t\t\tMoyenne de l'‚tudiant %s %s : %.2f/20\n\n\t\t\t\tNombre de cr‚dit cumul‚s : %d/60",classe[i].prenom,classe[i].nom,classe[i].moyenne,classe[i].Nombre_de_credit);
        Affichage_de_la_mention(classe[i].moyenne);
        if(classe[i].Nombre_de_credit == 60)
        {
          printf("\n\n\t\t\t\tD‚cision du Conseil : Admis en Pr‚pa 2.");
        }
        else if (classe[i].Nombre_de_credit >= 48 && classe[i].Nombre_de_credit < 60)
        {
          printf("\n\n\t\t\t\tD‚cision du Conseil : Autoris‚e a s'inscrire en Pr‚pa 2.");
        }
        else printf("\n\n\t\t\t\tD‚cision du Conseil : Redouble la Pr‚pa 1.");
    }
}

void Resultats_Liste_Alphabetique(Etudiant classe[], int Nombre_d_etudiants)
{

    for (int i = 0; i < Nombre_d_etudiants; i++)
    {
        if(classe[i].Nombre_de_credit == 60)
        {
          printf("\n\t\t\t%d.%s %s Sexe : %c  Matricule : %s  Moyenne : %.2f/20  Nombre de cr‚dits : %d/60 : Admis en Pr‚pa 2.\n",i+1, classe[i].prenom,classe[i].nom ,classe[i].sexe,classe[i].matricule,classe[i].moyenne,classe[i].Nombre_de_credit);
        }
        else if (classe[i].Nombre_de_credit >= 48 && classe[i].Nombre_de_credit < 60)
        {
          printf("\n\t\t\t%d.%s %s Sexe : %c  Matricule : %s  Moyenne : %.2f/20  Nombre de cr‚dits : %d/60 : Autoris‚e a s'inscrire en Pr‚pa 2.\n",i+1,classe[i].prenom,classe[i].nom,classe[i].sexe,classe[i].matricule,classe[i].moyenne,classe[i].Nombre_de_credit);
        }
        else printf("\n\t\t\t%d.%s %s Sexe : %c  Matricule : %s  Moyenne : %.2f/20  Nombre de cr‚dits : %d/60 : Redouble la Pr‚pa 1\n",i+1, classe[i].prenom,classe[i].nom ,classe[i].sexe,classe[i].matricule,classe[i].moyenne,classe[i].Nombre_de_credit);
    }
}

void Resultats_Liste_par_moyenne_eleve(Etudiant classe[], int Nombre_d_etudiants)
{

   for (int i = 0; i < Nombre_d_etudiants; i++)
    {
        if(classe[i].Nombre_de_credit == 60)
        {
          printf("\n\t\t\t%d.%s %s Sexe : %c  Matricule : %s  Moyenne : %.2f/20  Nombre de cr‚dits : %d/60 : Admis en Pr‚pa 2.\n",i+1, classe[i].prenom,classe[i].nom ,classe[i].sexe,classe[i].matricule,classe[i].moyenne,classe[i].Nombre_de_credit);
        }
        else if (classe[i].Nombre_de_credit >= 48 && classe[i].Nombre_de_credit < 60)
        {
          printf("\n\t\t\t%d.%s %s Sexe : %c  Matricule : %s  Moyenne : %.2f/20  Nombre de cr‚dits : %d/60 : Autoris‚e a s'inscrire en Pr‚pa 2.\n",i+1, classe[i].prenom,classe[i].nom ,classe[i].sexe,classe[i].matricule,classe[i].moyenne,classe[i].Nombre_de_credit);
        }
        else printf("\n\t\t\t%d.%s %s Sexe : %c  Matricule : %s  Moyenne : %.2f/20  Nombre de cr‚dits : %d/60 : Redouble la Pr‚pa 1\n",i+1, classe[i].prenom,classe[i].nom ,classe[i].sexe,classe[i].matricule,classe[i].moyenne,classe[i].Nombre_de_credit);
    }
}

void Classement_des_Etudiants_par_moyenne(Etudiant classe[],int Nombre_d_etudiants)
{
  printf("\n\n\n\n\t\t\t\tRANGEMENT DES ETUDIANTS PAR MOYENNE LES PLUS ELEVES : ");
  Affichage_du_rang_des_Etudiants(classe,Nombre_d_etudiants);
}

void Rattrapage(Etudiant classe[],int Nombre_d_etudiants)
{
  printf("\n\n\n\t\t\t\tLISTE DES ETUDIANTS PASSANT LES RATTRAPAGES : ");
  Liste_de_Rattrapage(classe,Nombre_d_etudiants);

}

void Redouble(Etudiant classe[],int Nombre_d_etudiants)
{
  printf("\n\n\n\t\t\t\tLISTE DES ETUDIANTS QUI REDOUBLENT : ");
  Liste_des_Redoublants(classe,Nombre_d_etudiants);
}

void Bilan_de_la_classe(Etudiant classe[],int Nombre_d_etudiants)
{
  printf("\n\n\n\t\t\t\tBILAN DE LA CLASSE : ");
  Meilleur_Moyenne_et_faible_Moyenne(classe,Nombre_d_etudiants);
  Moyenne_de_la_Classe(classe,Nombre_d_etudiants);
  Pourcentage(classe,Nombre_d_etudiants);

}

void changement_des_Notes(Etudiant *classe)
{
    int rang = 0 ;

    Affichage_des_Notes(classe);
    printf("\n\n\t\t\tEntrez le rang de la matiere dont vous voullez modifier la note en fonction des notes affich‚es : ");
    scanf("%d",&rang);
    switch(rang)
    {
       case 1 : Anglais(classe);
                break;
       case 2 : Chimie(classe);
                break;
       case 3 : Francais(classe);
                break;
       case 4 : Informatique(classe);
                break;
       case 5 : Mathematique(classe);
                break;
       case 6 : Physique(classe);
                break;
      default : {
                 Choix_pas_Correct();
                 printf("\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t");
                 system("pause");
                 system("cls");
                }break;
    }
    Affiche_du_Releve_de_Notes(classe);
    Calcul_de_la_moyenne(classe);
}

void changement_des_informations(Etudiant *classe)
{
    int rang = 0 ;
    Affichage_des_informations(classe);
    printf("\n\n\t\t\tEntrez le rang de l'information a modifi‚ : ");
    scanf("%d",&rang);
    switch(rang)
    {
       case 1 : Matricule(classe);
                break;
       case 2 : Nom(classe);
                break;
       case 3 : Prenom(classe);
                break;
       case 4 : Sexe(classe);
                break;
       case 5 : Annee_de_naissance(classe);
                break;
       case 6 : Mois_de_naissance(classe);
                break;
       case 7 : Jour_de_naissance(classe);
                break;
       case 8 : Lieu_de_naissance(classe);
                break;
      default : {
                 Choix_pas_Correct();
                 printf("\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t");
                 system("pause");
                 system("cls");
                }break;
    }
    Affichage_des_infos(classe);
}

void Note_la_plus_Eleve_en_Anglais(Etudiant classe[], int Nombre_d_etudiants)
{
    int nombre = 0 , valeur = 0 ;
    float Meileur_Note = -1.0, Meme_Meilleur_Note = 0.0 ;

    for (int i = 0; i < Nombre_d_etudiants ; i++)
    {
        if (classe[i].notes[0] > Meileur_Note )
        {
          Meileur_Note = classe[i].notes[0] ;
          nombre = i ;
          if (classe[i].notes[0] == Meileur_Note )
          {
            Meme_Meilleur_Note = classe[i].notes[0] ;
            valeur += 1 ;
          }
        }
    }
    if (valeur >= 1)
    {
        printf("\n\t\tMatiere : Anglais\n\t\tMeilleur Note : %.2f/20\n\t\tObtenue par :\n\t\t",Meme_Meilleur_Note);
        for (int s = 0 ; s < Nombre_d_etudiants ; s++)
        {
            if ( Meme_Meilleur_Note == classe[s].notes[0])
            {
                printf("%s %s\n\t\t",classe[s].prenom,classe[s].nom);
            }
        }
    }
    else
    {
        printf("\n\t\tMatiere : Anglais\n\t\tMeilleur Note : %.2f/20\n\t\tObtenue par : %s %s \n\n",Meileur_Note,classe[nombre].prenom,classe[nombre].nom);
    }

}

void Note_la_plus_Eleve_en_Chimie(Etudiant classe[], int Nombre_d_etudiants)
{
    int nombre = 0 , valeur = 0 ;
    float Meileur_Note = -1.0 , Meme_Meilleur_Note = 0.0 ;

    for (int i = 0; i < Nombre_d_etudiants ; i++)
    {
        if (classe[i].notes[1] > Meileur_Note )
        {
          Meileur_Note = classe[i].notes[1] ;
          nombre = i ;
          if(classe[i].notes[1] == Meileur_Note )
          {
            Meme_Meilleur_Note = classe[i].notes[1] ;
            valeur += 1 ;
          }
        }
    }
    if (valeur >= 1)
    {
        printf("\n\t\tMatiere : Chimie\n\t\tMeilleur Note : %.2f/20\n\t\tObtenue par :\n\t\t",Meme_Meilleur_Note);
        for (int s = 0 ; s < Nombre_d_etudiants ; s++)
        {
            if ( Meme_Meilleur_Note == classe[s].notes[1])
            {
                printf("%s %s\n\t\t",classe[s].prenom,classe[s].nom);
            }
        }
    }
    else
    {
        printf("\n\t\tMatiere : Chimie\n\t\tMeilleur Note : %.2f/20\n\t\tObtenue par : %s %s \n\n",Meileur_Note,classe[nombre].prenom,classe[nombre].nom);
    }
}

void Note_la_plus_Eleve_en_Francais(Etudiant classe[], int Nombre_d_etudiants)
{
    int nombre = 0 , valeur = 0 ;
    float Meileur_Note = -1.0 , Meme_Meilleur_Note = 0.0 ;

    for (int i = 0; i < Nombre_d_etudiants ; i++)
    {
        if (classe[i].notes[2] > Meileur_Note )
        {
          Meileur_Note = classe[i].notes[2] ;
          nombre = i ;
          if(classe[i].notes[2] == Meileur_Note )
          {
            Meme_Meilleur_Note = classe[i].notes[2] ;
            valeur += 1 ;
          }
        }
    }
    if (valeur >= 1)
    {
        printf("\n\t\tMatiere : Fran‡ais\n\t\tMeilleur Note : %.2f/20\n\t\tObtenue par :\n\t\t",Meme_Meilleur_Note);
        for (int s = 0 ; s < Nombre_d_etudiants ; s++)
        {
            if ( Meme_Meilleur_Note == classe[s].notes[2])
            {
                printf("%s %s\n\t\t",classe[s].prenom,classe[s].nom);
            }
        }
    }
    else
    {
        printf("\n\t\tMatiere : Fran‡ais\n\t\tMeilleur Note : %.2f/20\n\t\tObtenue par : %s %s \n\n",Meileur_Note,classe[nombre].prenom,classe[nombre].nom);
    }
}

void Note_la_plus_Eleve_en_Informatique(Etudiant classe[], int Nombre_d_etudiants)
{
    int nombre = 0 , valeur = 0 ;
    float Meileur_Note = -1.0 , Meme_Meilleur_Note = 0.0 ;

    for (int i = 0; i < Nombre_d_etudiants ; i++)
    {
        if (classe[i].notes[3] > Meileur_Note )
        {
          Meileur_Note = classe[i].notes[3] ;
          nombre = i ;
          if(classe[i].notes[3] == Meileur_Note )
          {
            Meme_Meilleur_Note = classe[i].notes[3] ;
            valeur += 1 ;
          }
        }
    }
    if (valeur >= 1)
    {
        printf("\n\t\tMatiere : Informatique\n\t\tMeilleur Note : %.2f/20\n\t\tObtenue par :\n\t\t",Meme_Meilleur_Note);
        for (int s = 0 ; s < Nombre_d_etudiants ; s++)
        {
            if ( Meme_Meilleur_Note == classe[s].notes[3])
            {
                printf("%s %s\n\t\t",classe[s].prenom,classe[s].nom);
            }
        }
    }
    else
    {
        printf("\n\t\tMatiere : Informatique\n\t\tMeilleur Note : %.2f/20\n\t\tObtenue par : %s %s \n\n",Meileur_Note,classe[nombre].prenom,classe[nombre].nom);
    }
}

void Note_la_plus_Eleve_en_Mathematique(Etudiant classe[], int Nombre_d_etudiants)
{
    int nombre = 0 , valeur = 0 ;
    float Meileur_Note = -1.0 , Meme_Meilleur_Note = 0.0 ;

    for (int i = 0; i < Nombre_d_etudiants ; i++)
    {
        if (classe[i].notes[4] > Meileur_Note )
        {
          Meileur_Note = classe[i].notes[4] ;
          nombre = i ;
          if(classe[i].notes[4] == Meileur_Note )
          {
            Meme_Meilleur_Note = classe[i].notes[4] ;
            valeur += 1 ;
          }
        }
    }
    if (valeur >= 1)
    {
        printf("\n\t\tMatiere : Math‚matiques\n\t\tMeilleur Note : %.2f/20\n\t\tObtenue par :\n\t\t",Meme_Meilleur_Note);
        for (int s = 0 ; s < Nombre_d_etudiants ; s++)
        {
            if ( Meme_Meilleur_Note == classe[s].notes[4])
            {
                printf("%s %s\n\t\t",classe[s].prenom,classe[s].nom);
            }
        }
    }
    else
    {
        printf("\n\t\tMatiere : Math‚matiques\n\t\tMeilleur Note : %.2f/20\n\t\tObtenue par : %s %s \n\n",Meileur_Note,classe[nombre].prenom,classe[nombre].nom);
    }
}

void Note_la_plus_Eleve_en_Physique(Etudiant classe[], int Nombre_d_etudiants)
{
    int nombre = 0 , valeur = 0 ;
    float Meileur_Note = -1.0 , Meme_Meilleur_Note = 0.0 ;

    for (int i = 0; i < Nombre_d_etudiants ; i++)
    {
        if (classe[i].notes[5] > Meileur_Note )
        {
          Meileur_Note = classe[i].notes[5] ;
          nombre = i ;
        }
        if(classe[i].notes[5] == Meileur_Note )
        {
          Meme_Meilleur_Note = classe[i].notes[5] ;
          valeur += 1 ;
        }
    }
    if (valeur >= 1)
    {
        printf("\n\t\tMatiere : Physique\n\t\tMeilleur Note : %.2f/20\n\t\tObtenue par :\n\t\t",Meme_Meilleur_Note);
        for (int s = 0 ; s < Nombre_d_etudiants ; s++)
        {
            if ( Meme_Meilleur_Note == classe[s].notes[5])
            {
                printf("%s %s\n\t\t",classe[s].prenom,classe[s].nom);
            }
        }
    }
    else
    {
        printf("\n\t\tMatiere : Physique\n\t\tMeilleur Note : %.2f/20\n\t\tObtenue par : %s %s \n\n",Meileur_Note,classe[nombre].prenom,classe[nombre].nom);
    }
}

void Trier_Les_Moyennes_des_Etudiants(Etudiant classe[], int Nombre_d_etudiants)
{
    for (int i = 0; i < Nombre_d_etudiants - 1; i++)
    {
        for (int j = 0; j < Nombre_d_etudiants - i - 1; j++)
        {
            if (classe[j].moyenne < classe[j + 1].moyenne)
            {
                Etudiant temp = classe[j];
                classe[j] = classe[j + 1];
                classe[j + 1] = temp;
            }
        }
    }
}

void Trier_Les_Noms_des_Etudiants_par_Ordre_Alphabetique(Etudiant classe[],int Nombre_d_etudiants)
{
    for (int i = 0; i < Nombre_d_etudiants - 1; i++)
    {
        for (int j = i + 1; j < Nombre_d_etudiants; j++)
        {
            if (strcmp(classe[i].nom,classe[j].nom) > 0)
            {
                Etudiant temp = classe[i];
                classe[i] = classe[j];
                classe[j] = temp;
            }
        }
    }
}

void Trier_Etudiants_par_Age_Croissant(Etudiant classe[], int Nombre_d_etudiants)
{
     for (int i = 0; i < Nombre_d_etudiants ; i++)
    {
         if (classe[i].L_annee_de_naissance != classe[i + 1].L_annee_de_naissance)
            {
               Trie_des_Annee(classe,Nombre_d_etudiants);
            }
            else if (classe[i].Le_mois_de_naissance != classe[i + 1].Le_mois_de_naissance)
            {
                Trie_des_Mois(classe,Nombre_d_etudiants);
            }
            else if (classe[i].Le_jour_de_naissance != classe[i + 1].Le_jour_de_naissance)
            {
                Trie_des_Jours(classe,Nombre_d_etudiants);
            }
    }

}

void Choix_de_L_Etudiant_pas_Correct()
{
    printf("\n\n\t\t\tL'‚tudiant ou L'‚tudiante entr‚/entr‚e n'est pas enr‚gistr‚/enr‚gistr‚e dans le systeme.");
}





