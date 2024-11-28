#include <stdio.h>
#include <stdlib.h>
#include "presentation.h"
#define Nombre_des_Etudiants 1
int main()
{
    Etudiant liste_Etudiant[Nombre_des_Etudiants];
    int Choix = 0 ;
    bool Presence_des_Etudiants = false ;
    bool Presence_des_Notes = false ;

    printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\tProjet de gestion des notes des ‚tudiants.");
    printf("\n\n\n\n\t\t\t\t\t\t\t\t");
    system("pause");
    system("cls");
  do
    {
        Menu_Principal(Nombre_des_Etudiants);
        printf("\n\n\n\n\n\t\tCHOISSISEZ UNE OPTION : ");
        scanf("%d",&Choix);
        system("cls");

        switch( Choix )
        {


            case 1 :{
                        if (!Presence_des_Etudiants)
                        {
                           Verification_de_la_Saisie_des_Etudiants(Presence_des_Etudiants);
                          break;
                        }
                        else
                        {
                            Affichage_Liste_Etudiants_Ordre_Alphabetique(liste_Etudiant,Nombre_des_Etudiants);
                            printf("\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t");
                            system("pause");
                            system("cls");
                        }
                   } break;


           case 2:{
                            Saisie_des_Etudiants(liste_Etudiant,Nombre_des_Etudiants);
                            printf("\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t");
                            system("pause");
                            system("cls");
                       }
                       Presence_des_Etudiants = true ;
                   break;


           case 3 :{
                        if (!Presence_des_Etudiants)
                        {
                             Verification_de_la_Saisie_des_Etudiants(Presence_des_Etudiants);
                            break;
                        }
                        else
                        {
                            Saisie_des_Notes(liste_Etudiant,Nombre_des_Etudiants);
                            printf("\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t");
                            system("pause");
                            system("cls");
                        }
                        Presence_des_Notes = true ;
                   } break;


           case 4 :{
                        if (!Presence_des_Etudiants)
                        {
                             Verification_de_la_Saisie_des_Etudiants(Presence_des_Etudiants);
                            break;
                        }
                        else
                        {
                            if (!Presence_des_Notes)
                            {
                              Verification_de_la_Saisie_des_Notes(Presence_des_Notes);
                              break;
                            }
                            else
                            {
                                Modification_des_Notes(liste_Etudiant,Nombre_des_Etudiants);
                                printf("\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t");
                                system("pause");
                                system("cls");
                            }

                        }
                    } break;


           case 5 :{
                        if (!Presence_des_Etudiants)
                        {
                           Verification_de_la_Saisie_des_Etudiants(Presence_des_Etudiants);
                          break;
                        }
                        else
                        {
                            Modification_des_informations(liste_Etudiant,Nombre_des_Etudiants);
                            printf("\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t");
                            system("pause");
                            system("cls");
                        }
                   } break;


           case 6 :{
                        if (!Presence_des_Etudiants)
                        {
                             Verification_de_la_Saisie_des_Etudiants(Presence_des_Etudiants);
                            break;
                        }
                        else
                        {
                            Affichage_Liste_Etudiants_Age_Croissant(liste_Etudiant,Nombre_des_Etudiants);
                            printf("\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t");
                            system("pause");
                            system("cls");
                        }
                     } break;


           case 7 :{
                        if (!Presence_des_Etudiants)
                        {
                             Verification_de_la_Saisie_des_Etudiants(Presence_des_Etudiants);
                            break;
                        }
                        else
                        {
                            if(!Presence_des_Notes)
                            {
                               Verification_de_la_Saisie_des_Notes(Presence_des_Notes);
                               break;
                            }
                            else
                            {
                                Affichage_Liste_Etudiants_Moyenne_Decroissante(liste_Etudiant,Nombre_des_Etudiants);
                                printf("\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t");
                                system("pause");
                                system("cls");
                            }
                        }
                    } break;


           case 8 :{
                        if (!Presence_des_Etudiants)
                        {
                             Verification_de_la_Saisie_des_Etudiants(Presence_des_Etudiants);
                            break;
                        }
                        else
                        {
                            if(!Presence_des_Notes)
                            {
                               Verification_de_la_Saisie_des_Notes(Presence_des_Notes);
                               break;
                            }
                            else
                            {
                                Affichage_Liste_Etudiants_Notes_Eleve_par_Matiere(liste_Etudiant,Nombre_des_Etudiants);
                                printf("\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t");
                                system("pause");
                                system("cls");
                            }
                        }
                    } break;


           case 9 :{
                        if (!Presence_des_Etudiants)
                        {
                             Verification_de_la_Saisie_des_Etudiants(Presence_des_Etudiants);
                             break;
                        }
                        else
                        {
                            if(!Presence_des_Notes)
                            {
                               Verification_de_la_Saisie_des_Notes(Presence_des_Notes);
                               break;
                            }
                            else
                            {
                                Affichage_de_la_Repartition_de_la_Classe(liste_Etudiant,Nombre_des_Etudiants);
                                printf("\n\n\n\n\n\t\t\t\t\t\t\t");
                                system("pause");
                                system("cls");
                            }
                        }
                   }  break;


         case 10 :{
                        if (!Presence_des_Etudiants)
                        {
                             Verification_de_la_Saisie_des_Etudiants(Presence_des_Etudiants);
                             break;
                        }
                        else
                        {
                            if(!Presence_des_Notes)
                            {
                               Verification_de_la_Saisie_des_Notes(Presence_des_Notes);
                               break;
                            }
                            else
                            {
                                Affichage_des_Decisions_par_ordre_alphabetique(liste_Etudiant,Nombre_des_Etudiants);
                                printf("\n\n\n\n\n\t\t\t\t\t\t\t");
                                system("pause");
                                system("cls");
                            }
                        }
                    }  break;


         case 11 :{
                        if (!Presence_des_Etudiants)
                        {
                             Verification_de_la_Saisie_des_Etudiants(Presence_des_Etudiants);
                             break;
                        }
                        else
                        {
                            if(!Presence_des_Notes)
                            {
                               Verification_de_la_Saisie_des_Notes(Presence_des_Notes);
                               break;
                            }
                            else
                            {
                                Affichage_des_Decisions_par_moyenne_eleve(liste_Etudiant,Nombre_des_Etudiants);
                                printf("\n\n\n\n\n\t\t\t\t\t\t\t");
                                system("pause");
                                system("cls");
                            }
                        }
                    }  break;


           case 12 :{
                        Menu_A_propos();
                        printf("\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t");
                        system("pause");
                        system("cls");
                    } break;


           case 13 :{
                        Sortir();
                    } break;


           default :{
                        Choix_Invalide();
                        printf("\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t");
                        system("pause");
                        system("cls");
                    } break;
        }

    }
    while ( Choix != 13 );

    return 0;
}
