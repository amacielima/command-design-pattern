#include "EntregaPropria.h"
using namespace std;

	EntregaPropria::EntregaPropria (Entrega & ent) : e(ent) {}
	
	void EntregaPropria::execute () {
	
		cout << "-- entrega propria >	" << e.calculoEntregaPropria() << endl;

	}
