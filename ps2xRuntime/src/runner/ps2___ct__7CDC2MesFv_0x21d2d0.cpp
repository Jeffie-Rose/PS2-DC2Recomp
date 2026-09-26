#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: __ct__7CDC2MesFv
// Address: 0x21d2d0 - 0x21d360
void ps2___ct__7CDC2MesFv_0x21d2d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2___ct__7CDC2MesFv_0x21d2d0");
#endif

    switch (ctx->pc) {
        case 0x21d2e4u: goto label_21d2e4;
        case 0x21d2fcu: goto label_21d2fc;
        case 0x21d33cu: goto label_21d33c;
        case 0x21d34cu: goto label_21d34c;
        default: break;
    }

    ctx->pc = 0x21d2d0u;

    // 0x21d2d0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x21d2d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x21d2d4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x21d2d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x21d2d8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x21d2d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x21d2dc: 0xc054aa4  jal         func_152A90
    ctx->pc = 0x21D2DCu;
    SET_GPR_U32(ctx, 31, 0x21D2E4u);
    ctx->pc = 0x21D2E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21D2DCu;
            // 0x21d2e0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x152A90u;
    if (runtime->hasFunction(0x152A90u)) {
        auto targetFn = runtime->lookupFunction(0x152A90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21D2E4u; }
        if (ctx->pc != 0x21D2E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___ct__6ClsMesFv_0x152a90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21D2E4u; }
        if (ctx->pc != 0x21D2E4u) { return; }
    }
    ctx->pc = 0x21D2E4u;
label_21d2e4:
    // 0x21d2e4: 0x260421f0  addiu       $a0, $s0, 0x21F0
    ctx->pc = 0x21d2e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 8688));
    // 0x21d2e8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x21d2e8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21d2ec: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x21d2ecu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21d2f0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x21d2f0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21d2f4: 0xc04f8e4  jal         func_13E390
    ctx->pc = 0x21D2F4u;
    SET_GPR_U32(ctx, 31, 0x21D2FCu);
    ctx->pc = 0x21D2F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21D2F4u;
            // 0x21d2f8: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E390u;
    if (runtime->hasFunction(0x13E390u)) {
        auto targetFn = runtime->lookupFunction(0x13E390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21D2FCu; }
        if (ctx->pc != 0x21D2FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Set__9mgRect_i_Fiiii_0x13e390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21D2FCu; }
        if (ctx->pc != 0x21D2FCu) { return; }
    }
    ctx->pc = 0x21D2FCu;
label_21d2fc:
    // 0x21d2fc: 0xa20021e0  sb          $zero, 0x21E0($s0)
    ctx->pc = 0x21d2fcu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 8672), (uint8_t)GPR_U32(ctx, 0));
    // 0x21d300: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x21d300u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x21d304: 0xa20321e1  sb          $v1, 0x21E1($s0)
    ctx->pc = 0x21d304u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 8673), (uint8_t)GPR_U32(ctx, 3));
    // 0x21d308: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x21d308u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x21d30c: 0xa60321e2  sh          $v1, 0x21E2($s0)
    ctx->pc = 0x21d30cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 8674), (uint16_t)GPR_U32(ctx, 3));
    // 0x21d310: 0x260421f0  addiu       $a0, $s0, 0x21F0
    ctx->pc = 0x21d310u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 8688));
    // 0x21d314: 0xa60321e4  sh          $v1, 0x21E4($s0)
    ctx->pc = 0x21d314u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 8676), (uint16_t)GPR_U32(ctx, 3));
    // 0x21d318: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x21d318u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21d31c: 0xa60321e6  sh          $v1, 0x21E6($s0)
    ctx->pc = 0x21d31cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 8678), (uint16_t)GPR_U32(ctx, 3));
    // 0x21d320: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x21d320u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21d324: 0xa20221e8  sb          $v0, 0x21E8($s0)
    ctx->pc = 0x21d324u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 8680), (uint8_t)GPR_U32(ctx, 2));
    // 0x21d328: 0x24070200  addiu       $a3, $zero, 0x200
    ctx->pc = 0x21d328u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    // 0x21d32c: 0xa20021e9  sb          $zero, 0x21E9($s0)
    ctx->pc = 0x21d32cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 8681), (uint8_t)GPR_U32(ctx, 0));
    // 0x21d330: 0x2408019f  addiu       $t0, $zero, 0x19F
    ctx->pc = 0x21d330u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 415));
    // 0x21d334: 0xc04f8e4  jal         func_13E390
    ctx->pc = 0x21D334u;
    SET_GPR_U32(ctx, 31, 0x21D33Cu);
    ctx->pc = 0x21D338u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21D334u;
            // 0x21d338: 0xa20021ea  sb          $zero, 0x21EA($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 8682), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E390u;
    if (runtime->hasFunction(0x13E390u)) {
        auto targetFn = runtime->lookupFunction(0x13E390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21D33Cu; }
        if (ctx->pc != 0x21D33Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Set__9mgRect_i_Fiiii_0x13e390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21D33Cu; }
        if (ctx->pc != 0x21D33Cu) { return; }
    }
    ctx->pc = 0x21D33Cu;
label_21d33c:
    // 0x21d33c: 0x26042200  addiu       $a0, $s0, 0x2200
    ctx->pc = 0x21d33cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 8704));
    // 0x21d340: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x21d340u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21d344: 0xc049c86  jal         func_127218
    ctx->pc = 0x21D344u;
    SET_GPR_U32(ctx, 31, 0x21D34Cu);
    ctx->pc = 0x21D348u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21D344u;
            // 0x21d348: 0x240600c1  addiu       $a2, $zero, 0xC1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 193));
        ctx->in_delay_slot = false;
    ctx->pc = 0x127218u;
    if (runtime->hasFunction(0x127218u)) {
        auto targetFn = runtime->lookupFunction(0x127218u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21D34Cu; }
        if (ctx->pc != 0x21D34Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        memset_0x127218(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21D34Cu; }
        if (ctx->pc != 0x21D34Cu) { return; }
    }
    ctx->pc = 0x21D34Cu;
label_21d34c:
    // 0x21d34c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x21d34cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21d350: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x21d350u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x21d354: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x21d354u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x21d358: 0x3e00008  jr          $ra
    ctx->pc = 0x21D358u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21D35Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21D358u;
            // 0x21d35c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x21D360u;
}
