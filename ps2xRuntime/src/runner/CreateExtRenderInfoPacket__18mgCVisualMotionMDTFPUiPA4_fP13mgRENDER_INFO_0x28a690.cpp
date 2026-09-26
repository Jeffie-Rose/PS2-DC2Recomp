#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: CreateExtRenderInfoPacket__18mgCVisualMotionMDTFPUiPA4_fP13mgRENDER_INFO
// Address: 0x28a690 - 0x28a87c
void CreateExtRenderInfoPacket__18mgCVisualMotionMDTFPUiPA4_fP13mgRENDER_INFO_0x28a690(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("CreateExtRenderInfoPacket__18mgCVisualMotionMDTFPUiPA4_fP13mgRENDER_INFO_0x28a690");
#endif

    switch (ctx->pc) {
        case 0x28a6e8u: goto label_28a6e8;
        case 0x28a720u: goto label_28a720;
        case 0x28a760u: goto label_28a760;
        case 0x28a77cu: goto label_28a77c;
        case 0x28a788u: goto label_28a788;
        case 0x28a798u: goto label_28a798;
        case 0x28a7c0u: goto label_28a7c0;
        case 0x28a7d8u: goto label_28a7d8;
        case 0x28a7e8u: goto label_28a7e8;
        case 0x28a7f4u: goto label_28a7f4;
        case 0x28a804u: goto label_28a804;
        case 0x28a814u: goto label_28a814;
        default: break;
    }

    ctx->pc = 0x28a690u;

    // 0x28a690: 0x27bdfdc0  addiu       $sp, $sp, -0x240
    ctx->pc = 0x28a690u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966720));
    // 0x28a694: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x28a694u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x28a698: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x28a698u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x28a69c: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x28a69cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x28a6a0: 0xa0b02d  daddu       $s6, $a1, $zero
    ctx->pc = 0x28a6a0u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28a6a4: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x28a6a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x28a6a8: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x28a6a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x28a6ac: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x28a6acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x28a6b0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x28a6b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x28a6b4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x28a6b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x28a6b8: 0x8c820050  lw          $v0, 0x50($a0)
    ctx->pc = 0x28a6b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 80)));
    // 0x28a6bc: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x28A6BCu;
    {
        const bool branch_taken_0x28a6bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x28A6C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28A6BCu;
            // 0x28a6c0: 0x80a82d  daddu       $s5, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28a6bc) {
            ctx->pc = 0x28A6CCu;
            goto label_28a6cc;
        }
    }
    ctx->pc = 0x28A6C4u;
    // 0x28a6c4: 0x10000063  b           . + 4 + (0x63 << 2)
    ctx->pc = 0x28A6C4u;
    {
        const bool branch_taken_0x28a6c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28A6C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28A6C4u;
            // 0x28a6c8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28a6c4) {
            ctx->pc = 0x28A854u;
            goto label_28a854;
        }
    }
    ctx->pc = 0x28A6CCu;
label_28a6cc:
    // 0x28a6cc: 0x8ea20058  lw          $v0, 0x58($s5)
    ctx->pc = 0x28a6ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 88)));
    // 0x28a6d0: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x28A6D0u;
    {
        const bool branch_taken_0x28a6d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x28A6D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28A6D0u;
            // 0x28a6d4: 0x2c0802d  daddu       $s0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28a6d0) {
            ctx->pc = 0x28A6E0u;
            goto label_28a6e0;
        }
    }
    ctx->pc = 0x28A6D8u;
    // 0x28a6d8: 0x1000005e  b           . + 4 + (0x5E << 2)
    ctx->pc = 0x28A6D8u;
    {
        const bool branch_taken_0x28a6d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28A6DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28A6D8u;
            // 0x28a6dc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28a6d8) {
            ctx->pc = 0x28A854u;
            goto label_28a854;
        }
    }
    ctx->pc = 0x28A6E0u;
label_28a6e0:
    // 0x28a6e0: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x28a6e0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28a6e4: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x28a6e4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_28a6e8:
    // 0x28a6e8: 0x2a31021  addu        $v0, $s5, $v1
    ctx->pc = 0x28a6e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 3)));
    // 0x28a6ec: 0x8c420080  lw          $v0, 0x80($v0)
    ctx->pc = 0x28a6ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 128)));
    // 0x28a6f0: 0x4400005  bltz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x28A6F0u;
    {
        const bool branch_taken_0x28a6f0 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x28a6f0) {
            ctx->pc = 0x28A708u;
            goto label_28a708;
        }
    }
    ctx->pc = 0x28A6F8u;
    // 0x28a6f8: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x28a6f8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x28a6fc: 0x2a220020  slti        $v0, $s1, 0x20
    ctx->pc = 0x28a6fcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)32) ? 1 : 0);
    // 0x28a700: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x28A700u;
    {
        const bool branch_taken_0x28a700 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x28A704u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28A700u;
            // 0x28a704: 0x24630004  addiu       $v1, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28a700) {
            ctx->pc = 0x28A6E8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_28a6e8;
        }
    }
    ctx->pc = 0x28A708u;
label_28a708:
    // 0x28a708: 0x16200003  bnez        $s1, . + 4 + (0x3 << 2)
    ctx->pc = 0x28A708u;
    {
        const bool branch_taken_0x28a708 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x28A70Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28A708u;
            // 0x28a70c: 0xc0282d  daddu       $a1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28a708) {
            ctx->pc = 0x28A718u;
            goto label_28a718;
        }
    }
    ctx->pc = 0x28A710u;
    // 0x28a710: 0x10000050  b           . + 4 + (0x50 << 2)
    ctx->pc = 0x28A710u;
    {
        const bool branch_taken_0x28a710 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28A714u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28A710u;
            // 0x28a714: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28a710) {
            ctx->pc = 0x28A854u;
            goto label_28a854;
        }
    }
    ctx->pc = 0x28A718u;
label_28a718:
    // 0x28a718: 0xc04c0b4  jal         func_1302D0
    ctx->pc = 0x28A718u;
    SET_GPR_U32(ctx, 31, 0x28A720u);
    ctx->pc = 0x28A71Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x28A718u;
            // 0x28a71c: 0x27a40080  addiu       $a0, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1302D0u;
    if (runtime->hasFunction(0x1302D0u)) {
        auto targetFn = runtime->lookupFunction(0x1302D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28A720u; }
        if (ctx->pc != 0x28A720u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgInversMatrix__FPA4_fPA4_f_0x1302d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28A720u; }
        if (ctx->pc != 0x28A720u) { return; }
    }
    ctx->pc = 0x28A720u;
label_28a720:
    // 0x28a720: 0x111880  sll         $v1, $s1, 2
    ctx->pc = 0x28a720u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x28a724: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x28a724u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x28a728: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x28a728u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x28a72c: 0x27a50140  addiu       $a1, $sp, 0x140
    ctx->pc = 0x28a72cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
    // 0x28a730: 0xaec20000  sw          $v0, 0x0($s6)
    ctx->pc = 0x28a730u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 2));
    // 0x28a734: 0x111c80  sll         $v1, $s1, 18
    ctx->pc = 0x28a734u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 18));
    // 0x28a738: 0x3c026c00  lui         $v0, 0x6C00
    ctx->pc = 0x28a738u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)27648 << 16));
    // 0x28a73c: 0xaec00004  sw          $zero, 0x4($s6)
    ctx->pc = 0x28a73cu;
    WRITE32(ADD32(GPR_U32(ctx, 22), 4), GPR_U32(ctx, 0));
    // 0x28a740: 0x3442003c  ori         $v0, $v0, 0x3C
    ctx->pc = 0x28a740u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)60);
    // 0x28a744: 0xaec00008  sw          $zero, 0x8($s6)
    ctx->pc = 0x28a744u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 8), GPR_U32(ctx, 0));
    // 0x28a748: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x28a748u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x28a74c: 0xaec2000c  sw          $v0, 0xC($s6)
    ctx->pc = 0x28a74cu;
    WRITE32(ADD32(GPR_U32(ctx, 22), 12), GPR_U32(ctx, 2));
    // 0x28a750: 0x8ea20050  lw          $v0, 0x50($s5)
    ctx->pc = 0x28a750u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 80)));
    // 0x28a754: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x28a754u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x28a758: 0xc04dc0c  jal         func_137030
    ctx->pc = 0x28A758u;
    SET_GPR_U32(ctx, 31, 0x28A760u);
    ctx->pc = 0x28A75Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x28A758u;
            // 0x28a75c: 0x26100010  addiu       $s0, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x137030u;
    if (runtime->hasFunction(0x137030u)) {
        auto targetFn = runtime->lookupFunction(0x137030u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28A760u; }
        if (ctx->pc != 0x28A760u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetLWMatrix__8mgCFrameFPA4_f_0x137030(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28A760u; }
        if (ctx->pc != 0x28A760u) { return; }
    }
    ctx->pc = 0x28A760u;
label_28a760:
    // 0x28a760: 0x8ea30054  lw          $v1, 0x54($s5)
    ctx->pc = 0x28a760u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 84)));
    // 0x28a764: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x28a764u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x28a768: 0x8ea20058  lw          $v0, 0x58($s5)
    ctx->pc = 0x28a768u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 88)));
    // 0x28a76c: 0x27a50140  addiu       $a1, $sp, 0x140
    ctx->pc = 0x28a76cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
    // 0x28a770: 0x31980  sll         $v1, $v1, 6
    ctx->pc = 0x28a770u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 6));
    // 0x28a774: 0xc04c094  jal         func_130250
    ctx->pc = 0x28A774u;
    SET_GPR_U32(ctx, 31, 0x28A77Cu);
    ctx->pc = 0x28A778u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x28A774u;
            // 0x28a778: 0x433021  addu        $a2, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x130250u;
    if (runtime->hasFunction(0x130250u)) {
        auto targetFn = runtime->lookupFunction(0x130250u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28A77Cu; }
        if (ctx->pc != 0x28A77Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgMulMatrix__FPA4_fPA4_fPA4_f_0x130250(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28A77Cu; }
        if (ctx->pc != 0x28A77Cu) { return; }
    }
    ctx->pc = 0x28A77Cu;
label_28a77c:
    // 0x28a77c: 0x27a40100  addiu       $a0, $sp, 0x100
    ctx->pc = 0x28a77cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x28a780: 0xc04c0b4  jal         func_1302D0
    ctx->pc = 0x28A780u;
    SET_GPR_U32(ctx, 31, 0x28A788u);
    ctx->pc = 0x28A784u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x28A780u;
            // 0x28a784: 0x27a500c0  addiu       $a1, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1302D0u;
    if (runtime->hasFunction(0x1302D0u)) {
        auto targetFn = runtime->lookupFunction(0x1302D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28A788u; }
        if (ctx->pc != 0x28A788u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgInversMatrix__FPA4_fPA4_f_0x1302d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28A788u; }
        if (ctx->pc != 0x28A788u) { return; }
    }
    ctx->pc = 0x28A788u;
label_28a788:
    // 0x28a788: 0x11082a  slt         $at, $zero, $s1
    ctx->pc = 0x28a788u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
    // 0x28a78c: 0x10200027  beqz        $at, . + 4 + (0x27 << 2)
    ctx->pc = 0x28A78Cu;
    {
        const bool branch_taken_0x28a78c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x28A790u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28A78Cu;
            // 0x28a790: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28a78c) {
            ctx->pc = 0x28A82Cu;
            goto label_28a82c;
        }
    }
    ctx->pc = 0x28A794u;
    // 0x28a794: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x28a794u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_28a798:
    // 0x28a798: 0x2b41821  addu        $v1, $s5, $s4
    ctx->pc = 0x28a798u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 20)));
    // 0x28a79c: 0x8ea20050  lw          $v0, 0x50($s5)
    ctx->pc = 0x28a79cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 80)));
    // 0x28a7a0: 0x8c730080  lw          $s3, 0x80($v1)
    ctx->pc = 0x28a7a0u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 128)));
    // 0x28a7a4: 0x131880  sll         $v1, $s3, 2
    ctx->pc = 0x28a7a4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 19), 2));
    // 0x28a7a8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x28a7a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x28a7ac: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x28a7acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x28a7b0: 0x10800018  beqz        $a0, . + 4 + (0x18 << 2)
    ctx->pc = 0x28A7B0u;
    {
        const bool branch_taken_0x28a7b0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x28A7B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28A7B0u;
            // 0x28a7b4: 0x27a50200  addiu       $a1, $sp, 0x200 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 512));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28a7b0) {
            ctx->pc = 0x28A814u;
            goto label_28a814;
        }
    }
    ctx->pc = 0x28A7B8u;
    // 0x28a7b8: 0xc04dc0c  jal         func_137030
    ctx->pc = 0x28A7B8u;
    SET_GPR_U32(ctx, 31, 0x28A7C0u);
    ctx->pc = 0x137030u;
    if (runtime->hasFunction(0x137030u)) {
        auto targetFn = runtime->lookupFunction(0x137030u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28A7C0u; }
        if (ctx->pc != 0x28A7C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetLWMatrix__8mgCFrameFPA4_f_0x137030(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28A7C0u; }
        if (ctx->pc != 0x28A7C0u) { return; }
    }
    ctx->pc = 0x28A7C0u;
label_28a7c0:
    // 0x28a7c0: 0x8ea20058  lw          $v0, 0x58($s5)
    ctx->pc = 0x28a7c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 88)));
    // 0x28a7c4: 0x131980  sll         $v1, $s3, 6
    ctx->pc = 0x28a7c4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 19), 6));
    // 0x28a7c8: 0x27a40180  addiu       $a0, $sp, 0x180
    ctx->pc = 0x28a7c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
    // 0x28a7cc: 0x27a50140  addiu       $a1, $sp, 0x140
    ctx->pc = 0x28a7ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
    // 0x28a7d0: 0xc04c094  jal         func_130250
    ctx->pc = 0x28A7D0u;
    SET_GPR_U32(ctx, 31, 0x28A7D8u);
    ctx->pc = 0x28A7D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x28A7D0u;
            // 0x28a7d4: 0x433021  addu        $a2, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x130250u;
    if (runtime->hasFunction(0x130250u)) {
        auto targetFn = runtime->lookupFunction(0x130250u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28A7D8u; }
        if (ctx->pc != 0x28A7D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgMulMatrix__FPA4_fPA4_fPA4_f_0x130250(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28A7D8u; }
        if (ctx->pc != 0x28A7D8u) { return; }
    }
    ctx->pc = 0x28A7D8u;
label_28a7d8:
    // 0x28a7d8: 0x27a40180  addiu       $a0, $sp, 0x180
    ctx->pc = 0x28a7d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
    // 0x28a7dc: 0x27a50100  addiu       $a1, $sp, 0x100
    ctx->pc = 0x28a7dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x28a7e0: 0xc04c094  jal         func_130250
    ctx->pc = 0x28A7E0u;
    SET_GPR_U32(ctx, 31, 0x28A7E8u);
    ctx->pc = 0x28A7E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x28A7E0u;
            // 0x28a7e4: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x130250u;
    if (runtime->hasFunction(0x130250u)) {
        auto targetFn = runtime->lookupFunction(0x130250u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28A7E8u; }
        if (ctx->pc != 0x28A7E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgMulMatrix__FPA4_fPA4_fPA4_f_0x130250(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28A7E8u; }
        if (ctx->pc != 0x28A7E8u) { return; }
    }
    ctx->pc = 0x28A7E8u;
label_28a7e8:
    // 0x28a7e8: 0x27a401c0  addiu       $a0, $sp, 0x1C0
    ctx->pc = 0x28a7e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 448));
    // 0x28a7ec: 0xc04c0b4  jal         func_1302D0
    ctx->pc = 0x28A7ECu;
    SET_GPR_U32(ctx, 31, 0x28A7F4u);
    ctx->pc = 0x28A7F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x28A7ECu;
            // 0x28a7f0: 0x27a50180  addiu       $a1, $sp, 0x180 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1302D0u;
    if (runtime->hasFunction(0x1302D0u)) {
        auto targetFn = runtime->lookupFunction(0x1302D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28A7F4u; }
        if (ctx->pc != 0x28A7F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgInversMatrix__FPA4_fPA4_f_0x1302d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28A7F4u; }
        if (ctx->pc != 0x28A7F4u) { return; }
    }
    ctx->pc = 0x28A7F4u;
label_28a7f4:
    // 0x28a7f4: 0x27a40200  addiu       $a0, $sp, 0x200
    ctx->pc = 0x28a7f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 512));
    // 0x28a7f8: 0x27a50080  addiu       $a1, $sp, 0x80
    ctx->pc = 0x28a7f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x28a7fc: 0xc04c094  jal         func_130250
    ctx->pc = 0x28A7FCu;
    SET_GPR_U32(ctx, 31, 0x28A804u);
    ctx->pc = 0x28A800u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x28A7FCu;
            // 0x28a800: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x130250u;
    if (runtime->hasFunction(0x130250u)) {
        auto targetFn = runtime->lookupFunction(0x130250u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28A804u; }
        if (ctx->pc != 0x28A804u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgMulMatrix__FPA4_fPA4_fPA4_f_0x130250(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28A804u; }
        if (ctx->pc != 0x28A804u) { return; }
    }
    ctx->pc = 0x28A804u;
label_28a804:
    // 0x28a804: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x28a804u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28a808: 0x27a50200  addiu       $a1, $sp, 0x200
    ctx->pc = 0x28a808u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 512));
    // 0x28a80c: 0xc04c094  jal         func_130250
    ctx->pc = 0x28A80Cu;
    SET_GPR_U32(ctx, 31, 0x28A814u);
    ctx->pc = 0x28A810u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x28A80Cu;
            // 0x28a810: 0x27a601c0  addiu       $a2, $sp, 0x1C0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 448));
        ctx->in_delay_slot = false;
    ctx->pc = 0x130250u;
    if (runtime->hasFunction(0x130250u)) {
        auto targetFn = runtime->lookupFunction(0x130250u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28A814u; }
        if (ctx->pc != 0x28A814u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgMulMatrix__FPA4_fPA4_fPA4_f_0x130250(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28A814u; }
        if (ctx->pc != 0x28A814u) { return; }
    }
    ctx->pc = 0x28A814u;
label_28a814:
    // 0x28a814: 0x0  nop
    ctx->pc = 0x28a814u;
    // NOP
    // 0x28a818: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x28a818u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x28a81c: 0x251102a  slt         $v0, $s2, $s1
    ctx->pc = 0x28a81cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
    // 0x28a820: 0x26100040  addiu       $s0, $s0, 0x40
    ctx->pc = 0x28a820u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
    // 0x28a824: 0x1440ffdc  bnez        $v0, . + 4 + (-0x24 << 2)
    ctx->pc = 0x28A824u;
    {
        const bool branch_taken_0x28a824 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x28A828u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28A824u;
            // 0x28a828: 0x26940004  addiu       $s4, $s4, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28a824) {
            ctx->pc = 0x28A798u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_28a798;
        }
    }
    ctx->pc = 0x28A82Cu;
label_28a82c:
    // 0x28a82c: 0x0  nop
    ctx->pc = 0x28a82cu;
    // NOP
    // 0x28a830: 0x2161023  subu        $v0, $s0, $s6
    ctx->pc = 0x28a830u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 22)));
    // 0x28a834: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x28A834u;
    {
        const bool branch_taken_0x28a834 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x28A838u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28A834u;
            // 0x28a838: 0x21883  sra         $v1, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 2), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28a834) {
            ctx->pc = 0x28A844u;
            goto label_28a844;
        }
    }
    ctx->pc = 0x28A83Cu;
    // 0x28a83c: 0x24420003  addiu       $v0, $v0, 0x3
    ctx->pc = 0x28a83cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3));
    // 0x28a840: 0x21883  sra         $v1, $v0, 2
    ctx->pc = 0x28a840u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 2), 2));
label_28a844:
    // 0x28a844: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x28A844u;
    {
        const bool branch_taken_0x28a844 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x28A848u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28A844u;
            // 0x28a848: 0x31083  sra         $v0, $v1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28a844) {
            ctx->pc = 0x28A854u;
            goto label_28a854;
        }
    }
    ctx->pc = 0x28A84Cu;
    // 0x28a84c: 0x24620003  addiu       $v0, $v1, 0x3
    ctx->pc = 0x28a84cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 3));
    // 0x28a850: 0x21083  sra         $v0, $v0, 2
    ctx->pc = 0x28a850u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 2));
label_28a854:
    // 0x28a854: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x28a854u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x28a858: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x28a858u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x28a85c: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x28a85cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x28a860: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x28a860u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x28a864: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x28a864u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x28a868: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x28a868u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x28a86c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x28a86cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x28a870: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x28a870u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x28a874: 0x3e00008  jr          $ra
    ctx->pc = 0x28A874u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28A878u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28A874u;
            // 0x28a878: 0x27bd0240  addiu       $sp, $sp, 0x240 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 576));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x28A87Cu;
}
