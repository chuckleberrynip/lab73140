all: 
	echo: "Try building it using build, and trying removing the run files using clean."

build: 
	g++ -o name name.cpp

execute:
	./name

clean:
	rm name 
