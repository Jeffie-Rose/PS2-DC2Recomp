#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: GetPlaceParts__4CMapFP9mgVu0FBOXPP9CMapPartsi
// Address: 0x15d550 - 0x15d648
void GetPlaceParts__4CMapFP9mgVu0FBOXPP9CMapPartsi_0x15d550(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetPlaceParts__4CMapFP9mgVu0FBOXPP9CMapPartsi_0x15d550");
#endif

    switch (ctx->pc) {
        case 0x15d5a8u: goto label_15d5a8;
        case 0x15d5c4u: goto label_15d5c4;
        case 0x15d5dcu: goto label_15d5dc;
        default: break;
    }

    ctx->pc = 0x15d550u;

    // 0x15d550: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x15d550u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x15d554: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x15d554u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x15d558: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x15d558u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x15d55c: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x15d55cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x15d560: 0xe0b82d  daddu       $s7, $a3, $zero
    ctx->pc = 0x15d560u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15d564: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x15d564u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x15d568: 0xc0b02d  daddu       $s6, $a2, $zero
    ctx->pc = 0x15d568u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15d56c: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x15d56cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x15d570: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x15d570u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15d574: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x15d574u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x15d578: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x15d578u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15d57c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x15d57cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x15d580: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x15d580u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x15d584: 0x16800003  bnez        $s4, . + 4 + (0x3 << 2)
    ctx->pc = 0x15D584u;
    {
        const bool branch_taken_0x15d584 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 0));
        ctx->pc = 0x15D588u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15D584u;
            // 0x15d588: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15d584) {
            ctx->pc = 0x15D594u;
            goto label_15d594;
        }
    }
    ctx->pc = 0x15D58Cu;
    // 0x15d58c: 0x10000023  b           . + 4 + (0x23 << 2)
    ctx->pc = 0x15D58Cu;
    {
        const bool branch_taken_0x15d58c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15D590u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15D58Cu;
            // 0x15d590: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15d58c) {
            ctx->pc = 0x15D61Cu;
            goto label_15d61c;
        }
    }
    ctx->pc = 0x15D594u;
label_15d594:
    // 0x15d594: 0x8eb0032c  lw          $s0, 0x32C($s5)
    ctx->pc = 0x15d594u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 812)));
    // 0x15d598: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x15d598u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15d59c: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x15d59cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15d5a0: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x15D5A0u;
    {
        const bool branch_taken_0x15d5a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15D5A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15D5A0u;
            // 0x15d5a4: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15d5a0) {
            ctx->pc = 0x15D608u;
            goto label_15d608;
        }
    }
    ctx->pc = 0x15D5A8u;
label_15d5a8:
    // 0x15d5a8: 0x82020070  lb          $v0, 0x70($s0)
    ctx->pc = 0x15d5a8u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 112)));
    // 0x15d5ac: 0x401026  xor         $v0, $v0, $zero
    ctx->pc = 0x15d5acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 0));
    // 0x15d5b0: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x15d5b0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x15d5b4: 0x14400011  bnez        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x15D5B4u;
    {
        const bool branch_taken_0x15d5b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x15D5B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15D5B4u;
            // 0x15d5b8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15d5b4) {
            ctx->pc = 0x15D5FCu;
            goto label_15d5fc;
        }
    }
    ctx->pc = 0x15D5BCu;
    // 0x15d5bc: 0xc059c88  jal         func_167220
    ctx->pc = 0x15D5BCu;
    SET_GPR_U32(ctx, 31, 0x15D5C4u);
    ctx->pc = 0x15D5C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15D5BCu;
            // 0x15d5c0: 0x27a50090  addiu       $a1, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
    ctx->pc = 0x167220u;
    if (runtime->hasFunction(0x167220u)) {
        auto targetFn = runtime->lookupFunction(0x167220u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15D5C4u; }
        if (ctx->pc != 0x15D5C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetBoundBox__9CMapPartsFP9mgVu0FBOX_0x167220(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15D5C4u; }
        if (ctx->pc != 0x15D5C4u) { return; }
    }
    ctx->pc = 0x15D5C4u;
label_15d5c4:
    // 0x15d5c4: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x15D5C4u;
    {
        const bool branch_taken_0x15d5c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x15D5C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15D5C4u;
            // 0x15d5c8: 0x27a40090  addiu       $a0, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15d5c4) {
            ctx->pc = 0x15D5FCu;
            goto label_15d5fc;
        }
    }
    ctx->pc = 0x15D5CCu;
    // 0x15d5cc: 0x27a500a0  addiu       $a1, $sp, 0xA0
    ctx->pc = 0x15d5ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x15d5d0: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x15d5d0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15d5d4: 0xc04bca4  jal         func_12F290
    ctx->pc = 0x15D5D4u;
    SET_GPR_U32(ctx, 31, 0x15D5DCu);
    ctx->pc = 0x15D5D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15D5D4u;
            // 0x15d5d8: 0x26870010  addiu       $a3, $s4, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 20), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12F290u;
    if (runtime->hasFunction(0x12F290u)) {
        auto targetFn = runtime->lookupFunction(0x12F290u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15D5DCu; }
        if (ctx->pc != 0x15D5DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgClipBox__FPfPfPfPf_0x12f290(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15D5DCu; }
        if (ctx->pc != 0x15D5DCu) { return; }
    }
    ctx->pc = 0x15D5DCu;
label_15d5dc:
    // 0x15d5dc: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x15D5DCu;
    {
        const bool branch_taken_0x15d5dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x15d5dc) {
            ctx->pc = 0x15D5FCu;
            goto label_15d5fc;
        }
    }
    ctx->pc = 0x15D5E4u;
    // 0x15d5e4: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x15d5e4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x15d5e8: 0x2d31021  addu        $v0, $s6, $s3
    ctx->pc = 0x15d5e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 19)));
    // 0x15d5ec: 0x237082a  slt         $at, $s1, $s7
    ctx->pc = 0x15d5ecu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 23)) ? 1 : 0);
    // 0x15d5f0: 0xac500000  sw          $s0, 0x0($v0)
    ctx->pc = 0x15d5f0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 16));
    // 0x15d5f4: 0x10200008  beqz        $at, . + 4 + (0x8 << 2)
    ctx->pc = 0x15D5F4u;
    {
        const bool branch_taken_0x15d5f4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x15D5F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15D5F4u;
            // 0x15d5f8: 0x26730004  addiu       $s3, $s3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15d5f4) {
            ctx->pc = 0x15D618u;
            goto label_15d618;
        }
    }
    ctx->pc = 0x15D5FCu;
label_15d5fc:
    // 0x15d5fc: 0x0  nop
    ctx->pc = 0x15d5fcu;
    // NOP
    // 0x15d600: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x15d600u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x15d604: 0x26100310  addiu       $s0, $s0, 0x310
    ctx->pc = 0x15d604u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 784));
label_15d608:
    // 0x15d608: 0x8ea20330  lw          $v0, 0x330($s5)
    ctx->pc = 0x15d608u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 816)));
    // 0x15d60c: 0x242102a  slt         $v0, $s2, $v0
    ctx->pc = 0x15d60cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x15d610: 0x1440ffe5  bnez        $v0, . + 4 + (-0x1B << 2)
    ctx->pc = 0x15D610u;
    {
        const bool branch_taken_0x15d610 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x15d610) {
            ctx->pc = 0x15D5A8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_15d5a8;
        }
    }
    ctx->pc = 0x15D618u;
label_15d618:
    // 0x15d618: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x15d618u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_15d61c:
    // 0x15d61c: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x15d61cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x15d620: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x15d620u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x15d624: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x15d624u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x15d628: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x15d628u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x15d62c: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x15d62cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x15d630: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x15d630u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x15d634: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x15d634u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x15d638: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x15d638u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x15d63c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x15d63cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x15d640: 0x3e00008  jr          $ra
    ctx->pc = 0x15D640u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15D644u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15D640u;
            // 0x15d644: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x15D648u;
}
