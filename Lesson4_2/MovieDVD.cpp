#include "MovieDVD.h"

MovieDVD::MovieDVD()
{
    genre = "undefined";
    country = "undefined";
    actors = "undefined";
}

MovieDVD::MovieDVD(string title, string author, int year, float price, int time, string genre, string country, string actors)
    :MusicCD(title, author, year, price, time)
{
    this->genre = genre;
    this->country = country;
    this->actors = actors;
}

void MovieDVD::setGenre(string genre)
{
    this->genre = genre;
}

void MovieDVD::setCountry(string country)
{
    this->country = country;

}

void MovieDVD::setActors(string actors)
{
    this->actors = actors;
}

string MovieDVD::getGenre() const
{
    return genre;
}

string MovieDVD::getCountry() const
{
    return country;
}

string MovieDVD::getActors() const
{
    return actors;
}

void MovieDVD::showInfo() const
{
    MusicCD::showInfo();
    cout << "Genre: " << genre << endl;
    cout << "Country: " << country << endl;
    cout << "Actors: " << actors << endl;
}

float MovieDVD::getPrice() const
{
    if (genre == "comedy") return price * 0.9;
    else if (genre == "drama") return price * 0.85;
    else if (genre == "serial") return price * 0.8;
    else return price;
}
