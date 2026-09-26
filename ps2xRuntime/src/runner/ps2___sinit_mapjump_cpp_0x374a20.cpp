#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: __sinit_mapjump.cpp
// Address: 0x374a20 - 0x374a4c
void ps2___sinit_mapjump_cpp_0x374a20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2___sinit_mapjump_cpp_0x374a20");
#endif

    switch (ctx->pc) {
        case 0x374a34u: goto label_374a34;
        case 0x374a40u: goto label_374a40;
        default: break;
    }

    ctx->pc = 0x374a20u;

    // 0x374a20: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x374a20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x374a24: 0x3c0401f6  lui         $a0, 0x1F6
    ctx->pc = 0x374a24u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)502 << 16));
    // 0x374a28: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x374a28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x374a2c: 0xc0b7b10  jal         func_2DEC40
    ctx->pc = 0x374A2Cu;
    SET_GPR_U32(ctx, 31, 0x374A34u);
    ctx->pc = 0x374A30u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x374A2Cu;
            // 0x374a30: 0x24848d50  addiu       $a0, $a0, -0x72B0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294937936));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2DEC40u;
    if (runtime->hasFunction(0x2DEC40u)) {
        auto targetFn = runtime->lookupFunction(0x2DEC40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x374A34u; }
        if (ctx->pc != 0x374A34u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___ct__14MapJumpMapInfoFv_0x2dec40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x374A34u; }
        if (ctx->pc != 0x374A34u) { return; }
    }
    ctx->pc = 0x374A34u;
label_374a34:
    // 0x374a34: 0x3c0401f6  lui         $a0, 0x1F6
    ctx->pc = 0x374a34u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)502 << 16));
    // 0x374a38: 0xc0b7b10  jal         func_2DEC40
    ctx->pc = 0x374A38u;
    SET_GPR_U32(ctx, 31, 0x374A40u);
    ctx->pc = 0x374A3Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x374A38u;
            // 0x374a3c: 0x24848d70  addiu       $a0, $a0, -0x7290 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294937968));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2DEC40u;
    if (runtime->hasFunction(0x2DEC40u)) {
        auto targetFn = runtime->lookupFunction(0x2DEC40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x374A40u; }
        if (ctx->pc != 0x374A40u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___ct__14MapJumpMapInfoFv_0x2dec40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x374A40u; }
        if (ctx->pc != 0x374A40u) { return; }
    }
    ctx->pc = 0x374A40u;
label_374a40:
    // 0x374a40: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x374a40u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x374a44: 0x3e00008  jr          $ra
    ctx->pc = 0x374A44u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x374A48u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x374A44u;
            // 0x374a48: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x374A4Cu;
}
