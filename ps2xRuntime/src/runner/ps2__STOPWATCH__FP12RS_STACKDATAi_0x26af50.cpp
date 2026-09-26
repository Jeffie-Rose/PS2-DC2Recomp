#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _STOPWATCH__FP12RS_STACKDATAi
// Address: 0x26af50 - 0x26b128
void ps2__STOPWATCH__FP12RS_STACKDATAi_0x26af50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__STOPWATCH__FP12RS_STACKDATAi_0x26af50");
#endif

    switch (ctx->pc) {
        case 0x26af6cu: goto label_26af6c;
        case 0x26af88u: goto label_26af88;
        case 0x26af98u: goto label_26af98;
        case 0x26afe4u: goto label_26afe4;
        case 0x26b010u: goto label_26b010;
        case 0x26b020u: goto label_26b020;
        case 0x26b034u: goto label_26b034;
        case 0x26b040u: goto label_26b040;
        case 0x26b050u: goto label_26b050;
        case 0x26b064u: goto label_26b064;
        case 0x26b080u: goto label_26b080;
        case 0x26b090u: goto label_26b090;
        case 0x26b09cu: goto label_26b09c;
        case 0x26b0b4u: goto label_26b0b4;
        case 0x26b0e0u: goto label_26b0e0;
        case 0x26b0f4u: goto label_26b0f4;
        case 0x26b104u: goto label_26b104;
        default: break;
    }

    ctx->pc = 0x26af50u;

    // 0x26af50: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x26af50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x26af54: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x26af54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x26af58: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x26af58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x26af5c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x26af5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x26af60: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x26af60u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26af64: 0xc064220  jal         func_190880
    ctx->pc = 0x26AF64u;
    SET_GPR_U32(ctx, 31, 0x26AF6Cu);
    ctx->pc = 0x26AF68u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26AF64u;
            // 0x26af68: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x190880u;
    if (runtime->hasFunction(0x190880u)) {
        auto targetFn = runtime->lookupFunction(0x190880u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26AF6Cu; }
        if (ctx->pc != 0x26AF6Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetSaveData__Fv_0x190880(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26AF6Cu; }
        if (ctx->pc != 0x26AF6Cu) { return; }
    }
    ctx->pc = 0x26AF6Cu;
label_26af6c:
    // 0x26af6c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x26af6cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26af70: 0x16000003  bnez        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x26AF70u;
    {
        const bool branch_taken_0x26af70 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x26AF74u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26AF70u;
            // 0x26af74: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26af70) {
            ctx->pc = 0x26AF80u;
            goto label_26af80;
        }
    }
    ctx->pc = 0x26AF78u;
    // 0x26af78: 0x10000065  b           . + 4 + (0x65 << 2)
    ctx->pc = 0x26AF78u;
    {
        const bool branch_taken_0x26af78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26AF7Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26AF78u;
            // 0x26af7c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26af78) {
            ctx->pc = 0x26B110u;
            goto label_26b110;
        }
    }
    ctx->pc = 0x26AF80u;
label_26af80:
    // 0x26af80: 0xc097e18  jal         func_25F860
    ctx->pc = 0x26AF80u;
    SET_GPR_U32(ctx, 31, 0x26AF88u);
    ctx->pc = 0x26AF84u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26AF80u;
            // 0x26af84: 0x24910008  addiu       $s1, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F860u;
    if (runtime->hasFunction(0x25F860u)) {
        auto targetFn = runtime->lookupFunction(0x25F860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26AF88u; }
        if (ctx->pc != 0x26AF88u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x25f860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26AF88u; }
        if (ctx->pc != 0x26AF88u) { return; }
    }
    ctx->pc = 0x26AF88u;
label_26af88:
    // 0x26af88: 0x1440000c  bnez        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x26AF88u;
    {
        const bool branch_taken_0x26af88 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x26AF8Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26AF88u;
            // 0x26af8c: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26af88) {
            ctx->pc = 0x26AFBCu;
            goto label_26afbc;
        }
    }
    ctx->pc = 0x26AF90u;
    // 0x26af90: 0xc0642f8  jal         func_190BE0
    ctx->pc = 0x26AF90u;
    SET_GPR_U32(ctx, 31, 0x26AF98u);
    ctx->pc = 0x26AF94u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26AF90u;
            // 0x26af94: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x190BE0u;
    if (runtime->hasFunction(0x190BE0u)) {
        auto targetFn = runtime->lookupFunction(0x190BE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26AF98u; }
        if (ctx->pc != 0x26AF98u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        PlayTimeCount__Fi_0x190be0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26AF98u; }
        if (ctx->pc != 0x26AF98u) { return; }
    }
    ctx->pc = 0x26AF98u;
label_26af98:
    // 0x26af98: 0xde021a00  ld          $v0, 0x1A00($s0)
    ctx->pc = 0x26af98u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 6656)));
    // 0x26af9c: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x26af9cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x26afa0: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x26AFA0u;
    {
        const bool branch_taken_0x26afa0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x26AFA4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26AFA0u;
            // 0x26afa4: 0xfc22e600  sd          $v0, -0x1A00($at) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 1), 4294960640), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26afa0) {
            ctx->pc = 0x26AFB4u;
            goto label_26afb4;
        }
    }
    ctx->pc = 0x26AFA8u;
    // 0x26afa8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x26afa8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x26afac: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x26afacu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x26afb0: 0xfc22e600  sd          $v0, -0x1A00($at)
    ctx->pc = 0x26afb0u;
    WRITE64(ADD32(GPR_U32(ctx, 1), 4294960640), GPR_U64(ctx, 2));
label_26afb4:
    // 0x26afb4: 0x10000056  b           . + 4 + (0x56 << 2)
    ctx->pc = 0x26AFB4u;
    {
        const bool branch_taken_0x26afb4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26AFB8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26AFB4u;
            // 0x26afb8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26afb4) {
            ctx->pc = 0x26B110u;
            goto label_26b110;
        }
    }
    ctx->pc = 0x26AFBCu;
label_26afbc:
    // 0x26afbc: 0x14430039  bne         $v0, $v1, . + 4 + (0x39 << 2)
    ctx->pc = 0x26AFBCu;
    {
        const bool branch_taken_0x26afbc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x26AFC0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26AFBCu;
            // 0x26afc0: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26afbc) {
            ctx->pc = 0x26B0A4u;
            goto label_26b0a4;
        }
    }
    ctx->pc = 0x26AFC4u;
    // 0x26afc4: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x26afc4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x26afc8: 0xdc23e600  ld          $v1, -0x1A00($at)
    ctx->pc = 0x26afc8u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 1), 4294960640)));
    // 0x26afcc: 0x14600007  bnez        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x26AFCCu;
    {
        const bool branch_taken_0x26afcc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x26AFD0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26AFCCu;
            // 0x26afd0: 0x3c0101ed  lui         $at, 0x1ED (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26afcc) {
            ctx->pc = 0x26AFECu;
            goto label_26afec;
        }
    }
    ctx->pc = 0x26AFD4u;
    // 0x26afd4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x26afd4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26afd8: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x26afd8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x26afdc: 0xc097e4c  jal         func_25F930
    ctx->pc = 0x26AFDCu;
    SET_GPR_U32(ctx, 31, 0x26AFE4u);
    ctx->pc = 0x26AFE0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26AFDCu;
            // 0x26afe0: 0xfc20e600  sd          $zero, -0x1A00($at) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 1), 4294960640), GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F930u;
    if (runtime->hasFunction(0x25F930u)) {
        auto targetFn = runtime->lookupFunction(0x25F930u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26AFE4u; }
        if (ctx->pc != 0x26AFE4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetStack__FP12RS_STACKDATAi_0x25f930(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26AFE4u; }
        if (ctx->pc != 0x26AFE4u) { return; }
    }
    ctx->pc = 0x26AFE4u;
label_26afe4:
    // 0x26afe4: 0x1000004a  b           . + 4 + (0x4A << 2)
    ctx->pc = 0x26AFE4u;
    {
        const bool branch_taken_0x26afe4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26AFE8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26AFE4u;
            // 0x26afe8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26afe4) {
            ctx->pc = 0x26B110u;
            goto label_26b110;
        }
    }
    ctx->pc = 0x26AFECu;
label_26afec:
    // 0x26afec: 0xde021a00  ld          $v0, 0x1A00($s0)
    ctx->pc = 0x26afecu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 6656)));
    // 0x26aff0: 0x220902d  daddu       $s2, $s1, $zero
    ctx->pc = 0x26aff0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26aff4: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x26aff4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x26aff8: 0x24050e10  addiu       $a1, $zero, 0xE10
    ctx->pc = 0x26aff8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3600));
    // 0x26affc: 0x26310008  addiu       $s1, $s1, 0x8
    ctx->pc = 0x26affcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
    // 0x26b000: 0x43802f  dsubu       $s0, $v0, $v1
    ctx->pc = 0x26b000u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) - GPR_U64(ctx, 3));
    // 0x26b004: 0xfc20e600  sd          $zero, -0x1A00($at)
    ctx->pc = 0x26b004u;
    WRITE64(ADD32(GPR_U32(ctx, 1), 4294960640), GPR_U64(ctx, 0));
    // 0x26b008: 0xc0a1c06  jal         func_287018
    ctx->pc = 0x26B008u;
    SET_GPR_U32(ctx, 31, 0x26B010u);
    ctx->pc = 0x26B00Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26B008u;
            // 0x26b00c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x287018u;
    if (runtime->hasFunction(0x287018u)) {
        auto targetFn = runtime->lookupFunction(0x287018u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26B010u; }
        if (ctx->pc != 0x26B010u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___udivdi3_0x287018(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26B010u; }
        if (ctx->pc != 0x26B010u) { return; }
    }
    ctx->pc = 0x26B010u;
label_26b010:
    // 0x26b010: 0x2283c  dsll32      $a1, $v0, 0
    ctx->pc = 0x26b010u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) << (32 + 0));
    // 0x26b014: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x26b014u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26b018: 0xc097e4c  jal         func_25F930
    ctx->pc = 0x26B018u;
    SET_GPR_U32(ctx, 31, 0x26B020u);
    ctx->pc = 0x26B01Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26B018u;
            // 0x26b01c: 0x5283f  dsra32      $a1, $a1, 0 (Delay Slot)
        SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F930u;
    if (runtime->hasFunction(0x25F930u)) {
        auto targetFn = runtime->lookupFunction(0x25F930u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26B020u; }
        if (ctx->pc != 0x26B020u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetStack__FP12RS_STACKDATAi_0x25f930(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26B020u; }
        if (ctx->pc != 0x26B020u) { return; }
    }
    ctx->pc = 0x26B020u;
label_26b020:
    // 0x26b020: 0x220902d  daddu       $s2, $s1, $zero
    ctx->pc = 0x26b020u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26b024: 0x24050e10  addiu       $a1, $zero, 0xE10
    ctx->pc = 0x26b024u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3600));
    // 0x26b028: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x26b028u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26b02c: 0xc0a1d7a  jal         func_2875E8
    ctx->pc = 0x26B02Cu;
    SET_GPR_U32(ctx, 31, 0x26B034u);
    ctx->pc = 0x26B030u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26B02Cu;
            // 0x26b030: 0x26310008  addiu       $s1, $s1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2875E8u;
    if (runtime->hasFunction(0x2875E8u)) {
        auto targetFn = runtime->lookupFunction(0x2875E8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26B034u; }
        if (ctx->pc != 0x26B034u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___umoddi3_0x2875e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26B034u; }
        if (ctx->pc != 0x26B034u) { return; }
    }
    ctx->pc = 0x26B034u;
label_26b034:
    // 0x26b034: 0x2405003c  addiu       $a1, $zero, 0x3C
    ctx->pc = 0x26b034u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x26b038: 0xc0a1c06  jal         func_287018
    ctx->pc = 0x26B038u;
    SET_GPR_U32(ctx, 31, 0x26B040u);
    ctx->pc = 0x26B03Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26B038u;
            // 0x26b03c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x287018u;
    if (runtime->hasFunction(0x287018u)) {
        auto targetFn = runtime->lookupFunction(0x287018u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26B040u; }
        if (ctx->pc != 0x26B040u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___udivdi3_0x287018(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26B040u; }
        if (ctx->pc != 0x26B040u) { return; }
    }
    ctx->pc = 0x26B040u;
label_26b040:
    // 0x26b040: 0x2283c  dsll32      $a1, $v0, 0
    ctx->pc = 0x26b040u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) << (32 + 0));
    // 0x26b044: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x26b044u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26b048: 0xc097e4c  jal         func_25F930
    ctx->pc = 0x26B048u;
    SET_GPR_U32(ctx, 31, 0x26B050u);
    ctx->pc = 0x26B04Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26B048u;
            // 0x26b04c: 0x5283f  dsra32      $a1, $a1, 0 (Delay Slot)
        SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F930u;
    if (runtime->hasFunction(0x25F930u)) {
        auto targetFn = runtime->lookupFunction(0x25F930u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26B050u; }
        if (ctx->pc != 0x26B050u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetStack__FP12RS_STACKDATAi_0x25f930(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26B050u; }
        if (ctx->pc != 0x26B050u) { return; }
    }
    ctx->pc = 0x26B050u;
label_26b050:
    // 0x26b050: 0x220902d  daddu       $s2, $s1, $zero
    ctx->pc = 0x26b050u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26b054: 0x2405003c  addiu       $a1, $zero, 0x3C
    ctx->pc = 0x26b054u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x26b058: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x26b058u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26b05c: 0xc0a1d7a  jal         func_2875E8
    ctx->pc = 0x26B05Cu;
    SET_GPR_U32(ctx, 31, 0x26B064u);
    ctx->pc = 0x26B060u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26B05Cu;
            // 0x26b060: 0x26310008  addiu       $s1, $s1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2875E8u;
    if (runtime->hasFunction(0x2875E8u)) {
        auto targetFn = runtime->lookupFunction(0x2875E8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26B064u; }
        if (ctx->pc != 0x26B064u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___umoddi3_0x2875e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26B064u; }
        if (ctx->pc != 0x26B064u) { return; }
    }
    ctx->pc = 0x26B064u;
label_26b064:
    // 0x26b064: 0x218b8  dsll        $v1, $v0, 2
    ctx->pc = 0x26b064u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << 2);
    // 0x26b068: 0x2405003c  addiu       $a1, $zero, 0x3C
    ctx->pc = 0x26b068u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x26b06c: 0x62182d  daddu       $v1, $v1, $v0
    ctx->pc = 0x26b06cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 2));
    // 0x26b070: 0x310b8  dsll        $v0, $v1, 2
    ctx->pc = 0x26b070u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) << 2);
    // 0x26b074: 0x62102d  daddu       $v0, $v1, $v0
    ctx->pc = 0x26b074u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 2));
    // 0x26b078: 0xc0a1c06  jal         func_287018
    ctx->pc = 0x26B078u;
    SET_GPR_U32(ctx, 31, 0x26B080u);
    ctx->pc = 0x26B07Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26B078u;
            // 0x26b07c: 0x220b8  dsll        $a0, $v0, 2 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << 2);
        ctx->in_delay_slot = false;
    ctx->pc = 0x287018u;
    if (runtime->hasFunction(0x287018u)) {
        auto targetFn = runtime->lookupFunction(0x287018u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26B080u; }
        if (ctx->pc != 0x26B080u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___udivdi3_0x287018(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26B080u; }
        if (ctx->pc != 0x26B080u) { return; }
    }
    ctx->pc = 0x26B080u;
label_26b080:
    // 0x26b080: 0x2283c  dsll32      $a1, $v0, 0
    ctx->pc = 0x26b080u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) << (32 + 0));
    // 0x26b084: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x26b084u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26b088: 0xc097e4c  jal         func_25F930
    ctx->pc = 0x26B088u;
    SET_GPR_U32(ctx, 31, 0x26B090u);
    ctx->pc = 0x26B08Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26B088u;
            // 0x26b08c: 0x5283f  dsra32      $a1, $a1, 0 (Delay Slot)
        SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F930u;
    if (runtime->hasFunction(0x25F930u)) {
        auto targetFn = runtime->lookupFunction(0x25F930u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26B090u; }
        if (ctx->pc != 0x26B090u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetStack__FP12RS_STACKDATAi_0x25f930(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26B090u; }
        if (ctx->pc != 0x26B090u) { return; }
    }
    ctx->pc = 0x26B090u;
label_26b090:
    // 0x26b090: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x26b090u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26b094: 0xc097e4c  jal         func_25F930
    ctx->pc = 0x26B094u;
    SET_GPR_U32(ctx, 31, 0x26B09Cu);
    ctx->pc = 0x26B098u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26B094u;
            // 0x26b098: 0x2e051c5d  sltiu       $a1, $s0, 0x1C5D (Delay Slot)
        SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)7261) ? 1 : 0);
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F930u;
    if (runtime->hasFunction(0x25F930u)) {
        auto targetFn = runtime->lookupFunction(0x25F930u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26B09Cu; }
        if (ctx->pc != 0x26B09Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetStack__FP12RS_STACKDATAi_0x25f930(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26B09Cu; }
        if (ctx->pc != 0x26B09Cu) { return; }
    }
    ctx->pc = 0x26B09Cu;
label_26b09c:
    // 0x26b09c: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x26B09Cu;
    {
        const bool branch_taken_0x26b09c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26B0A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26B09Cu;
            // 0x26b0a0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26b09c) {
            ctx->pc = 0x26B110u;
            goto label_26b110;
        }
    }
    ctx->pc = 0x26B0A4u;
label_26b0a4:
    // 0x26b0a4: 0x14430009  bne         $v0, $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x26B0A4u;
    {
        const bool branch_taken_0x26b0a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x26B0A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26B0A4u;
            // 0x26b0a8: 0x24030003  addiu       $v1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26b0a4) {
            ctx->pc = 0x26B0CCu;
            goto label_26b0cc;
        }
    }
    ctx->pc = 0x26B0ACu;
    // 0x26b0ac: 0xc097e18  jal         func_25F860
    ctx->pc = 0x26B0ACu;
    SET_GPR_U32(ctx, 31, 0x26B0B4u);
    ctx->pc = 0x26B0B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26B0ACu;
            // 0x26b0b0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F860u;
    if (runtime->hasFunction(0x25F860u)) {
        auto targetFn = runtime->lookupFunction(0x25F860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26B0B4u; }
        if (ctx->pc != 0x26B0B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x25f860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26B0B4u; }
        if (ctx->pc != 0x26B0B4u) { return; }
    }
    ctx->pc = 0x26B0B4u;
label_26b0b4:
    // 0x26b0b4: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x26b0b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x26b0b8: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x26b0b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x26b0bc: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x26b0bcu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x26b0c0: 0xfc22e608  sd          $v0, -0x19F8($at)
    ctx->pc = 0x26b0c0u;
    WRITE64(ADD32(GPR_U32(ctx, 1), 4294960648), GPR_U64(ctx, 2));
    // 0x26b0c4: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x26B0C4u;
    {
        const bool branch_taken_0x26b0c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26B0C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26B0C4u;
            // 0x26b0c8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26b0c4) {
            ctx->pc = 0x26B110u;
            goto label_26b110;
        }
    }
    ctx->pc = 0x26B0CCu;
label_26b0cc:
    // 0x26b0cc: 0x14430010  bne         $v0, $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x26B0CCu;
    {
        const bool branch_taken_0x26b0cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x26B0D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26B0CCu;
            // 0x26b0d0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26b0cc) {
            ctx->pc = 0x26B110u;
            goto label_26b110;
        }
    }
    ctx->pc = 0x26B0D4u;
    // 0x26b0d4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x26b0d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26b0d8: 0xc097e18  jal         func_25F860
    ctx->pc = 0x26B0D8u;
    SET_GPR_U32(ctx, 31, 0x26B0E0u);
    ctx->pc = 0x26B0DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26B0D8u;
            // 0x26b0dc: 0x24910008  addiu       $s1, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F860u;
    if (runtime->hasFunction(0x25F860u)) {
        auto targetFn = runtime->lookupFunction(0x25F860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26B0E0u; }
        if (ctx->pc != 0x26B0E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x25f860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26B0E0u; }
        if (ctx->pc != 0x26B0E0u) { return; }
    }
    ctx->pc = 0x26B0E0u;
label_26b0e0:
    // 0x26b0e0: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x26b0e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x26b0e4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x26b0e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26b0e8: 0xac22e610  sw          $v0, -0x19F0($at)
    ctx->pc = 0x26b0e8u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294960656), GPR_U32(ctx, 2));
    // 0x26b0ec: 0xc097e18  jal         func_25F860
    ctx->pc = 0x26B0ECu;
    SET_GPR_U32(ctx, 31, 0x26B0F4u);
    ctx->pc = 0x26B0F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26B0ECu;
            // 0x26b0f0: 0x24910008  addiu       $s1, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F860u;
    if (runtime->hasFunction(0x25F860u)) {
        auto targetFn = runtime->lookupFunction(0x25F860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26B0F4u; }
        if (ctx->pc != 0x26B0F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x25f860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26B0F4u; }
        if (ctx->pc != 0x26B0F4u) { return; }
    }
    ctx->pc = 0x26B0F4u;
label_26b0f4:
    // 0x26b0f4: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x26b0f4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x26b0f8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x26b0f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26b0fc: 0xc097e18  jal         func_25F860
    ctx->pc = 0x26B0FCu;
    SET_GPR_U32(ctx, 31, 0x26B104u);
    ctx->pc = 0x26B100u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26B0FCu;
            // 0x26b100: 0xac22e614  sw          $v0, -0x19EC($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 4294960660), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F860u;
    if (runtime->hasFunction(0x25F860u)) {
        auto targetFn = runtime->lookupFunction(0x25F860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26B104u; }
        if (ctx->pc != 0x26B104u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x25f860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26B104u; }
        if (ctx->pc != 0x26B104u) { return; }
    }
    ctx->pc = 0x26B104u;
label_26b104:
    // 0x26b104: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x26b104u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x26b108: 0xac22e618  sw          $v0, -0x19E8($at)
    ctx->pc = 0x26b108u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294960664), GPR_U32(ctx, 2));
    // 0x26b10c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x26b10cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_26b110:
    // 0x26b110: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x26b110u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x26b114: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x26b114u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x26b118: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x26b118u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x26b11c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x26b11cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x26b120: 0x3e00008  jr          $ra
    ctx->pc = 0x26B120u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x26B124u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26B120u;
            // 0x26b124: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x26B128u;
}
