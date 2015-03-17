#include "Container.h"


namespace GUI
{
	/**
	* Initializes a container
	*
	* @date         2015-02-26
	*
	* @revisions
	*
	* @designer   
	*
	* @programmer   Jonathan Chu
	*
	* @return       initializer
	*/
	Container::Container(BGO* parent, SGO* firstSGO, SGO* secondSGO, sf::Vector2f theScale, orientation theOrientation)
	{
		parent->add(*this);
		A = firstSGO;
		B = secondSGO;
		scale = theScale;
		orient = theOrientation;
		ratio = 0.5f;
		separator = NULL;
		
		add(*A);
		add(*B);
	}

	/**
	* Sets the separator for the containers
	*
	* @date         2015-02-26
	*
	* @revisions
	*
	* @designer   
	*
	* @programmer   Jonathan Chu
	*
	* @return       void
	*/
	void Container::setSeperator(SGO* theSeparator)
	{
		separator = theSeparator;
	}

	/**
	* Sets the ratio of the container
	*
	* @date         2015-02-26
	*
	* @revisions
	*
	* @designer   
	*
	* @programmer   Jonathan Chu
	*
	* @return       void
	*/
	void Container::setRatio(float theRatio)
	{
		ratio = theRatio;
	}

	/**
	* Sets the orientation of the container
	*
	* @date         2015-02-26
	*
	* @revisions
	*
	* @designer   
	*
	* @programmer   Jonathan Chu
	*
	* @return       void
	*/
	void Container::setOrientation(orientation theOrientation)
	{
		orient = theOrientation;
	}
	
	/**
	* Sets the position of the container
	*
	* @date         2015-03-11
	*
	* @revisions
	*
	* @designer   
	*
	* @programmer   Lewis Scott
	*
	* @return       void
	*/
	void Container::setPosition(sf::Vector2f newpos)
	{
		pos = newpos;
	}

	/**
	* Sets the orientation of the container
	*
	* @date         2015-03-11
	*
	* @revisions
	*
	* @designer   
	*
	* @programmer   Lewis Scott
	*
	* @return       void
	*/
	void Container::pack()
	{
		bool side = (orient==HORIZONTAL);
		float sep_size = 0.0f;
		
		if(separator != NULL)
			sep_size = side?separator->operator()().getScale().x:separator->operator()().getScale().y;
		
		float total = (side?scale.x:scale.y) - sep_size;
		float side_size = total*(ratio);
		
		// Scale and position A
		sf::Vector2f size_a((side?side_size:A->operator()().getScale().x), (side?A->operator()().getScale().y:side_size));
		A->operator()().setScale(size_a);
		A->operator()().setPosition(pos);
		
		// Position separator
		sf::Vector2f offset = pos;
		offset += sf::Vector2f(side?side_size:0.0f, side?0.0f:side_size);
		separator->operator()().setPosition(offset);
		
		// Scale and position B
		side_size = total-side_size;
		sf::Vector2f size_b(side?side_size:B->operator()().getScale().x, side?B->operator()().getScale().y:side_size);
		offset += sf::Vector2f(side?(separator->operator()().getScale().x):0.0f, side?0.0f:(separator->operator()().getScale().y));
		B->operator()().setScale(size_b);
		B->operator()().setPosition(offset);
	}
}