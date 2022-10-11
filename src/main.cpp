#include <iostream>
#include <SDL.h>

int main(int argc, char** argv){
	if (SDL_Init(SDL_INIT_EVERYTHING) != 0){
		std::cout << "SDL_Init Error: " << SDL_GetError() << std::endl;
		return 1;
	}

        SDL_Window* window = SDL_CreateWindow("pegg", SDL_WINDOWPOS_UNDEFINED, SDL_WINDOWPOS_UNDEFINED, 800, 600, 0);

        if (window == nullptr) {
            std::cerr << "An error occured while creating the window: " << SDL_GetError() << std::endl;
            return 1;
        }

        while (true) {
            for (SDL_Event event; SDL_PollEvent(&event) != 0;) {
                if (event.type == SDL_QUIT) {
                    goto end;
                }
            }
        }
end:
	SDL_Quit();

	return 0;
}
