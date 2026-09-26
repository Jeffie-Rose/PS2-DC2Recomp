#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: CreateBBox__10CCollisionFv
// Address: 0x148610 - 0x148618
void CreateBBox__10CCollisionFv_0x148610(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("CreateBBox__10CCollisionFv_0x148610");
#endif

    ctx->pc = 0x148610u;

    // 0x148610: 0x3e00008  jr          $ra
    ctx->pc = 0x148610u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x148618u;
}
