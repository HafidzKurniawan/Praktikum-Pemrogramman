soal2: soal2.o
	g++ soal2.o -o soal2
soal2.o: soal2.cpp
	g++ -c soal2.cpp -o soal2.o
run: soal2
	./soal2
test_soal2: test_soal2.o
	g++ test_soal2.o -o test_soal1
test_soal.o: test_soal2.cpp
	g++ -c test_soal2.cpp -o test_soal2.o
test: test_soal2
	./test_soal2
clean:
	rm -f soal2.o soal2
	rm -f test_soal2.o test_soal2