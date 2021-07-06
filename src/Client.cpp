#include "Client.h"
#include "sleepy_discord/sleepy_discord.h"
#include "utils/CommandHandler.h"
#include <iostream>
#include <string>

void Client::onReady(SleepyDiscord::Ready event) {
    Handler::registerCommands();
    std::cout << "Logged in as " + event.user.username << std::endl;
}

void Client::onMessage(SleepyDiscord::Message msg) {
    if(msg.author.bot) return;

    if(msg.startsWith(".") && Handler::commandMap.size() != 0) {
        std::string content = msg.content.erase(0, 1);

        if(Handler::commandMap.find(content) != Handler::commandMap.end()) {
            Handler::commandMap[content]->execute(this, msg);
        }
    }
}

//void Client::registerCommands() {
//}
