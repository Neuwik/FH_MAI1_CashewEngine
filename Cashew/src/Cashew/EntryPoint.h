#pragma once

#ifdef CASHEW_PLATFORM_WINDOWS

extern Cashew::Application* Cashew::CreateApplication();

int main(int argc, char** argv)
{
	auto app = Cashew::CreateApplication();
	app->Run();
	delete app;
}

#endif