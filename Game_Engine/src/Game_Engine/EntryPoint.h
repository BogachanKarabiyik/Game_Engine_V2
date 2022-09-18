#pragma once

#ifdef GE_PLATFORM_WINDOWS

extern Game_Engine::Application* Game_Engine::CreateApplication();

int main(int argc, char** argv)
{
	Game_Engine::Log::Init();
	GE_CORE_WARN("Initialized Log!");
	int a = 5;
	GE_INFO("Hello! Var={0}", a);

	auto app = Game_Engine::CreateApplication();
	app->Run();
	delete app;
}

#endif