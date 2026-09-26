#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: LoadFishPrize__FiP9mgCMemory
// Address: 0x219f80 - 0x21a044
void LoadFishPrize__FiP9mgCMemory_0x219f80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("LoadFishPrize__FiP9mgCMemory_0x219f80");
#endif

    switch (ctx->pc) {
        case 0x219f9cu: goto label_219f9c;
        case 0x219fa4u: goto label_219fa4;
        case 0x219fecu: goto label_219fec;
        case 0x219ffcu: goto label_219ffc;
        case 0x21a00cu: goto label_21a00c;
        case 0x21a01cu: goto label_21a01c;
        case 0x21a024u: goto label_21a024;
        case 0x21a02cu: goto label_21a02c;
        default: break;
    }

    ctx->pc = 0x219f80u;

    // 0x219f80: 0x27bdc8f0  addiu       $sp, $sp, -0x3710
    ctx->pc = 0x219f80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294953200));
    // 0x219f84: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x219f84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x219f88: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x219f88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x219f8c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x219f8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x219f90: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x219f90u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x219f94: 0xc0867c4  jal         func_219F10
    ctx->pc = 0x219F94u;
    SET_GPR_U32(ctx, 31, 0x219F9Cu);
    ctx->pc = 0x219F98u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x219F94u;
            // 0x219f98: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x219F10u;
    if (runtime->hasFunction(0x219F10u)) {
        auto targetFn = runtime->lookupFunction(0x219F10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x219F9Cu; }
        if (ctx->pc != 0x219F9Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        InitFishPrize__Fv_0x219f10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x219F9Cu; }
        if (ctx->pc != 0x219F9Cu) { return; }
    }
    ctx->pc = 0x219F9Cu;
label_219f9c:
    // 0x219f9c: 0xc094430  jal         func_2510C0
    ctx->pc = 0x219F9Cu;
    SET_GPR_U32(ctx, 31, 0x219FA4u);
    ctx->pc = 0x219FA0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x219F9Cu;
            // 0x219fa0: 0x27a40030  addiu       $a0, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2510C0u;
    if (runtime->hasFunction(0x2510C0u)) {
        auto targetFn = runtime->lookupFunction(0x2510C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x219FA4u; }
        if (ctx->pc != 0x219FA4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuCalcBufAlignment__FP1_0x2510c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x219FA4u; }
        if (ctx->pc != 0x219FA4u) { return; }
    }
    ctx->pc = 0x219FA4u;
label_219fa4:
    // 0x219fa4: 0xa390927c  sb          $s0, -0x6D84($gp)
    ctx->pc = 0x219fa4u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294939260), (uint8_t)GPR_U32(ctx, 16));
    // 0x219fa8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x219fa8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x219fac: 0x8382927c  lb          $v0, -0x6D84($gp)
    ctx->pc = 0x219facu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294939260)));
    // 0x219fb0: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x219FB0u;
    {
        const bool branch_taken_0x219fb0 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x219fb0) {
            ctx->pc = 0x219FC4u;
            goto label_219fc4;
        }
    }
    ctx->pc = 0x219FB8u;
    // 0x219fb8: 0x28420002  slti        $v0, $v0, 0x2
    ctx->pc = 0x219fb8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x219fbc: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x219FBCu;
    {
        const bool branch_taken_0x219fbc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x219fbc) {
            ctx->pc = 0x219FC8u;
            goto label_219fc8;
        }
    }
    ctx->pc = 0x219FC4u;
label_219fc4:
    // 0x219fc4: 0xa380927c  sb          $zero, -0x6D84($gp)
    ctx->pc = 0x219fc4u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294939260), (uint8_t)GPR_U32(ctx, 0));
label_219fc8:
    // 0x219fc8: 0x8383927c  lb          $v1, -0x6D84($gp)
    ctx->pc = 0x219fc8u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294939260)));
    // 0x219fcc: 0x27828298  addiu       $v0, $gp, -0x7D68
    ctx->pc = 0x219fccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294935192));
    // 0x219fd0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x219fd0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x219fd4: 0x27a6370c  addiu       $a2, $sp, 0x370C
    ctx->pc = 0x219fd4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 14092));
    // 0x219fd8: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x219fd8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x219fdc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x219fdcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x219fe0: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x219fe0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x219fe4: 0xc0524dc  jal         func_149370
    ctx->pc = 0x219FE4u;
    SET_GPR_U32(ctx, 31, 0x219FECu);
    ctx->pc = 0x219FE8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x219FE4u;
            // 0x219fe8: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x149370u;
    if (runtime->hasFunction(0x149370u)) {
        auto targetFn = runtime->lookupFunction(0x149370u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x219FECu; }
        if (ctx->pc != 0x219FECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        LoadFile2__FPcPvPii_0x149370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x219FECu; }
        if (ctx->pc != 0x219FECu) { return; }
    }
    ctx->pc = 0x219FECu;
label_219fec:
    // 0x219fec: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x219FECu;
    {
        const bool branch_taken_0x219fec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x219FF0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x219FECu;
            // 0x219ff0: 0x27a42830  addiu       $a0, $sp, 0x2830 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 10288));
        ctx->in_delay_slot = false;
        if (branch_taken_0x219fec) {
            ctx->pc = 0x21A024u;
            goto label_21a024;
        }
    }
    ctx->pc = 0x219FF4u;
    // 0x219ff4: 0xc051a7c  jal         func_1469F0
    ctx->pc = 0x219FF4u;
    SET_GPR_U32(ctx, 31, 0x219FFCu);
    ctx->pc = 0x219FF8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x219FF4u;
            // 0x219ff8: 0xaf919270  sw          $s1, -0x6D90($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294939248), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1469F0u;
    if (runtime->hasFunction(0x1469F0u)) {
        auto targetFn = runtime->lookupFunction(0x1469F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x219FFCu; }
        if (ctx->pc != 0x219FFCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___ct__18CScriptInterpreterFv_0x1469f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x219FFCu; }
        if (ctx->pc != 0x219FFCu) { return; }
    }
    ctx->pc = 0x219FFCu;
label_219ffc:
    // 0x219ffc: 0x3c050035  lui         $a1, 0x35
    ctx->pc = 0x219ffcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)53 << 16));
    // 0x21a000: 0x27a42830  addiu       $a0, $sp, 0x2830
    ctx->pc = 0x21a000u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 10288));
    // 0x21a004: 0xc0519ec  jal         func_1467B0
    ctx->pc = 0x21A004u;
    SET_GPR_U32(ctx, 31, 0x21A00Cu);
    ctx->pc = 0x21A008u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21A004u;
            // 0x21a008: 0x24a5fe80  addiu       $a1, $a1, -0x180 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294966912));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1467B0u;
    if (runtime->hasFunction(0x1467B0u)) {
        auto targetFn = runtime->lookupFunction(0x1467B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21A00Cu; }
        if (ctx->pc != 0x21A00Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetTag__18CScriptInterpreterFP13SPI_TAG_PARAM_0x1467b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21A00Cu; }
        if (ctx->pc != 0x21A00Cu) { return; }
    }
    ctx->pc = 0x21A00Cu;
label_21a00c:
    // 0x21a00c: 0x8fa6370c  lw          $a2, 0x370C($sp)
    ctx->pc = 0x21a00cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 14092)));
    // 0x21a010: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x21a010u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21a014: 0xc051a60  jal         func_146980
    ctx->pc = 0x21A014u;
    SET_GPR_U32(ctx, 31, 0x21A01Cu);
    ctx->pc = 0x21A018u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21A014u;
            // 0x21a018: 0x27a42830  addiu       $a0, $sp, 0x2830 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 10288));
        ctx->in_delay_slot = false;
    ctx->pc = 0x146980u;
    if (runtime->hasFunction(0x146980u)) {
        auto targetFn = runtime->lookupFunction(0x146980u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21A01Cu; }
        if (ctx->pc != 0x21A01Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetScript__18CScriptInterpreterFPci_0x146980(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21A01Cu; }
        if (ctx->pc != 0x21A01Cu) { return; }
    }
    ctx->pc = 0x21A01Cu;
label_21a01c:
    // 0x21a01c: 0xc0519c8  jal         func_146720
    ctx->pc = 0x21A01Cu;
    SET_GPR_U32(ctx, 31, 0x21A024u);
    ctx->pc = 0x21A020u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21A01Cu;
            // 0x21a020: 0x27a42830  addiu       $a0, $sp, 0x2830 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 10288));
        ctx->in_delay_slot = false;
    ctx->pc = 0x146720u;
    if (runtime->hasFunction(0x146720u)) {
        auto targetFn = runtime->lookupFunction(0x146720u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21A024u; }
        if (ctx->pc != 0x21A024u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Run__18CScriptInterpreterFv_0x146720(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21A024u; }
        if (ctx->pc != 0x21A024u) { return; }
    }
    ctx->pc = 0x21A024u;
label_21a024:
    // 0x21a024: 0xc086814  jal         func_21A050
    ctx->pc = 0x21A024u;
    SET_GPR_U32(ctx, 31, 0x21A02Cu);
    ctx->pc = 0x21A050u;
    if (runtime->hasFunction(0x21A050u)) {
        auto targetFn = runtime->lookupFunction(0x21A050u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21A02Cu; }
        if (ctx->pc != 0x21A02Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        RefreshFishPrize__Fv_0x21a050(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21A02Cu; }
        if (ctx->pc != 0x21A02Cu) { return; }
    }
    ctx->pc = 0x21A02Cu;
label_21a02c:
    // 0x21a02c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x21a02cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x21a030: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x21a030u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x21a034: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x21a034u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x21a038: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x21a038u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x21a03c: 0x3e00008  jr          $ra
    ctx->pc = 0x21A03Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21A040u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21A03Cu;
            // 0x21a040: 0x27bd3710  addiu       $sp, $sp, 0x3710 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 14096));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x21A044u;
}
