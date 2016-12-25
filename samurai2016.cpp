#include "samurai2016.hpp"
#ifdef CYGWIN
#include <unistd.h>
#endif
#include <cstdlib>
#include <fstream>

int playOrder;
int totalTurns = 96;

char getChar() {
	return cin.get();
}

int getInt() {
	char c;
	do {
		c = getChar();
	} while (isspace(c));
	int v = 0;
	bool negate = (c == '-');
	if (negate) c = getChar();
	do {
		v = 10 * v + c - '0';
		c = getChar();
	} while (!isspace(c));
	if (negate) v = -v;
	return v;
}

const int width = 15;
const int height = 15;

void SamuraiState::initSamuraiState(int a, int w) {
	int x = getInt();
	int y = getInt();
	done = getInt() ? true : false;
	hidden = (getInt() == 0) ? false : true;
	recovery = getInt();
}

void GameInfo::readTurnInfo() {
	turn = getInt();
	if (turn < 0) exit(0);
	for (int a = 0; a != 2; a++) {
		for (int w = 0; w != 3; w++) {
			SamuraiState &ss = sstates[a][w];
			ss.initSamuraiState(a, w);
		}
	}
	for (int y = 0; y != height; y++) {
		for (int x = 0; x != width; x++) {
			int f = getInt();
		}
	}
}

int main(int argc, char* argv[]) {
	playOrder = getInt();
	cout << 0 << endl;

	GameInfo info;
	while (true) {
		info.readTurnInfo();
		cout << "0 1 0" << endl;
		cout.flush();
		if (info.turn >= 94) {
			break;
		}
	}
}
