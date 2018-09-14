#include "Switch.h"
using namespace std;

	Switch::Switch (Command & correiosNormalCmd, Command & correiosRapidoCmd, Command & entregaPropriaCmd) :  
	correiosNormalCommand(correiosNormalCmd), correiosRapidoCommand(correiosRapidoCmd), entregaPropriaCommand(entregaPropriaCmd) {}
	
	void Switch::correiosNormal () {
	
		correiosNormalCommand.execute();

	}
	
	void Switch::correiosRapido () {
	
		correiosRapidoCommand.execute();

	}
	
	void Switch::entregaPropria () {
	
		entregaPropriaCommand.execute();

	}
