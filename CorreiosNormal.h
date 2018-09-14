#include <iostream>
#include <cstdlib>
using namespace std;

#ifndef correiosnormal
#define correiosnormal

#include "Command.h"
#include "Entrega.h"

	class CorreiosNormal : public Command {
			
		private:
		Entrega & e;
			
		public:
			
		// CorreiosNormal () {};
		
		CorreiosNormal (Entrega &);
		
		void execute ();
		
		~CorreiosNormal () {};

	};
	
#endif
