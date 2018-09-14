#include <iostream>
#include <cstdlib>
using namespace std;

#ifndef entregapropria
#define entregapropria

#include "Command.h"
#include "Entrega.h"

	class EntregaPropria : public Command {
			
		private:
		Entrega & e;
			
		public:
			
		// EntregaPropria () {};
				
		EntregaPropria (Entrega &);
		
		void execute ();
		
		~EntregaPropria () {};

	};
	
#endif
