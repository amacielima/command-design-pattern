// Design Patterns - Command

#include <iostream>
#include <cstdlib>
#include <iomanip>
using namespace std;

#include "Switch.h"
#include "Entrega.h"
#include "CorreiosNormal.h"
#include "CorreiosRapido.h"
#include "EntregaPropria.h"

	int main () {
		
		system ("color d0");
		
		cout << fixed << setprecision(2);
		
		int    n = 0, cont = 0;
		double p = 0, d = 0, v = 0;
	
		cin >> n;
		
		//Switch
		
		while (cont != n) {
			
			puts("");
			
			cout << "peso:	";     cin >> p;
			cout << "distancia:	"; cin >> d;
			cout << "valor:	";     cin >> v;
			
			Entrega e(p,d,v);
			CorreiosNormal cn(e);
			CorreiosRapido cr(e);
			EntregaPropria ep(e);
			
			Switch s(cn, cr, ep);

			cout << "======= formas de entrega =======" << endl;
			
			if (p <= 300.0)
			s.correiosNormal();
			
			if (p <= 50000.0)
			s.correiosRapido();
			
			s.entregaPropria();
			
			puts("");
			
			cont++;
			
			p = 0.0;
			d = 0.0; 
			v = 0.0;
		
		}
	
	system("pause");
	return 0;
	}
