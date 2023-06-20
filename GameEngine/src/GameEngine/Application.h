#pragma once

#include "Core.h"

namespace GameEngine
{
	class GAME_ENGINE_API Application
	{
	public:
		Application();

		~Application();

		void Run();
	};


	//is defined in the client application
	Application* CreateApplication();

}


