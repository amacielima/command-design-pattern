#include <iostream>
#include <cstdlib>
using namespace std;

#ifndef correiosrapido
#define correiosrapido

#include "Command.h"
#include "Entrega.h"

	class CorreiosRapido : public Command {
		
		private:
		Entrega & e;	
		
		public:
			
		// CorreiosRapido () {};
		
		CorreiosRapido (Entrega &);
		
		void execute ();
		
		~CorreiosRapido () {};

	};
	
#endif
