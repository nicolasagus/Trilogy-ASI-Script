#pragma once

#include "util/EffectSubHandlers.h"
#include "nlohmann/json.hpp"  // 🧩 para usar nlohmann::json
#include "util/EffectSubHandlers.h"  // ⚙️ para usar EffectSubHandler


class EffectKickHandler : public EffectSubHandler
{
    std::string voter = "";

public:
    std::string
    GetVoter ()
    {
        return voter;
    }

    void
    Initialise (const nlohmann::json &data)
    {
        if (data.contains("kickData"))
            voter = data["kickData"].value("voter", "");
    }

    explicit operator bool ()
    {
        return voter != "";
    }
};
