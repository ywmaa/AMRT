CFLAGS = -std=c++17 -O2
LDFLAGS = -lglfw -lvulkan -ldl -lpthread -lX11 -lXxf86vm -lXrandr -lXi
AMRT: *.cpp *.hpp
	g++ $(CFLAGS) -o AMRT *.cpp $(LDFLAGS)

.PHONY: run clean

run: AMRT
	./AMRT
clean:
	rm -f AMRT