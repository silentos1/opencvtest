dice:
	g++ -std=c++11 main.cpp `pkg-config --cflags --libs opencv` -o dice

clean:
	rm dice
