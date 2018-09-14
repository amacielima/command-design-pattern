#include "Entrega.h"
using namespace std;

	Entrega::Entrega (double p, double d, double v) {
	
		setPeso(p);
		setDistancia(d);
		setValor(v);
	
	}
	
	void Entrega::setPeso (double p) {
	
		peso = p;
	
	}
		
	double Entrega::getPeso () {
		
		return peso;
	
	}
		
	void Entrega::setDistancia (double d) {
		
		dist = d;
	
	}
		
	double Entrega::getDistancia () {
		
		return dist;
	
	}
	
	void Entrega::setValor (double v) {
	
		valor = v;
	
	}
		
	double Entrega::getValor () {
		
		return valor;
	
	}
	
	double Entrega::calculoCorreiosNormal () {

		if (peso >= 0.0 && peso <= 100.0)
		return (5.00*dist);	
		
		if (peso > 100.0 && peso <= 200.0)
		return (7.50*dist);
		
		if (peso > 200.0 && peso <= 300.0)
		return (8.50*dist);
	
	}
	
	double Entrega::calculoCorreiosRapido () {
		
		if (peso > 0.0 && peso <= 500.0)
		return ((peso/100.0)*(10.5)*dist);
		
		if ((peso > 500.0 && peso <= 50000.0) && (dist > 0.00 && dist <= 300.0))
		return ((peso/100.0)*(14.0)*dist);
		
		if ((peso > 500.0 && peso <= 50000.0) && (dist > 300.0 && dist <= 1000.0))
		return ((peso/100.0)*(18.0)*dist);

	}
	
	double Entrega::calculoEntregaPropria () {
	
		return (0.1 * valor + ( (1.0/25.0) * dist ) + (peso/2000.0) );
	
	}
