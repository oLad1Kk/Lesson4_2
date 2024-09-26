#pragma once
#include "MusicCD.h"
class MovieDVD :
    public MusicCD
{
protected:
    string genre;
    string country;
    string actors;
public:
    MovieDVD();
    MovieDVD(string title, string author, int year,
        float price, int time, string genre, string country, string actors);    
    void setGenre(string genre);
    void setCountry(string country);
    void setActors(string actors);

    string getGenre()const;
    string getCountry()const;
    string getActors()const;
    
    void showInfo() const;
};

