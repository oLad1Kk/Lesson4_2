#include "MusicCD.h"
#include "MovieDVD.h"


int main()
{
	MusicCD a("Clint Eastwood", "Gorillaz", 2001, 101, 4);
	a.showInfo();
	cout << "\n--------------------------------------------------\n";
	MovieDVD b("Silence of the lambs", "Jonathan Demme", 1991, 0.5, 2 * 60, "comedy", "USA", "Anthony Hopkins");
	b.showInfo();
}