#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "metier.h"

int Calcul_du_Nombre_de_credit(Etudiant *classe)
{
    int Nmbre = 0 ;

    if(classe->notes[0] >= 10 ) Nmbre+=8;
    if(classe->notes[1] >= 10 ) Nmbre+=7;
    if(classe->notes[2] >= 10 ) Nmbre+=8;
    if(classe->notes[3] >= 10 ) Nmbre+=10;
    if(classe->notes[4] >= 10 ) Nmbre+=15;
    if(classe->notes[5] >= 10 ) Nmbre+=12;

    return Nmbre ;
}

void Affichage_des_Notes(Etudiant *classe)
{
    printf("\n\n\t\t\t\t1.Anglais : %.2f/20",classe->notes[0]);
    printf("\n\n\t\t\t\t2.Chimie : %.2f/20",classe->notes[1]);
    printf("\n\n\t\t\t\t3.Fran‡ais : %.2f/20",classe->notes[2]);
    printf("\n\n\t\t\t\t4.Informatique : %.2f/20",classe->notes[3]);
    printf("\n\n\t\t\t\t5.Math‚matiques : %.2f/20",classe->notes[4]);
    printf("\n\n\t\t\t\t6.Physique : %.2f/20",classe->notes[5]);
}

void Affichage_des_informations(Etudiant *classe)
{
    printf("\n\n\t\t\t\t1.Matricule : %s ",classe->matricule);
    printf("\n\n\t\t\t\t2.Nom : %s",classe->nom);
    printf("\n\n\t\t\t\t3.Pr‚nom : %s",classe->prenom);
    printf("\n\n\t\t\t\t4.Sexe(M/F) : %c ",classe->sexe);
    printf("\n\n\t\t\t\t5.Ann‚e de naissance : %d ",classe->L_annee_de_naissance);
    printf("\n\n\t\t\t\t6.Mois de naissance : %d ",classe->Le_mois_de_naissance);
    printf("\n\n\t\t\t\t7.Jour de naissance : %d ",classe->Le_jour_de_naissance);
    printf("\n\n\t\t\t\t8.Lieu de naissance : %s ",classe->Le_lieu_de_naissance);
}

void Affiche_du_Releve_de_Notes(Etudiant *classe)
{
    printf("\n\n\t\t\t\tRelev‚ de Notes :");
    printf("\n\n\t\t\t\tAnglais : %.2f/20",classe->notes[0]);
    printf("\n\n\t\t\t\tChimie : %.2f/20",classe->notes[1]);
    printf("\n\n\t\t\t\tFran‡ais : %.2f/20",classe->notes[2]);
    printf("\n\n\t\t\t\tInformatique : %.2f/20",classe->notes[3]);
    printf("\n\n\t\t\t\tMath‚matiques : %.2f/20",classe->notes[4]);
    printf("\n\n\t\t\t\tPhysique : %.2f/20",classe->notes[5]);
}

void Affichage_des_infos(Etudiant *classe)
{
    printf("\n\n\t\t\tNouvelle fiche d'informations : ");
    printf("\n\n\t\t\t\tMatricule : %s ",classe->matricule);
    printf("\n\n\t\t\t\tNom : %s ",classe->nom);
    printf("\n\n\t\t\t\tPr‚nom : %s ",classe->prenom);
    printf("\n\n\t\t\t\tSexe(M/F) : %c ",classe->sexe);
    printf("\n\n\t\t\t\tAnn‚e de naissance : %d ",classe->L_annee_de_naissance);
    printf("\n\n\t\t\t\tMois de naissance : %d ",classe->Le_mois_de_naissance);
    printf("\n\n\t\t\t\tJour de naissance : %d ",classe->Le_jour_de_naissance);
    printf("\n\n\t\t\t\tLieu de naissance : %s ",classe->Le_lieu_de_naissance);

 }

void Anglais(Etudiant *classe)
{
    float Nouvelle_Note_d_Anglais = 0.0 , *p = NULL ;

    p = &classe ->notes[0];
    printf("\n\n\t\t\t\tEntrez la nouvelle note : ");
    scanf("%f",&Nouvelle_Note_d_Anglais);
    *p = Nouvelle_Note_d_Anglais;
    printf("\n\n\t\t\t\tLa nouvelle note en Anglais est : %.2f/20",classe ->notes[0]);
}

void Chimie(Etudiant *classe)
{
    float Nouvelle_Note_de_Chimie = 0.0 , *p = NULL ;

    p = &classe ->notes[1];
    printf("\n\n\t\t\t\tEntrez la nouvelle note : ");
    scanf("%f",&Nouvelle_Note_de_Chimie);
    *p = Nouvelle_Note_de_Chimie;
    printf("\n\n\t\t\t\tLa nouvelle note en Chimie est  : %.2f/20",classe ->notes[1]);
}

void Francais(Etudiant *classe)
{
    float Nouvelle_Note_de_Francais = 0.0 , *p = NULL ;

    p = &classe ->notes[2];
    printf("\n\n\t\t\t\tEntrez la nouvelle note : ");
    scanf("%f",&Nouvelle_Note_de_Francais);
    *p = Nouvelle_Note_de_Francais;
    printf("\n\n\t\t\t\tLa nouvelle note en Fran‡ais est  : %.2f/20",classe ->notes[2]);
}

void Informatique(Etudiant *classe)
{
    float Nouvelle_Note_d_Informatique = 0.0 , *p = NULL ;

    p = &classe ->notes[3];
    printf("\n\n\t\t\t\tEntrez la nouvelle note : ");
    scanf("%f",&Nouvelle_Note_d_Informatique);
    *p = Nouvelle_Note_d_Informatique;
    printf("\n\n\t\t\t\tLa nouvelle note en Informatique est  : %.2f/20",classe ->notes[3]);
}

void Mathematique(Etudiant *classe)
{
    float Nouvelle_Note_de_Mathematique = 0.0 , *p = NULL ;

    p = &classe ->notes[4];
    printf("\n\n\t\t\t\tEntrez la nouvelle note : ");
    scanf("%f",&Nouvelle_Note_de_Mathematique);
    *p = Nouvelle_Note_de_Mathematique;
    printf("\n\n\t\t\t\tLa nouvelle note en Math‚matiques est  : %.2f/20",classe ->notes[4]);
}

void Physique(Etudiant *classe)
{
    float Nouvelle_Note_de_Physique = 0.0 , *p = NULL ;

    p = &classe ->notes[5];
    printf("\n\n\t\t\t\tEntrez la nouvelle note : ");
    scanf("%f",&Nouvelle_Note_de_Physique);
    *p = Nouvelle_Note_de_Physique;
    printf("\n\n\t\t\t\tLa nouvelle note en Physique est  : %.2f/20",classe ->notes[5]);
}

void Matricule(Etudiant *classe)
{
    char Nouveau_Matricule[6];
    int valid = 0;

    while (!valid)
    {
        printf("\n\t\t\tVeuillez entrer un matricule de 5 caracteres : ");
        scanf("%5s",Nouveau_Matricule);
        if (strlen(Nouveau_Matricule) == 5 && getchar() == '\n')
        {
            valid = 1;
            printf("\n\t\t\tVous avez respect‚ la taille du matricule.\n\n");
        }
        else
        {
            printf("\n\t\t\tErreur : le matricule doit contenir exactement 5 caracteres.Veuillez r‚essayer.\n\n");
            // Vider le buffer d'entrée
            while (getchar() != '\n');
        }
    }
    strcpy(classe->matricule,Nouveau_Matricule);
    printf("\n\t\t\tLe nouveau matricule est : %s ",classe ->matricule);
}

void Nom(Etudiant *classe)
{
    char Nouveau_Nom[26];

    getchar();
    while(1)
    {
       printf("\n\t\t\tVeuillez entrer le nom : ");
       scanf("%25[^\n]",Nouveau_Nom);
       if(strlen(Nouveau_Nom) >= 1 &&  strlen(Nouveau_Nom) <= 25 )
       {
          printf("\n\t\t\tVous avez respect‚ la taille du nom.\n\n");
          break;
       }
       else
       {
         printf("\n\t\t\tTaille invalide.maximum 25 caracteres. Veuillez r‚essayer.\n\n");
            // Effacer l'entrée précédente
         while (getchar() != '\n');
       }
    }
    strcpy(classe->nom,Nouveau_Nom);
    printf("\n\t\t\tLe nouveau nom est : %s",classe->nom);
}

void Prenom(Etudiant *classe)
{
    char Nouveau_Prenom[21];

    getchar();
    while(1)
    {
       printf("\n\t\t\tVeuillez entrer le pr‚nom : ");
       scanf("%20[^\n]",Nouveau_Prenom);
       if(strlen(Nouveau_Prenom) >= 1 &&  strlen(Nouveau_Prenom) <= 20 )
       {
          printf("\n\t\t\tVous avez respect‚ la taille du pr‚nom.\n\n");
          break;
       }
       else
       {
         printf("\n\t\t\tTaille invalide.maximum 20 caracteres. Veuillez r‚essayer.\n\n");
            // Effacer l'entrée précédente
         while (getchar() != '\n');
       }
    }
    strcpy(classe->prenom,Nouveau_Prenom);
    printf("\n\t\t\tLe nouveau pr‚nom est : %s",classe->prenom);
}

void Sexe(Etudiant *classe)
{
    char Nouveau_Sexe, *p = NULL ;

    getchar();
    p = &classe ->sexe;
    while (1)
    {
        printf("\n\t\t\tVeuillez entrer le sexe(M/F) : ");
        Nouveau_Sexe = getchar();
        if (Nouveau_Sexe == 'M' || Nouveau_Sexe == 'F') {
            printf("\n\t\t\tVous avez entr‚ le caractere correct.\n\n");
            break;
        }
        else
        {
            printf("\n\t\t\tCaractere invalide. Veuillez r‚essayer.\n\n");
            // Effacer l'entrée précédente
            while (getchar() != '\n');
        }
    }
    *p = Nouveau_Sexe;
    printf("\n\t\t\tLe nouveau sexe est : %c",classe ->sexe);
}

void Annee_de_naissance(Etudiant *classe)
{
    int Nouvelle_Anne_de_naissance = 0.0 , *p = NULL ;

    getchar();
    p = &classe ->L_annee_de_naissance;
    while(1)
    {
       printf("\n\t\t\tVeuillez entrer l 'ann‚e de naissance : ");
       scanf("%d",&Nouvelle_Anne_de_naissance);
       if(Nouvelle_Anne_de_naissance > 0 )
       {
          printf("\n\n\t\t\t\tVous avez entr‚ une ann‚e de naissance correcte.\n\n");
          break;
       }
       else
       {
         printf("\n\t\t\tAnn‚e de naissance invalide. Veuillez r‚essayer.\n\n");
            // Effacer l'entrée précédente
         while (getchar() != '\n');
       }
    }
    *p = Nouvelle_Anne_de_naissance;
    printf("\n\t\t\tLa nouvelle ann‚e de naissance est : %d",classe ->L_annee_de_naissance);
}

void Mois_de_naissance(Etudiant *classe)
{
    int Nouveau_Mois_de_naissance = 0.0 , *p = NULL ;

   getchar();
    p = &classe ->Le_mois_de_naissance;
    while(1)
    {
      printf("\n\t\t\tVeuillez entrer le mois de naissance : ");
      scanf("%d",&Nouveau_Mois_de_naissance);
      if(Nouveau_Mois_de_naissance >= 1 && Nouveau_Mois_de_naissance <= 12 )
      {
         printf("\n\t\t\tVous avez entr‚ un mois correcte.\n\n");
         break;
      }
      else
      {
         printf("\n\t\t\tMois invalide. Veuillez r‚essayer.\n\n");
            // Effacer l'entrée précédente
         while (getchar() != '\n');
      }
    }
    *p = Nouveau_Mois_de_naissance;
    printf("\n\t\t\tLa nouveau mois de naissance est : %d",classe ->Le_mois_de_naissance);
}

void Jour_de_naissance(Etudiant *classe)
{
    int Nouveau_Jour_de_naissance = 0.0 , *p = NULL ;

    getchar();
    p = &classe ->Le_jour_de_naissance;
    while(1)
    {
      printf("\n\t\t\tVeuillez entrer le jour de naissance : ");
      scanf("%d",&Nouveau_Jour_de_naissance);
      if(Nouveau_Jour_de_naissance >= 1 && Nouveau_Jour_de_naissance <= 31 )
      {
         printf("\n\t\t\tVous avez entr‚ un Jour correcte.\n\n");
         break;
      }
      else
      {
         printf("\n\t\t\tJour invalide. Veuillez r‚essayer.\n\n");
            // Effacer l'entrée précédente
         while (getchar() != '\n');
      }
    }
    *p = Nouveau_Jour_de_naissance;
    printf("\n\t\t\tLa nouveau jour de naissance est : %d",classe ->Le_jour_de_naissance);
}

void Lieu_de_naissance(Etudiant *classe)
{
    char Nouveau_Lieu_de_naissance[31];

    getchar();
    while(1)
    {
       printf("\n\t\t\tVeuillez entrer le lieu de naissance : ");
       scanf("%30s",Nouveau_Lieu_de_naissance);
       if(strlen(Nouveau_Lieu_de_naissance) >= 1 &&  strlen(Nouveau_Lieu_de_naissance) <= 30)
       {
          printf("\n\t\t\tVous avez respect‚ la taille du lieu de naissance.\n\n");
          break;
       }
       else
       {
         printf("\n\t\t\tTaille invalide.maximum 30 caracteres. Veuillez r‚essayer.\n\n");
            // Effacer l'entrée précédente
         while (getchar() != '\n');
       }
    }
    strcpy(classe->Le_lieu_de_naissance,Nouveau_Lieu_de_naissance);
    printf("\n\t\t\tLa nouveau lieu de naissance est : %s",classe ->Le_lieu_de_naissance);
}

void Affichage_de_la_mention(float moyenne)
{
    if(moyenne >= 0 && moyenne < 10)  printf("\n\n\t\t\t\tMention : Faible.");
    if(moyenne >= 10 && moyenne < 12) printf("\n\n\t\t\t\tMention : Passable.");
    if(moyenne >= 12 && moyenne < 14) printf("\n\n\t\t\t\tMention : Assez bien.");
    if(moyenne >= 14 && moyenne < 17) printf("\n\n\t\t\t\tMention : Bien.");
    if(moyenne >= 17 && moyenne < 18) printf("\n\n\t\t\t\tMention : TrŠs bien.");
    if(moyenne >= 18 && moyenne <= 20) printf("\n\n\t\t\t\tMention : Excellente.");
}

void Affichage_du_rang_des_Etudiants(Etudiant classe[] ,int Nombre_d_etudiants)
{
  int rg = 1 ;

  for (int i = 0 ; i < Nombre_d_etudiants  ; i++)
  {

            if(classe[i].moyenne > classe[i+1].moyenne )
            {
                printf("\n\n\t\t\t\t%d.%s %s",rg,classe[i].prenom,classe[i].nom);
                rg+=1;
            }
            else if (classe[i].moyenne < classe[i+1].moyenne)
            {
                printf("\n\n\t\t\t\t%d.%s %s",rg,classe[i+1].prenom,classe[i+1].nom);
                rg+=1;
            }
            else
            {
                for (int i = 0 ; i < Nombre_d_etudiants - (Nombre_d_etudiants-1)  ; i++)
                {
                   printf("\n\n\t\t\t\t%d.%s %s ",rg,classe[i].prenom,classe[i].nom);
                }
            }
  }
}


void Calcul_de_la_moyenne(Etudiant *classe)
{
    classe->moyenne = ((classe->notes[0]*8)+(classe->notes[1]*7)+(classe->notes[2]*8)+(classe->notes[3]*10)+(classe->notes[4]*15)+(classe->notes[5]*12))/ 60 ;
    classe->Nombre_de_credit = Calcul_du_Nombre_de_credit(classe);
    printf("\n\n\t\t\t\t\t\t\tNouvelle moyenne de l'‚tudiant(e) %s %s : %.2f/20\n\n\t\t\t\t\t\t\tNouveaux nombre de cr‚dit cumul‚s : %d/60 ",classe->prenom,classe->nom,classe->moyenne,classe->Nombre_de_credit);
}

void Liste_de_Rattrapage(Etudiant classe[],int Nombre_d_etudiants)
{
    int Nombre_de_Rattrappeur = 0 ;

    for(int i = 0 ; i <  Nombre_d_etudiants ; i++)
    {
        if(classe[i].Nombre_de_credit >= 48 && classe[i].Nombre_de_credit < 60 )
        {
             printf("\n\n\n\t\t\t\t%d.%s %s Sexe : %c  Matricule : %s  Nombre de cr‚dit cumul‚s : %d/60  ",i+1,classe[i].prenom,classe[i].nom,classe[i].sexe,classe[i].matricule,classe[i].Nombre_de_credit);
             Nombre_de_Rattrappeur++;
        }
    }
    if (Nombre_de_Rattrappeur == 0)
    {
       printf("\n\n\n\t\t\t\tAucun ‚tudiant ne rattrape.");

    }

}

void Liste_des_Redoublants(Etudiant classe[],int Nombre_d_etudiants)
{
    int Nombre_de_Redoublants = 0 ;

    for(int i = 0 ; i <  Nombre_d_etudiants ; i++)
    {
        if(classe[i].Nombre_de_credit < 48 )
        {
            printf("\n\n\n\t\t\t\t%d.%s %s Sexe : %c  Matricule : %s  Nombre de cr‚dit cumul‚s : %d/60  ",i+1,classe[i].prenom,classe[i].nom,classe[i].sexe,classe[i].matricule,classe[i].Nombre_de_credit);
            Nombre_de_Redoublants++;
        }
    }
    if (Nombre_de_Redoublants == 0)
    {
      printf("\n\n\n\t\t\t\tAucun ‚tudiant ne redouble.");

    }
}

void Meilleur_Moyenne_et_faible_Moyenne(Etudiant classe[], int Nombre_d_etudiants)
{
   float Moyenne_max = -1.0 , Moyenne_min = 21.0 ;
   for (int i = 0; i < Nombre_d_etudiants ; i++)
    {
      if (classe[i].moyenne > Moyenne_max) Moyenne_max = classe[i].moyenne ;
      if (classe[i].moyenne < Moyenne_min) Moyenne_min = classe[i].moyenne ;
    }
    printf("\n\n\t\t\t\tMoyenne maximale : %.2f/20.",Moyenne_max);
    printf("\n\n\t\t\t\tMoyenne minimale : %.2f/20.",Moyenne_min);
}

void Moyenne_de_la_Classe(Etudiant classe[],int Nombre_d_etudiants)
{
    float moyenne_Classe = 0.0 , somme_Moyenne = 0.0 ;

    for (int i = 0; i < Nombre_d_etudiants; i++)
    {
       somme_Moyenne+=classe[i].moyenne;
    }
    moyenne_Classe = somme_Moyenne /Nombre_d_etudiants ;
    printf("\n\n\t\t\t\tMoyenne de la classe : %.2f/20.",moyenne_Classe);
}


void Pourcentage(Etudiant classe[],int Nombre_d_etudiants)
{
  int Nombre_de_reussite = 0 , Nombre_d_echec = 0 ;

  for (int i = 0; i < Nombre_d_etudiants; i++)
  {
    if (classe[i].Nombre_de_credit >= 48)
    {
       Nombre_de_reussite++;
    }
    if (classe[i].Nombre_de_credit <  48)
    {
      Nombre_d_echec++;
    }
  }

  float pourcentage_de_Reussite = ((float)Nombre_de_reussite / Nombre_d_etudiants) * 100 ;
  float pourcentage_d_Echec = ((float)Nombre_d_echec / Nombre_d_etudiants) * 100 ;

  printf("\n\n\t\t\t\tPourcentage de r‚ussite : %.2f%%.",pourcentage_de_Reussite);
  printf("\n\n\t\t\t\tPourcentage d'‚chec : %.2f%%.",pourcentage_d_Echec);

}

void Trie_des_Annee(Etudiant classe[], int Nombre_d_etudiants)
{
   for (int i = 0; i < Nombre_d_etudiants - 1; i++)
    {
        for (int j = 0; j < Nombre_d_etudiants - i - 1; j++)
        {
            if (classe[j].L_annee_de_naissance < classe[j + 1].L_annee_de_naissance)
            {
                Etudiant temp = classe[j];
                classe[j] = classe[j + 1];
                classe[j + 1] = temp;
            }
        }
    }
}

void Trie_des_Mois(Etudiant classe[], int Nombre_d_etudiants)
{
   for (int i = 0; i < Nombre_d_etudiants - 1; i++)
    {
        for (int j = 0; j < Nombre_d_etudiants - i - 1; j++)
        {
            if (classe[j].Le_mois_de_naissance < classe[j + 1].Le_mois_de_naissance)
            {
                Etudiant temp = classe[j];
                classe[j] = classe[j + 1];
                classe[j + 1] = temp;
            }
        }
    }
}

void Trie_des_Jours(Etudiant classe[], int Nombre_d_etudiants)
{
     for (int i = 0; i < Nombre_d_etudiants - 1; i++)
    {
        for (int j = 0; j < Nombre_d_etudiants - i - 1; j++)
        {
            if (classe[j].Le_jour_de_naissance < classe[j + 1].Le_jour_de_naissance)
            {
                Etudiant temp = classe[j];
                classe[j] = classe[j + 1];
                classe[j + 1] = temp;
            }
        }
    }
}

void Choix_pas_Correct()
{
    printf("\n\n\t\t\tChoix invalide!");
    printf("\n\n\t\t\tEntrez l'un des chiffres propos‚s pour pouvoir faire des modifications a l'‚tudiant ou a l'‚tudiante.\n");
}




