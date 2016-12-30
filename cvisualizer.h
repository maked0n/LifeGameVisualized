#include <SDL2/SDL.h>
#include <iostream>

#define VCELLS 100
#define HCELLS 100
#define CELL_SIZE 5
#define WINDOW_WIDTH HCELLS * CELL_SIZE
#define WINDOW_HEIGHT VCELLS * CELL_SIZE
#define LINE_WIDTH 1

class CVisualizer {
	private:
		SDL_DisplayMode m_displayMode;
		SDL_Window* m_window;
		SDL_Renderer* m_renderer;
		void _clear();
	public:
		CVisualizer();
		~CVisualizer();
		void redraw();
};