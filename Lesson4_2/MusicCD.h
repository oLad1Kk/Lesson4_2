#pragma once
#include "Item.h"
class MusicCD :
    public Item
{
protected:
    int time;
public:
    MusicCD();
    MusicCD(string title, string author, int year, float price, int time);

    void setTime(int time);
    int getTime()const;

    void showInfo()const;
};

