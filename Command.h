#include <iostream>
#include <cstdlib>
using namespace std;

#ifndef command
#define command

#include "Entrega.h"

	class Command {
			
		public:
			
		Command () {};		
		
		virtual void execute () = 0;
		
		virtual ~ Command () {};

	};
	
#endif
