all:
	@g++ main.cpp -I ./include/ -L ./lib/ -lglfw3 -lGL -lGLEW -o star
