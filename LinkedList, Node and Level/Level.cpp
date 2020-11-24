#include <assert.h>
#include "Level.h"

Level::Level() :name(""), level_difficulty(0) {}

inline Level::Level(const std::string& name)
{
	Set_name(name);
}

Level::Level(const std::string& name, const short& level_difficulty)
	:Level(name)
{
	Set_level_difficulty(level_difficulty);
}


void Level::Set_name(const std::string& name)
{
	assert(!name.empty() && "Name is empty!");
	this->name = name;
}

std::string Level::Get_name() const
{
	return name;
}

void Level::Set_level_difficulty(const short& level_difficulty)
{
	assert(level_difficulty > 0 && "Level must be positive integer and more than 0!");
	this->level_difficulty = level_difficulty;
}

unsigned short Level::Get_level_difficulty() const
{
	return level_difficulty;
}