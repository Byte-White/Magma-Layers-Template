#define MAGMA_ENTRYPOINT
#include "Magma/Magma.h"
#include "Layer.h"
#include "examplelayer.h"

class MyApplication:public mg::Application
{
public:
	MyApplication()
	{
		m_Layers.emplace_back(new ExampleLayer());
		// add your layers here
	}

	void Init() override
	{
		for (auto& layer : m_Layers)
			layer->OnAttach();
	}

	void Destroy() override
	{
		for (auto& layer : m_Layers)
		{
			layer->OnDetach();
			delete layer;
		}

		m_Layers.clear();
	}

	~MyApplication()
	{
	}
	void Render() override
	{
		for (auto& layer : m_Layers)
			layer->OnUIRender();
	}
private:
	std::vector<mg::Layer*> m_Layers;
};


mg::Application* CreateApplication(int argc, char** argv)
{
	MyApplication* app = new MyApplication(); 
	app->SetSize(800,600);
	app->SetTitle("Magma Layers Application");
	return app;
}