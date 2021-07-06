#include "sleepy_discord/sleepy_discord.h"
#include "src/Client.h"

int main() {
    Client client("", SleepyDiscord::USER_CONTROLED_THREADS);
    client.run();
}
