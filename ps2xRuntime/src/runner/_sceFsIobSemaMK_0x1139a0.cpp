#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _sceFsIobSemaMK
// Address: 0x1139a0 - 0x1139fc
void _sceFsIobSemaMK_0x1139a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("_sceFsIobSemaMK_0x1139a0");
#endif

    switch (ctx->pc) {
        case 0x1139d8u: goto label_1139d8;
        case 0x1139e4u: goto label_1139e4;
        default: break;
    }

    ctx->pc = 0x1139a0u;

    // 0x1139a0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1139a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1139a4: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x1139a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1139a8: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x1139a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x1139ac: 0x3c100033  lui         $s0, 0x33
    ctx->pc = 0x1139acu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)51 << 16));
    // 0x1139b0: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1139b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x1139b4: 0x8e020f28  lw          $v0, 0xF28($s0)
    ctx->pc = 0x1139b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3880)));
    // 0x1139b8: 0x1443000d  bne         $v0, $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x1139B8u;
    {
        const bool branch_taken_0x1139b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x1139BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1139B8u;
            // 0x1139bc: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1139b8) {
            ctx->pc = 0x1139F0u;
            goto label_1139f0;
        }
    }
    ctx->pc = 0x1139C0u;
    // 0x1139c0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1139c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1139c4: 0xafa00014  sw          $zero, 0x14($sp)
    ctx->pc = 0x1139c4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 0));
    // 0x1139c8: 0xafa20004  sw          $v0, 0x4($sp)
    ctx->pc = 0x1139c8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    // 0x1139cc: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1139ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1139d0: 0xc044038  jal         func_1100E0
    ctx->pc = 0x1139D0u;
    SET_GPR_U32(ctx, 31, 0x1139D8u);
    ctx->pc = 0x1139D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1139D0u;
            // 0x1139d4: 0xafa20008  sw          $v0, 0x8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1100E0u;
    if (runtime->hasFunction(0x1100E0u)) {
        auto targetFn = runtime->lookupFunction(0x1100E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1139D8u; }
        if (ctx->pc != 0x1139D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateSema_0x1100e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1139D8u; }
        if (ctx->pc != 0x1139D8u) { return; }
    }
    ctx->pc = 0x1139D8u;
label_1139d8:
    // 0x1139d8: 0xae020f28  sw          $v0, 0xF28($s0)
    ctx->pc = 0x1139d8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 3880), GPR_U32(ctx, 2));
    // 0x1139dc: 0xc044038  jal         func_1100E0
    ctx->pc = 0x1139DCu;
    SET_GPR_U32(ctx, 31, 0x1139E4u);
    ctx->pc = 0x1139E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1139DCu;
            // 0x1139e0: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1100E0u;
    if (runtime->hasFunction(0x1100E0u)) {
        auto targetFn = runtime->lookupFunction(0x1100E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1139E4u; }
        if (ctx->pc != 0x1139E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateSema_0x1100e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1139E4u; }
        if (ctx->pc != 0x1139E4u) { return; }
    }
    ctx->pc = 0x1139E4u;
label_1139e4:
    // 0x1139e4: 0x3c030033  lui         $v1, 0x33
    ctx->pc = 0x1139e4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)51 << 16));
    // 0x1139e8: 0xac620f2c  sw          $v0, 0xF2C($v1)
    ctx->pc = 0x1139e8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 3884), GPR_U32(ctx, 2));
    // 0x1139ec: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1139ecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_1139f0:
    // 0x1139f0: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x1139f0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1139f4: 0x3e00008  jr          $ra
    ctx->pc = 0x1139F4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1139F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1139F4u;
            // 0x1139f8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1139FCu;
}
