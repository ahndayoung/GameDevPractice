#pragma once

#include "Game2D.h"

namespace jm
{
	class FaceExample : public Game2D
	{
	public:
		void update() override
		{
			// Big yellow face
			drawFilledCircle(Colors::ryanyellow, 0.7f); // draw background object first

			//Ear(L)
			beginTransformation();
			{
				translate(-0.4f, 0.53f);
				drawFilledCircle(Colors::ryanyellow, 0.2f);
			}
			endTransformation();

			//Ear(L)
			beginTransformation();
			{
				translate(0.4f, 0.53f);
				drawFilledCircle(Colors::ryanyellow, 0.2f);
			}
			endTransformation();

			
			//White mouth(L)
			beginTransformation();
			{
				translate(-0.06f, -0.2f);
				drawFilledCircle(Colors::white, 0.07f);
			}
			endTransformation();

			//White mouth(L)
			beginTransformation();
			{
				translate(0.06f, -0.2f);
				drawFilledCircle(Colors::white, 0.07f);
			}
			endTransformation();


			//brown nose
			beginTransformation();
			{
				translate(0.0f, -0.14f);
				rotate(-180.0f);
				drawFilledTriangle(Colors::ryanbrown, 0.07f);
			}
			endTransformation();

			// left eye
			beginTransformation();
			{
				translate(-0.3f, 0.1f);
				drawFilledCircle(Colors::ryanbrown, 0.03f);
			}
			endTransformation();

			beginTransformation();
			{
				translate(-0.3f, 0.2f);
				drawFilledBox(Colors::ryanbrown, 0.2f, 0.03f);
			}
			endTransformation();

			// right eye
			beginTransformation();
			{
				translate(0.3f, 0.1f);
				drawFilledCircle(Colors::ryanbrown, 0.03f);
			}
			endTransformation();

			beginTransformation();
			{
				translate(0.3f, 0.2f);
				drawFilledBox(Colors::ryanbrown, 0.2f, 0.03f);
			}
			endTransformation();

			//for (float x = -0.5f; x < 0.4f; x += 0.05f)
			//{
			//	drawLine(Colors::black, vec2(x, 0.6f), Colors::gray, vec2(x + 0.05f, 0.85f));
			//}
		}
	};
}