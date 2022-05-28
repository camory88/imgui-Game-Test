#include "gui.h"
#include <thread>


int __stdcall wWinMain(
	HINSTANCE instance,
	HINSTANCE previousInstance,
	PWSTR arguments,
	int commandShow)
{
	gui::CreatHWindow("cmoryy88's Game", "Last Alive?");
	gui::CreateDevice();
	gui::CreatImGui();


	while (gui::exit)
	{
		gui::BegiRender();
		gui::Render();
		gui::EndRender();

		std::this_thread::sleep_for(std::chrono::milliseconds(10));
	}

	gui::DestroyImGui();
	gui::DestroyDevice();
	gui::DestroyHWindow();

	return EXIT_SUCCESS;
}