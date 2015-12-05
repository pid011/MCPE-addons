#pragma once

#include "../Command.h"

class PardonIpCommand : public Command
{
public:
	PardonIpCommand(std::string const &name);

	virtual bool execute(SMPlayer *sender, std::string const &commandLabel, std::vector<std::string> const &args);
};
