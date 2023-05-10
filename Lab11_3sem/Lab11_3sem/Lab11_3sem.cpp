#include "Header.h"

int main(void) {
	geom* p[5];

	kreis k(10); p[0] = &k;
	pr pr1(10, 20); p[1] = &pr1;
	treug tr(20, 25, 25); p[2] = &tr;

	for (int i = 0; i < 3; i++) { std::cout << " plo = " << p[i]->plo(); }

	std::cout << "\nsubstraction = " << p[1]->plo() - p[0]->plo() - p[2]->plo();

	parallelelepipipid par(4, 5, 3); p[3] = &par;
	cil c(1, 5); p[4] = &c;
	std::cout << "\nvolume\n";
	
	for (int i = 3; i < 5; i++) { std::cout << " obe = " << p[i]->obe(); }

	return 0;
}