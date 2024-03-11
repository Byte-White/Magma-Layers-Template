#include "examplelayer.h"

void ExampleLayer::OnAttach() 
{

}
void ExampleLayer::OnDetach()
{

}

void ExampleLayer::OnUIRender() 
{
	ImGui::Begin("Magma Layers App Template");
	if (mg::app->GetRenderer()->GetAPI() == mg::RenderAPI::Vulkan) ImGui::Text("Render API: Vulkan");
	else ImGui::Text("Render API: OpenGL");
	ImGui::End();
}