#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _SPHIDA_SET_COL_MODEL__FP12RS_STACKDATAi
// Address: 0x2763a0 - 0x276438
void ps2__SPHIDA_SET_COL_MODEL__FP12RS_STACKDATAi_0x2763a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__SPHIDA_SET_COL_MODEL__FP12RS_STACKDATAi_0x2763a0");
#endif

    switch (ctx->pc) {
        case 0x2763ccu: goto label_2763cc;
        case 0x2763d8u: goto label_2763d8;
        case 0x2763e4u: goto label_2763e4;
        case 0x276400u: goto label_276400;
        case 0x276418u: goto label_276418;
        default: break;
    }

    ctx->pc = 0x2763a0u;

    // 0x2763a0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2763a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2763a4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2763a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2763a8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2763a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2763ac: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2763acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2763b0: 0x8f829ed4  lw          $v0, -0x612C($gp)
    ctx->pc = 0x2763b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942420)));
    // 0x2763b4: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2763B4u;
    {
        const bool branch_taken_0x2763b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2763B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2763B4u;
            // 0x2763b8: 0x24900008  addiu       $s0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2763b4) {
            ctx->pc = 0x2763C4u;
            goto label_2763c4;
        }
    }
    ctx->pc = 0x2763BCu;
    // 0x2763bc: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x2763BCu;
    {
        const bool branch_taken_0x2763bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2763C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2763BCu;
            // 0x2763c0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2763bc) {
            ctx->pc = 0x276424u;
            goto label_276424;
        }
    }
    ctx->pc = 0x2763C4u;
label_2763c4:
    // 0x2763c4: 0xc097e18  jal         func_25F860
    ctx->pc = 0x2763C4u;
    SET_GPR_U32(ctx, 31, 0x2763CCu);
    ctx->pc = 0x25F860u;
    if (runtime->hasFunction(0x25F860u)) {
        auto targetFn = runtime->lookupFunction(0x25F860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2763CCu; }
        if (ctx->pc != 0x2763CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x25f860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2763CCu; }
        if (ctx->pc != 0x2763CCu) { return; }
    }
    ctx->pc = 0x2763CCu;
label_2763cc:
    // 0x2763cc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2763ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2763d0: 0xc097e48  jal         func_25F920
    ctx->pc = 0x2763D0u;
    SET_GPR_U32(ctx, 31, 0x2763D8u);
    ctx->pc = 0x2763D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2763D0u;
            // 0x2763d4: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F920u;
    if (runtime->hasFunction(0x25F920u)) {
        auto targetFn = runtime->lookupFunction(0x25F920u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2763D8u; }
        if (ctx->pc != 0x2763D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackString__FP12RS_STACKDATA_0x25f920(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2763D8u; }
        if (ctx->pc != 0x2763D8u) { return; }
    }
    ctx->pc = 0x2763D8u;
label_2763d8:
    // 0x2763d8: 0x8f8497dc  lw          $a0, -0x6824($gp)
    ctx->pc = 0x2763d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940636)));
    // 0x2763dc: 0xc0a0c64  jal         func_283190
    ctx->pc = 0x2763DCu;
    SET_GPR_U32(ctx, 31, 0x2763E4u);
    ctx->pc = 0x2763E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2763DCu;
            // 0x2763e0: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x283190u;
    if (runtime->hasFunction(0x283190u)) {
        auto targetFn = runtime->lookupFunction(0x283190u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2763E4u; }
        if (ctx->pc != 0x2763E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStack__6CSceneFi_0x283190(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2763E4u; }
        if (ctx->pc != 0x2763E4u) { return; }
    }
    ctx->pc = 0x2763E4u;
label_2763e4:
    // 0x2763e4: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2763e4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2763e8: 0x16200003  bnez        $s1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2763E8u;
    {
        const bool branch_taken_0x2763e8 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x2763ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2763E8u;
            // 0x2763ec: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2763e8) {
            ctx->pc = 0x2763F8u;
            goto label_2763f8;
        }
    }
    ctx->pc = 0x2763F0u;
    // 0x2763f0: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x2763F0u;
    {
        const bool branch_taken_0x2763f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2763F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2763F0u;
            // 0x2763f4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2763f0) {
            ctx->pc = 0x276424u;
            goto label_276424;
        }
    }
    ctx->pc = 0x2763F8u;
label_2763f8:
    // 0x2763f8: 0xc098ae4  jal         func_262B90
    ctx->pc = 0x2763F8u;
    SET_GPR_U32(ctx, 31, 0x276400u);
    ctx->pc = 0x2763FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2763F8u;
            // 0x2763fc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x262B90u;
    if (runtime->hasFunction(0x262B90u)) {
        auto targetFn = runtime->lookupFunction(0x262B90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x276400u; }
        if (ctx->pc != 0x276400u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetLoadBGBuff__FPcPi_0x262b90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x276400u; }
        if (ctx->pc != 0x276400u) { return; }
    }
    ctx->pc = 0x276400u;
label_276400:
    // 0x276400: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x276400u;
    {
        const bool branch_taken_0x276400 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x276400) {
            ctx->pc = 0x276420u;
            goto label_276420;
        }
    }
    ctx->pc = 0x276408u;
    // 0x276408: 0x8f849ed4  lw          $a0, -0x612C($gp)
    ctx->pc = 0x276408u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942420)));
    // 0x27640c: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x27640cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x276410: 0xc0baf18  jal         func_2EBC60
    ctx->pc = 0x276410u;
    SET_GPR_U32(ctx, 31, 0x276418u);
    ctx->pc = 0x276414u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x276410u;
            // 0x276414: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2EBC60u;
    if (runtime->hasFunction(0x2EBC60u)) {
        auto targetFn = runtime->lookupFunction(0x2EBC60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x276418u; }
        if (ctx->pc != 0x276418u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetCollisionModel__7CSphidaFP10MDS_HEADERP9mgCMemory_0x2ebc60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x276418u; }
        if (ctx->pc != 0x276418u) { return; }
    }
    ctx->pc = 0x276418u;
label_276418:
    // 0x276418: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x276418u;
    {
        const bool branch_taken_0x276418 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x276418) {
            ctx->pc = 0x276424u;
            goto label_276424;
        }
    }
    ctx->pc = 0x276420u;
label_276420:
    // 0x276420: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x276420u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_276424:
    // 0x276424: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x276424u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x276428: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x276428u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x27642c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x27642cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x276430: 0x3e00008  jr          $ra
    ctx->pc = 0x276430u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x276434u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x276430u;
            // 0x276434: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x276438u;
}
