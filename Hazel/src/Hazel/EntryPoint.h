#pragma once

#ifdef HZ_PLATFORM_WINDOWS

extern Hazel::Application* Hazel::CreateApplication();

int main(int argc, char** argv) 
{
	printf("Start Hazel Engine\n");
	printf("Version 0.1 Alpha\n");
	printf("test 123");
	auto app = Hazel::CreateApplication();
	app->Run();
	delete app;
}


#endif