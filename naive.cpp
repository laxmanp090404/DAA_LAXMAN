
#include <iostream>
#include<cstring>
using namespace std;

void search(char* pat, char* txt)
{
	int pat_size = strlen(pat);
	int txt_size = strlen(txt);


	for (int i = 0; i <= txt_size - pat_size; i++) {
		int j;

		for (j = 0; j < pat_size; j++)
			if (txt[i + j] != pat[j])
				break;

		if (j == pat_size) 
			cout << "Pattern found at index " << i << endl;
	}
}
int main()
{
	char txt[] = "Thisisatext";
	char pat[] = "text";
	search(pat, txt);
	return 0;
}

