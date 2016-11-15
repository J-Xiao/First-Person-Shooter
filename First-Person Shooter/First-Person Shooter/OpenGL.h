#pragma once

class OpenGL
{
public:
	OpenGL();
	virtual ~OpenGL();

	HDC hDC;
	HGLRC hRC;

	BOOL setupPixelFormat(HDC hDC);
	void init(float width, float height);
	void render();
	void cleanUp();
};
