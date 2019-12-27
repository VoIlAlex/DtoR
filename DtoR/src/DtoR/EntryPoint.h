#pragma once

#ifdef DTOR_PLATFORM_WINDOWS

extern dtor::Application* dtor::createApplication();

int main(int argc, char ** argv)
{
	dtor::Log::init();
	DTOR_CORE_INFO("Loggers was initialized.");


	auto app = dtor::createApplication();
	app->run();
	delete app;
}

#endif