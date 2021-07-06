#ifndef TESTCOMMAND_H
#define TESTCOMMAND_H

#include "../utils/inferfaces/Command.h"
#include "../Client.h"
#include "sleepy_discord/sleepy_discord.h"
#include <string>

class TestCommand : public CMD::Command 
{
public:
    void execute(Client *client, SleepyDiscord::Message msg) override;
};

#endif // TESTCOMMAND_H
