#ifndef GAMEMAP_H_
#define GAMEMAP_H_

#include "../../Engine/Map.h"
#include "../../Engine/Entity.h"
#include "Block.h"

/* The number of human players in a round */
#define NUM_PLAYERS 4

/* The percent of enemy grass zone blocks */
#define MAX_GRASS_ENEMIES 45

/* The percent of of enemy stone zone blocks */
#define MAX_STONE_ENEMIES 30

/* The percent of structure grass zone blocks */
#define MAX_GRASS_STRUCTURES 5

/* The percent of structure stone zone blocks */
#define MAX_STONE_STRUCTURES 5

/* The minimum size of an enemy group */
#define MIN_ENEMY_GROUP 2

/* The maximum size of an enemy group */
#define MAX_ENEMY_GROUP 10


/* 
*	The GameMap class contains a list of cells, blocks, and functions
*	for generating a map and placing entities into the map.
*/
class GameMap
{
	public:
		GameMap(Marx::Map *cMap);
		~GameMap();
		bool generateMap();
		
		Marx::Map* getCellMap();
		Block** getBlockMap();
		int getWidth();
		int getHeight();
		int getBlocksHor();
		int getBlocksVert();

	private:
		bool createBlockMap();
		void generateZones();
		void generateMiniBosses();
		void generatePlayers();
		void generateEnemies();
		void createEnemyGroup(Block *block, BlockZone z, int num);
		void generatePlaceholderBlocks();
		void generateTiles();
		BlockType makeBlockType(BlockZone z, int rRoll);

		bool placeEntity(int x, int y, Entity* entity);

		Marx::Map *cellMap;
		Block** blockMap;
		int width;
		int height;
		int bWidth;
		int bHeight;
		int stoneWidth;
		int stoneHeight;
};

#endif