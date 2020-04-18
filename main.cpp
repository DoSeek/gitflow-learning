#include <iostream>
#include <string>
#include <fstream>

using namespace std;
using std::string;

int main(int argc, char *argv[])
{
	cout << "hello, git flow" << endl;
	fstream fs("content.txt", std::fstream::in | std::fstream::out);
	fs << "created by feature branch";
	fs.close();

	return 0;
}
