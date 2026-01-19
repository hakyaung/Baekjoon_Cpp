#include <iostream>
int main() {
	int King, Queen, Rook, Bishop, Knight, Pawn;

	std::cin >> King >> Queen >> Rook >> Bishop >> Knight >> Pawn;

	King = -King;
	Queen = -Queen;
	Rook = -Rook;
	Bishop = -Bishop;
	Knight = -Knight;
	Pawn = -Pawn;

	std::cout << King + 1 << " " << Queen + 1 << " " << Rook + 2 << " " << Bishop + 2 << " " << Knight + 2 << " " << Pawn + 8;

	return 0;
}