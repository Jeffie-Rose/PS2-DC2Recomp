#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: LoadBGM__6CSceneFiP1
// Address: 0x2a6f90 - 0x2a7044
void LoadBGM__6CSceneFiP1_0x2a6f90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("LoadBGM__6CSceneFiP1_0x2a6f90");
#endif

    switch (ctx->pc) {
        case 0x2a6fdcu: goto label_2a6fdc;
        case 0x2a6ff8u: goto label_2a6ff8;
        case 0x2a700cu: goto label_2a700c;
        case 0x2a7024u: goto label_2a7024;
        default: break;
    }

    ctx->pc = 0x2a6f90u;

    // 0x2a6f90: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x2a6f90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x2a6f94: 0x3402906c  ori         $v0, $zero, 0x906C
    ctx->pc = 0x2a6f94u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)36972);
    // 0x2a6f98: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x2a6f98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x2a6f9c: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x2a6f9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x2a6fa0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2a6fa0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2a6fa4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2a6fa4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2a6fa8: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x2a6fa8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a6fac: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2a6facu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2a6fb0: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x2a6fb0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a6fb4: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x2a6fb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2a6fb8: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2A6FB8u;
    {
        const bool branch_taken_0x2a6fb8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A6FBCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A6FB8u;
            // 0x2a6fbc: 0xc0802d  daddu       $s0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a6fb8) {
            ctx->pc = 0x2A6FD4u;
            goto label_2a6fd4;
        }
    }
    ctx->pc = 0x2A6FC0u;
    // 0x2a6fc0: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x2a6fc0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x2a6fc4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2a6fc4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a6fc8: 0x2410821  addu        $at, $s2, $at
    ctx->pc = 0x2a6fc8u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 1)));
    // 0x2a6fcc: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x2A6FCCu;
    {
        const bool branch_taken_0x2a6fcc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A6FD0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A6FCCu;
            // 0x2a6fd0: 0xac20906c  sw          $zero, -0x6F94($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 4294938732), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a6fcc) {
            ctx->pc = 0x2A702Cu;
            goto label_2a702c;
        }
    }
    ctx->pc = 0x2A6FD4u;
label_2a6fd4:
    // 0x2a6fd4: 0xc0a9ac4  jal         func_2A6B10
    ctx->pc = 0x2A6FD4u;
    SET_GPR_U32(ctx, 31, 0x2A6FDCu);
    ctx->pc = 0x2A6B10u;
    if (runtime->hasFunction(0x2A6B10u)) {
        auto targetFn = runtime->lookupFunction(0x2A6B10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A6FDCu; }
        if (ctx->pc != 0x2A6FDCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CheckLoadBGM__6CSceneFi_0x2a6b10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A6FDCu; }
        if (ctx->pc != 0x2A6FDCu) { return; }
    }
    ctx->pc = 0x2A6FDCu;
label_2a6fdc:
    // 0x2a6fdc: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2A6FDCu;
    {
        const bool branch_taken_0x2a6fdc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2A6FE0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A6FDCu;
            // 0x2a6fe0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a6fdc) {
            ctx->pc = 0x2A6FECu;
            goto label_2a6fec;
        }
    }
    ctx->pc = 0x2A6FE4u;
    // 0x2a6fe4: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x2A6FE4u;
    {
        const bool branch_taken_0x2a6fe4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A6FE8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A6FE4u;
            // 0x2a6fe8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a6fe4) {
            ctx->pc = 0x2A702Cu;
            goto label_2a702c;
        }
    }
    ctx->pc = 0x2A6FECu;
label_2a6fec:
    // 0x2a6fec: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x2a6fecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x2a6ff0: 0xc0a9a74  jal         func_2A69D0
    ctx->pc = 0x2A6FF0u;
    SET_GPR_U32(ctx, 31, 0x2A6FF8u);
    ctx->pc = 0x2A6FF4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A6FF0u;
            // 0x2a6ff4: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A69D0u;
    if (runtime->hasFunction(0x2A69D0u)) {
        auto targetFn = runtime->lookupFunction(0x2A69D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A6FF8u; }
        if (ctx->pc != 0x2A6FF8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetBgmFile__6CSceneFPci_0x2a69d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A6FF8u; }
        if (ctx->pc != 0x2A6FF8u) { return; }
    }
    ctx->pc = 0x2A6FF8u;
label_2a6ff8:
    // 0x2a6ff8: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x2a6ff8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x2a6ffc: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2a6ffcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a7000: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2a7000u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a7004: 0xc0524dc  jal         func_149370
    ctx->pc = 0x2A7004u;
    SET_GPR_U32(ctx, 31, 0x2A700Cu);
    ctx->pc = 0x2A7008u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A7004u;
            // 0x2a7008: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x149370u;
    if (runtime->hasFunction(0x149370u)) {
        auto targetFn = runtime->lookupFunction(0x149370u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A700Cu; }
        if (ctx->pc != 0x2A700Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        LoadFile2__FPcPvPii_0x149370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A700Cu; }
        if (ctx->pc != 0x2A700Cu) { return; }
    }
    ctx->pc = 0x2A700Cu;
label_2a700c:
    // 0x2a700c: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2A700Cu;
    {
        const bool branch_taken_0x2a700c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A7010u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A700Cu;
            // 0x2a7010: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a700c) {
            ctx->pc = 0x2A702Cu;
            goto label_2a702c;
        }
    }
    ctx->pc = 0x2A7014u;
    // 0x2a7014: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2a7014u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a7018: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2a7018u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a701c: 0xc0a9ca4  jal         func_2A7290
    ctx->pc = 0x2A701Cu;
    SET_GPR_U32(ctx, 31, 0x2A7024u);
    ctx->pc = 0x2A7020u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A701Cu;
            // 0x2a7020: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A7290u;
    if (runtime->hasFunction(0x2A7290u)) {
        auto targetFn = runtime->lookupFunction(0x2A7290u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A7024u; }
        if (ctx->pc != 0x2A7024u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        LoadBGMPack__6CSceneFiPUi_0x2a7290(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A7024u; }
        if (ctx->pc != 0x2A7024u) { return; }
    }
    ctx->pc = 0x2A7024u;
label_2a7024:
    // 0x2a7024: 0x10000001  b           . + 4 + (0x1 << 2)
    ctx->pc = 0x2A7024u;
    {
        const bool branch_taken_0x2a7024 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a7024) {
            ctx->pc = 0x2A702Cu;
            goto label_2a702c;
        }
    }
    ctx->pc = 0x2A702Cu;
label_2a702c:
    // 0x2a702c: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x2a702cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2a7030: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2a7030u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2a7034: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2a7034u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2a7038: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2a7038u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2a703c: 0x3e00008  jr          $ra
    ctx->pc = 0x2A703Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A7040u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A703Cu;
            // 0x2a7040: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2A7044u;
}
