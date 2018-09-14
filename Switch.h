#include <iostream>
#include <cstdlib>
using namespace std;

#ifndef switch
#define switch

#include "Command.h"

	class Switch {
			
		private:
		Command & correiosNormalCommand;
		Command & correiosRapidoCommand;
		Command & entregaPropriaCommand;
			
		public:
		
		Switch (Command &, Command &, Command &);
		
		void correiosNormal ();
		
		void correiosRapido ();
		
		void entregaPropria ();
		
		~ Switch () {};

	};
	
#endif
