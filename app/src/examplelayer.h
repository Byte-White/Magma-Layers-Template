#ifndef EXAMPLE_LAYER_H
#define EXAMPLE_LAYER_H
#include "Layer.h"
#include "Magma/Magma.h"


class ExampleLayer: public mg::Layer
{
public:
	void OnAttach();
	void OnDetach();
	virtual void OnUIRender();
private:

};
#endif // !EXAMPLE_LAYER_H
