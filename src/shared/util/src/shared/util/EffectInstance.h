#include "EffectCrowdControlHandler.h"
#include "EffectTwitchHandler.h"
#include "EffectKickHandler.h"  // ✅ corregido
#include "RandomHelper.h"

using SubHandlers_t =
    EffectSubHandlers<EffectCrowdControlHandler, EffectTwitchHandler, EffectKickHandler>;
class EffectInstance : public SubHandlers_t