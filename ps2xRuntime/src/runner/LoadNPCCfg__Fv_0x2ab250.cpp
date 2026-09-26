#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: LoadNPCCfg__Fv
// Address: 0x2ab250 - 0x2ab304
void LoadNPCCfg__Fv_0x2ab250(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("LoadNPCCfg__Fv_0x2ab250");
#endif

    switch (ctx->pc) {
        case 0x2ab26cu: goto label_2ab26c;
        case 0x2ab288u: goto label_2ab288;
        case 0x2ab2a4u: goto label_2ab2a4;
        case 0x2ab2b4u: goto label_2ab2b4;
        case 0x2ab2c8u: goto label_2ab2c8;
        case 0x2ab2dcu: goto label_2ab2dc;
        case 0x2ab2e8u: goto label_2ab2e8;
        default: break;
    }

    ctx->pc = 0x2ab250u;

    // 0x2ab250: 0x3c01ffff  lui         $at, 0xFFFF
    ctx->pc = 0x2ab250u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)65535 << 16));
    // 0x2ab254: 0x342170e0  ori         $at, $at, 0x70E0
    ctx->pc = 0x2ab254u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)28896);
    // 0x2ab258: 0x3a1e821  addu        $sp, $sp, $at
    ctx->pc = 0x2ab258u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 1)));
    // 0x2ab25c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2ab25cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2ab260: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x2ab260u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2ab264: 0xc094430  jal         func_2510C0
    ctx->pc = 0x2AB264u;
    SET_GPR_U32(ctx, 31, 0x2AB26Cu);
    ctx->pc = 0x2AB268u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2AB264u;
            // 0x2ab268: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2510C0u;
    if (runtime->hasFunction(0x2510C0u)) {
        auto targetFn = runtime->lookupFunction(0x2510C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AB26Cu; }
        if (ctx->pc != 0x2AB26Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuCalcBufAlignment__FP1_0x2510c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AB26Cu; }
        if (ctx->pc != 0x2AB26Cu) { return; }
    }
    ctx->pc = 0x2AB26Cu;
label_2ab26c:
    // 0x2ab26c: 0x8f868ad0  lw          $a2, -0x7530($gp)
    ctx->pc = 0x2ab26cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937296)));
    // 0x2ab270: 0x34018030  ori         $at, $zero, 0x8030
    ctx->pc = 0x2ab270u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32816);
    // 0x2ab274: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x2ab274u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x2ab278: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2ab278u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ab27c: 0x3a12021  addu        $a0, $sp, $at
    ctx->pc = 0x2ab27cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 1)));
    // 0x2ab280: 0xc04a234  jal         func_1288D0
    ctx->pc = 0x2AB280u;
    SET_GPR_U32(ctx, 31, 0x2AB288u);
    ctx->pc = 0x2AB284u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2AB280u;
            // 0x2ab284: 0x24a5e820  addiu       $a1, $a1, -0x17E0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294961184));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1288D0u;
    if (runtime->hasFunction(0x1288D0u)) {
        auto targetFn = runtime->lookupFunction(0x1288D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AB288u; }
        if (ctx->pc != 0x2AB288u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sprintf_0x1288d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AB288u; }
        if (ctx->pc != 0x2AB288u) { return; }
    }
    ctx->pc = 0x2AB288u;
label_2ab288:
    // 0x2ab288: 0x34018030  ori         $at, $zero, 0x8030
    ctx->pc = 0x2ab288u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32816);
    // 0x2ab28c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2ab28cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ab290: 0x3a12021  addu        $a0, $sp, $at
    ctx->pc = 0x2ab290u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 1)));
    // 0x2ab294: 0x27a6002c  addiu       $a2, $sp, 0x2C
    ctx->pc = 0x2ab294u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 44));
    // 0x2ab298: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2ab298u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ab29c: 0xc0524dc  jal         func_149370
    ctx->pc = 0x2AB29Cu;
    SET_GPR_U32(ctx, 31, 0x2AB2A4u);
    ctx->pc = 0x2AB2A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2AB29Cu;
            // 0x2ab2a0: 0xa3809ac8  sb          $zero, -0x6538($gp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 28), 4294941384), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x149370u;
    if (runtime->hasFunction(0x149370u)) {
        auto targetFn = runtime->lookupFunction(0x149370u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AB2A4u; }
        if (ctx->pc != 0x2AB2A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        LoadFile2__FPcPvPii_0x149370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AB2A4u; }
        if (ctx->pc != 0x2AB2A4u) { return; }
    }
    ctx->pc = 0x2AB2A4u;
label_2ab2a4:
    // 0x2ab2a4: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x2AB2A4u;
    {
        const bool branch_taken_0x2ab2a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AB2A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2AB2A4u;
            // 0x2ab2a8: 0x34018050  ori         $at, $zero, 0x8050 (Delay Slot)
        SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32848);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ab2a4) {
            ctx->pc = 0x2AB2E8u;
            goto label_2ab2e8;
        }
    }
    ctx->pc = 0x2AB2ACu;
    // 0x2ab2ac: 0xc051a7c  jal         func_1469F0
    ctx->pc = 0x2AB2ACu;
    SET_GPR_U32(ctx, 31, 0x2AB2B4u);
    ctx->pc = 0x2AB2B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2AB2ACu;
            // 0x2ab2b0: 0x3a12021  addu        $a0, $sp, $at (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 1)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1469F0u;
    if (runtime->hasFunction(0x1469F0u)) {
        auto targetFn = runtime->lookupFunction(0x1469F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AB2B4u; }
        if (ctx->pc != 0x2AB2B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___ct__18CScriptInterpreterFv_0x1469f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AB2B4u; }
        if (ctx->pc != 0x2AB2B4u) { return; }
    }
    ctx->pc = 0x2AB2B4u;
label_2ab2b4:
    // 0x2ab2b4: 0x34018050  ori         $at, $zero, 0x8050
    ctx->pc = 0x2ab2b4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32848);
    // 0x2ab2b8: 0x3c050035  lui         $a1, 0x35
    ctx->pc = 0x2ab2b8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)53 << 16));
    // 0x2ab2bc: 0x3a12021  addu        $a0, $sp, $at
    ctx->pc = 0x2ab2bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 1)));
    // 0x2ab2c0: 0xc0519ec  jal         func_1467B0
    ctx->pc = 0x2AB2C0u;
    SET_GPR_U32(ctx, 31, 0x2AB2C8u);
    ctx->pc = 0x2AB2C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2AB2C0u;
            // 0x2ab2c4: 0x24a54520  addiu       $a1, $a1, 0x4520 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 17696));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1467B0u;
    if (runtime->hasFunction(0x1467B0u)) {
        auto targetFn = runtime->lookupFunction(0x1467B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AB2C8u; }
        if (ctx->pc != 0x2AB2C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetTag__18CScriptInterpreterFP13SPI_TAG_PARAM_0x1467b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AB2C8u; }
        if (ctx->pc != 0x2AB2C8u) { return; }
    }
    ctx->pc = 0x2AB2C8u;
label_2ab2c8:
    // 0x2ab2c8: 0x8fa6002c  lw          $a2, 0x2C($sp)
    ctx->pc = 0x2ab2c8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
    // 0x2ab2cc: 0x34018050  ori         $at, $zero, 0x8050
    ctx->pc = 0x2ab2ccu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32848);
    // 0x2ab2d0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2ab2d0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ab2d4: 0xc051a60  jal         func_146980
    ctx->pc = 0x2AB2D4u;
    SET_GPR_U32(ctx, 31, 0x2AB2DCu);
    ctx->pc = 0x2AB2D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2AB2D4u;
            // 0x2ab2d8: 0x3a12021  addu        $a0, $sp, $at (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 1)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x146980u;
    if (runtime->hasFunction(0x146980u)) {
        auto targetFn = runtime->lookupFunction(0x146980u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AB2DCu; }
        if (ctx->pc != 0x2AB2DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetScript__18CScriptInterpreterFPci_0x146980(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AB2DCu; }
        if (ctx->pc != 0x2AB2DCu) { return; }
    }
    ctx->pc = 0x2AB2DCu;
label_2ab2dc:
    // 0x2ab2dc: 0x34018050  ori         $at, $zero, 0x8050
    ctx->pc = 0x2ab2dcu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32848);
    // 0x2ab2e0: 0xc0519c8  jal         func_146720
    ctx->pc = 0x2AB2E0u;
    SET_GPR_U32(ctx, 31, 0x2AB2E8u);
    ctx->pc = 0x2AB2E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2AB2E0u;
            // 0x2ab2e4: 0x3a12021  addu        $a0, $sp, $at (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 1)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x146720u;
    if (runtime->hasFunction(0x146720u)) {
        auto targetFn = runtime->lookupFunction(0x146720u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AB2E8u; }
        if (ctx->pc != 0x2AB2E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Run__18CScriptInterpreterFv_0x146720(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AB2E8u; }
        if (ctx->pc != 0x2AB2E8u) { return; }
    }
    ctx->pc = 0x2AB2E8u;
label_2ab2e8:
    // 0x2ab2e8: 0x93839ac8  lbu         $v1, -0x6538($gp)
    ctx->pc = 0x2ab2e8u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294941384)));
    // 0x2ab2ec: 0x34018f20  ori         $at, $zero, 0x8F20
    ctx->pc = 0x2ab2ecu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)36640);
    // 0x2ab2f0: 0xaf839ac4  sw          $v1, -0x653C($gp)
    ctx->pc = 0x2ab2f0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294941380), GPR_U32(ctx, 3));
    // 0x2ab2f4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2ab2f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2ab2f8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2ab2f8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2ab2fc: 0x3e00008  jr          $ra
    ctx->pc = 0x2AB2FCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2AB300u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2AB2FCu;
            // 0x2ab300: 0x3a1e821  addu        $sp, $sp, $at (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 1)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2AB304u;
}
