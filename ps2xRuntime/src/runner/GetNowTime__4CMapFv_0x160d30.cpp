#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: GetNowTime__4CMapFv
// Address: 0x160d30 - 0x160d64
void GetNowTime__4CMapFv_0x160d30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetNowTime__4CMapFv_0x160d30");
#endif

    ctx->pc = 0x160d30u;

    // 0x160d30: 0x8c8200c0  lw          $v0, 0xC0($a0)
    ctx->pc = 0x160d30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 192)));
    // 0x160d34: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x160D34u;
    {
        const bool branch_taken_0x160d34 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x160d34) {
            ctx->pc = 0x160D44u;
            goto label_160d44;
        }
    }
    ctx->pc = 0x160D3Cu;
    // 0x160d3c: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x160D3Cu;
    {
        const bool branch_taken_0x160d3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x160D40u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x160D3Cu;
            // 0x160d40: 0xc4800c88  lwc1        $f0, 0xC88($a0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 3208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x160d3c) {
            ctx->pc = 0x160D5Cu;
            goto label_160d5c;
        }
    }
    ctx->pc = 0x160D44u;
label_160d44:
    // 0x160d44: 0x8c8200cc  lw          $v0, 0xCC($a0)
    ctx->pc = 0x160d44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 204)));
    // 0x160d48: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x160D48u;
    {
        const bool branch_taken_0x160d48 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x160D4Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x160D48u;
            // 0x160d4c: 0x3c024140  lui         $v0, 0x4140 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16704 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x160d48) {
            ctx->pc = 0x160D58u;
            goto label_160d58;
        }
    }
    ctx->pc = 0x160D50u;
    // 0x160d50: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x160D50u;
    {
        const bool branch_taken_0x160d50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x160D54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x160D50u;
            // 0x160d54: 0xc48000c8  lwc1        $f0, 0xC8($a0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x160d50) {
            ctx->pc = 0x160D5Cu;
            goto label_160d5c;
        }
    }
    ctx->pc = 0x160D58u;
label_160d58:
    // 0x160d58: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x160d58u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_160d5c:
    // 0x160d5c: 0x3e00008  jr          $ra
    ctx->pc = 0x160D5Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x160D64u;
}
