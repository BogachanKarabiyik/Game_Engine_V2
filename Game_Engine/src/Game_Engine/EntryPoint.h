#pragma once

#ifdef GE_PLATFORM_WINDOWS

extern Game_Engine::Application* Game_Engine::CreateApplication();

int main(int argc, char** argv)
{
	auto app = Game_Engine::CreateApplication();
	app->Run();
	delete app;
}

#endif