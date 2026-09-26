#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _AUTO_SET_MONSTER__FP12RS_STACKDATAi
// Address: 0x2661a0 - 0x26627c
void ps2__AUTO_SET_MONSTER__FP12RS_STACKDATAi_0x2661a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__AUTO_SET_MONSTER__FP12RS_STACKDATAi_0x2661a0");
#endif

    switch (ctx->pc) {
        case 0x2661c4u: goto label_2661c4;
        case 0x2661e8u: goto label_2661e8;
        case 0x2661f8u: goto label_2661f8;
        case 0x266208u: goto label_266208;
        case 0x266214u: goto label_266214;
        case 0x26622cu: goto label_26622c;
        case 0x266244u: goto label_266244;
        case 0x26625cu: goto label_26625c;
        default: break;
    }

    ctx->pc = 0x2661a0u;

    // 0x2661a0: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x2661a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x2661a4: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x2661a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x2661a8: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2661a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x2661ac: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2661acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2661b0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2661b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2661b4: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x2661b4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2661b8: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x2661b8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2661bc: 0xc064268  jal         func_1909A0
    ctx->pc = 0x2661BCu;
    SET_GPR_U32(ctx, 31, 0x2661C4u);
    ctx->pc = 0x2661C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2661BCu;
            // 0x2661c0: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1909A0u;
    if (runtime->hasFunction(0x1909A0u)) {
        auto targetFn = runtime->lookupFunction(0x1909A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2661C4u; }
        if (ctx->pc != 0x2661C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetNowLoopNo__Fv_0x1909a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2661C4u; }
        if (ctx->pc != 0x2661C4u) { return; }
    }
    ctx->pc = 0x2661C4u;
label_2661c4:
    // 0x2661c4: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x2661c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2661c8: 0x10430003  beq         $v0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2661C8u;
    {
        const bool branch_taken_0x2661c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x2661CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2661C8u;
            // 0x2661cc: 0x2a210002  slti        $at, $s1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2661c8) {
            ctx->pc = 0x2661D8u;
            goto label_2661d8;
        }
    }
    ctx->pc = 0x2661D0u;
    // 0x2661d0: 0x10000023  b           . + 4 + (0x23 << 2)
    ctx->pc = 0x2661D0u;
    {
        const bool branch_taken_0x2661d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2661D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2661D0u;
            // 0x2661d4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2661d0) {
            ctx->pc = 0x266260u;
            goto label_266260;
        }
    }
    ctx->pc = 0x2661D8u;
label_2661d8:
    // 0x2661d8: 0x10200005  beqz        $at, . + 4 + (0x5 << 2)
    ctx->pc = 0x2661D8u;
    {
        const bool branch_taken_0x2661d8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x2661DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2661D8u;
            // 0x2661dc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2661d8) {
            ctx->pc = 0x2661F0u;
            goto label_2661f0;
        }
    }
    ctx->pc = 0x2661E0u;
    // 0x2661e0: 0xc0a3c30  jal         func_28F0C0
    ctx->pc = 0x2661E0u;
    SET_GPR_U32(ctx, 31, 0x2661E8u);
    ctx->pc = 0x28F0C0u;
    if (runtime->hasFunction(0x28F0C0u)) {
        auto targetFn = runtime->lookupFunction(0x28F0C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2661E8u; }
        if (ctx->pc != 0x2661E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        AutoSetMonster__Fv_0x28f0c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2661E8u; }
        if (ctx->pc != 0x2661E8u) { return; }
    }
    ctx->pc = 0x2661E8u;
label_2661e8:
    // 0x2661e8: 0x1000001d  b           . + 4 + (0x1D << 2)
    ctx->pc = 0x2661E8u;
    {
        const bool branch_taken_0x2661e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2661ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2661E8u;
            // 0x2661ec: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2661e8) {
            ctx->pc = 0x266260u;
            goto label_266260;
        }
    }
    ctx->pc = 0x2661F0u;
label_2661f0:
    // 0x2661f0: 0xc097e18  jal         func_25F860
    ctx->pc = 0x2661F0u;
    SET_GPR_U32(ctx, 31, 0x2661F8u);
    ctx->pc = 0x2661F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2661F0u;
            // 0x2661f4: 0x24920008  addiu       $s2, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F860u;
    if (runtime->hasFunction(0x25F860u)) {
        auto targetFn = runtime->lookupFunction(0x25F860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2661F8u; }
        if (ctx->pc != 0x2661F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x25f860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2661F8u; }
        if (ctx->pc != 0x2661F8u) { return; }
    }
    ctx->pc = 0x2661F8u;
label_2661f8:
    // 0x2661f8: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x2661f8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2661fc: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x2661fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x266200: 0xc097e34  jal         func_25F8D0
    ctx->pc = 0x266200u;
    SET_GPR_U32(ctx, 31, 0x266208u);
    ctx->pc = 0x266204u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x266200u;
            // 0x266204: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F8D0u;
    if (runtime->hasFunction(0x25F8D0u)) {
        auto targetFn = runtime->lookupFunction(0x25F8D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x266208u; }
        if (ctx->pc != 0x266208u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackVector__FPfP12RS_STACKDATA_0x25f8d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x266208u; }
        if (ctx->pc != 0x266208u) { return; }
    }
    ctx->pc = 0x266208u;
label_266208:
    // 0x266208: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x266208u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x26620c: 0xc04bc90  jal         func_12F240
    ctx->pc = 0x26620Cu;
    SET_GPR_U32(ctx, 31, 0x266214u);
    ctx->pc = 0x266210u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26620Cu;
            // 0x266210: 0x26520018  addiu       $s2, $s2, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 24));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12F240u;
    if (runtime->hasFunction(0x12F240u)) {
        auto targetFn = runtime->lookupFunction(0x12F240u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x266214u; }
        if (ctx->pc != 0x266214u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgZeroVectorW__FPf_0x12f240(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x266214u; }
        if (ctx->pc != 0x266214u) { return; }
    }
    ctx->pc = 0x266214u;
label_266214:
    // 0x266214: 0x2a220007  slti        $v0, $s1, 0x7
    ctx->pc = 0x266214u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)7) ? 1 : 0);
    // 0x266218: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x266218u;
    {
        const bool branch_taken_0x266218 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x26621Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x266218u;
            // 0x26621c: 0x24020008  addiu       $v0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x266218) {
            ctx->pc = 0x266234u;
            goto label_266234;
        }
    }
    ctx->pc = 0x266220u;
    // 0x266220: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x266220u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x266224: 0xc097e34  jal         func_25F8D0
    ctx->pc = 0x266224u;
    SET_GPR_U32(ctx, 31, 0x26622Cu);
    ctx->pc = 0x266228u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x266224u;
            // 0x266228: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F8D0u;
    if (runtime->hasFunction(0x25F8D0u)) {
        auto targetFn = runtime->lookupFunction(0x25F8D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26622Cu; }
        if (ctx->pc != 0x26622Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackVector__FPfP12RS_STACKDATA_0x25f8d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26622Cu; }
        if (ctx->pc != 0x26622Cu) { return; }
    }
    ctx->pc = 0x26622Cu;
label_26622c:
    // 0x26622c: 0x26520018  addiu       $s2, $s2, 0x18
    ctx->pc = 0x26622cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 24));
    // 0x266230: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x266230u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_266234:
    // 0x266234: 0x16220005  bne         $s1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x266234u;
    {
        const bool branch_taken_0x266234 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        ctx->pc = 0x266238u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x266234u;
            // 0x266238: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x266234) {
            ctx->pc = 0x26624Cu;
            goto label_26624c;
        }
    }
    ctx->pc = 0x26623Cu;
    // 0x26623c: 0xc097e18  jal         func_25F860
    ctx->pc = 0x26623Cu;
    SET_GPR_U32(ctx, 31, 0x266244u);
    ctx->pc = 0x266240u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26623Cu;
            // 0x266240: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F860u;
    if (runtime->hasFunction(0x25F860u)) {
        auto targetFn = runtime->lookupFunction(0x25F860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x266244u; }
        if (ctx->pc != 0x266244u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x25f860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x266244u; }
        if (ctx->pc != 0x266244u) { return; }
    }
    ctx->pc = 0x266244u;
label_266244:
    // 0x266244: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x266244u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x266248: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x266248u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_26624c:
    // 0x26624c: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x26624cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x266250: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x266250u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x266254: 0xc0a3ca8  jal         func_28F2A0
    ctx->pc = 0x266254u;
    SET_GPR_U32(ctx, 31, 0x26625Cu);
    ctx->pc = 0x266258u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x266254u;
            // 0x266258: 0x27a60060  addiu       $a2, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
    ctx->pc = 0x28F2A0u;
    if (runtime->hasFunction(0x28F2A0u)) {
        auto targetFn = runtime->lookupFunction(0x28F2A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26625Cu; }
        if (ctx->pc != 0x26625Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        AutoSetMonster__FiPfPfi_0x28f2a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26625Cu; }
        if (ctx->pc != 0x26625Cu) { return; }
    }
    ctx->pc = 0x26625Cu;
label_26625c:
    // 0x26625c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x26625cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_266260:
    // 0x266260: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x266260u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x266264: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x266264u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x266268: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x266268u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x26626c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x26626cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x266270: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x266270u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x266274: 0x3e00008  jr          $ra
    ctx->pc = 0x266274u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x266278u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x266274u;
            // 0x266278: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x26627Cu;
}
