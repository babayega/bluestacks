# bluestacks
Solution to the Programming question of bluestacks.

I have used the diff Template Library(dtl) to find the edit distance between any two files.
The link to the Github Page of the diff Template Library is https://github.com/cubicdaiya/dtl

I have used this library because it provides the implementation of the diff function of the Linux shell in C++. Hence, the diff
function used here is quite powerful and is the efficient way to compare large files.

The algorithm for the solution is as follows - 


	1.Input the file which is to be checked.
	2.Apply the diff function from the dtl to each of the 20 files we have.
	3.From this we will get the edit distance for each of the 20 files with respect to the input file.
	4.The file which has the least edit distance from the input file will be the CLOSEST MATCHING FILE.


The program to calculate the edit distance between any two files is in the main.cpp file. Also, the text files
hello.txt and hello1.txt will cater as the test case required.
