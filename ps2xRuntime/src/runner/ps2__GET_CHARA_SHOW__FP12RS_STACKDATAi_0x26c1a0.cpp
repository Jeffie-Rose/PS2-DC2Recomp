#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _GET_CHARA_SHOW__FP12RS_STACKDATAi
// Address: 0x26c1a0 - 0x26c22c
void ps2__GET_CHARA_SHOW__FP12RS_STACKDATAi_0x26c1a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__GET_CHARA_SHOW__FP12RS_STACKDATAi_0x26c1a0");
#endif

    switch (ctx->pc) {
        case 0x26c1a0u: goto label_26c1a0;
        case 0x26c1a4u: goto label_26c1a4;
        case 0x26c1a8u: goto label_26c1a8;
        case 0x26c1acu: goto label_26c1ac;
        case 0x26c1b0u: goto label_26c1b0;
        case 0x26c1b4u: goto label_26c1b4;
        case 0x26c1b8u: goto label_26c1b8;
        case 0x26c1bcu: goto label_26c1bc;
        case 0x26c1c0u: goto label_26c1c0;
        case 0x26c1c4u: goto label_26c1c4;
        case 0x26c1c8u: goto label_26c1c8;
        case 0x26c1ccu: goto label_26c1cc;
        case 0x26c1d0u: goto label_26c1d0;
        case 0x26c1d4u: goto label_26c1d4;
        case 0x26c1d8u: goto label_26c1d8;
        case 0x26c1dcu: goto label_26c1dc;
        case 0x26c1e0u: goto label_26c1e0;
        case 0x26c1e4u: goto label_26c1e4;
        case 0x26c1e8u: goto label_26c1e8;
        case 0x26c1ecu: goto label_26c1ec;
        case 0x26c1f0u: goto label_26c1f0;
        case 0x26c1f4u: goto label_26c1f4;
        case 0x26c1f8u: goto label_26c1f8;
        case 0x26c1fcu: goto label_26c1fc;
        case 0x26c200u: goto label_26c200;
        case 0x26c204u: goto label_26c204;
        case 0x26c208u: goto label_26c208;
        case 0x26c20cu: goto label_26c20c;
        case 0x26c210u: goto label_26c210;
        case 0x26c214u: goto label_26c214;
        case 0x26c218u: goto label_26c218;
        case 0x26c21cu: goto label_26c21c;
        case 0x26c220u: goto label_26c220;
        case 0x26c224u: goto label_26c224;
        case 0x26c228u: goto label_26c228;
        default: break;
    }

    ctx->pc = 0x26c1a0u;

label_26c1a0:
    // 0x26c1a0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x26c1a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_26c1a4:
    // 0x26c1a4: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x26c1a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_26c1a8:
    // 0x26c1a8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x26c1a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_26c1ac:
    // 0x26c1ac: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x26c1acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_26c1b0:
    // 0x26c1b0: 0x24920008  addiu       $s2, $a0, 0x8
    ctx->pc = 0x26c1b0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
label_26c1b4:
    // 0x26c1b4: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x26c1b4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_26c1b8:
    // 0x26c1b8: 0xc097e18  jal         func_25F860
label_26c1bc:
    if (ctx->pc == 0x26C1BCu) {
        ctx->pc = 0x26C1BCu;
            // 0x26c1bc: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->pc = 0x26C1C0u;
        goto label_26c1c0;
    }
    ctx->pc = 0x26C1B8u;
    SET_GPR_U32(ctx, 31, 0x26C1C0u);
    ctx->pc = 0x26C1BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26C1B8u;
            // 0x26c1bc: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F860u;
    if (runtime->hasFunction(0x25F860u)) {
        auto targetFn = runtime->lookupFunction(0x25F860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26C1C0u; }
        if (ctx->pc != 0x26C1C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x25f860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26C1C0u; }
        if (ctx->pc != 0x26C1C0u) { return; }
    }
    ctx->pc = 0x26C1C0u;
label_26c1c0:
    // 0x26c1c0: 0xc09ac74  jal         func_26B1D0
label_26c1c4:
    if (ctx->pc == 0x26C1C4u) {
        ctx->pc = 0x26C1C4u;
            // 0x26c1c4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x26C1C8u;
        goto label_26c1c8;
    }
    ctx->pc = 0x26C1C0u;
    SET_GPR_U32(ctx, 31, 0x26C1C8u);
    ctx->pc = 0x26C1C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26C1C0u;
            // 0x26c1c4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x26B1D0u;
    if (runtime->hasFunction(0x26B1D0u)) {
        auto targetFn = runtime->lookupFunction(0x26B1D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26C1C8u; }
        if (ctx->pc != 0x26C1C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetChara__Fi_0x26b1d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26C1C8u; }
        if (ctx->pc != 0x26C1C8u) { return; }
    }
    ctx->pc = 0x26C1C8u;
label_26c1c8:
    // 0x26c1c8: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_26c1cc:
    if (ctx->pc == 0x26C1CCu) {
        ctx->pc = 0x26C1CCu;
            // 0x26c1cc: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x26C1D0u;
        goto label_26c1d0;
    }
    ctx->pc = 0x26C1C8u;
    {
        const bool branch_taken_0x26c1c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x26C1CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26C1C8u;
            // 0x26c1cc: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26c1c8) {
            ctx->pc = 0x26C1D8u;
            goto label_26c1d8;
        }
    }
    ctx->pc = 0x26C1D0u;
label_26c1d0:
    // 0x26c1d0: 0x10000010  b           . + 4 + (0x10 << 2)
label_26c1d4:
    if (ctx->pc == 0x26C1D4u) {
        ctx->pc = 0x26C1D4u;
            // 0x26c1d4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x26C1D8u;
        goto label_26c1d8;
    }
    ctx->pc = 0x26C1D0u;
    {
        const bool branch_taken_0x26c1d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26C1D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26C1D0u;
            // 0x26c1d4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26c1d0) {
            ctx->pc = 0x26C214u;
            goto label_26c214;
        }
    }
    ctx->pc = 0x26C1D8u;
label_26c1d8:
    // 0x26c1d8: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x26c1d8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_26c1dc:
    // 0x26c1dc: 0x8f390058  lw          $t9, 0x58($t9)
    ctx->pc = 0x26c1dcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 88)));
label_26c1e0:
    // 0x26c1e0: 0x320f809  jalr        $t9
label_26c1e4:
    if (ctx->pc == 0x26C1E4u) {
        ctx->pc = 0x26C1E4u;
            // 0x26c1e4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x26C1E8u;
        goto label_26c1e8;
    }
    ctx->pc = 0x26C1E0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x26C1E8u);
        ctx->pc = 0x26C1E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26C1E0u;
            // 0x26c1e4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x26C1E8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x26C1E8u; }
            if (ctx->pc != 0x26C1E8u) { return; }
        }
        }
    }
    ctx->pc = 0x26C1E8u;
label_26c1e8:
    // 0x26c1e8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x26c1e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_26c1ec:
    // 0x26c1ec: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x26c1ecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_26c1f0:
    // 0x26c1f0: 0xc097e4c  jal         func_25F930
label_26c1f4:
    if (ctx->pc == 0x26C1F4u) {
        ctx->pc = 0x26C1F4u;
            // 0x26c1f4: 0x24920008  addiu       $s2, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->pc = 0x26C1F8u;
        goto label_26c1f8;
    }
    ctx->pc = 0x26C1F0u;
    SET_GPR_U32(ctx, 31, 0x26C1F8u);
    ctx->pc = 0x26C1F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26C1F0u;
            // 0x26c1f4: 0x24920008  addiu       $s2, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F930u;
    if (runtime->hasFunction(0x25F930u)) {
        auto targetFn = runtime->lookupFunction(0x25F930u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26C1F8u; }
        if (ctx->pc != 0x26C1F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetStack__FP12RS_STACKDATAi_0x25f930(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26C1F8u; }
        if (ctx->pc != 0x26C1F8u) { return; }
    }
    ctx->pc = 0x26C1F8u;
label_26c1f8:
    // 0x26c1f8: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x26c1f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_26c1fc:
    // 0x26c1fc: 0x16220005  bne         $s1, $v0, . + 4 + (0x5 << 2)
label_26c200:
    if (ctx->pc == 0x26C200u) {
        ctx->pc = 0x26C200u;
            // 0x26c200: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x26C204u;
        goto label_26c204;
    }
    ctx->pc = 0x26C1FCu;
    {
        const bool branch_taken_0x26c1fc = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        ctx->pc = 0x26C200u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26C1FCu;
            // 0x26c200: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26c1fc) {
            ctx->pc = 0x26C214u;
            goto label_26c214;
        }
    }
    ctx->pc = 0x26C204u;
label_26c204:
    // 0x26c204: 0x8e050054  lw          $a1, 0x54($s0)
    ctx->pc = 0x26c204u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
label_26c208:
    // 0x26c208: 0xc097e4c  jal         func_25F930
label_26c20c:
    if (ctx->pc == 0x26C20Cu) {
        ctx->pc = 0x26C20Cu;
            // 0x26c20c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x26C210u;
        goto label_26c210;
    }
    ctx->pc = 0x26C208u;
    SET_GPR_U32(ctx, 31, 0x26C210u);
    ctx->pc = 0x26C20Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26C208u;
            // 0x26c20c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F930u;
    if (runtime->hasFunction(0x25F930u)) {
        auto targetFn = runtime->lookupFunction(0x25F930u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26C210u; }
        if (ctx->pc != 0x26C210u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetStack__FP12RS_STACKDATAi_0x25f930(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26C210u; }
        if (ctx->pc != 0x26C210u) { return; }
    }
    ctx->pc = 0x26C210u;
label_26c210:
    // 0x26c210: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x26c210u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_26c214:
    // 0x26c214: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x26c214u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_26c218:
    // 0x26c218: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x26c218u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_26c21c:
    // 0x26c21c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x26c21cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_26c220:
    // 0x26c220: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x26c220u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_26c224:
    // 0x26c224: 0x3e00008  jr          $ra
label_26c228:
    if (ctx->pc == 0x26C228u) {
        ctx->pc = 0x26C228u;
            // 0x26c228: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = 0x26C22Cu;
        goto label_fallthrough_0x26c224;
    }
    ctx->pc = 0x26C224u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x26C228u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26C224u;
            // 0x26c228: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x26c224:
    ctx->pc = 0x26C22Cu;
}
