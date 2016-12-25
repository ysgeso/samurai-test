#include <iostream>
#include <cstring>

using namespace std;

extern int playOrder;
extern int totalTurns;

struct SamuraiState {
	bool done;
	bool hidden;
	uint8_t recovery;

	void initSamuraiState(int a, int w);
};

struct GameInfo {
	void readTurnInfo();
	uint8_t		turn;
	SamuraiState	sstates[2][3];		// 侍の状態
};

