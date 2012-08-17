/*
 * DrawGame.h
 *
 *  Created on: Jul 22, 2012
 *      Author: markjr
 */

#ifndef DRAWGAME_H_
#define DRAWGAME_H_

#include "game.hpp"
#include "../ogl-tryouts/World.hpp"

const unsigned CELL_SIZE = 30;

class DrawGame: public Game
{
	void _print();
	enum State { MOVING, WAITING };

	/* Typedef for super class  */
	typedef Game super;
public:
	DrawGame();
	DrawGame(const SaveGame& record);
	virtual ~DrawGame();
	World world;
};

#endif /* DRAWGAME_H_ */