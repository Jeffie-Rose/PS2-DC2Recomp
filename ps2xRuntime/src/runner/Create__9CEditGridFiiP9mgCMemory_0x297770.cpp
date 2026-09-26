#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: Create__9CEditGridFiiP9mgCMemory
// Address: 0x297770 - 0x297824
void Create__9CEditGridFiiP9mgCMemory_0x297770(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Create__9CEditGridFiiP9mgCMemory_0x297770");
#endif

    switch (ctx->pc) {
        case 0x2977c8u: goto label_2977c8;
        case 0x2977e0u: goto label_2977e0;
        case 0x2977fcu: goto label_2977fc;
        default: break;
    }

    ctx->pc = 0x297770u;

    // 0x297770: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x297770u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x297774: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x297774u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x297778: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x297778u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x29777c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x29777cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x297780: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x297780u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x297784: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x297784u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x297788: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x297788u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x29778c: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x29778cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x297790: 0x2518018  mult        $s0, $s2, $s1
    ctx->pc = 0x297790u;
    { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 17); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 16, (int32_t)result); }
    // 0x297794: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x297794u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x297798: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x297798u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x29779c: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x29779cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2977a0: 0x3062000f  andi        $v0, $v1, 0xF
    ctx->pc = 0x2977a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)15);
    // 0x2977a4: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2977A4u;
    {
        const bool branch_taken_0x2977a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2977A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2977A4u;
            // 0x2977a8: 0x80982d  daddu       $s3, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2977a4) {
            ctx->pc = 0x2977B8u;
            goto label_2977b8;
        }
    }
    ctx->pc = 0x2977ACu;
    // 0x2977ac: 0x31102  srl         $v0, $v1, 4
    ctx->pc = 0x2977acu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 3), 4));
    // 0x2977b0: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2977B0u;
    {
        const bool branch_taken_0x2977b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2977B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2977B0u;
            // 0x2977b4: 0x24420001  addiu       $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2977b0) {
            ctx->pc = 0x2977BCu;
            goto label_2977bc;
        }
    }
    ctx->pc = 0x2977B8u;
label_2977b8:
    // 0x2977b8: 0x31102  srl         $v0, $v1, 4
    ctx->pc = 0x2977b8u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 3), 4));
label_2977bc:
    // 0x2977bc: 0x24450002  addiu       $a1, $v0, 0x2
    ctx->pc = 0x2977bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x2977c0: 0xc04e748  jal         func_139D20
    ctx->pc = 0x2977C0u;
    SET_GPR_U32(ctx, 31, 0x2977C8u);
    ctx->pc = 0x2977C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2977C0u;
            // 0x2977c4: 0xe0202d  daddu       $a0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139D20u;
    if (runtime->hasFunction(0x139D20u)) {
        auto targetFn = runtime->lookupFunction(0x139D20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2977C8u; }
        if (ctx->pc != 0x2977C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Alloc__9mgCMemoryFi_0x139d20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2977C8u; }
        if (ctx->pc != 0x2977C8u) { return; }
    }
    ctx->pc = 0x2977C8u;
label_2977c8:
    // 0x2977c8: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x2977c8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x2977cc: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2977ccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2977d0: 0x701021  addu        $v0, $v1, $s0
    ctx->pc = 0x2977d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x2977d4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2977d4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2977d8: 0xc04e63c  jal         func_1398F0
    ctx->pc = 0x2977D8u;
    SET_GPR_U32(ctx, 31, 0x2977E0u);
    ctx->pc = 0x2977DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2977D8u;
            // 0x2977dc: 0x24440010  addiu       $a0, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1398F0u;
    if (runtime->hasFunction(0x1398F0u)) {
        auto targetFn = runtime->lookupFunction(0x1398F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2977E0u; }
        if (ctx->pc != 0x2977E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___nwa__FUiP1_0x1398f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2977E0u; }
        if (ctx->pc != 0x2977E0u) { return; }
    }
    ctx->pc = 0x2977E0u;
label_2977e0:
    // 0x2977e0: 0x3c050029  lui         $a1, 0x29
    ctx->pc = 0x2977e0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)41 << 16));
    // 0x2977e4: 0x200402d  daddu       $t0, $s0, $zero
    ctx->pc = 0x2977e4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2977e8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2977e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2977ec: 0x24a57830  addiu       $a1, $a1, 0x7830
    ctx->pc = 0x2977ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 30768));
    // 0x2977f0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2977f0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2977f4: 0xc0400bc  jal         func_1002F0
    ctx->pc = 0x2977F4u;
    SET_GPR_U32(ctx, 31, 0x2977FCu);
    ctx->pc = 0x2977F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2977F4u;
            // 0x2977f8: 0x24070014  addiu       $a3, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002F0u;
    if (runtime->hasFunction(0x1002F0u)) {
        auto targetFn = runtime->lookupFunction(0x1002F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2977FCu; }
        if (ctx->pc != 0x2977FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___construct_new_array_0x1002f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2977FCu; }
        if (ctx->pc != 0x2977FCu) { return; }
    }
    ctx->pc = 0x2977FCu;
label_2977fc:
    // 0x2977fc: 0xae620008  sw          $v0, 0x8($s3)
    ctx->pc = 0x2977fcu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 8), GPR_U32(ctx, 2));
    // 0x297800: 0xae720000  sw          $s2, 0x0($s3)
    ctx->pc = 0x297800u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 18));
    // 0x297804: 0xae710004  sw          $s1, 0x4($s3)
    ctx->pc = 0x297804u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 17));
    // 0x297808: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x297808u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x29780c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x29780cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x297810: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x297810u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x297814: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x297814u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x297818: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x297818u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x29781c: 0x3e00008  jr          $ra
    ctx->pc = 0x29781Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x297820u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29781Cu;
            // 0x297820: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x297824u;
}
