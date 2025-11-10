#pragma once

#ifdef CASHEW_PLATFORM_WINDOWS

extern Cashew::Application* Cashew::CreateApplication();

int main(int argc, char** argv)
{
	Cashew::Log::Init();
	CASHEW_CORE_WARN("Initialized Log!");
	int a = 5;
	CASHEW_INFO("Hello! Var={0}", a);

	auto app = Cashew::CreateApplication();
	app->Run();
	delete app;
}

#endif