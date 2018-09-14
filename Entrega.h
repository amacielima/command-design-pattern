#include <iostream>
#include <cstdlib>
using namespace std;

#ifndef entrega
#define entrega

	class Entrega {
		
		private:
		double peso;
		double dist;
		double valor;
			
		public:
			
		Entrega () {};
		
		Entrega (double, double, double);
		
		void setPeso (double);
		
		double getPeso ();
		
		void setDistancia (double);
		
		double getDistancia ();
		
		void setValor (double);
		
		double getValor ();
		
		double calculoCorreiosNormal ();
	
		double calculoCorreiosRapido ();
	
		double calculoEntregaPropria ();
		
		~Entrega () {};

	};
	
#endif
