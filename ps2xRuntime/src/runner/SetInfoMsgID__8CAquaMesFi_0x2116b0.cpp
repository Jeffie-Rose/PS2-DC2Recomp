#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: SetInfoMsgID__8CAquaMesFi
// Address: 0x2116b0 - 0x2116ec
void SetInfoMsgID__8CAquaMesFi_0x2116b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SetInfoMsgID__8CAquaMesFi_0x2116b0");
#endif

    switch (ctx->pc) {
        case 0x2116d4u: goto label_2116d4;
        case 0x2116dcu: goto label_2116dc;
        default: break;
    }

    ctx->pc = 0x2116b0u;

    // 0x2116b0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2116b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2116b4: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x2116b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2116b8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2116b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2116bc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2116bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2116c0: 0x8c82004c  lw          $v0, 0x4C($a0)
    ctx->pc = 0x2116c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 76)));
    // 0x2116c4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2116c4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2116c8: 0xac4317e4  sw          $v1, 0x17E4($v0)
    ctx->pc = 0x2116c8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 6116), GPR_U32(ctx, 3));
    // 0x2116cc: 0xc0562c8  jal         func_158B20
    ctx->pc = 0x2116CCu;
    SET_GPR_U32(ctx, 31, 0x2116D4u);
    ctx->pc = 0x2116D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2116CCu;
            // 0x2116d0: 0x8c84004c  lw          $a0, 0x4C($a0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 76)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x158B20u;
    if (runtime->hasFunction(0x158B20u)) {
        auto targetFn = runtime->lookupFunction(0x158B20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2116D4u; }
        if (ctx->pc != 0x2116D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MakeMesWin__6ClsMesFi_0x158b20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2116D4u; }
        if (ctx->pc != 0x2116D4u) { return; }
    }
    ctx->pc = 0x2116D4u;
label_2116d4:
    // 0x2116d4: 0xc054ee8  jal         func_153BA0
    ctx->pc = 0x2116D4u;
    SET_GPR_U32(ctx, 31, 0x2116DCu);
    ctx->pc = 0x2116D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2116D4u;
            // 0x2116d8: 0x8e04004c  lw          $a0, 0x4C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x153BA0u;
    if (runtime->hasFunction(0x153BA0u)) {
        auto targetFn = runtime->lookupFunction(0x153BA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2116DCu; }
        if (ctx->pc != 0x2116DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Step__6ClsMesFv_0x153ba0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2116DCu; }
        if (ctx->pc != 0x2116DCu) { return; }
    }
    ctx->pc = 0x2116DCu;
label_2116dc:
    // 0x2116dc: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2116dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2116e0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2116e0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2116e4: 0x3e00008  jr          $ra
    ctx->pc = 0x2116E4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2116E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2116E4u;
            // 0x2116e8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2116ECu;
}
