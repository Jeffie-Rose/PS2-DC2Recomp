#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: AfterSpectolFusion__FP13CGameDataUsedP13CGameDataUsed
// Address: 0x23a800 - 0x23aab4
void AfterSpectolFusion__FP13CGameDataUsedP13CGameDataUsed_0x23a800(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("AfterSpectolFusion__FP13CGameDataUsedP13CGameDataUsed_0x23a800");
#endif

    switch (ctx->pc) {
        case 0x23a83cu: goto label_23a83c;
        case 0x23a938u: goto label_23a938;
        case 0x23a960u: goto label_23a960;
        case 0x23a968u: goto label_23a968;
        case 0x23aa6cu: goto label_23aa6c;
        default: break;
    }

    ctx->pc = 0x23a800u;

    // 0x23a800: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x23a800u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x23a804: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x23a804u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x23a808: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x23a808u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x23a80c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x23a80cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x23a810: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x23a810u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x23a814: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x23a814u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23a818: 0x16400003  bnez        $s2, . + 4 + (0x3 << 2)
    ctx->pc = 0x23A818u;
    {
        const bool branch_taken_0x23a818 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x23A81Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23A818u;
            // 0x23a81c: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23a818) {
            ctx->pc = 0x23A828u;
            goto label_23a828;
        }
    }
    ctx->pc = 0x23A820u;
    // 0x23a820: 0x1000009d  b           . + 4 + (0x9D << 2)
    ctx->pc = 0x23A820u;
    {
        const bool branch_taken_0x23a820 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23A824u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23A820u;
            // 0x23a824: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23a820) {
            ctx->pc = 0x23AA98u;
            goto label_23aa98;
        }
    }
    ctx->pc = 0x23A828u;
label_23a828:
    // 0x23a828: 0x24b10010  addiu       $s1, $a1, 0x10
    ctx->pc = 0x23a828u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
    // 0x23a82c: 0x26500010  addiu       $s0, $s2, 0x10
    ctx->pc = 0x23a82cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
    // 0x23a830: 0x3c0501ed  lui         $a1, 0x1ED
    ctx->pc = 0x23a830u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)493 << 16));
    // 0x23a834: 0xc066384  jal         func_198E10
    ctx->pc = 0x23A834u;
    SET_GPR_U32(ctx, 31, 0x23A83Cu);
    ctx->pc = 0x23A838u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x23A834u;
            // 0x23a838: 0x24a5dd50  addiu       $a1, $a1, -0x22B0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294958416));
        ctx->in_delay_slot = false;
    ctx->pc = 0x198E10u;
    if (runtime->hasFunction(0x198E10u)) {
        auto targetFn = runtime->lookupFunction(0x198E10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23A83Cu; }
        if (ctx->pc != 0x23A83Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStatusParam__13CGameDataUsedFPs_0x198e10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23A83Cu; }
        if (ctx->pc != 0x23A83Cu) { return; }
    }
    ctx->pc = 0x23A83Cu;
label_23a83c:
    // 0x23a83c: 0x82230000  lb          $v1, 0x0($s1)
    ctx->pc = 0x23a83cu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x23a840: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x23a840u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x23a844: 0x14620010  bne         $v1, $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x23A844u;
    {
        const bool branch_taken_0x23a844 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x23a844) {
            ctx->pc = 0x23A888u;
            goto label_23a888;
        }
    }
    ctx->pc = 0x23A84Cu;
    // 0x23a84c: 0x86040012  lh          $a0, 0x12($s0)
    ctx->pc = 0x23a84cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 18)));
    // 0x23a850: 0x86220002  lh          $v0, 0x2($s1)
    ctx->pc = 0x23a850u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 2)));
    // 0x23a854: 0x82082a  slt         $at, $a0, $v0
    ctx->pc = 0x23a854u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x23a858: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x23A858u;
    {
        const bool branch_taken_0x23a858 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x23A85Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23A858u;
            // 0x23a85c: 0x80182d  daddu       $v1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23a858) {
            ctx->pc = 0x23A868u;
            goto label_23a868;
        }
    }
    ctx->pc = 0x23A860u;
    // 0x23a860: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x23A860u;
    {
        const bool branch_taken_0x23a860 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23A864u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23A860u;
            // 0x23a864: 0x40182d  daddu       $v1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23a860) {
            ctx->pc = 0x23A86Cu;
            goto label_23a86c;
        }
    }
    ctx->pc = 0x23A868u;
label_23a868:
    // 0x23a868: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x23a868u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_23a86c:
    // 0x23a86c: 0x4810003  bgez        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x23A86Cu;
    {
        const bool branch_taken_0x23a86c = (GPR_S32(ctx, 4) >= 0);
        ctx->pc = 0x23A870u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23A86Cu;
            // 0x23a870: 0x41083  sra         $v0, $a0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 4), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23a86c) {
            ctx->pc = 0x23A87Cu;
            goto label_23a87c;
        }
    }
    ctx->pc = 0x23A874u;
    // 0x23a874: 0x24820003  addiu       $v0, $a0, 0x3
    ctx->pc = 0x23a874u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 3));
    // 0x23a878: 0x21083  sra         $v0, $v0, 2
    ctx->pc = 0x23a878u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 2));
label_23a87c:
    // 0x23a87c: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x23a87cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x23a880: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x23A880u;
    {
        const bool branch_taken_0x23a880 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23A884u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23A880u;
            // 0x23a884: 0xa6020012  sh          $v0, 0x12($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 18), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23a880) {
            ctx->pc = 0x23A898u;
            goto label_23a898;
        }
    }
    ctx->pc = 0x23A888u;
label_23a888:
    // 0x23a888: 0x86030012  lh          $v1, 0x12($s0)
    ctx->pc = 0x23a888u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 18)));
    // 0x23a88c: 0x86220002  lh          $v0, 0x2($s1)
    ctx->pc = 0x23a88cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 2)));
    // 0x23a890: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x23a890u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x23a894: 0xa6020012  sh          $v0, 0x12($s0)
    ctx->pc = 0x23a894u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 18), (uint16_t)GPR_U32(ctx, 2));
label_23a898:
    // 0x23a898: 0x86030014  lh          $v1, 0x14($s0)
    ctx->pc = 0x23a898u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x23a89c: 0x86220004  lh          $v0, 0x4($s1)
    ctx->pc = 0x23a89cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x23a8a0: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x23a8a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x23a8a4: 0xa6020014  sh          $v0, 0x14($s0)
    ctx->pc = 0x23a8a4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 20), (uint16_t)GPR_U32(ctx, 2));
    // 0x23a8a8: 0x86030016  lh          $v1, 0x16($s0)
    ctx->pc = 0x23a8a8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 22)));
    // 0x23a8ac: 0x86220006  lh          $v0, 0x6($s1)
    ctx->pc = 0x23a8acu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 6)));
    // 0x23a8b0: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x23a8b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x23a8b4: 0xa6020016  sh          $v0, 0x16($s0)
    ctx->pc = 0x23a8b4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 22), (uint16_t)GPR_U32(ctx, 2));
    // 0x23a8b8: 0x86030018  lh          $v1, 0x18($s0)
    ctx->pc = 0x23a8b8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x23a8bc: 0x86220008  lh          $v0, 0x8($s1)
    ctx->pc = 0x23a8bcu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x23a8c0: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x23a8c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x23a8c4: 0xa6020018  sh          $v0, 0x18($s0)
    ctx->pc = 0x23a8c4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 24), (uint16_t)GPR_U32(ctx, 2));
    // 0x23a8c8: 0x8603001a  lh          $v1, 0x1A($s0)
    ctx->pc = 0x23a8c8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 26)));
    // 0x23a8cc: 0x8622000a  lh          $v0, 0xA($s1)
    ctx->pc = 0x23a8ccu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 10)));
    // 0x23a8d0: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x23a8d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x23a8d4: 0xa602001a  sh          $v0, 0x1A($s0)
    ctx->pc = 0x23a8d4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 26), (uint16_t)GPR_U32(ctx, 2));
    // 0x23a8d8: 0x8603001c  lh          $v1, 0x1C($s0)
    ctx->pc = 0x23a8d8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x23a8dc: 0x8622000c  lh          $v0, 0xC($s1)
    ctx->pc = 0x23a8dcu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x23a8e0: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x23a8e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x23a8e4: 0xa602001c  sh          $v0, 0x1C($s0)
    ctx->pc = 0x23a8e4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 28), (uint16_t)GPR_U32(ctx, 2));
    // 0x23a8e8: 0x8603001e  lh          $v1, 0x1E($s0)
    ctx->pc = 0x23a8e8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 30)));
    // 0x23a8ec: 0x8622000e  lh          $v0, 0xE($s1)
    ctx->pc = 0x23a8ecu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 14)));
    // 0x23a8f0: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x23a8f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x23a8f4: 0xa602001e  sh          $v0, 0x1E($s0)
    ctx->pc = 0x23a8f4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 30), (uint16_t)GPR_U32(ctx, 2));
    // 0x23a8f8: 0x86030020  lh          $v1, 0x20($s0)
    ctx->pc = 0x23a8f8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x23a8fc: 0x86220010  lh          $v0, 0x10($s1)
    ctx->pc = 0x23a8fcu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x23a900: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x23a900u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x23a904: 0xa6020020  sh          $v0, 0x20($s0)
    ctx->pc = 0x23a904u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 32), (uint16_t)GPR_U32(ctx, 2));
    // 0x23a908: 0x86030022  lh          $v1, 0x22($s0)
    ctx->pc = 0x23a908u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 34)));
    // 0x23a90c: 0x86220012  lh          $v0, 0x12($s1)
    ctx->pc = 0x23a90cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 18)));
    // 0x23a910: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x23a910u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x23a914: 0xa6020022  sh          $v0, 0x22($s0)
    ctx->pc = 0x23a914u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 34), (uint16_t)GPR_U32(ctx, 2));
    // 0x23a918: 0x86030024  lh          $v1, 0x24($s0)
    ctx->pc = 0x23a918u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x23a91c: 0x86220014  lh          $v0, 0x14($s1)
    ctx->pc = 0x23a91cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x23a920: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x23a920u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x23a924: 0xa6020024  sh          $v0, 0x24($s0)
    ctx->pc = 0x23a924u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 36), (uint16_t)GPR_U32(ctx, 2));
    // 0x23a928: 0x8e040028  lw          $a0, 0x28($s0)
    ctx->pc = 0x23a928u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
    // 0x23a92c: 0x8e25001c  lw          $a1, 0x1C($s1)
    ctx->pc = 0x23a92cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
    // 0x23a930: 0xc068400  jal         func_1A1000
    ctx->pc = 0x23A930u;
    SET_GPR_U32(ctx, 31, 0x23A938u);
    ctx->pc = 0x23A934u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x23A930u;
            // 0x23a934: 0x80982d  daddu       $s3, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A1000u;
    if (runtime->hasFunction(0x1A1000u)) {
        auto targetFn = runtime->lookupFunction(0x1A1000u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23A938u; }
        if (ctx->pc != 0x23A938u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CheckWeaponAttribute__FUiUi_0x1a1000(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23A938u; }
        if (ctx->pc != 0x23A938u) { return; }
    }
    ctx->pc = 0x23A938u;
label_23a938:
    // 0x23a938: 0xae020028  sw          $v0, 0x28($s0)
    ctx->pc = 0x23a938u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 2));
    // 0x23a93c: 0xaf8095e8  sw          $zero, -0x6A18($gp)
    ctx->pc = 0x23a93cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294940136), GPR_U32(ctx, 0));
    // 0x23a940: 0x8e020028  lw          $v0, 0x28($s0)
    ctx->pc = 0x23a940u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
    // 0x23a944: 0x10530002  beq         $v0, $s3, . + 4 + (0x2 << 2)
    ctx->pc = 0x23A944u;
    {
        const bool branch_taken_0x23a944 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 19));
        ctx->pc = 0x23A948u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23A944u;
            // 0x23a948: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23a944) {
            ctx->pc = 0x23A950u;
            goto label_23a950;
        }
    }
    ctx->pc = 0x23A94Cu;
    // 0x23a94c: 0xaf8295e8  sw          $v0, -0x6A18($gp)
    ctx->pc = 0x23a94cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294940136), GPR_U32(ctx, 2));
label_23a950:
    // 0x23a950: 0x92220001  lbu         $v0, 0x1($s1)
    ctx->pc = 0x23a950u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1)));
    // 0x23a954: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x23a954u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23a958: 0xc065f78  jal         func_197DE0
    ctx->pc = 0x23A958u;
    SET_GPR_U32(ctx, 31, 0x23A960u);
    ctx->pc = 0x23A95Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x23A958u;
            // 0x23a95c: 0x22823  negu        $a1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x197DE0u;
    if (runtime->hasFunction(0x197DE0u)) {
        auto targetFn = runtime->lookupFunction(0x197DE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23A960u; }
        if (ctx->pc != 0x23A960u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        AddFusionPoint__13CGameDataUsedFi_0x197de0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23A960u; }
        if (ctx->pc != 0x23A960u) { return; }
    }
    ctx->pc = 0x23A960u;
label_23a960:
    // 0x23a960: 0xc066538  jal         func_1994E0
    ctx->pc = 0x23A960u;
    SET_GPR_U32(ctx, 31, 0x23A968u);
    ctx->pc = 0x23A964u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x23A960u;
            // 0x23a964: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1994E0u;
    if (runtime->hasFunction(0x1994E0u)) {
        auto targetFn = runtime->lookupFunction(0x1994E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23A968u; }
        if (ctx->pc != 0x23A968u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CheckParamLimmit__13CGameDataUsedFv_0x1994e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23A968u; }
        if (ctx->pc != 0x23A968u) { return; }
    }
    ctx->pc = 0x23A968u;
label_23a968:
    // 0x23a968: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x23a968u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x23a96c: 0x86060012  lh          $a2, 0x12($s0)
    ctx->pc = 0x23a96cu;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 18)));
    // 0x23a970: 0x8425dd50  lh          $a1, -0x22B0($at)
    ctx->pc = 0x23a970u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 1), 4294958416)));
    // 0x23a974: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x23a974u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23a978: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x23a978u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23a97c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x23a97cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23a980: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x23a980u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x23a984: 0xc52823  subu        $a1, $a2, $a1
    ctx->pc = 0x23a984u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x23a988: 0x842ddd52  lh          $t5, -0x22AE($at)
    ctx->pc = 0x23a988u;
    SET_GPR_S32(ctx, 13, (int16_t)READ16(ADD32(GPR_U32(ctx, 1), 4294958418)));
    // 0x23a98c: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x23a98cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x23a990: 0x842cdd54  lh          $t4, -0x22AC($at)
    ctx->pc = 0x23a990u;
    SET_GPR_S32(ctx, 12, (int16_t)READ16(ADD32(GPR_U32(ctx, 1), 4294958420)));
    // 0x23a994: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x23a994u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x23a998: 0x842bdd56  lh          $t3, -0x22AA($at)
    ctx->pc = 0x23a998u;
    SET_GPR_S32(ctx, 11, (int16_t)READ16(ADD32(GPR_U32(ctx, 1), 4294958422)));
    // 0x23a99c: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x23a99cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x23a9a0: 0x842add58  lh          $t2, -0x22A8($at)
    ctx->pc = 0x23a9a0u;
    SET_GPR_S32(ctx, 10, (int16_t)READ16(ADD32(GPR_U32(ctx, 1), 4294958424)));
    // 0x23a9a4: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x23a9a4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x23a9a8: 0x8429dd5a  lh          $t1, -0x22A6($at)
    ctx->pc = 0x23a9a8u;
    SET_GPR_S32(ctx, 9, (int16_t)READ16(ADD32(GPR_U32(ctx, 1), 4294958426)));
    // 0x23a9ac: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x23a9acu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x23a9b0: 0x8428dd5c  lh          $t0, -0x22A4($at)
    ctx->pc = 0x23a9b0u;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 1), 4294958428)));
    // 0x23a9b4: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x23a9b4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x23a9b8: 0xa425dd50  sh          $a1, -0x22B0($at)
    ctx->pc = 0x23a9b8u;
    WRITE16(ADD32(GPR_U32(ctx, 1), 4294958416), (uint16_t)GPR_U32(ctx, 5));
    // 0x23a9bc: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x23a9bcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x23a9c0: 0x860e0014  lh          $t6, 0x14($s0)
    ctx->pc = 0x23a9c0u;
    SET_GPR_S32(ctx, 14, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x23a9c4: 0x8427dd5e  lh          $a3, -0x22A2($at)
    ctx->pc = 0x23a9c4u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 1), 4294958430)));
    // 0x23a9c8: 0x1cd6823  subu        $t5, $t6, $t5
    ctx->pc = 0x23a9c8u;
    SET_GPR_S32(ctx, 13, (int32_t)SUB32(GPR_U32(ctx, 14), GPR_U32(ctx, 13)));
    // 0x23a9cc: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x23a9ccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x23a9d0: 0x8426dd60  lh          $a2, -0x22A0($at)
    ctx->pc = 0x23a9d0u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 1), 4294958432)));
    // 0x23a9d4: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x23a9d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x23a9d8: 0x8425dd62  lh          $a1, -0x229E($at)
    ctx->pc = 0x23a9d8u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 1), 4294958434)));
    // 0x23a9dc: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x23a9dcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x23a9e0: 0xa42ddd52  sh          $t5, -0x22AE($at)
    ctx->pc = 0x23a9e0u;
    WRITE16(ADD32(GPR_U32(ctx, 1), 4294958418), (uint16_t)GPR_U32(ctx, 13));
    // 0x23a9e4: 0x860d0016  lh          $t5, 0x16($s0)
    ctx->pc = 0x23a9e4u;
    SET_GPR_S32(ctx, 13, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 22)));
    // 0x23a9e8: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x23a9e8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x23a9ec: 0x1ac6023  subu        $t4, $t5, $t4
    ctx->pc = 0x23a9ecu;
    SET_GPR_S32(ctx, 12, (int32_t)SUB32(GPR_U32(ctx, 13), GPR_U32(ctx, 12)));
    // 0x23a9f0: 0xa42cdd54  sh          $t4, -0x22AC($at)
    ctx->pc = 0x23a9f0u;
    WRITE16(ADD32(GPR_U32(ctx, 1), 4294958420), (uint16_t)GPR_U32(ctx, 12));
    // 0x23a9f4: 0x860c0018  lh          $t4, 0x18($s0)
    ctx->pc = 0x23a9f4u;
    SET_GPR_S32(ctx, 12, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x23a9f8: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x23a9f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x23a9fc: 0x18b5823  subu        $t3, $t4, $t3
    ctx->pc = 0x23a9fcu;
    SET_GPR_S32(ctx, 11, (int32_t)SUB32(GPR_U32(ctx, 12), GPR_U32(ctx, 11)));
    // 0x23aa00: 0xa42bdd56  sh          $t3, -0x22AA($at)
    ctx->pc = 0x23aa00u;
    WRITE16(ADD32(GPR_U32(ctx, 1), 4294958422), (uint16_t)GPR_U32(ctx, 11));
    // 0x23aa04: 0x860b001a  lh          $t3, 0x1A($s0)
    ctx->pc = 0x23aa04u;
    SET_GPR_S32(ctx, 11, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 26)));
    // 0x23aa08: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x23aa08u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x23aa0c: 0x16a5023  subu        $t2, $t3, $t2
    ctx->pc = 0x23aa0cu;
    SET_GPR_S32(ctx, 10, (int32_t)SUB32(GPR_U32(ctx, 11), GPR_U32(ctx, 10)));
    // 0x23aa10: 0xa42add58  sh          $t2, -0x22A8($at)
    ctx->pc = 0x23aa10u;
    WRITE16(ADD32(GPR_U32(ctx, 1), 4294958424), (uint16_t)GPR_U32(ctx, 10));
    // 0x23aa14: 0x860a001c  lh          $t2, 0x1C($s0)
    ctx->pc = 0x23aa14u;
    SET_GPR_S32(ctx, 10, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x23aa18: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x23aa18u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x23aa1c: 0x1494823  subu        $t1, $t2, $t1
    ctx->pc = 0x23aa1cu;
    SET_GPR_S32(ctx, 9, (int32_t)SUB32(GPR_U32(ctx, 10), GPR_U32(ctx, 9)));
    // 0x23aa20: 0xa429dd5a  sh          $t1, -0x22A6($at)
    ctx->pc = 0x23aa20u;
    WRITE16(ADD32(GPR_U32(ctx, 1), 4294958426), (uint16_t)GPR_U32(ctx, 9));
    // 0x23aa24: 0x8609001e  lh          $t1, 0x1E($s0)
    ctx->pc = 0x23aa24u;
    SET_GPR_S32(ctx, 9, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 30)));
    // 0x23aa28: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x23aa28u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x23aa2c: 0x1284023  subu        $t0, $t1, $t0
    ctx->pc = 0x23aa2cu;
    SET_GPR_S32(ctx, 8, (int32_t)SUB32(GPR_U32(ctx, 9), GPR_U32(ctx, 8)));
    // 0x23aa30: 0xa428dd5c  sh          $t0, -0x22A4($at)
    ctx->pc = 0x23aa30u;
    WRITE16(ADD32(GPR_U32(ctx, 1), 4294958428), (uint16_t)GPR_U32(ctx, 8));
    // 0x23aa34: 0x86080020  lh          $t0, 0x20($s0)
    ctx->pc = 0x23aa34u;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x23aa38: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x23aa38u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x23aa3c: 0x1073823  subu        $a3, $t0, $a3
    ctx->pc = 0x23aa3cu;
    SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 8), GPR_U32(ctx, 7)));
    // 0x23aa40: 0xa427dd5e  sh          $a3, -0x22A2($at)
    ctx->pc = 0x23aa40u;
    WRITE16(ADD32(GPR_U32(ctx, 1), 4294958430), (uint16_t)GPR_U32(ctx, 7));
    // 0x23aa44: 0x86070022  lh          $a3, 0x22($s0)
    ctx->pc = 0x23aa44u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 34)));
    // 0x23aa48: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x23aa48u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x23aa4c: 0xe63023  subu        $a2, $a3, $a2
    ctx->pc = 0x23aa4cu;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 6)));
    // 0x23aa50: 0xa426dd60  sh          $a2, -0x22A0($at)
    ctx->pc = 0x23aa50u;
    WRITE16(ADD32(GPR_U32(ctx, 1), 4294958432), (uint16_t)GPR_U32(ctx, 6));
    // 0x23aa54: 0x86060024  lh          $a2, 0x24($s0)
    ctx->pc = 0x23aa54u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x23aa58: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x23aa58u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x23aa5c: 0xc52823  subu        $a1, $a2, $a1
    ctx->pc = 0x23aa5cu;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x23aa60: 0xa425dd62  sh          $a1, -0x229E($at)
    ctx->pc = 0x23aa60u;
    WRITE16(ADD32(GPR_U32(ctx, 1), 4294958434), (uint16_t)GPR_U32(ctx, 5));
    // 0x23aa64: 0x3c0601ed  lui         $a2, 0x1ED
    ctx->pc = 0x23aa64u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)493 << 16));
    // 0x23aa68: 0x24c6dd50  addiu       $a2, $a2, -0x22B0
    ctx->pc = 0x23aa68u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294958416));
label_23aa6c:
    // 0x23aa6c: 0xc42821  addu        $a1, $a2, $a0
    ctx->pc = 0x23aa6cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
    // 0x23aa70: 0x84a50000  lh          $a1, 0x0($a1)
    ctx->pc = 0x23aa70u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x23aa74: 0x5082a  slt         $at, $zero, $a1
    ctx->pc = 0x23aa74u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x23aa78: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x23AA78u;
    {
        const bool branch_taken_0x23aa78 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x23aa78) {
            ctx->pc = 0x23AA84u;
            goto label_23aa84;
        }
    }
    ctx->pc = 0x23AA80u;
    // 0x23aa80: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x23aa80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_23aa84:
    // 0x23aa84: 0x0  nop
    ctx->pc = 0x23aa84u;
    // NOP
    // 0x23aa88: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x23aa88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x23aa8c: 0x2865000a  slti        $a1, $v1, 0xA
    ctx->pc = 0x23aa8cu;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)10) ? 1 : 0);
    // 0x23aa90: 0x14a0fff6  bnez        $a1, . + 4 + (-0xA << 2)
    ctx->pc = 0x23AA90u;
    {
        const bool branch_taken_0x23aa90 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x23AA94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23AA90u;
            // 0x23aa94: 0x24840002  addiu       $a0, $a0, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23aa90) {
            ctx->pc = 0x23AA6Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_23aa6c;
        }
    }
    ctx->pc = 0x23AA98u;
label_23aa98:
    // 0x23aa98: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x23aa98u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x23aa9c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x23aa9cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x23aaa0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x23aaa0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x23aaa4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x23aaa4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x23aaa8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x23aaa8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x23aaac: 0x3e00008  jr          $ra
    ctx->pc = 0x23AAACu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23AAB0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23AAACu;
            // 0x23aab0: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x23AAB4u;
}
