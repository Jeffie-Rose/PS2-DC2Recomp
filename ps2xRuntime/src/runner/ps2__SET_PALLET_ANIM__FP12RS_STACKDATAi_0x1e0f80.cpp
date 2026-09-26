#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _SET_PALLET_ANIM__FP12RS_STACKDATAi
// Address: 0x1e0f80 - 0x1e1064
void ps2__SET_PALLET_ANIM__FP12RS_STACKDATAi_0x1e0f80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__SET_PALLET_ANIM__FP12RS_STACKDATAi_0x1e0f80");
#endif

    switch (ctx->pc) {
        case 0x1e0fb8u: goto label_1e0fb8;
        case 0x1e0fc8u: goto label_1e0fc8;
        case 0x1e0fd8u: goto label_1e0fd8;
        case 0x1e0fe8u: goto label_1e0fe8;
        case 0x1e0ff8u: goto label_1e0ff8;
        case 0x1e1010u: goto label_1e1010;
        default: break;
    }

    ctx->pc = 0x1e0f80u;

    // 0x1e0f80: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x1e0f80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x1e0f84: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x1e0f84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x1e0f88: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x1e0f88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x1e0f8c: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x1e0f8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x1e0f90: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x1e0f90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x1e0f94: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x1e0f94u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x1e0f98: 0x24950008  addiu       $s5, $a0, 0x8
    ctx->pc = 0x1e0f98u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x1e0f9c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1e0f9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1e0fa0: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x1e0fa0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e0fa4: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1e0fa4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1e0fa8: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x1e0fa8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e0fac: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1e0facu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1e0fb0: 0xc07819c  jal         func_1E0670
    ctx->pc = 0x1E0FB0u;
    SET_GPR_U32(ctx, 31, 0x1E0FB8u);
    ctx->pc = 0x1E0FB4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E0FB0u;
            // 0x1e0fb4: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E0670u;
    if (runtime->hasFunction(0x1E0670u)) {
        auto targetFn = runtime->lookupFunction(0x1E0670u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E0FB8u; }
        if (ctx->pc != 0x1E0FB8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x1e0670(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E0FB8u; }
        if (ctx->pc != 0x1E0FB8u) { return; }
    }
    ctx->pc = 0x1E0FB8u;
label_1e0fb8:
    // 0x1e0fb8: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1e0fb8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e0fbc: 0x40b82d  daddu       $s7, $v0, $zero
    ctx->pc = 0x1e0fbcu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e0fc0: 0xc07819c  jal         func_1E0670
    ctx->pc = 0x1E0FC0u;
    SET_GPR_U32(ctx, 31, 0x1E0FC8u);
    ctx->pc = 0x1E0FC4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E0FC0u;
            // 0x1e0fc4: 0x24950008  addiu       $s5, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E0670u;
    if (runtime->hasFunction(0x1E0670u)) {
        auto targetFn = runtime->lookupFunction(0x1E0670u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E0FC8u; }
        if (ctx->pc != 0x1E0FC8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x1e0670(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E0FC8u; }
        if (ctx->pc != 0x1E0FC8u) { return; }
    }
    ctx->pc = 0x1E0FC8u;
label_1e0fc8:
    // 0x1e0fc8: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1e0fc8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e0fcc: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x1e0fccu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e0fd0: 0xc07819c  jal         func_1E0670
    ctx->pc = 0x1E0FD0u;
    SET_GPR_U32(ctx, 31, 0x1E0FD8u);
    ctx->pc = 0x1E0FD4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E0FD0u;
            // 0x1e0fd4: 0x24950008  addiu       $s5, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E0670u;
    if (runtime->hasFunction(0x1E0670u)) {
        auto targetFn = runtime->lookupFunction(0x1E0670u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E0FD8u; }
        if (ctx->pc != 0x1E0FD8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x1e0670(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E0FD8u; }
        if (ctx->pc != 0x1E0FD8u) { return; }
    }
    ctx->pc = 0x1E0FD8u;
label_1e0fd8:
    // 0x1e0fd8: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1e0fd8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e0fdc: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1e0fdcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e0fe0: 0xc07819c  jal         func_1E0670
    ctx->pc = 0x1E0FE0u;
    SET_GPR_U32(ctx, 31, 0x1E0FE8u);
    ctx->pc = 0x1E0FE4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E0FE0u;
            // 0x1e0fe4: 0x24950008  addiu       $s5, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E0670u;
    if (runtime->hasFunction(0x1E0670u)) {
        auto targetFn = runtime->lookupFunction(0x1E0670u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E0FE8u; }
        if (ctx->pc != 0x1E0FE8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x1e0670(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E0FE8u; }
        if (ctx->pc != 0x1E0FE8u) { return; }
    }
    ctx->pc = 0x1E0FE8u;
label_1e0fe8:
    // 0x1e0fe8: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1e0fe8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e0fec: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1e0fecu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e0ff0: 0xc07819c  jal         func_1E0670
    ctx->pc = 0x1E0FF0u;
    SET_GPR_U32(ctx, 31, 0x1E0FF8u);
    ctx->pc = 0x1E0FF4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E0FF0u;
            // 0x1e0ff4: 0x24950008  addiu       $s5, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E0670u;
    if (runtime->hasFunction(0x1E0670u)) {
        auto targetFn = runtime->lookupFunction(0x1E0670u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E0FF8u; }
        if (ctx->pc != 0x1E0FF8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x1e0670(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E0FF8u; }
        if (ctx->pc != 0x1E0FF8u) { return; }
    }
    ctx->pc = 0x1E0FF8u;
label_1e0ff8:
    // 0x1e0ff8: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x1e0ff8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e0ffc: 0x2a820006  slti        $v0, $s4, 0x6
    ctx->pc = 0x1e0ffcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)(int32_t)6) ? 1 : 0);
    // 0x1e1000: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1E1000u;
    {
        const bool branch_taken_0x1e1000 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E1004u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E1000u;
            // 0x1e1004: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e1000) {
            ctx->pc = 0x1E1014u;
            goto label_1e1014;
        }
    }
    ctx->pc = 0x1E1008u;
    // 0x1e1008: 0xc07819c  jal         func_1E0670
    ctx->pc = 0x1E1008u;
    SET_GPR_U32(ctx, 31, 0x1E1010u);
    ctx->pc = 0x1E0670u;
    if (runtime->hasFunction(0x1E0670u)) {
        auto targetFn = runtime->lookupFunction(0x1E0670u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E1010u; }
        if (ctx->pc != 0x1E1010u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x1e0670(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E1010u; }
        if (ctx->pc != 0x1E1010u) { return; }
    }
    ctx->pc = 0x1E1010u;
label_1e1010:
    // 0x1e1010: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x1e1010u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1e1014:
    // 0x1e1014: 0x8f838e70  lw          $v1, -0x7190($gp)
    ctx->pc = 0x1e1014u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938224)));
    // 0x1e1018: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1e1018u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1e101c: 0xa477067c  sh          $s7, 0x67C($v1)
    ctx->pc = 0x1e101cu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 1660), (uint16_t)GPR_U32(ctx, 23));
    // 0x1e1020: 0xa476067e  sh          $s6, 0x67E($v1)
    ctx->pc = 0x1e1020u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 1662), (uint16_t)GPR_U32(ctx, 22));
    // 0x1e1024: 0xa4700680  sh          $s0, 0x680($v1)
    ctx->pc = 0x1e1024u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 1664), (uint16_t)GPR_U32(ctx, 16));
    // 0x1e1028: 0xa4710682  sh          $s1, 0x682($v1)
    ctx->pc = 0x1e1028u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 1666), (uint16_t)GPR_U32(ctx, 17));
    // 0x1e102c: 0xa4720686  sh          $s2, 0x686($v1)
    ctx->pc = 0x1e102cu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 1670), (uint16_t)GPR_U32(ctx, 18));
    // 0x1e1030: 0xa4600684  sh          $zero, 0x684($v1)
    ctx->pc = 0x1e1030u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 1668), (uint16_t)GPR_U32(ctx, 0));
    // 0x1e1034: 0xa4730688  sh          $s3, 0x688($v1)
    ctx->pc = 0x1e1034u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 1672), (uint16_t)GPR_U32(ctx, 19));
    // 0x1e1038: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x1e1038u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1e103c: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x1e103cu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1e1040: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x1e1040u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1e1044: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x1e1044u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1e1048: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x1e1048u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1e104c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1e104cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1e1050: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1e1050u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1e1054: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1e1054u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e1058: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1e1058u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e105c: 0x3e00008  jr          $ra
    ctx->pc = 0x1E105Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E1060u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E105Cu;
            // 0x1e1060: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1E1064u;
}
