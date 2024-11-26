soal5 : soal5.o
	g++ soal5.o -o soal5
soal5.o : soal5.cpp
	g++ -c soal5.cpp -o soal5.o
test_soal5 : test_soal5.o
	g++ test_soal5.o -o test_soal5
test_soal5.o : test_soal5.cpp
	g++ -c test_soal5.cpp -o test_soal5.o
test : test_soal5 soal5
	./test_soal5
	./soal5
clean :
	rm -f soal5 soal5.o