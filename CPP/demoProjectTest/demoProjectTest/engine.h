#pragma once
#ifndef _ENGINE_H

#define _ENGINE_H



#include <SFML\Graphics.hpp>

class Engine

{

private:

		//SFML Render Window
		sf::RenderWindow* window;
		//Initializes the engine
		bool Init();
		//Main Game Loop
		void MainLoop();
		//Renders one frame
		void RenderFrame();
		//Processes user input
		void ProcessInput();
		//Updates all Engine internals

		void Update();
public:
		Engine();
		~Engine();
		void Go();                  //Starts the engine
};
#endif