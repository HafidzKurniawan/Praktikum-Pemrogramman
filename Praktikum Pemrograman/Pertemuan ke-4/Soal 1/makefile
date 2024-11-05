soal1: soal1.o
	g++ soal1.o -o soal1
soal.o: soal1.cpp
	g++ -c soal1.cpp -o soal1.o
run: soal1
	./soal1
test_soal1: test_soal1.o
	g++ test_soal1.o -o test_soal1
test_soal.o: test_soal1.cpp
	g++ -c test_soal1.cpp -o test_soal1.o
test: test_soal1
	./test_soal1
clean:
	rm -f soal1.o soal1
	rm -f test_soal1.o test_soal1
