#include <iostream>
#include <string>
#include <array>
int main() {
	std::string str;
	int az[26] = { 0 };

	int i = 0;
	while (i < std::size(az)){
		az[i] = -1;
		i++;
	}
	i = 0;

	std::cin >> str;

	i = 0;
	while (i < str.size()) {
		switch (str[i]) {
			case 'a':
				if(az[0] == -1) az[0] = i;
				break;
			case 'b':
				if (az[1] == -1) az[1] = i;
				break;
			case 'c':
				if (az[2] == -1) az[2] = i;
				break;
			case 'd':
				if (az[3] == -1) az[3] = i;
				break;
			case 'e':
				if (az[4] == -1) az[4] = i;
				break;
			case 'f':
				if (az[5] == -1) az[5] = i;
				break;
			case 'g':
				if (az[6] == -1) az[6] = i;
				break;
			case 'h':
				if (az[7] == -1) az[7] = i;
				break;
			case 'i':
				if (az[8] == -1) az[8] = i;
				break;
			case 'j':
				if (az[9] == -1) az[9] = i;
				break;
			case 'k':
				if (az[10] == -1) az[10] = i;
				break;
			case 'l':
				if (az[11] == -1) az[11] = i;
				break;
			case 'm':
				if (az[12] == -1) az[12] = i;
				break;
			case 'n':
				if (az[13] == -1) az[13] = i;
				break;
			case 'o':
				if (az[14] == -1) az[14] = i;
				break;
			case 'p':
				if (az[15] == -1) az[15] = i;
				break;
			case 'q':
				if(az[16] == -1) az[16] = i;
				break;
			case 'r':
				if (az[17] == -1) az[17] = i;
				break;
			case 's':
				if (az[18] == -1) az[18] = i;
				break;
			case 't':
				if (az[19] == -1) az[19] = i;
				break;
			case 'u':
				if (az[20] == -1) az[20] = i;
				break;
			case 'v':
				if (az[21] == -1) az[21] = i;
				break;
			case 'w':
				if (az[22] == -1) az[22] = i;
				break;
			case 'x':
				if (az[23] == -1) az[23] = i;
				break;
			case 'y':
				if (az[24] == -1) az[24] = i;
				break;
			case 'z':
				if (az[25] == -1) az[25] = i;
				break;
			default:
				break;
		}
		i++;
	}

	i = 0;
	while (i < std::size(az)){
		std::cout << az[i] << " ";
		i++;
	}

	return 0;
}