#ifndef VEHICULE_H_INCLUDED
#define VEHICULE_H_INCLUDED
typedef struct
{
    int jour ;
    int mois ;
    int annee;
}date;
typedef struct
{
    int locationid;
    int modeleid;
    date taxfin;
    date assurancefin;
    char etat[100] ;
}vehicule;


#endif // VEHICULE_H_INCLUDED
