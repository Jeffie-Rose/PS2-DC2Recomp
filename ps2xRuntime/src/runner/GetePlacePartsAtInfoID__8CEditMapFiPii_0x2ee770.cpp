#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: GetePlacePartsAtInfoID__8CEditMapFiPii
// Address: 0x2ee770 - 0x2ee91c
void GetePlacePartsAtInfoID__8CEditMapFiPii_0x2ee770(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetePlacePartsAtInfoID__8CEditMapFiPii_0x2ee770");
#endif

    switch (ctx->pc) {
        case 0x2ee7acu: goto label_2ee7ac;
        case 0x2ee7c4u: goto label_2ee7c4;
        case 0x2ee7e8u: goto label_2ee7e8;
        case 0x2ee814u: goto label_2ee814;
        case 0x2ee854u: goto label_2ee854;
        case 0x2ee88cu: goto label_2ee88c;
        case 0x2ee894u: goto label_2ee894;
        default: break;
    }

    ctx->pc = 0x2ee770u;

    // 0x2ee770: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x2ee770u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x2ee774: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x2ee774u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x2ee778: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x2ee778u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x2ee77c: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x2ee77cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x2ee780: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x2ee780u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x2ee784: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2ee784u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x2ee788: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x2ee788u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ee78c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2ee78cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2ee790: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x2ee790u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ee794: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2ee794u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2ee798: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x2ee798u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ee79c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2ee79cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2ee7a0: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x2ee7a0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ee7a4: 0xc06c2d4  jal         func_1B0B50
    ctx->pc = 0x2EE7A4u;
    SET_GPR_U32(ctx, 31, 0x2EE7ACu);
    ctx->pc = 0x2EE7A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2EE7A4u;
            // 0x2ee7a8: 0xe0802d  daddu       $s0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B0B50u;
    if (runtime->hasFunction(0x1B0B50u)) {
        auto targetFn = runtime->lookupFunction(0x1B0B50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EE7ACu; }
        if (ctx->pc != 0x2EE7ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetePartsInfoAtID__8CEditMapFi_0x1b0b50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EE7ACu; }
        if (ctx->pc != 0x2EE7ACu) { return; }
    }
    ctx->pc = 0x2EE7ACu;
label_2ee7ac:
    // 0x2ee7ac: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2EE7ACu;
    {
        const bool branch_taken_0x2ee7ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2EE7B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2EE7ACu;
            // 0x2ee7b0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ee7ac) {
            ctx->pc = 0x2EE7BCu;
            goto label_2ee7bc;
        }
    }
    ctx->pc = 0x2EE7B4u;
    // 0x2ee7b4: 0x1000004f  b           . + 4 + (0x4F << 2)
    ctx->pc = 0x2EE7B4u;
    {
        const bool branch_taken_0x2ee7b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EE7B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2EE7B4u;
            // 0x2ee7b8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ee7b4) {
            ctx->pc = 0x2EE8F4u;
            goto label_2ee8f4;
        }
    }
    ctx->pc = 0x2EE7BCu;
label_2ee7bc:
    // 0x2ee7bc: 0xc06d58c  jal         func_1B5630
    ctx->pc = 0x2EE7BCu;
    SET_GPR_U32(ctx, 31, 0x2EE7C4u);
    ctx->pc = 0x1B5630u;
    if (runtime->hasFunction(0x1B5630u)) {
        auto targetFn = runtime->lookupFunction(0x1B5630u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EE7C4u; }
        if (ctx->pc != 0x2EE7C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPartsType__14CEditPartsInfoFv_0x1b5630(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EE7C4u; }
        if (ctx->pc != 0x2EE7C4u) { return; }
    }
    ctx->pc = 0x2EE7C4u;
label_2ee7c4:
    // 0x2ee7c4: 0x2403000b  addiu       $v1, $zero, 0xB
    ctx->pc = 0x2ee7c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x2ee7c8: 0x1443002d  bne         $v0, $v1, . + 4 + (0x2D << 2)
    ctx->pc = 0x2EE7C8u;
    {
        const bool branch_taken_0x2ee7c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x2EE7CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2EE7C8u;
            // 0x2ee7cc: 0x3c020036  lui         $v0, 0x36 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)54 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ee7c8) {
            ctx->pc = 0x2EE880u;
            goto label_2ee880;
        }
    }
    ctx->pc = 0x2EE7D0u;
    // 0x2ee7d0: 0x27a50080  addiu       $a1, $sp, 0x80
    ctx->pc = 0x2ee7d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x2ee7d4: 0x2442cc10  addiu       $v0, $v0, -0x33F0
    ctx->pc = 0x2ee7d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954000));
    // 0x2ee7d8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2ee7d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ee7dc: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x2ee7dcu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2ee7e0: 0xc0a5ae0  jal         func_296B80
    ctx->pc = 0x2EE7E0u;
    SET_GPR_U32(ctx, 31, 0x2EE7E8u);
    ctx->pc = 0x2EE7E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2EE7E0u;
            // 0x2ee7e4: 0x7ca20000  sq          $v0, 0x0($a1) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x296B80u;
    if (runtime->hasFunction(0x296B80u)) {
        auto targetFn = runtime->lookupFunction(0x296B80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EE7E8u; }
        if (ctx->pc != 0x2EE7E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetRiverNum__8CEditMapFPf_0x296b80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EE7E8u; }
        if (ctx->pc != 0x2EE7E8u) { return; }
    }
    ctx->pc = 0x2EE7E8u;
label_2ee7e8:
    // 0x2ee7e8: 0x50082a  slt         $at, $v0, $s0
    ctx->pc = 0x2ee7e8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x2ee7ec: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x2EE7ECu;
    {
        const bool branch_taken_0x2ee7ec = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ee7ec) {
            ctx->pc = 0x2EE7F8u;
            goto label_2ee7f8;
        }
    }
    ctx->pc = 0x2EE7F4u;
    // 0x2ee7f4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2ee7f4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2ee7f8:
    // 0x2ee7f8: 0x10082a  slt         $at, $zero, $s0
    ctx->pc = 0x2ee7f8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x2ee7fc: 0x1020001d  beqz        $at, . + 4 + (0x1D << 2)
    ctx->pc = 0x2EE7FCu;
    {
        const bool branch_taken_0x2ee7fc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EE800u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2EE7FCu;
            // 0x2ee800: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ee7fc) {
            ctx->pc = 0x2EE874u;
            goto label_2ee874;
        }
    }
    ctx->pc = 0x2EE804u;
    // 0x2ee804: 0x2a010009  slti        $at, $s0, 0x9
    ctx->pc = 0x2ee804u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)9) ? 1 : 0);
    // 0x2ee808: 0x1420000f  bnez        $at, . + 4 + (0xF << 2)
    ctx->pc = 0x2EE808u;
    {
        const bool branch_taken_0x2ee808 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x2EE80Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2EE808u;
            // 0x2ee80c: 0x2605fff8  addiu       $a1, $s0, -0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967288));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ee808) {
            ctx->pc = 0x2EE848u;
            goto label_2ee848;
        }
    }
    ctx->pc = 0x2EE810u;
    // 0x2ee810: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2ee810u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2ee814:
    // 0x2ee814: 0x2263821  addu        $a3, $s1, $a2
    ctx->pc = 0x2ee814u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 6)));
    // 0x2ee818: 0x24840008  addiu       $a0, $a0, 0x8
    ctx->pc = 0x2ee818u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x2ee81c: 0xace00000  sw          $zero, 0x0($a3)
    ctx->pc = 0x2ee81cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 0));
    // 0x2ee820: 0x85182a  slt         $v1, $a0, $a1
    ctx->pc = 0x2ee820u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x2ee824: 0xace00004  sw          $zero, 0x4($a3)
    ctx->pc = 0x2ee824u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 0));
    // 0x2ee828: 0x24c60020  addiu       $a2, $a2, 0x20
    ctx->pc = 0x2ee828u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 32));
    // 0x2ee82c: 0xace00008  sw          $zero, 0x8($a3)
    ctx->pc = 0x2ee82cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 8), GPR_U32(ctx, 0));
    // 0x2ee830: 0xace0000c  sw          $zero, 0xC($a3)
    ctx->pc = 0x2ee830u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 12), GPR_U32(ctx, 0));
    // 0x2ee834: 0xace00010  sw          $zero, 0x10($a3)
    ctx->pc = 0x2ee834u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 16), GPR_U32(ctx, 0));
    // 0x2ee838: 0xace00014  sw          $zero, 0x14($a3)
    ctx->pc = 0x2ee838u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 20), GPR_U32(ctx, 0));
    // 0x2ee83c: 0xace00018  sw          $zero, 0x18($a3)
    ctx->pc = 0x2ee83cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 24), GPR_U32(ctx, 0));
    // 0x2ee840: 0x1460fff4  bnez        $v1, . + 4 + (-0xC << 2)
    ctx->pc = 0x2EE840u;
    {
        const bool branch_taken_0x2ee840 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2EE844u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2EE840u;
            // 0x2ee844: 0xace0001c  sw          $zero, 0x1C($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 28), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ee840) {
            ctx->pc = 0x2EE814u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2ee814;
        }
    }
    ctx->pc = 0x2EE848u;
label_2ee848:
    // 0x2ee848: 0x90082a  slt         $at, $a0, $s0
    ctx->pc = 0x2ee848u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x2ee84c: 0x10200009  beqz        $at, . + 4 + (0x9 << 2)
    ctx->pc = 0x2EE84Cu;
    {
        const bool branch_taken_0x2ee84c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EE850u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2EE84Cu;
            // 0x2ee850: 0x42880  sll         $a1, $a0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ee84c) {
            ctx->pc = 0x2EE874u;
            goto label_2ee874;
        }
    }
    ctx->pc = 0x2EE854u;
label_2ee854:
    // 0x2ee854: 0x2251821  addu        $v1, $s1, $a1
    ctx->pc = 0x2ee854u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 5)));
    // 0x2ee858: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x2ee858u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x2ee85c: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x2ee85cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
    // 0x2ee860: 0x24a50004  addiu       $a1, $a1, 0x4
    ctx->pc = 0x2ee860u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
    // 0x2ee864: 0x90182a  slt         $v1, $a0, $s0
    ctx->pc = 0x2ee864u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x2ee868: 0x0  nop
    ctx->pc = 0x2ee868u;
    // NOP
    // 0x2ee86c: 0x1460fff9  bnez        $v1, . + 4 + (-0x7 << 2)
    ctx->pc = 0x2EE86Cu;
    {
        const bool branch_taken_0x2ee86c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2ee86c) {
            ctx->pc = 0x2EE854u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2ee854;
        }
    }
    ctx->pc = 0x2EE874u;
label_2ee874:
    // 0x2ee874: 0x0  nop
    ctx->pc = 0x2ee874u;
    // NOP
    // 0x2ee878: 0x1000001f  b           . + 4 + (0x1F << 2)
    ctx->pc = 0x2EE878u;
    {
        const bool branch_taken_0x2ee878 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EE87Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2EE878u;
            // 0x2ee87c: 0xdfbf0070  ld          $ra, 0x70($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ee878) {
            ctx->pc = 0x2EE8F8u;
            goto label_2ee8f8;
        }
    }
    ctx->pc = 0x2EE880u;
label_2ee880:
    // 0x2ee880: 0x8e750d44  lw          $s5, 0xD44($s3)
    ctx->pc = 0x2ee880u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 3396)));
    // 0x2ee884: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x2EE884u;
    {
        const bool branch_taken_0x2ee884 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EE888u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2EE884u;
            // 0x2ee888: 0xb02d  daddu       $s6, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ee884) {
            ctx->pc = 0x2EE8E0u;
            goto label_2ee8e0;
        }
    }
    ctx->pc = 0x2EE88Cu;
label_2ee88c:
    // 0x2ee88c: 0xc0bb988  jal         func_2EE620
    ctx->pc = 0x2EE88Cu;
    SET_GPR_U32(ctx, 31, 0x2EE894u);
    ctx->pc = 0x2EE890u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2EE88Cu;
            // 0x2ee890: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2EE620u;
    if (runtime->hasFunction(0x2EE620u)) {
        auto targetFn = runtime->lookupFunction(0x2EE620u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EE894u; }
        if (ctx->pc != 0x2EE894u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CheckNormalPlaceParts__8CEditMapFP10CEditParts_0x2ee620(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EE894u; }
        if (ctx->pc != 0x2EE894u) { return; }
    }
    ctx->pc = 0x2EE894u;
label_2ee894:
    // 0x2ee894: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x2EE894u;
    {
        const bool branch_taken_0x2ee894 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ee894) {
            ctx->pc = 0x2EE8D4u;
            goto label_2ee8d4;
        }
    }
    ctx->pc = 0x2EE89Cu;
    // 0x2ee89c: 0x8ea20324  lw          $v0, 0x324($s5)
    ctx->pc = 0x2ee89cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 804)));
    // 0x2ee8a0: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x2ee8a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2ee8a4: 0x1452000b  bne         $v0, $s2, . + 4 + (0xB << 2)
    ctx->pc = 0x2EE8A4u;
    {
        const bool branch_taken_0x2ee8a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 18));
        if (branch_taken_0x2ee8a4) {
            ctx->pc = 0x2EE8D4u;
            goto label_2ee8d4;
        }
    }
    ctx->pc = 0x2EE8ACu;
    // 0x2ee8ac: 0x12200008  beqz        $s1, . + 4 + (0x8 << 2)
    ctx->pc = 0x2EE8ACu;
    {
        const bool branch_taken_0x2ee8ac = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EE8B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2EE8ACu;
            // 0x2ee8b0: 0x141080  sll         $v0, $s4, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 20), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ee8ac) {
            ctx->pc = 0x2EE8D0u;
            goto label_2ee8d0;
        }
    }
    ctx->pc = 0x2EE8B4u;
    // 0x2ee8b4: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x2ee8b4u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x2ee8b8: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x2ee8b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x2ee8bc: 0x290082a  slt         $at, $s4, $s0
    ctx->pc = 0x2ee8bcu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 20) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x2ee8c0: 0x1020000b  beqz        $at, . + 4 + (0xB << 2)
    ctx->pc = 0x2EE8C0u;
    {
        const bool branch_taken_0x2ee8c0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EE8C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2EE8C0u;
            // 0x2ee8c4: 0xac560000  sw          $s6, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 22));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ee8c0) {
            ctx->pc = 0x2EE8F0u;
            goto label_2ee8f0;
        }
    }
    ctx->pc = 0x2EE8C8u;
    // 0x2ee8c8: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2EE8C8u;
    {
        const bool branch_taken_0x2ee8c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ee8c8) {
            ctx->pc = 0x2EE8D4u;
            goto label_2ee8d4;
        }
    }
    ctx->pc = 0x2EE8D0u;
label_2ee8d0:
    // 0x2ee8d0: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x2ee8d0u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
label_2ee8d4:
    // 0x2ee8d4: 0x0  nop
    ctx->pc = 0x2ee8d4u;
    // NOP
    // 0x2ee8d8: 0x26d60001  addiu       $s6, $s6, 0x1
    ctx->pc = 0x2ee8d8u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
    // 0x2ee8dc: 0x26b50330  addiu       $s5, $s5, 0x330
    ctx->pc = 0x2ee8dcu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 816));
label_2ee8e0:
    // 0x2ee8e0: 0x8e620d40  lw          $v0, 0xD40($s3)
    ctx->pc = 0x2ee8e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 3392)));
    // 0x2ee8e4: 0x2c2102a  slt         $v0, $s6, $v0
    ctx->pc = 0x2ee8e4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 22) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2ee8e8: 0x1440ffe8  bnez        $v0, . + 4 + (-0x18 << 2)
    ctx->pc = 0x2EE8E8u;
    {
        const bool branch_taken_0x2ee8e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2EE8ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2EE8E8u;
            // 0x2ee8ec: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ee8e8) {
            ctx->pc = 0x2EE88Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2ee88c;
        }
    }
    ctx->pc = 0x2EE8F0u;
label_2ee8f0:
    // 0x2ee8f0: 0x280102d  daddu       $v0, $s4, $zero
    ctx->pc = 0x2ee8f0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_2ee8f4:
    // 0x2ee8f4: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x2ee8f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_2ee8f8:
    // 0x2ee8f8: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x2ee8f8u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2ee8fc: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x2ee8fcu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2ee900: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x2ee900u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2ee904: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2ee904u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2ee908: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2ee908u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2ee90c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2ee90cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2ee910: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2ee910u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2ee914: 0x3e00008  jr          $ra
    ctx->pc = 0x2EE914u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2EE918u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2EE914u;
            // 0x2ee918: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2EE91Cu;
}
