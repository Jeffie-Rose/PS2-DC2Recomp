#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: ChangeWeight__FP8Mot_ListP9mgCMemoryPUciP12tagFRAME_INFP12mgCVisualMDTP8mgCFrameP8mgCFrame
// Address: 0x14d510 - 0x14d850
void ChangeWeight__FP8Mot_ListP9mgCMemoryPUciP12tagFRAME_INFP12mgCVisualMDTP8mgCFrameP8mgCFrame_0x14d510(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ChangeWeight__FP8Mot_ListP9mgCMemoryPUciP12tagFRAME_INFP12mgCVisualMDTP8mgCFrameP8mgCFrame_0x14d510");
#endif

    switch (ctx->pc) {
        case 0x14d55cu: goto label_14d55c;
        case 0x14d598u: goto label_14d598;
        case 0x14d5a8u: goto label_14d5a8;
        case 0x14d5bcu: goto label_14d5bc;
        case 0x14d5c8u: goto label_14d5c8;
        case 0x14d5fcu: goto label_14d5fc;
        case 0x14d62cu: goto label_14d62c;
        case 0x14d678u: goto label_14d678;
        case 0x14d6a4u: goto label_14d6a4;
        case 0x14d6d4u: goto label_14d6d4;
        case 0x14d704u: goto label_14d704;
        case 0x14d718u: goto label_14d718;
        case 0x14d72cu: goto label_14d72c;
        case 0x14d764u: goto label_14d764;
        case 0x14d770u: goto label_14d770;
        case 0x14d790u: goto label_14d790;
        default: break;
    }

    ctx->pc = 0x14d510u;

    // 0x14d510: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x14d510u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x14d514: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x14d514u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x14d518: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x14d518u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
    // 0x14d51c: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x14d51cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x14d520: 0x140f02d  daddu       $fp, $t2, $zero
    ctx->pc = 0x14d520u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14d524: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x14d524u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x14d528: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x14d528u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x14d52c: 0xe0b02d  daddu       $s6, $a3, $zero
    ctx->pc = 0x14d52cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14d530: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x14d530u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x14d534: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x14d534u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14d538: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x14d538u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x14d53c: 0x120a02d  daddu       $s4, $t1, $zero
    ctx->pc = 0x14d53cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14d540: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x14d540u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x14d544: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x14d544u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x14d548: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x14d548u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x14d54c: 0xafa800ac  sw          $t0, 0xAC($sp)
    ctx->pc = 0x14d54cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 172), GPR_U32(ctx, 8));
    // 0x14d550: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x14d550u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14d554: 0x1080000d  beqz        $a0, . + 4 + (0xD << 2)
    ctx->pc = 0x14D554u;
    {
        const bool branch_taken_0x14d554 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x14D558u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14D554u;
            // 0x14d558: 0xafab00a8  sw          $t3, 0xA8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 168), GPR_U32(ctx, 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14d554) {
            ctx->pc = 0x14D58Cu;
            goto label_14d58c;
        }
    }
    ctx->pc = 0x14D55Cu;
label_14d55c:
    // 0x14d55c: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x14d55cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x14d560: 0x16c20004  bne         $s6, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x14D560u;
    {
        const bool branch_taken_0x14d560 = (GPR_U64(ctx, 22) != GPR_U64(ctx, 2));
        if (branch_taken_0x14d560) {
            ctx->pc = 0x14D574u;
            goto label_14d574;
        }
    }
    ctx->pc = 0x14D568u;
    // 0x14d568: 0x8c820018  lw          $v0, 0x18($a0)
    ctx->pc = 0x14d568u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x14d56c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x14D56Cu;
    {
        const bool branch_taken_0x14d56c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14D570u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14D56Cu;
            // 0x14d570: 0xae020018  sw          $v0, 0x18($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14d56c) {
            ctx->pc = 0x14D57Cu;
            goto label_14d57c;
        }
    }
    ctx->pc = 0x14D574u;
label_14d574:
    // 0x14d574: 0x0  nop
    ctx->pc = 0x14d574u;
    // NOP
    // 0x14d578: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x14d578u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_14d57c:
    // 0x14d57c: 0x0  nop
    ctx->pc = 0x14d57cu;
    // NOP
    // 0x14d580: 0x8c840018  lw          $a0, 0x18($a0)
    ctx->pc = 0x14d580u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x14d584: 0x1480fff5  bnez        $a0, . + 4 + (-0xB << 2)
    ctx->pc = 0x14D584u;
    {
        const bool branch_taken_0x14d584 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x14d584) {
            ctx->pc = 0x14D55Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_14d55c;
        }
    }
    ctx->pc = 0x14D58Cu;
label_14d58c:
    // 0x14d58c: 0x0  nop
    ctx->pc = 0x14d58cu;
    // NOP
    // 0x14d590: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x14d590u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14d594: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x14d594u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_14d598:
    // 0x14d598: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x14d598u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14d59c: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x14d59cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x14d5a0: 0xc04e748  jal         func_139D20
    ctx->pc = 0x14D5A0u;
    SET_GPR_U32(ctx, 31, 0x14D5A8u);
    ctx->pc = 0x14D5A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14D5A0u;
            // 0x14d5a4: 0x240b82d  daddu       $s7, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139D20u;
    if (runtime->hasFunction(0x139D20u)) {
        auto targetFn = runtime->lookupFunction(0x139D20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14D5A8u; }
        if (ctx->pc != 0x14D5A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Alloc__9mgCMemoryFi_0x139d20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14D5A8u; }
        if (ctx->pc != 0x14D5A8u) { return; }
    }
    ctx->pc = 0x14D5A8u;
label_14d5a8:
    // 0x14d5a8: 0xac560000  sw          $s6, 0x0($v0)
    ctx->pc = 0x14d5a8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 22));
    // 0x14d5ac: 0x8e450004  lw          $a1, 0x4($s2)
    ctx->pc = 0x14d5acu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x14d5b0: 0x8fa400a8  lw          $a0, 0xA8($sp)
    ctx->pc = 0x14d5b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x14d5b4: 0xc04d9ec  jal         func_1367B0
    ctx->pc = 0x14D5B4u;
    SET_GPR_U32(ctx, 31, 0x14D5BCu);
    ctx->pc = 0x14D5B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14D5B4u;
            // 0x14d5b8: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1367B0u;
    if (runtime->hasFunction(0x1367B0u)) {
        auto targetFn = runtime->lookupFunction(0x1367B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14D5BCu; }
        if (ctx->pc != 0x14D5BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetFrame__8mgCFrameFi_0x1367b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14D5BCu; }
        if (ctx->pc != 0x14D5BCu) { return; }
    }
    ctx->pc = 0x14D5BCu;
label_14d5bc:
    // 0x14d5bc: 0x8c450050  lw          $a1, 0x50($v0)
    ctx->pc = 0x14d5bcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 80)));
    // 0x14d5c0: 0xc04ddd4  jal         func_137750
    ctx->pc = 0x14D5C0u;
    SET_GPR_U32(ctx, 31, 0x14D5C8u);
    ctx->pc = 0x14D5C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14D5C0u;
            // 0x14d5c4: 0x3c0202d  daddu       $a0, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x137750u;
    if (runtime->hasFunction(0x137750u)) {
        auto targetFn = runtime->lookupFunction(0x137750u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14D5C8u; }
        if (ctx->pc != 0x14D5C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SearchFrameID__8mgCFrameFPc_0x137750(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14D5C8u; }
        if (ctx->pc != 0x14D5C8u) { return; }
    }
    ctx->pc = 0x14D5C8u;
label_14d5c8:
    // 0x14d5c8: 0xae620004  sw          $v0, 0x4($s3)
    ctx->pc = 0x14d5c8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 2));
    // 0x14d5cc: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x14d5ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14d5d0: 0x8e420010  lw          $v0, 0x10($s2)
    ctx->pc = 0x14d5d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
    // 0x14d5d4: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x14d5d4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14d5d8: 0xae62000c  sw          $v0, 0xC($s3)
    ctx->pc = 0x14d5d8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 12), GPR_U32(ctx, 2));
    // 0x14d5dc: 0x8e420008  lw          $v0, 0x8($s2)
    ctx->pc = 0x14d5dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x14d5e0: 0xae620008  sw          $v0, 0x8($s3)
    ctx->pc = 0x14d5e0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 8), GPR_U32(ctx, 2));
    // 0x14d5e4: 0x26520020  addiu       $s2, $s2, 0x20
    ctx->pc = 0x14d5e4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
    // 0x14d5e8: 0x8e62000c  lw          $v0, 0xC($s3)
    ctx->pc = 0x14d5e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
    // 0x14d5ec: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x14d5ecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14d5f0: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x14d5f0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x14d5f4: 0xc05350c  jal         func_14D430
    ctx->pc = 0x14D5F4u;
    SET_GPR_U32(ctx, 31, 0x14D5FCu);
    ctx->pc = 0x14D5F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14D5F4u;
            // 0x14d5f8: 0x2429021  addu        $s2, $s2, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14D430u;
    if (runtime->hasFunction(0x14D430u)) {
        auto targetFn = runtime->lookupFunction(0x14D430u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14D5FCu; }
        if (ctx->pc != 0x14D5FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetKeyFrame__FP8Mot_ListP20FRAME_VECTOR_EX_DATAP9mgCMemory_0x14d430(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14D5FCu; }
        if (ctx->pc != 0x14D5FCu) { return; }
    }
    ctx->pc = 0x14D5FCu;
label_14d5fc:
    // 0x14d5fc: 0x16200003  bnez        $s1, . + 4 + (0x3 << 2)
    ctx->pc = 0x14D5FCu;
    {
        const bool branch_taken_0x14d5fc = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x14d5fc) {
            ctx->pc = 0x14D60Cu;
            goto label_14d60c;
        }
    }
    ctx->pc = 0x14D604u;
    // 0x14d604: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x14D604u;
    {
        const bool branch_taken_0x14d604 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14D608u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14D604u;
            // 0x14d608: 0xae600018  sw          $zero, 0x18($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 24), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14d604) {
            ctx->pc = 0x14D614u;
            goto label_14d614;
        }
    }
    ctx->pc = 0x14D60Cu;
label_14d60c:
    // 0x14d60c: 0x0  nop
    ctx->pc = 0x14d60cu;
    // NOP
    // 0x14d610: 0xae710018  sw          $s1, 0x18($s3)
    ctx->pc = 0x14d610u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 24), GPR_U32(ctx, 17));
label_14d614:
    // 0x14d614: 0x0  nop
    ctx->pc = 0x14d614u;
    // NOP
    // 0x14d618: 0x9ee30014  lwu         $v1, 0x14($s7)
    ctx->pc = 0x14d618u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 23), 20)));
    // 0x14d61c: 0x1460ffde  bnez        $v1, . + 4 + (-0x22 << 2)
    ctx->pc = 0x14D61Cu;
    {
        const bool branch_taken_0x14d61c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x14D620u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14D61Cu;
            // 0x14d620: 0x260882d  daddu       $s1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14d61c) {
            ctx->pc = 0x14D598u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_14d598;
        }
    }
    ctx->pc = 0x14D624u;
    // 0x14d624: 0x12600009  beqz        $s3, . + 4 + (0x9 << 2)
    ctx->pc = 0x14D624u;
    {
        const bool branch_taken_0x14d624 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x14D628u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14D624u;
            // 0x14d628: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14d624) {
            ctx->pc = 0x14D64Cu;
            goto label_14d64c;
        }
    }
    ctx->pc = 0x14D62Cu;
label_14d62c:
    // 0x14d62c: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x14d62cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14d630: 0x220182d  daddu       $v1, $s1, $zero
    ctx->pc = 0x14d630u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14d634: 0x8e310018  lw          $s1, 0x18($s1)
    ctx->pc = 0x14d634u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
    // 0x14d638: 0xac640018  sw          $a0, 0x18($v1)
    ctx->pc = 0x14d638u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 24), GPR_U32(ctx, 4));
    // 0x14d63c: 0x0  nop
    ctx->pc = 0x14d63cu;
    // NOP
    // 0x14d640: 0x0  nop
    ctx->pc = 0x14d640u;
    // NOP
    // 0x14d644: 0x1620fff9  bnez        $s1, . + 4 + (-0x7 << 2)
    ctx->pc = 0x14D644u;
    {
        const bool branch_taken_0x14d644 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x14d644) {
            ctx->pc = 0x14D62Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_14d62c;
        }
    }
    ctx->pc = 0x14D64Cu;
label_14d64c:
    // 0x14d64c: 0x0  nop
    ctx->pc = 0x14d64cu;
    // NOP
    // 0x14d650: 0x12800072  beqz        $s4, . + 4 + (0x72 << 2)
    ctx->pc = 0x14D650u;
    {
        const bool branch_taken_0x14d650 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x14D654u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14D650u;
            // 0x14d654: 0xae030018  sw          $v1, 0x18($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14d650) {
            ctx->pc = 0x14D81Cu;
            goto label_14d81c;
        }
    }
    ctx->pc = 0x14D658u;
    // 0x14d658: 0x8e820020  lw          $v0, 0x20($s4)
    ctx->pc = 0x14d658u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 32)));
    // 0x14d65c: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x14d65cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x14d660: 0x8e900030  lw          $s0, 0x30($s4)
    ctx->pc = 0x14d660u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 48)));
    // 0x14d664: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x14d664u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14d668: 0x8e910034  lw          $s1, 0x34($s4)
    ctx->pc = 0x14d668u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 52)));
    // 0x14d66c: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x14d66cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x14d670: 0xc04e748  jal         func_139D20
    ctx->pc = 0x14D670u;
    SET_GPR_U32(ctx, 31, 0x14D678u);
    ctx->pc = 0x14D674u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14D670u;
            // 0x14d674: 0x24450001  addiu       $a1, $v0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139D20u;
    if (runtime->hasFunction(0x139D20u)) {
        auto targetFn = runtime->lookupFunction(0x139D20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14D678u; }
        if (ctx->pc != 0x14D678u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Alloc__9mgCMemoryFi_0x139d20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14D678u; }
        if (ctx->pc != 0x14D678u) { return; }
    }
    ctx->pc = 0x14D678u;
label_14d678:
    // 0x14d678: 0x8fa300ac  lw          $v1, 0xAC($sp)
    ctx->pc = 0x14d678u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 172)));
    // 0x14d67c: 0x169140  sll         $s2, $s6, 5
    ctx->pc = 0x14d67cu;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 22), 5));
    // 0x14d680: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x14d680u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14d684: 0x2431821  addu        $v1, $s2, $v1
    ctx->pc = 0x14d684u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
    // 0x14d688: 0xac620010  sw          $v0, 0x10($v1)
    ctx->pc = 0x14d688u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 16), GPR_U32(ctx, 2));
    // 0x14d68c: 0x24730010  addiu       $s3, $v1, 0x10
    ctx->pc = 0x14d68cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x14d690: 0x8e820024  lw          $v0, 0x24($s4)
    ctx->pc = 0x14d690u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 36)));
    // 0x14d694: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x14d694u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x14d698: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x14d698u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x14d69c: 0xc04e748  jal         func_139D20
    ctx->pc = 0x14D69Cu;
    SET_GPR_U32(ctx, 31, 0x14D6A4u);
    ctx->pc = 0x14D6A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14D69Cu;
            // 0x14d6a0: 0x24450001  addiu       $a1, $v0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139D20u;
    if (runtime->hasFunction(0x139D20u)) {
        auto targetFn = runtime->lookupFunction(0x139D20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14D6A4u; }
        if (ctx->pc != 0x14D6A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Alloc__9mgCMemoryFi_0x139d20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14D6A4u; }
        if (ctx->pc != 0x14D6A4u) { return; }
    }
    ctx->pc = 0x14D6A4u;
label_14d6a4:
    // 0x14d6a4: 0x8fa300ac  lw          $v1, 0xAC($sp)
    ctx->pc = 0x14d6a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 172)));
    // 0x14d6a8: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x14d6a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14d6ac: 0x2431821  addu        $v1, $s2, $v1
    ctx->pc = 0x14d6acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
    // 0x14d6b0: 0xac620014  sw          $v0, 0x14($v1)
    ctx->pc = 0x14d6b0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 20), GPR_U32(ctx, 2));
    // 0x14d6b4: 0x24750014  addiu       $s5, $v1, 0x14
    ctx->pc = 0x14d6b4u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 3), 20));
    // 0x14d6b8: 0x8e830020  lw          $v1, 0x20($s4)
    ctx->pc = 0x14d6b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 32)));
    // 0x14d6bc: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x14d6bcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x14d6c0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x14d6c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x14d6c4: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x14d6c4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x14d6c8: 0x21102  srl         $v0, $v0, 4
    ctx->pc = 0x14d6c8u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 4));
    // 0x14d6cc: 0xc04e748  jal         func_139D20
    ctx->pc = 0x14D6CCu;
    SET_GPR_U32(ctx, 31, 0x14D6D4u);
    ctx->pc = 0x14D6D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14D6CCu;
            // 0x14d6d0: 0x24450001  addiu       $a1, $v0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139D20u;
    if (runtime->hasFunction(0x139D20u)) {
        auto targetFn = runtime->lookupFunction(0x139D20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14D6D4u; }
        if (ctx->pc != 0x14D6D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Alloc__9mgCMemoryFi_0x139d20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14D6D4u; }
        if (ctx->pc != 0x14D6D4u) { return; }
    }
    ctx->pc = 0x14D6D4u;
label_14d6d4:
    // 0x14d6d4: 0x8fa300ac  lw          $v1, 0xAC($sp)
    ctx->pc = 0x14d6d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 172)));
    // 0x14d6d8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x14d6d8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14d6dc: 0x2431821  addu        $v1, $s2, $v1
    ctx->pc = 0x14d6dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
    // 0x14d6e0: 0xac62000c  sw          $v0, 0xC($v1)
    ctx->pc = 0x14d6e0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 2));
    // 0x14d6e4: 0x8e820020  lw          $v0, 0x20($s4)
    ctx->pc = 0x14d6e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 32)));
    // 0x14d6e8: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x14d6e8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
    // 0x14d6ec: 0x8e820024  lw          $v0, 0x24($s4)
    ctx->pc = 0x14d6ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 36)));
    // 0x14d6f0: 0xac620008  sw          $v0, 0x8($v1)
    ctx->pc = 0x14d6f0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 2));
    // 0x14d6f4: 0x8e820020  lw          $v0, 0x20($s4)
    ctx->pc = 0x14d6f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 32)));
    // 0x14d6f8: 0x8e640000  lw          $a0, 0x0($s3)
    ctx->pc = 0x14d6f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x14d6fc: 0xc049c18  jal         func_127060
    ctx->pc = 0x14D6FCu;
    SET_GPR_U32(ctx, 31, 0x14D704u);
    ctx->pc = 0x14D700u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14D6FCu;
            // 0x14d700: 0x23100  sll         $a2, $v0, 4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x127060u;
    if (runtime->hasFunction(0x127060u)) {
        auto targetFn = runtime->lookupFunction(0x127060u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14D704u; }
        if (ctx->pc != 0x14D704u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        memcpy_0x127060(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14D704u; }
        if (ctx->pc != 0x14D704u) { return; }
    }
    ctx->pc = 0x14D704u;
label_14d704:
    // 0x14d704: 0x8e820024  lw          $v0, 0x24($s4)
    ctx->pc = 0x14d704u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 36)));
    // 0x14d708: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x14d708u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14d70c: 0x8ea40000  lw          $a0, 0x0($s5)
    ctx->pc = 0x14d70cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x14d710: 0xc049c18  jal         func_127060
    ctx->pc = 0x14D710u;
    SET_GPR_U32(ctx, 31, 0x14D718u);
    ctx->pc = 0x14D714u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14D710u;
            // 0x14d714: 0x23100  sll         $a2, $v0, 4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x127060u;
    if (runtime->hasFunction(0x127060u)) {
        auto targetFn = runtime->lookupFunction(0x127060u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14D718u; }
        if (ctx->pc != 0x14D718u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        memcpy_0x127060(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14D718u; }
        if (ctx->pc != 0x14D718u) { return; }
    }
    ctx->pc = 0x14D718u;
label_14d718:
    // 0x14d718: 0x8fa300ac  lw          $v1, 0xAC($sp)
    ctx->pc = 0x14d718u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 172)));
    // 0x14d71c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x14d71cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14d720: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x14d720u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14d724: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x14D724u;
    {
        const bool branch_taken_0x14d724 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14D728u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14D724u;
            // 0x14d728: 0x722021  addu        $a0, $v1, $s2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14d724) {
            ctx->pc = 0x14D740u;
            goto label_14d740;
        }
    }
    ctx->pc = 0x14D72Cu;
label_14d72c:
    // 0x14d72c: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x14d72cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x14d730: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x14d730u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x14d734: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x14d734u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x14d738: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x14d738u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
    // 0x14d73c: 0x24c60030  addiu       $a2, $a2, 0x30
    ctx->pc = 0x14d73cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 48));
label_14d740:
    // 0x14d740: 0x8e830020  lw          $v1, 0x20($s4)
    ctx->pc = 0x14d740u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 32)));
    // 0x14d744: 0xa3182a  slt         $v1, $a1, $v1
    ctx->pc = 0x14d744u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x14d748: 0x1460fff8  bnez        $v1, . + 4 + (-0x8 << 2)
    ctx->pc = 0x14D748u;
    {
        const bool branch_taken_0x14d748 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x14d748) {
            ctx->pc = 0x14D72Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_14d72c;
        }
    }
    ctx->pc = 0x14D750u;
    // 0x14d750: 0x8e830048  lw          $v1, 0x48($s4)
    ctx->pc = 0x14d750u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 72)));
    // 0x14d754: 0x10600031  beqz        $v1, . + 4 + (0x31 << 2)
    ctx->pc = 0x14D754u;
    {
        const bool branch_taken_0x14d754 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x14d754) {
            ctx->pc = 0x14D81Cu;
            goto label_14d81c;
        }
    }
    ctx->pc = 0x14D75Cu;
    // 0x14d75c: 0x8fa400ac  lw          $a0, 0xAC($sp)
    ctx->pc = 0x14d75cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 172)));
    // 0x14d760: 0x924821  addu        $t1, $a0, $s2
    ctx->pc = 0x14d760u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 18)));
label_14d764:
    // 0x14d764: 0x8c640004  lw          $a0, 0x4($v1)
    ctx->pc = 0x14d764u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x14d768: 0x10800028  beqz        $a0, . + 4 + (0x28 << 2)
    ctx->pc = 0x14D768u;
    {
        const bool branch_taken_0x14d768 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x14d768) {
            ctx->pc = 0x14D80Cu;
            goto label_14d80c;
        }
    }
    ctx->pc = 0x14D770u;
label_14d770:
    // 0x14d770: 0x8c670004  lw          $a3, 0x4($v1)
    ctx->pc = 0x14d770u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x14d774: 0x8c85000c  lw          $a1, 0xC($a0)
    ctx->pc = 0x14d774u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x14d778: 0x94e70000  lhu         $a3, 0x0($a3)
    ctx->pc = 0x14d778u;
    SET_GPR_U32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x14d77c: 0x30e70200  andi        $a3, $a3, 0x200
    ctx->pc = 0x14d77cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)512);
    // 0x14d780: 0x14e00022  bnez        $a3, . + 4 + (0x22 << 2)
    ctx->pc = 0x14D780u;
    {
        const bool branch_taken_0x14d780 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        ctx->pc = 0x14D784u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14D780u;
            // 0x14d784: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14d780) {
            ctx->pc = 0x14D80Cu;
            goto label_14d80c;
        }
    }
    ctx->pc = 0x14D788u;
    // 0x14d788: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x14D788u;
    {
        const bool branch_taken_0x14d788 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x14d788) {
            ctx->pc = 0x14D7F0u;
            goto label_14d7f0;
        }
    }
    ctx->pc = 0x14D790u;
label_14d790:
    // 0x14d790: 0x63880  sll         $a3, $a2, 2
    ctx->pc = 0x14d790u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x14d794: 0xa73821  addu        $a3, $a1, $a3
    ctx->pc = 0x14d794u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 7)));
    // 0x14d798: 0x848a0002  lh          $t2, 0x2($a0)
    ctx->pc = 0x14d798u;
    SET_GPR_S32(ctx, 10, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x14d79c: 0x8ceb0000  lw          $t3, 0x0($a3)
    ctx->pc = 0x14d79cu;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x14d7a0: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x14d7a0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x14d7a4: 0x254affff  addiu       $t2, $t2, -0x1
    ctx->pc = 0x14d7a4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4294967295));
    // 0x14d7a8: 0x63880  sll         $a3, $a2, 2
    ctx->pc = 0x14d7a8u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x14d7ac: 0xb4040  sll         $t0, $t3, 1
    ctx->pc = 0x14d7acu;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 11), 1));
    // 0x14d7b0: 0xa73821  addu        $a3, $a1, $a3
    ctx->pc = 0x14d7b0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 7)));
    // 0x14d7b4: 0x10b4021  addu        $t0, $t0, $t3
    ctx->pc = 0x14d7b4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 11)));
    // 0x14d7b8: 0x8cec0000  lw          $t4, 0x0($a3)
    ctx->pc = 0x14d7b8u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x14d7bc: 0xca3021  addu        $a2, $a2, $t2
    ctx->pc = 0x14d7bcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 10)));
    // 0x14d7c0: 0x85100  sll         $t2, $t0, 4
    ctx->pc = 0x14d7c0u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 8), 4));
    // 0x14d7c4: 0x8d27000c  lw          $a3, 0xC($t1)
    ctx->pc = 0x14d7c4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 12)));
    // 0x14d7c8: 0xea4021  addu        $t0, $a3, $t2
    ctx->pc = 0x14d7c8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 10)));
    // 0x14d7cc: 0x8d070000  lw          $a3, 0x0($t0)
    ctx->pc = 0x14d7ccu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x14d7d0: 0x73880  sll         $a3, $a3, 2
    ctx->pc = 0x14d7d0u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
    // 0x14d7d4: 0x1073821  addu        $a3, $t0, $a3
    ctx->pc = 0x14d7d4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 7)));
    // 0x14d7d8: 0xacec0004  sw          $t4, 0x4($a3)
    ctx->pc = 0x14d7d8u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 12));
    // 0x14d7dc: 0x8d27000c  lw          $a3, 0xC($t1)
    ctx->pc = 0x14d7dcu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 12)));
    // 0x14d7e0: 0xea4021  addu        $t0, $a3, $t2
    ctx->pc = 0x14d7e0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 10)));
    // 0x14d7e4: 0x8d070000  lw          $a3, 0x0($t0)
    ctx->pc = 0x14d7e4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x14d7e8: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x14d7e8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x14d7ec: 0xad070000  sw          $a3, 0x0($t0)
    ctx->pc = 0x14d7ecu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 7));
label_14d7f0:
    // 0x14d7f0: 0x84870006  lh          $a3, 0x6($a0)
    ctx->pc = 0x14d7f0u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 6)));
    // 0x14d7f4: 0xc7382a  slt         $a3, $a2, $a3
    ctx->pc = 0x14d7f4u;
    SET_GPR_U64(ctx, 7, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
    // 0x14d7f8: 0x14e0ffe5  bnez        $a3, . + 4 + (-0x1B << 2)
    ctx->pc = 0x14D7F8u;
    {
        const bool branch_taken_0x14d7f8 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        if (branch_taken_0x14d7f8) {
            ctx->pc = 0x14D790u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_14d790;
        }
    }
    ctx->pc = 0x14D800u;
    // 0x14d800: 0x8c840010  lw          $a0, 0x10($a0)
    ctx->pc = 0x14d800u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x14d804: 0x1480ffda  bnez        $a0, . + 4 + (-0x26 << 2)
    ctx->pc = 0x14D804u;
    {
        const bool branch_taken_0x14d804 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x14d804) {
            ctx->pc = 0x14D770u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_14d770;
        }
    }
    ctx->pc = 0x14D80Cu;
label_14d80c:
    // 0x14d80c: 0x0  nop
    ctx->pc = 0x14d80cu;
    // NOP
    // 0x14d810: 0x8c630008  lw          $v1, 0x8($v1)
    ctx->pc = 0x14d810u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x14d814: 0x1460ffd3  bnez        $v1, . + 4 + (-0x2D << 2)
    ctx->pc = 0x14D814u;
    {
        const bool branch_taken_0x14d814 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x14d814) {
            ctx->pc = 0x14D764u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_14d764;
        }
    }
    ctx->pc = 0x14D81Cu;
label_14d81c:
    // 0x14d81c: 0x0  nop
    ctx->pc = 0x14d81cu;
    // NOP
    // 0x14d820: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x14d820u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x14d824: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x14d824u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x14d828: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x14d828u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x14d82c: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x14d82cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x14d830: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x14d830u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x14d834: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x14d834u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x14d838: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x14d838u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x14d83c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x14d83cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x14d840: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x14d840u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x14d844: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x14d844u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x14d848: 0x3e00008  jr          $ra
    ctx->pc = 0x14D848u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14D84Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14D848u;
            // 0x14d84c: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x14D850u;
}
