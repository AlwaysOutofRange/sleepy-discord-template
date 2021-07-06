#include "TestCommand.h"
#include "sleepy_discord/sleepy_discord.h"
#include "../Client.h"

void TestCommand::execute(Client *client, SleepyDiscord::Message msg) {
    client->sendMessage(msg.channelID, "test command");
}
