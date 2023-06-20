#pragma once

#ifdef GE_WINDOWS_PLATFORM

extern GameEngine::Application* GameEngine::CreateApplication();

int main(int argc,char** argv)
{
	GameEngine::Application* app = GameEngine::CreateApplication();
	app->Run();
	delete app;
}

#endif