#include "CorreiosNormal.h"
using namespace std;

	CorreiosNormal::CorreiosNormal (Entrega & ent) : e(ent) {}
	
	void CorreiosNormal::execute () {
		
		cout << "-- correios normal >	" << e.calculoCorreiosNormal() << endl;
	
	}
	
