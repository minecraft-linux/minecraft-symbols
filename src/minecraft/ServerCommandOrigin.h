#pragma once

#include "std/string.h"

class Minecraft;
class ServerLevel;

class CommandOrigin {
};

class ServerCommandOrigin : public CommandOrigin {

public:

    char filler[0x20];

    ServerCommandOrigin(mcpe::string const& s, ServerLevel& m);

};
