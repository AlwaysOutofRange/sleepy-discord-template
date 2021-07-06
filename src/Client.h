#ifndef CLIENT_H
#define CLIENT_H

#include "sleepy_discord/sleepy_discord.h"

class Client : public SleepyDiscord::DiscordClient
{
public:
    using SleepyDiscord::DiscordClient::DiscordClient;

    void onReady(SleepyDiscord::Ready event) override;
    void onMessage(SleepyDiscord::Message msg) override;
};

#endif // CLIENT_H
