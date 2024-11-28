#ifndef PRESENTATION_H_INCLUDED
#define PRESENTATION_H_INCLUDED
#include <stdbool.h>
#include "metier.h"

void Verification_de_la_Saisie_des_Etudiants(bool info_sur_Saisie_Etudiants);

void Verification_de_la_Saisie_des_Notes(bool info_sur_Saisie_Notes);

void Menu_Principal(int Nombre_d_etudiants);

void Affichage_Liste_Etudiants_Ordre_Alphabetique(Etudiant classe[],int Nombre_d_etudiants);

void Saisie_des_Etudiants(Etudiant classe[],int Nombre_d_etudiants);

void Saisie_des_Notes(Etudiant classe[],int Nombre_d_etudiants);

void Modification_des_Notes(Etudiant classe[],int Nombre_d_etudiants);

void Modification_des_informations(Etudiant classe[], int Nombre_d_etudiants);

void Affichage_Liste_Etudiants_Age_Croissant(Etudiant classe[], int Nombre_d_etudiants);

void Affichage_Liste_Etudiants_Moyenne_Decroissante(Etudiant classe[], int Nombre_d_etudiants);

void Affichage_Liste_Etudiants_Notes_Eleve_par_Matiere(Etudiant classe[],int Nombre_d_etudiants);

void Affichage_de_la_Repartition_de_la_Classe(Etudiant classe[],int Nombre_d_etudiants);

void Affichage_des_Decisions_par_ordre_alphabetique(Etudiant classe[],int Nombre_d_etudiants);

void Affichage_des_Decisions_par_moyenne_eleve(Etudiant classe[],int Nombre_d_etudiants);

void Menu_A_propos();

void Sortir();

void Choix_Invalide();

#endif // PRESENTATION_H_INCLUDED
