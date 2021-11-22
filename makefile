all: exe_arq

exe_arq: main.o scale_scroll.o
	g++ -o exe_arq main.o scale_scroll.o `pkg-config gtkmm-3.0 --cflags --libs`

main.o: main.cpp scale_scroll.h
	g++ -o main.o main.cpp -c `pkg-config gtkmm-3.0 --cflags --libs`

scale_scroll.o: scale_scroll.cpp 
	g++ -o scale_scroll.o scale_scroll.cpp -c `pkg-config gtkmm-3.0 --cflags --libs`

run: exe_arq
	./exe_arq