#ifndef CONTROLLEDTANK_H
#define CONTROLLEDTANK_H

#include "BaseTank.h"
#include <SDL.h>
#include "Commons.h"

//---------------------------------------------------------------

class ControlledTank : protected BaseTank
{
	//---------------------------------------------------------------
public:
	ControlledTank(SDL_Renderer* renderer, TankSetupDetails details);
	~ControlledTank();

	void ChangeState(BASE_TANK_STATE newState);

	void Update(float deltaTime, SDL_Event e);

	//---------------------------------------------------------------
protected:
	Rect2D	GetAdjustedBoundingBox();
	void	MoveInHeadingDirection(float deltaTime);

private:
	TURN_DIRECTION  mTankTurnDirection;
	bool			mTankTurnKeyDown;
	MOVE_DIRECTION  mTankMoveDirection;
	bool			mTankMoveKeyDown;
	TURN_DIRECTION  mManTurnDirection;
	bool			mManKeyDown;
	bool			mFireKeyDown;
};

//---------------------------------------------------------------

#endif //CONTROLLEDTANK_H