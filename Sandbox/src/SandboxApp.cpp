#include <Game_Engine.h>

class Sandbox : public Game_Engine::Application
{
public:
	Sandbox()
	{

	}

	~Sandbox()
	{

	}
};

Game_Engine::Application* Game_Engine::CreateApplication()
{
	return new Sandbox();
}