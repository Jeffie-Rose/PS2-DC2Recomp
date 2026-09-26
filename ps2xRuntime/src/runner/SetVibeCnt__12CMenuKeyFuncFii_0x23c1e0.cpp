#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: SetVibeCnt__12CMenuKeyFuncFii
// Address: 0x23c1e0 - 0x23c224
void SetVibeCnt__12CMenuKeyFuncFii_0x23c1e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SetVibeCnt__12CMenuKeyFuncFii_0x23c1e0");
#endif

    switch (ctx->pc) {
        case 0x23c208u: goto label_23c208;
        default: break;
    }

    ctx->pc = 0x23c1e0u;

    // 0x23c1e0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x23c1e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x23c1e4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x23c1e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x23c1e8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x23c1e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x23c1ec: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x23c1ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x23c1f0: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x23c1f0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23c1f4: 0x8c840138  lw          $a0, 0x138($a0)
    ctx->pc = 0x23c1f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 312)));
    // 0x23c1f8: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x23c1f8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x23c1fc: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x23c1fcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23c200: 0xc089664  jal         func_225990
    ctx->pc = 0x23C200u;
    SET_GPR_U32(ctx, 31, 0x23C208u);
    ctx->pc = 0x23C204u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x23C200u;
            // 0x23c204: 0x24a5abe8  addiu       $a1, $a1, -0x5418 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294945768));
        ctx->in_delay_slot = false;
    ctx->pc = 0x225990u;
    if (runtime->hasFunction(0x225990u)) {
        auto targetFn = runtime->lookupFunction(0x225990u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23C208u; }
        if (ctx->pc != 0x23C208u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPartInfo__16CMenuPosDataFormFPc_0x225990(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23C208u; }
        if (ctx->pc != 0x23C208u) { return; }
    }
    ctx->pc = 0x23C208u;
label_23c208:
    // 0x23c208: 0xa451000e  sh          $s1, 0xE($v0)
    ctx->pc = 0x23c208u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 14), (uint16_t)GPR_U32(ctx, 17));
    // 0x23c20c: 0xa4500010  sh          $s0, 0x10($v0)
    ctx->pc = 0x23c20cu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 16), (uint16_t)GPR_U32(ctx, 16));
    // 0x23c210: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x23c210u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x23c214: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x23c214u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x23c218: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x23c218u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x23c21c: 0x3e00008  jr          $ra
    ctx->pc = 0x23C21Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23C220u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23C21Cu;
            // 0x23c220: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x23C224u;
}
