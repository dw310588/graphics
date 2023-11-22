init:
	mkdir ./build
build-glfw: init
	mkdir ./build/glfw
	cmake -S ./deps/glfw -B ./build/glfw
	cd ./build/glfw && make
comp:
	export LD_LIBRARY_PATH=$(PWD)/build/glfw/src:$(LD_LIBRARY_PATH)
	g++ main.cpp -I ./deps/glfw/include -L ./build/glfw/src -lglfw3
