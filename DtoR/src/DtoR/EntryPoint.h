#pragma once

#ifdef DTOR_PLATFORM_WINDOWS

extern dtor::Application* dtor::CreateApplication();

int main(int argc, char ** argv)
{
	auto app = dtor::CreateApplication();
	app->Run();
	delete app;
}

#endif