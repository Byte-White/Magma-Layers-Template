#ifndef MAGMA_TEMPLATE_LAYER_H
#define MAGMA_TEMPLATE_LAYER_H
namespace mg
{
	class Layer
	{
	public:
		virtual ~Layer() = default;

		virtual void OnAttach() {}
		virtual void OnDetach() {}

		virtual void OnUIRender() {}
	};
}
#endif