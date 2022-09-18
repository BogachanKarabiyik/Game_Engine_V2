#pragma once

#include "Core.h"

namespace Game_Engine {

	class GAME_ENGINE_API Application
	{
	public:
		Application();
		virtual ~Application();

		void Run();
	};

	// To be defined in CLIENT
	Application* CreateApplication();

}
