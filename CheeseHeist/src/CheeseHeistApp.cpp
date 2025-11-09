#include <Cashew.h>

class CheeseHeist : public Cashew::Application
{
public:
	CheeseHeist(){}
	~CheeseHeist(){}
};

Cashew::Application* Cashew::CreateApplication()
{
	return new CheeseHeist();
}