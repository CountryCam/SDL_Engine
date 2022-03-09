#include "Input.h"
#include "Screen.h"
#include "Background.h"


Background::Background(Screen& screen)
{

	m_background.Load("Images/BackGround.png", screen);
	m_background.SetDimension(1280, 720);

	m_backgroundMain.Load("Images/RockyBackground.png", screen);
	m_backgroundMain.SetDimension(1280, 720);

}


void Background::Update()
{

}

void Background::Render(Screen& screen)
{
	m_background.Render(screen);
	m_backgroundMain.Render(screen);
}

void Background::Unload()
{
	m_background.Unload();
}


