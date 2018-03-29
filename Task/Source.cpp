#include "Header.h"
#include "Controller.h"

void main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	//Potentiometer *p = new Potentiometer();
	//Engine *e = new Engine();
	Potentiometer p;
	Engine e;
	AmperageSensor as;

	Controller controller(p, e, as);

	controller.StartingAPoll();

}