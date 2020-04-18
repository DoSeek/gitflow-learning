#include <iostream>
#include <string>
#include <fstream>

using namespace std;
using std::string;

int main(int argc, char *argv[])
{
	cout << "hello, git flow" << endl;
	ofstream ofs("content.txt", std::ofstream::out);
	ofs << "created by feature branch";
	ofs.close();

	return 0;
}
