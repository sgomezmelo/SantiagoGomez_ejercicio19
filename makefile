primera: RK_pO.pdf
RK_pO.pdf: RK4.txt
	python grafica.py
RK4.txt: RK4.cpp
	c++ RK4.cpp
	./a.out > RK4.txt
	rm a.out

segunda: RK_sO.pdf
RK_sO.pdf: RK4_sOrd.txt
	python grafica_2.py
RK4_sOrd.txt: RK4_2Ord.cpp
	c++ RK4_2Ord.cpp
	./a.out > RK4_sOrd.txt
	rm a.out
