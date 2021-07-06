#ifndef COMMAND_H
#define COMMAND_H

#include "sleepy_discord/sleepy_discord.h"
#include "../../Client.h"

namespace CMD {
    class Command {
    public:
        virtual void execute(Client *client, SleepyDiscord::Message msg) = 0;
    };

};

#endif // COMMAND_H
