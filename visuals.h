#ifndef GAME_CLIENT_COMPONENTS_VISUALS_H
#define GAME_CLIENT_COMPONENTS_VISUALS_H
#include <game/client/component.h>

class CVisuals : public CComponent
{
 bool m_MenuOpen = false;
 int m_Selected = 0;
 bool m_FreezeHighlight = false;
 int m_Radius = 4;

 void RenderFreeze();
 void RenderMenu();

public:
 int Sizeof() const override { return sizeof(*this); }
 bool OnInput(const IInput::CEvent &Event) override;
 void OnRender() override;
};
#endif
