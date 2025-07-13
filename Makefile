test:
	g++ tests/log.cpp build/libharmonyren.a -std=c++17 -Iinclude -o build/test && ./build/test