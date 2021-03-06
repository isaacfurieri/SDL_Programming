#pragma once
#include "GameObject.h"
#include "Input.h"
#include "Sprite.h"

class Background : public GameObject
{

public:

	Background(Screen& screen);
	~Background();

	virtual void Update(Input& input);
	virtual void Render(Screen& screen);

private:

	Sprite m_image;
};

