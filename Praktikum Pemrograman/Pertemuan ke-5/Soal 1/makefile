soal1n2: soal1n2.o
	g++ soal1n2.o -o soal1n2
soal1n2.o: soal1n2.cpp
	g++ -c soal1n2.cpp -o soal1n2.o
run: soal1n2
	./soal1n2
test_soal1n2: test_soal1n2.o
	g++ test_soal1n2.o -o test_soal1n2
test_soal.o: test_soal1n2.cpp
	g++ -c test_soal1n2.cpp -o test_soal1n2.o
test: test_soal1n2
	./test_soal1n2
clean:
	rm -f soal1n2.o soal1n2
	rm -f test_soal1n2.o test_soal1n2