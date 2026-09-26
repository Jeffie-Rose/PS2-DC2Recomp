#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: AttachPictTex__FiPP10mgCTextureP17USER_PICTURE_INFOi
// Address: 0x1fe560 - 0x1fe690
void AttachPictTex__FiPP10mgCTextureP17USER_PICTURE_INFOi_0x1fe560(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("AttachPictTex__FiPP10mgCTextureP17USER_PICTURE_INFOi_0x1fe560");
#endif

    switch (ctx->pc) {
        case 0x1fe5c8u: goto label_1fe5c8;
        case 0x1fe5dcu: goto label_1fe5dc;
        case 0x1fe5ecu: goto label_1fe5ec;
        case 0x1fe618u: goto label_1fe618;
        case 0x1fe628u: goto label_1fe628;
        default: break;
    }

    ctx->pc = 0x1fe560u;

    // 0x1fe560: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x1fe560u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
    // 0x1fe564: 0x24030032  addiu       $v1, $zero, 0x32
    ctx->pc = 0x1fe564u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
    // 0x1fe568: 0xffbf00a0  sd          $ra, 0xA0($sp)
    ctx->pc = 0x1fe568u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
    // 0x1fe56c: 0x7fbe0090  sq          $fp, 0x90($sp)
    ctx->pc = 0x1fe56cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 30));
    // 0x1fe570: 0x7fb70080  sq          $s7, 0x80($sp)
    ctx->pc = 0x1fe570u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 23));
    // 0x1fe574: 0xc0f02d  daddu       $fp, $a2, $zero
    ctx->pc = 0x1fe574u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fe578: 0x7fb60070  sq          $s6, 0x70($sp)
    ctx->pc = 0x1fe578u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 22));
    // 0x1fe57c: 0xa0b82d  daddu       $s7, $a1, $zero
    ctx->pc = 0x1fe57cu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fe580: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x1fe580u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
    // 0x1fe584: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x1fe584u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fe588: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x1fe588u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
    // 0x1fe58c: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x1fe58cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fe590: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x1fe590u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x1fe594: 0xe0a02d  daddu       $s4, $a3, $zero
    ctx->pc = 0x1fe594u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fe598: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x1fe598u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x1fe59c: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x1fe59cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x1fe5a0: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1fe5a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1fe5a4: 0x3c100038  lui         $s0, 0x38
    ctx->pc = 0x1fe5a4u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)56 << 16));
    // 0x1fe5a8: 0x16830002  bne         $s4, $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x1FE5A8u;
    {
        const bool branch_taken_0x1fe5a8 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 3));
        ctx->pc = 0x1FE5ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FE5A8u;
            // 0x1fe5ac: 0x26101ef0  addiu       $s0, $s0, 0x1EF0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 7920));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fe5a8) {
            ctx->pc = 0x1FE5B4u;
            goto label_1fe5b4;
        }
    }
    ctx->pc = 0x1FE5B0u;
    // 0x1fe5b0: 0x60b02d  daddu       $s6, $v1, $zero
    ctx->pc = 0x1fe5b0u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_1fe5b4:
    // 0x1fe5b4: 0x14082a  slt         $at, $zero, $s4
    ctx->pc = 0x1fe5b4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 20)) ? 1 : 0);
    // 0x1fe5b8: 0x10200028  beqz        $at, . + 4 + (0x28 << 2)
    ctx->pc = 0x1FE5B8u;
    {
        const bool branch_taken_0x1fe5b8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FE5BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FE5B8u;
            // 0x1fe5bc: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fe5b8) {
            ctx->pc = 0x1FE65Cu;
            goto label_1fe65c;
        }
    }
    ctx->pc = 0x1FE5C0u;
    // 0x1fe5c0: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x1fe5c0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fe5c4: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x1fe5c4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1fe5c8:
    // 0x1fe5c8: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x1fe5c8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x1fe5cc: 0x2363021  addu        $a2, $s1, $s6
    ctx->pc = 0x1fe5ccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 22)));
    // 0x1fe5d0: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x1fe5d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x1fe5d4: 0xc04a234  jal         func_1288D0
    ctx->pc = 0x1FE5D4u;
    SET_GPR_U32(ctx, 31, 0x1FE5DCu);
    ctx->pc = 0x1FE5D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1FE5D4u;
            // 0x1fe5d8: 0x24a59008  addiu       $a1, $a1, -0x6FF8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294938632));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1288D0u;
    if (runtime->hasFunction(0x1288D0u)) {
        auto targetFn = runtime->lookupFunction(0x1288D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FE5DCu; }
        if (ctx->pc != 0x1FE5DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sprintf_0x1288d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FE5DCu; }
        if (ctx->pc != 0x1FE5DCu) { return; }
    }
    ctx->pc = 0x1FE5DCu;
label_1fe5dc:
    // 0x1fe5dc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1fe5dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fe5e0: 0x27a500b0  addiu       $a1, $sp, 0xB0
    ctx->pc = 0x1fe5e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x1fe5e4: 0xc04b93c  jal         func_12E4F0
    ctx->pc = 0x1FE5E4u;
    SET_GPR_U32(ctx, 31, 0x1FE5ECu);
    ctx->pc = 0x1FE5E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1FE5E4u;
            // 0x1fe5e8: 0x2a0302d  daddu       $a2, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12E4F0u;
    if (runtime->hasFunction(0x12E4F0u)) {
        auto targetFn = runtime->lookupFunction(0x12E4F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FE5ECu; }
        if (ctx->pc != 0x1FE5ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DeleteTexture__17mgCTextureManagerFPci_0x12e4f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FE5ECu; }
        if (ctx->pc != 0x1FE5ECu) { return; }
    }
    ctx->pc = 0x1FE5ECu;
label_1fe5ec:
    // 0x1fe5ec: 0x24080040  addiu       $t0, $zero, 0x40
    ctx->pc = 0x1fe5ecu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x1fe5f0: 0xffa00000  sd          $zero, 0x0($sp)
    ctx->pc = 0x1fe5f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 0));
    // 0x1fe5f4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1fe5f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fe5f8: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x1fe5f8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fe5fc: 0x27a600b0  addiu       $a2, $sp, 0xB0
    ctx->pc = 0x1fe5fcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x1fe600: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1fe600u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fe604: 0x240a0010  addiu       $t2, $zero, 0x10
    ctx->pc = 0x1fe604u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x1fe608: 0x100482d  daddu       $t1, $t0, $zero
    ctx->pc = 0x1fe608u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fe60c: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x1fe60cu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fe610: 0xc04b450  jal         func_12D140
    ctx->pc = 0x1FE610u;
    SET_GPR_U32(ctx, 31, 0x1FE618u);
    ctx->pc = 0x1FE614u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1FE610u;
            // 0x1fe614: 0xffa00008  sd          $zero, 0x8($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12D140u;
    if (runtime->hasFunction(0x12D140u)) {
        auto targetFn = runtime->lookupFunction(0x12D140u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FE618u; }
        if (ctx->pc != 0x1FE618u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnterTexture__17mgCTextureManagerFiPcPP1iiiP1Uli_0x12d140(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FE618u; }
        if (ctx->pc != 0x1FE618u) { return; }
    }
    ctx->pc = 0x1FE618u;
label_1fe618:
    // 0x1fe618: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1fe618u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fe61c: 0x27a500b0  addiu       $a1, $sp, 0xB0
    ctx->pc = 0x1fe61cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x1fe620: 0xc04b414  jal         func_12D050
    ctx->pc = 0x1FE620u;
    SET_GPR_U32(ctx, 31, 0x1FE628u);
    ctx->pc = 0x1FE624u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1FE620u;
            // 0x1fe624: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12D050u;
    if (runtime->hasFunction(0x12D050u)) {
        auto targetFn = runtime->lookupFunction(0x12D050u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FE628u; }
        if (ctx->pc != 0x1FE628u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetTexture__17mgCTextureManagerFPci_0x12d050(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FE628u; }
        if (ctx->pc != 0x1FE628u) { return; }
    }
    ctx->pc = 0x1FE628u;
label_1fe628:
    // 0x1fe628: 0x2f21821  addu        $v1, $s7, $s2
    ctx->pc = 0x1fe628u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 18)));
    // 0x1fe62c: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x1fe62cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x1fe630: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x1fe630u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1fe634: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1FE634u;
    {
        const bool branch_taken_0x1fe634 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FE638u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FE634u;
            // 0x1fe638: 0x3d31821  addu        $v1, $fp, $s3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 19)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fe634) {
            ctx->pc = 0x1FE644u;
            goto label_1fe644;
        }
    }
    ctx->pc = 0x1FE63Cu;
    // 0x1fe63c: 0x8c630014  lw          $v1, 0x14($v1)
    ctx->pc = 0x1fe63cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
    // 0x1fe640: 0xac830050  sw          $v1, 0x50($a0)
    ctx->pc = 0x1fe640u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 80), GPR_U32(ctx, 3));
label_1fe644:
    // 0x1fe644: 0x0  nop
    ctx->pc = 0x1fe644u;
    // NOP
    // 0x1fe648: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1fe648u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1fe64c: 0x234182a  slt         $v1, $s1, $s4
    ctx->pc = 0x1fe64cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 20)) ? 1 : 0);
    // 0x1fe650: 0x26520004  addiu       $s2, $s2, 0x4
    ctx->pc = 0x1fe650u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
    // 0x1fe654: 0x1460ffdc  bnez        $v1, . + 4 + (-0x24 << 2)
    ctx->pc = 0x1FE654u;
    {
        const bool branch_taken_0x1fe654 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FE658u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FE654u;
            // 0x1fe658: 0x26730018  addiu       $s3, $s3, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fe654) {
            ctx->pc = 0x1FE5C8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1fe5c8;
        }
    }
    ctx->pc = 0x1FE65Cu;
label_1fe65c:
    // 0x1fe65c: 0x0  nop
    ctx->pc = 0x1fe65cu;
    // NOP
    // 0x1fe660: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x1fe660u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1fe664: 0x7bbe0090  lq          $fp, 0x90($sp)
    ctx->pc = 0x1fe664u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1fe668: 0x7bb70080  lq          $s7, 0x80($sp)
    ctx->pc = 0x1fe668u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1fe66c: 0x7bb60070  lq          $s6, 0x70($sp)
    ctx->pc = 0x1fe66cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1fe670: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x1fe670u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1fe674: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x1fe674u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1fe678: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x1fe678u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1fe67c: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x1fe67cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1fe680: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x1fe680u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1fe684: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1fe684u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1fe688: 0x3e00008  jr          $ra
    ctx->pc = 0x1FE688u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FE68Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FE688u;
            // 0x1fe68c: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1FE690u;
}
