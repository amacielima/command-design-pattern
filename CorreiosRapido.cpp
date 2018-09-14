#include "CorreiosRapido.h"
using namespace std;
	
	CorreiosRapido::CorreiosRapido (Entrega & ent) : e(ent) {}
	
	void CorreiosRapido::execute () {
		
		cout << "-- correios rapido >	" << e.calculoCorreiosRapido() << endl;
	
	}
