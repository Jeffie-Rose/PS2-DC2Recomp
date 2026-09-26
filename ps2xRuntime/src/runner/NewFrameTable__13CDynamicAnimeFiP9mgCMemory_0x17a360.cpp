#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: NewFrameTable__13CDynamicAnimeFiP9mgCMemory
// Address: 0x17a360 - 0x17a444
void NewFrameTable__13CDynamicAnimeFiP9mgCMemory_0x17a360(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("NewFrameTable__13CDynamicAnimeFiP9mgCMemory_0x17a360");
#endif

    switch (ctx->pc) {
        case 0x17a3acu: goto label_17a3ac;
        case 0x17a3d4u: goto label_17a3d4;
        case 0x17a3e8u: goto label_17a3e8;
        case 0x17a408u: goto label_17a408;
        default: break;
    }

    ctx->pc = 0x17a360u;

    // 0x17a360: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x17a360u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x17a364: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x17a364u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x17a368: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x17a368u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x17a36c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x17a36cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x17a370: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x17a370u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17a374: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x17a374u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x17a378: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x17a378u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x17a37c: 0xac850004  sw          $a1, 0x4($a0)
    ctx->pc = 0x17a37cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 5));
    // 0x17a380: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x17a380u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x17a384: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x17a384u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x17a388: 0x3062000f  andi        $v0, $v1, 0xF
    ctx->pc = 0x17a388u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)15);
    // 0x17a38c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x17A38Cu;
    {
        const bool branch_taken_0x17a38c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x17A390u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17A38Cu;
            // 0x17a390: 0xc0802d  daddu       $s0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17a38c) {
            ctx->pc = 0x17A3A0u;
            goto label_17a3a0;
        }
    }
    ctx->pc = 0x17A394u;
    // 0x17a394: 0x31102  srl         $v0, $v1, 4
    ctx->pc = 0x17a394u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 3), 4));
    // 0x17a398: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x17A398u;
    {
        const bool branch_taken_0x17a398 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17A39Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17A398u;
            // 0x17a39c: 0x24450001  addiu       $a1, $v0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17a398) {
            ctx->pc = 0x17A3A4u;
            goto label_17a3a4;
        }
    }
    ctx->pc = 0x17A3A0u;
label_17a3a0:
    // 0x17a3a0: 0x32902  srl         $a1, $v1, 4
    ctx->pc = 0x17a3a0u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 3), 4));
label_17a3a4:
    // 0x17a3a4: 0xc04e748  jal         func_139D20
    ctx->pc = 0x17A3A4u;
    SET_GPR_U32(ctx, 31, 0x17A3ACu);
    ctx->pc = 0x17A3A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17A3A4u;
            // 0x17a3a8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139D20u;
    if (runtime->hasFunction(0x139D20u)) {
        auto targetFn = runtime->lookupFunction(0x139D20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17A3ACu; }
        if (ctx->pc != 0x17A3ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Alloc__9mgCMemoryFi_0x139d20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17A3ACu; }
        if (ctx->pc != 0x17A3ACu) { return; }
    }
    ctx->pc = 0x17A3ACu;
label_17a3ac:
    // 0x17a3ac: 0xae620008  sw          $v0, 0x8($s3)
    ctx->pc = 0x17a3acu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 8), GPR_U32(ctx, 2));
    // 0x17a3b0: 0x8e620004  lw          $v0, 0x4($s3)
    ctx->pc = 0x17a3b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x17a3b4: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x17a3b4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x17a3b8: 0x3062000f  andi        $v0, $v1, 0xF
    ctx->pc = 0x17a3b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)15);
    // 0x17a3bc: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x17A3BCu;
    {
        const bool branch_taken_0x17a3bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x17A3C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17A3BCu;
            // 0x17a3c0: 0x32902  srl         $a1, $v1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17a3bc) {
            ctx->pc = 0x17A3CCu;
            goto label_17a3cc;
        }
    }
    ctx->pc = 0x17A3C4u;
    // 0x17a3c4: 0x31102  srl         $v0, $v1, 4
    ctx->pc = 0x17a3c4u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 3), 4));
    // 0x17a3c8: 0x24450001  addiu       $a1, $v0, 0x1
    ctx->pc = 0x17a3c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_17a3cc:
    // 0x17a3cc: 0xc04e748  jal         func_139D20
    ctx->pc = 0x17A3CCu;
    SET_GPR_U32(ctx, 31, 0x17A3D4u);
    ctx->pc = 0x17A3D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17A3CCu;
            // 0x17a3d0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139D20u;
    if (runtime->hasFunction(0x139D20u)) {
        auto targetFn = runtime->lookupFunction(0x139D20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17A3D4u; }
        if (ctx->pc != 0x17A3D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Alloc__9mgCMemoryFi_0x139d20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17A3D4u; }
        if (ctx->pc != 0x17A3D4u) { return; }
    }
    ctx->pc = 0x17A3D4u;
label_17a3d4:
    // 0x17a3d4: 0xae62000c  sw          $v0, 0xC($s3)
    ctx->pc = 0x17a3d4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 12), GPR_U32(ctx, 2));
    // 0x17a3d8: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x17a3d8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17a3dc: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x17a3dcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17a3e0: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x17A3E0u;
    {
        const bool branch_taken_0x17a3e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17A3E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17A3E0u;
            // 0x17a3e4: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17a3e0) {
            ctx->pc = 0x17A414u;
            goto label_17a414;
        }
    }
    ctx->pc = 0x17A3E8u;
label_17a3e8:
    // 0x17a3e8: 0x8e620008  lw          $v0, 0x8($s3)
    ctx->pc = 0x17a3e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
    // 0x17a3ec: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x17a3ecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17a3f0: 0x24060010  addiu       $a2, $zero, 0x10
    ctx->pc = 0x17a3f0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x17a3f4: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x17a3f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x17a3f8: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x17a3f8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x17a3fc: 0x8e62000c  lw          $v0, 0xC($s3)
    ctx->pc = 0x17a3fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
    // 0x17a400: 0xc049c86  jal         func_127218
    ctx->pc = 0x17A400u;
    SET_GPR_U32(ctx, 31, 0x17A408u);
    ctx->pc = 0x17A404u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17A400u;
            // 0x17a404: 0x522021  addu        $a0, $v0, $s2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x127218u;
    if (runtime->hasFunction(0x127218u)) {
        auto targetFn = runtime->lookupFunction(0x127218u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17A408u; }
        if (ctx->pc != 0x17A408u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        memset_0x127218(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17A408u; }
        if (ctx->pc != 0x17A408u) { return; }
    }
    ctx->pc = 0x17A408u;
label_17a408:
    // 0x17a408: 0x26310004  addiu       $s1, $s1, 0x4
    ctx->pc = 0x17a408u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
    // 0x17a40c: 0x26520010  addiu       $s2, $s2, 0x10
    ctx->pc = 0x17a40cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
    // 0x17a410: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x17a410u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_17a414:
    // 0x17a414: 0x0  nop
    ctx->pc = 0x17a414u;
    // NOP
    // 0x17a418: 0x8e630004  lw          $v1, 0x4($s3)
    ctx->pc = 0x17a418u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x17a41c: 0x203182a  slt         $v1, $s0, $v1
    ctx->pc = 0x17a41cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x17a420: 0x1460fff1  bnez        $v1, . + 4 + (-0xF << 2)
    ctx->pc = 0x17A420u;
    {
        const bool branch_taken_0x17a420 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x17a420) {
            ctx->pc = 0x17A3E8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_17a3e8;
        }
    }
    ctx->pc = 0x17A428u;
    // 0x17a428: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x17a428u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x17a42c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x17a42cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x17a430: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x17a430u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x17a434: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x17a434u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17a438: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x17a438u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17a43c: 0x3e00008  jr          $ra
    ctx->pc = 0x17A43Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17A440u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17A43Cu;
            // 0x17a440: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x17A444u;
}
