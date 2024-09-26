#pragma once
#include <string>
#include <iostream>
using namespace std;


class Item
{
protected:
	string title;
	string author;
	int year;
	float price;
public:
	Item();
	Item(string title, string author, int year, float price);

	void setTitle(string title);
	void setAuthor(string title);
	void setYear(int year);
	void setAuthor(float price);

	string getTitle()const;
	string getAuthor()const;
	int getYear()const;
	float getPrice()const;

	void showInfo()const;

};

