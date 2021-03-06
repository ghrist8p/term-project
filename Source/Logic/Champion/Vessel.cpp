#include "Vessel.h"
/*------------------------------------------------------------------------------------------------------------------
-- FUNCTION: Vessel constructor
--
-- DATE: February 15, 2015
--
-- REVISIONS: (Date and Description)
--
-- DESIGNER: Sebastian Pelka, Sanders Lee
--
-- PROGRAMMER: Sebastian Pelka, Sanders Lee
--
-- INTERFACE: Vessel::Vessel( job_class jobclass, GameMap gmap, int x, int y )
-- job_class jobclass: the job class you wish to set up the Vessel as
-- GameMap gmap: the game map the Vessel is on
-- int x, int y: the coordinates of the Vessel on the map
--
-- RETURNS: nothing
--
-- NOTES:
-- This function is used to generate a Vessel and set up its position on the game map
----------------------------------------------------------------------------------------------------------------------*/
Vessel::Vessel(job_class jobClass, Ability* abilityList, int x, int y )
{
	xPosition = x;
	yPosition = y;
	direction = 1; //start facing right

	xSpeed = 0;
	ySpeed = 0;
	moving = false;
	abilities = abilityList;

	//class-specific instantiation
	if ( jobClass == WARRIOR )			//warrior
	{
		currentHealth = 150;
		maxHealth = 150;
		travelSpeed = 2;
		//Weapon = Spear;
	}
	else if ( jobClass == SHAMAN )		//shaman
	{
		currentHealth = 75;
		maxHealth = 75;
		travelSpeed = 6;
		//weapon = Fireball;
	}
	else if ( jobClass == HUNTER )		//Hunter
	{
		currentHealth = 100;
		maxHealth = 100;
		travelSpeed = 6;
		//weapon = Javelin;
	}
	else if ( jobClass == SCOUT ) 		//Scout
	{
		currentHealth = 125;
		maxHealth = 125;
		travelSpeed = 7;
		//weapon = Sword;
	}
	else if (jobClass == TEGUH) 		//TEGUH
	{
		currentHealth = 4242;
		maxHealth = 424242;
		travelSpeed = 42;
		//weapon = BOWL_OF_LAKSA;
	}
}

/*------------------------------------------------------------------------------------------------------------------
-- FUNCTION: Vessel destructor
--
-- DATE:
--
-- REVISIONS: (Date and Description)
--
-- DESIGNER:
--
-- PROGRAMMER:
--
-- INTERFACE: Vessel::~Vessel( )
--
-- RETURNS: nothing
--
-- NOTES:
-- This function is used to destroy a vessel object and free its members from memory.
----------------------------------------------------------------------------------------------------------------------*/
Vessel::~Vessel()
{

}



/*------------------------------------------------------------------------------------------------------------------
-- FUNCTION: setPosition
--
-- DATE: February 27, 2015
--
-- REVISIONS: (Date and Description)
--
-- DESIGNER: Sebastian Pelka
--
-- PROGRAMMER: Sebastian Pelka
--
-- INTERFACE: void Vessel::setPosition( int x, int y )
-- int x, int y: the coordinates to set the Vessel on the map
--
-- RETURNS: nothing
--
-- NOTES:
-- This function is used to directly position a Vessel on a map, can be used for teleportation.
----------------------------------------------------------------------------------------------------------------------*/
void Vessel::setPosition( int x, int y )
{
	xPosition = x;
	yPosition = y;
}

/*------------------------------------------------------------------------------------------------------------------
-- FUNCTION: resetEXP
--
-- DATE:
--
-- REVISIONS: (Date and Description)
--
-- DESIGNER:
--
-- PROGRAMMER:
--
-- INTERFACE: void Vessel::resetEXP()
--
-- RETURNS: nothing
--
-- NOTES:
-- Resets a Vessel's EXP so it's 0 and the Vessel is at level 1.
----------------------------------------------------------------------------------------------------------------------*/
void Vessel::resetEXP()
{

}

/*------------------------------------------------------------------------------------------------------------------
-- FUNCTION: increaseEXP
--
-- DATE:
--
-- REVISIONS: (Date and Description)
--
-- DESIGNER:
--
-- PROGRAMMER:
--
-- INTERFACE: void Vessel::increaseEXP( int exp )
-- int exp: the amount of exp increase by
--
-- RETURNS: nothing
--
-- NOTES:
-- This function adds the given EXP to current EXP count.
----------------------------------------------------------------------------------------------------------------------*/
void Vessel::increaseEXP( int exp )
{

}

/*------------------------------------------------------------------------------------------------------------------
-- FUNCTION: getEXP
--
-- DATE:
--
-- REVISIONS: (Date and Description)
--
-- DESIGNER:
--
-- PROGRAMMER:
--
-- INTERFACE: int Vessel::getEXP()
--
-- RETURNS: EXP in integer format
--
-- NOTES:
-- This function gets the current amount of EXP the Vessel has.
----------------------------------------------------------------------------------------------------------------------*/
int Vessel::getEXP()
{
	return 0;
}

/*------------------------------------------------------------------------------------------------------------------
-- FUNCTION: getNextLevelEXP
--
-- DATE:
--
-- REVISIONS: (Date and Description)
--
-- DESIGNER:
--
-- PROGRAMMER:
--
-- INTERFACE: int Vessel::getNextLevelEXP()
--
-- RETURNS: EXP in integer format
--
-- NOTES:
-- This function returns the next experience point total needed to level up.
----------------------------------------------------------------------------------------------------------------------*/
int Vessel::getNextLevelEXP()
{
	return 0;
}






/*------------------------------------------------------------------------------------------------------------------
-- FUNCTION: getLevel
--
-- DATE:
--
-- REVISIONS: (Date and Description)
--
-- DESIGNER:
--
-- PROGRAMMER:
--
-- INTERFACE: int Vessel::getLevel()
--
-- RETURNS: the Vessel's level as an integer
--
-- NOTES:
-- This function returns the Vessel's current level.
----------------------------------------------------------------------------------------------------------------------*/
int Vessel::getLevel()
{
	return 0;
}


/*------------------------------------------------------------------------------------------------------------------
-- FUNCTION: increaseLevel
--
-- DATE:
--
-- REVISIONS: (Date and Description)
--
-- DESIGNER:
--
-- PROGRAMMER:
--
-- INTERFACE: void Vessel::increaseLevel()
--
-- RETURNS: void
--
-- NOTES:
-- This function increments the Vessel's current level.
----------------------------------------------------------------------------------------------------------------------*/
void Vessel::increaseLevel()
{

}




/*------------------------------------------------------------------------------------------------------------------
-- FUNCTION: resetHP
--
-- DATE:
--
-- REVISIONS: (Date and Description)
--
-- DESIGNER:
--
-- PROGRAMMER:
--
-- INTERFACE: void Vessel::resetHP()
--
-- RETURNS: nothing
--
-- NOTES:
-- This function resets the Vessel's HP to the current level's maximum HP
----------------------------------------------------------------------------------------------------------------------*/
void Vessel::resetHP()
{

}

/*------------------------------------------------------------------------------------------------------------------
-- FUNCTION: increaseHP
--
-- DATE:
--
-- REVISIONS: (Date and Description)
--
-- DESIGNER:
--
-- PROGRAMMER:
--
-- INTERFACE: void Vessel::increaseHP( int hp )
-- int hp: the amount of HP to increase by
--
-- RETURNS: nothing
--
-- NOTES:
-- This function increases the Vessel's HP, but not above the current level's maximum HP. Used as a healing function.
----------------------------------------------------------------------------------------------------------------------*/
void Vessel::increaseHP( int hp )
{

}

/*------------------------------------------------------------------------------------------------------------------
-- FUNCTION: decreaseHP
--
-- DATE:
--
-- REVISIONS: (Date and Description)
--
-- DESIGNER:
--
-- PROGRAMMER:
--
-- INTERFACE: void Vessel::decreaseHP( int hp )
-- int hp: the amount of HP to decrease by
--
-- RETURNS: nothing
--
-- NOTES:
-- This function decrease the Vessel's HP, but not below 0. Used as a take-damage function.
----------------------------------------------------------------------------------------------------------------------*/
void Vessel::decreaseHP( int hp )
{
}

/*------------------------------------------------------------------------------------------------------------------
-- FUNCTION: getHP
--
-- DATE:
--
-- REVISIONS: (Date and Description)
--
-- DESIGNER:
--
-- PROGRAMMER:
--
-- INTERFACE: int Vessel::getHP()
--
-- RETURNS: current HP as an integer
--
-- NOTES:
-- This function returns the current HP the Vessel has
----------------------------------------------------------------------------------------------------------------------*/
int Vessel::getHP()
{
	return 0;
}

/*------------------------------------------------------------------------------------------------------------------
-- FUNCTION: getMaxHP
--
-- DATE:
--
-- REVISIONS: (Date and Description)
--
-- DESIGNER:
--
-- PROGRAMMER:
--
-- INTERFACE: int Vessel::getMaxHP()
--
-- RETURNS: Max HP as an integer
--
-- NOTES:
-- This function returns the maximum HP the Vessel can have at the current level
----------------------------------------------------------------------------------------------------------------------*/
int Vessel::getMaxHP()
{
	return 0;
}

/*------------------------------------------------------------------------------------------------------------------
-- FUNCTION: resetAttackPower
--
-- DATE:
--
-- REVISIONS: (Date and Description)
--
-- DESIGNER:
--
-- PROGRAMMER:
--
-- INTERFACE: void Vessel::resetAttackPower()
--
-- RETURNS: nothing
--
-- NOTES:
-- This function resets the Vessel's attack power to what's normal for the current level
----------------------------------------------------------------------------------------------------------------------*/
void Vessel::resetAttackPower()
{
}

/*------------------------------------------------------------------------------------------------------------------
-- FUNCTION: attackPowerUp
--
-- DATE:
--
-- REVISIONS: (Date and Description)
--
-- DESIGNER:
--
-- PROGRAMMER:
--
-- INTERFACE: void Vessel::attackPowerUp( int attackpower )
-- int attackpower: the amount of attack power to increase by
--
-- RETURNS: nothing
--
-- NOTES:
-- This function increases the Vessel's attack power. Used as a power up function.
----------------------------------------------------------------------------------------------------------------------*/
void Vessel::attackPowerUp( int attackpower )
{
}

/*------------------------------------------------------------------------------------------------------------------
-- FUNCTION: attackPowerDown
--
-- DATE:
--
-- REVISIONS: (Date and Description)
--
-- DESIGNER:
--
-- PROGRAMMER:
--
-- INTERFACE: void Vessel::attackPowerDown( int attackpower )
-- int attackpower: the amount of attack power to decrease by
--
-- RETURNS: nothing
--
-- NOTES:
-- This function decreases the Vessel's attack power, but not below 0.. Used as a power down function.
----------------------------------------------------------------------------------------------------------------------*/
void Vessel::attackPowerDown( int attackpower )
{
}

/*------------------------------------------------------------------------------------------------------------------
-- FUNCTION: getAttackPower
--
-- DATE:
--
-- REVISIONS: (Date and Description)
--
-- DESIGNER:
--
-- PROGRAMMER:
--
-- INTERFACE: int Vessel::getAttackPower()
--
-- RETURNS: Attack power as an integer
--
-- NOTES:
-- This function returns the Vessel's current attack power.
----------------------------------------------------------------------------------------------------------------------*/
int Vessel::getAttackPower()
{
	return 0;
}

/*------------------------------------------------------------------------------------------------------------------
-- FUNCTION: getDefaultAttackPower
--
-- DATE:
--
-- REVISIONS: (Date and Description)
--
-- DESIGNER:
--
-- PROGRAMMER:
--
-- INTERFACE: int Vessel::getDefaultAttackPower()
--
-- RETURNS: default attack power for the level as an integer
--
-- NOTES:
-- This function returns the default attack power for the current level
----------------------------------------------------------------------------------------------------------------------*/
int Vessel::getDefaultAttackPower()
{
	return 0;
}

/*------------------------------------------------------------------------------------------------------------------
-- FUNCTION: resetSpeed
--
-- DATE:
--
-- REVISIONS: (Date and Description)
--
-- DESIGNER:
--
-- PROGRAMMER:
--
-- INTERFACE: void Vessel::resetSpeed()
--
-- RETURNS: nothing
--
-- NOTES:
-- This function resets the Vessel's speed to what's normal for the current level.
----------------------------------------------------------------------------------------------------------------------*/
void Vessel::resetSpeed()
{
}

/*------------------------------------------------------------------------------------------------------------------
-- FUNCTION: speedUp
--
-- DATE:
--
-- REVISIONS: (Date and Description)
--
-- DESIGNER:
--
-- PROGRAMMER:
--
-- INTERFACE: void Vessel::speedUp( int speed )
-- int speed: the amount of speed to increase by
--
-- RETURNS: nothing
--
-- NOTES:
-- This function increases the Vessel's speed. Used as a power up function.
----------------------------------------------------------------------------------------------------------------------*/
void Vessel::speedUp( int speed )
{

}

/*------------------------------------------------------------------------------------------------------------------
-- FUNCTION: speedDown
--
-- DATE:
--
-- REVISIONS: (Date and Description)
--
-- DESIGNER:
--
-- PROGRAMMER:
--
-- INTERFACE: void Vessel::speedDown( int speed )
-- int speed: the amount of speed to decrease by
--
-- RETURNS: nothing
--
-- NOTES:
-- This function decreases the Vessel's speed, but not below 0. Used as a power down function.
----------------------------------------------------------------------------------------------------------------------*/
void Vessel::speedDown( int speed )
{

}

/*------------------------------------------------------------------------------------------------------------------
-- FUNCTION: getSpeed
--
-- DATE:
--
-- REVISIONS: (Date and Description)
--
-- DESIGNER:
--
-- PROGRAMMER:
--
-- INTERFACE: int Vessel::getSpeed()
--
-- RETURNS: current speed as an integer
--
-- NOTES:
-- This function returns the current speed the Vessel has
----------------------------------------------------------------------------------------------------------------------*/
int Vessel::getSpeed()
{
    return travelSpeed;
}

/*------------------------------------------------------------------------------------------------------------------
-- FUNCTION: getDefaultSpeed
--
-- DATE: February 15, 2015
--
-- REVISIONS: (Date and Description)
--
-- DESIGNER:
--
-- PROGRAMMER:
--
-- INTERFACE: int Vessel::getDefaultSpeed()
--
-- RETURNS: default speed for the level as an integer
--
-- NOTES:
-- This function returns the default speed for the current level
----------------------------------------------------------------------------------------------------------------------*/
int Vessel::getDefaultSpeed()
{
	return 0;
}

/*------------------------------------------------------------------------------------------------------------------
-- FUNCTION: checkDeath
--
-- DATE:
--
-- REVISIONS: (Date and Description)
--
-- DESIGNER:
--
-- PROGRAMMER:
--
-- INTERFACE: bool Vessel::checkDeath()
--
-- RETURNS: whether the Vessel is dead as a boolean value
--
-- NOTES:
-- This function checks to see if the Vessel's HP has reached 0. If true, return 0 and maybe call death animation.
----------------------------------------------------------------------------------------------------------------------*/
bool Vessel::checkDeath()
{
	return false;
}

/*------------------------------------------------------------------------------------------------------------------
-- FUNCTION: die
--
-- DATE:
--
-- REVISIONS: (Date and Description)
--
-- DESIGNER:
--
-- PROGRAMMER:
--
-- INTERFACE: void Vessel::die()
--
-- RETURNS: void
--
-- NOTES:
-- Invokes a death animation, destructor, and any other housekeeping functions that need to occur when a Vessel dies.
----------------------------------------------------------------------------------------------------------------------*/
void Vessel::die()
{

}




/*------------------------------------------------------------------------------------------------------------------
-- FUNCTION: move
--
-- DATE: February 27, 2015
--
-- REVISIONS: (Date and Description)
--
-- DESIGNER: Sanders Lee, Sebastian Pelka
--
-- PROGRAMMER: Sanders Lee, Sebastian Pelka
--
-- INTERFACE: void Vessel::move( int direction )
-- int direction: the value of the direction to move in (0 to 7)
--
-- RETURNS: nothing
--
-- NOTES:
-- This function moves the Vessel to a new (x, y) according to direction and speed. Will probably call SetPosition.
-- The movement may fail because something is blocking the Vessel, or the Vessel is attempting to move off the
-- edge of the map. If there's an upgrade/downgrade item on the target x, y and the Vessel successfully moved,
-- then the effect of the upgrade/downgrade item is applied to the Vessel.
--
-- Bookmarks:
-- http://en.sfml-dev.org/forums/index.php?topic=11539.0
----------------------------------------------------------------------------------------------------------------------*/
void Vessel::detectMove()
{
	moving = false;	//if no movement buttons were pressed in the last frame, stop moving

	if(sf::Keyboard::isKeyPressed(sf::Keyboard::W))
	{
		moving = true;
		ySpeed = -travelSpeed;
	}

	if(sf::Keyboard::isKeyPressed(sf::Keyboard::S))
	{
		moving = true;
		ySpeed = travelSpeed;
	}

	if(sf::Keyboard::isKeyPressed(sf::Keyboard::A))
	{
		moving = true;
		xSpeed = -travelSpeed;
		direction = 0;	//signal to animate left facing sprite
	}

	if(sf::Keyboard::isKeyPressed(sf::Keyboard::D))
	{
		moving = true;
		xSpeed = travelSpeed;
		direction = 1; //signal to animate right facing sprite
	}
}

/*--
--
--
--*/
void Vessel::move()
{
	setPosition( getXPosition() + xSpeed, getYPosition() + ySpeed );
}

/*--
--
--
--*/
void Vessel::stop( int keyReleased )
{
	if( (keyReleased == sf::Keyboard::D) || (keyReleased == sf::Keyboard::A) )
		xSpeed = 0;
	if( (keyReleased == sf::Keyboard::W) || (keyReleased == sf::Keyboard::S) )
		ySpeed = 0;
	moving = false;
}

/*------------------------------------------------------------------------------------------------------------------
-- FUNCTION: normalAttack
--
-- DATE:
--
-- REVISIONS: (Date and Description)
--
-- DESIGNER:
--
-- PROGRAMMER:
--
-- INTERFACE: void Vessel::normalAttack( int x, int y )
-- int x, int y: the target position of the attack
--
-- RETURNS: nothing
--
-- NOTES:
-- This function attempts to launch a normal attack at the target coordinate. Depending on normal weapon type, the
-- attack may fail because the target is out of range.
----------------------------------------------------------------------------------------------------------------------*/
void Vessel::normalAttack( int x, int y )
{
}


/*------------------------------------------------------------------------------------------------------------------
-- FUNCTION: useAbility
--
-- DATE:
--
-- REVISIONS: (Date and Description)
--
-- DESIGNER:
--
-- PROGRAMMER:
--
-- INTERFACE: void useAbility( int abilityNum, int x, int y )
-- abilityNum: the position of the ability in the Vessel's ability array
-- int x, int y: the target position of the attack
--
-- RETURNS: nothing
--
-- NOTES:
-- This function attempts use an ability on the designated X, Y coordinates.
----------------------------------------------------------------------------------------------------------------------*/
void Vessel::useAbility( int abilityNum, int x, int y )		//possibly need an Entity parameter for abilities that target an entity, such as healing
{
}


/*--
--
--
--*/
int Vessel::getXPosition()
{
	return xPosition;
}


/*--
--
--
--*/
int Vessel::getYPosition()
{
	return yPosition;
}


/*--
--
--
--*/
int Vessel::getXSpeed()
{
	return xSpeed;
}


/*--
--
--
--*/
int Vessel::getYSpeed()
{
	return ySpeed;
}

/*--
--
--
--*/
bool Vessel::isMoving()
{
	return moving;
}

/*--
--
--
--*/
int Vessel::getDirection()
{
	return direction;
}

/*--
--
--
--*/
job_class Vessel::getJobClass()
{
	return jobClass;
}
