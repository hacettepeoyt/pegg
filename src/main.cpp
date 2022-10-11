#include <iostream>
#include <SDL.h>

/*
 * Lesson 0: Test to make sure SDL is setup properly
 */
int main(int argc, char** argv){
	if (SDL_Init(SDL_INIT_EVERYTHING) != 0){
		std::cout << "SDL_Init Error: " << SDL_GetError() << std::endl;
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
