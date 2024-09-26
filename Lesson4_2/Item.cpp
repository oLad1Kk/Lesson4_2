#include "Item.h"

Item::Item()
{
    title = "undefined";
    author = "undefined";
    year = 0;
    price = 0;
}

Item::Item(string title, string author, int year, float price)
{
    this->title = title;
    this->author = author;
    this->year = year;
    this->price = price;
}

void Item::setTitle(string title)
{
    this->title = title;
}

void Item::setAuthor(string title)
{
    this->author = author;
}

void Item::setYear(int year)
{
    this->year = year;
}

void Item::setAuthor(float price)
{
    this->price = price;
}

string Item::getTitle() const
{
    return title;
}

string Item::getAuthor() const
{
    return author;
}

int Item::getYear() const
{
    return year;
}

float Item::getPrice() const
{
    return price;
}

void Item::showInfo() const
{
    cout << "Title: " << title << endl;
    cout << "Author: " << author << endl;
    cout << "Year: " << year << endl;
    cout << "Price: " << price << endl;
}
