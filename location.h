#ifndef LOCATION_H_INCLUDED
#define LOCATION_H_INCLUDED
typedef struct
{
    int jour ;
    int mois ;
    int annee;
}date;
typedef struct
{
    int location_id;
    int client_cin;
    int matriculevehicule;
    date datedebut;
    date datefin;
}location;


#endif // LOCATION_H_INCLUDED
