#ifndef APPLICATION_H_INCLUDED
#define APPLICATION_H_INCLUDED
#include "metier.h"

void Saisir_les_informations(Etudiant *classe);

void Informations_de_L_Etudiant(Etudiant classe[],int Nombre_d_etudiants);

void Saisir_les_Notes(Etudiant *classe);

void Affichage_Etudiants_avec_Informations(Etudiant classe[],int Nombre_d_etudiants);

void Affichage_Etudiants_avec_Moyenne(Etudiant classe[], int Nombre_d_etudiants);

void Effectif_de_La_classe(Etudiant classe[],int Nombre_d_etudiants);

void Affichage_des_Resultats(Etudiant classe[],int Nombre_d_etudiants);

void Resultats_Liste_Alphabetique(Etudiant classe[], int Nombre_d_etudiants);

void Resultats_Liste_par_moyenne_eleve(Etudiant classe[], int Nombre_d_etudiants);

void Classement_des_Etudiants_par_moyenne(Etudiant classe[],int Nombre_d_etudiants);

void Rattrapage(Etudiant classe[],int Nombre_d_etudiants);

void Redouble(Etudiant classe[],int Nombre_d_etudiants);

void Bilan_de_la_classe(Etudiant classe[],int Nombre_d_etudiants);

void changement_des_Notes(Etudiant *classe);

void changement_des_informations(Etudiant *classe);

void Note_la_plus_Eleve_en_Anglais(Etudiant classe[], int Nombre_d_etudiants);

void Note_la_plus_Eleve_en_Chimie(Etudiant classe[], int Nombre_d_etudiants);

void Note_la_plus_Eleve_en_Francais(Etudiant classe[], int Nombre_d_etudiants);

void Note_la_plus_Eleve_en_Informatique(Etudiant classe[], int Nombre_d_etudiants);

void Note_la_plus_Eleve_en_Mathematique(Etudiant classe[], int Nombre_d_etudiants);

void Note_la_plus_Eleve_en_Physique(Etudiant classe[], int Nombre_d_etudiants);

void Trier_Les_Moyennes_des_Etudiants(Etudiant classe[], int Nombre_d_etudiants);

void Trier_Les_Noms_des_Etudiants_par_Ordre_Alphabetique(Etudiant classe[],int Nombre_d_etudiants);

void Trier_Etudiants_par_Age_Croissant(Etudiant classe[], int Nombre_d_etudiants);

void Choix_de_L_Etudiant_pas_Correct();





#endif // APPLICATION_H_INCLUDED
