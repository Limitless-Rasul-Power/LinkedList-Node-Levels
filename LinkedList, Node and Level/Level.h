#pragma once
#include <string>

class Level
{

	private:
		std::string name;
		unsigned short level_difficulty;

public:

	Level();

	explicit inline Level(const std::string& name);

	Level(const std::string& name, const short& level_difficulty);

	void Set_name(const std::string& name);
	std::string Get_name() const;

	void Set_level_difficulty(const short& level_difficulty);
	unsigned short Get_level_difficulty() const;

};