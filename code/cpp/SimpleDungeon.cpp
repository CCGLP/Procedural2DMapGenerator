#include "..\..\headers\SimpleDungeon.hpp"

SimpleDungeon::SimpleDungeon()
{
	defaultConfiguration(); 
}

void SimpleDungeon::generate(Area* area)
{
}

void SimpleDungeon::configure(void* data)
{
	SimpleDungeonConfiguration* newConfig = (SimpleDungeonConfiguration*)data; 
	configuration.maxHeight = newConfig->maxHeight; 
	configuration.maxWidth = newConfig->maxWidth; 
	configuration.minHeight = newConfig->minHeight; 
	configuration.minWidth = newConfig->minWidth; 
	configuration.tryRoomEmplacements = newConfig->tryRoomEmplacements; 
	delete newConfig; 

}

void SimpleDungeon::defaultConfiguration()
{
	configuration.maxHeight = 100; 
	configuration.maxWidth = 100; 

	configuration.minHeight = 1; 
	configuration.minWidth = 1; 

	configuration.tryRoomEmplacements = 1000; 
}
