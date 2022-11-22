src = $(wildcard src/*.cpp)
obj = $(patsubst src/%.cpp, obj/%.o,$(src))
lib = $(patsubst obj/%.o, lib/lib%.so,$(obj))

all:create_dirctories  compile 




obj/%.o:src/%.cpp
	g++ -c -I./inc/ -fPIC $^ -o $@ 

lib/lib%.so:obj/%.o 
	g++ -fPIC -shared $^ -o $@



compile: $(obj) $(lib)
	g++ main_src/main.cpp -L./lib/ -lcomplex -I./inc/ -o bin/main
	export LD_LIBRARY_PATH=`pwd`/lib
	./bin/main

create_dirctories:
	mkdir -p bin lib obj




remove:
	rm -rf bin lib obj
