all: datos.dat VelasquezJuan_final_15.png

%.png: %.dat VelasquezJuan_final_15.png
	python3 graficador.py
	
%.dat: a.out
	./a.out

a.out: VelasquezJuan_final_15.cpp
	g++ VelasquezJuan_final_15.cpp

clean:
	rm -rf *.x *.dat *.gif