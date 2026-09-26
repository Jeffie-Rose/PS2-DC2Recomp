#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: GetDefaultStep__11CCharacter2Fv
// Address: 0x173840 - 0x173860
void GetDefaultStep__11CCharacter2Fv_0x173840(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetDefaultStep__11CCharacter2Fv_0x173840");
#endif

    ctx->pc = 0x173840u;

    // 0x173840: 0x8c820374  lw          $v0, 0x374($a0)
    ctx->pc = 0x173840u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 884)));
    // 0x173844: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x173844u;
    {
        const bool branch_taken_0x173844 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x173844) {
            ctx->pc = 0x173854u;
            goto label_173854;
        }
    }
    ctx->pc = 0x17384Cu;
    // 0x17384c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x17384Cu;
    {
        const bool branch_taken_0x17384c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x173850u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17384Cu;
            // 0x173850: 0xc440002c  lwc1        $f0, 0x2C($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x17384c) {
            ctx->pc = 0x173858u;
            goto label_173858;
        }
    }
    ctx->pc = 0x173854u;
label_173854:
    // 0x173854: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x173854u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_173858:
    // 0x173858: 0x3e00008  jr          $ra
    ctx->pc = 0x173858u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x173860u;
}
