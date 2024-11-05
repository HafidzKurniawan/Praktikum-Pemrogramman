test_soal2: test_soal2.o soal2.o
	g++ test_soal2.o -o test_soal2
	g++ soal2.o -o soal2
test_soal.o: test_soal2.cpp
	g++ -c test_soal2.cpp -o test_soal2.o
soal1.o: soal2.cpp
	g++ -c soal2.cpp -o soal2.o
test: test_soal2
	./test_soal2
	./soal2
clean:
	rm -f test_soal2.o test_soal2