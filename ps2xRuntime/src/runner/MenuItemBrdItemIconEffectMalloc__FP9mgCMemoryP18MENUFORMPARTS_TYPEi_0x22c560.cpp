#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: MenuItemBrdItemIconEffectMalloc__FP9mgCMemoryP18MENUFORMPARTS_TYPEi
// Address: 0x22c560 - 0x22c62c
void MenuItemBrdItemIconEffectMalloc__FP9mgCMemoryP18MENUFORMPARTS_TYPEi_0x22c560(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("MenuItemBrdItemIconEffectMalloc__FP9mgCMemoryP18MENUFORMPARTS_TYPEi_0x22c560");
#endif

    switch (ctx->pc) {
        case 0x22c59cu: goto label_22c59c;
        case 0x22c5a8u: goto label_22c5a8;
        case 0x22c5c0u: goto label_22c5c0;
        case 0x22c5c8u: goto label_22c5c8;
        case 0x22c5e4u: goto label_22c5e4;
        case 0x22c5f8u: goto label_22c5f8;
        default: break;
    }

    ctx->pc = 0x22c560u;

    // 0x22c560: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x22c560u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x22c564: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x22c564u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x22c568: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x22c568u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x22c56c: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x22c56cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x22c570: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x22c570u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x22c574: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x22c574u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x22c578: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x22c578u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22c57c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x22c57cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x22c580: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x22c580u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22c584: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x22c584u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x22c588: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x22c588u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22c58c: 0x10082a  slt         $at, $zero, $s0
    ctx->pc = 0x22c58cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x22c590: 0x10200011  beqz        $at, . + 4 + (0x11 << 2)
    ctx->pc = 0x22C590u;
    {
        const bool branch_taken_0x22c590 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x22C594u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22C590u;
            // 0x22c594: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22c590) {
            ctx->pc = 0x22C5D8u;
            goto label_22c5d8;
        }
    }
    ctx->pc = 0x22C598u;
    // 0x22c598: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x22c598u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_22c59c:
    // 0x22c59c: 0x234a821  addu        $s5, $s1, $s4
    ctx->pc = 0x22c59cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 20)));
    // 0x22c5a0: 0xc089600  jal         func_225800
    ctx->pc = 0x22C5A0u;
    SET_GPR_U32(ctx, 31, 0x22C5A8u);
    ctx->pc = 0x22C5A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22C5A0u;
            // 0x22c5a4: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x225800u;
    if (runtime->hasFunction(0x225800u)) {
        auto targetFn = runtime->lookupFunction(0x225800u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22C5A8u; }
        if (ctx->pc != 0x22C5A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuPosDataTypeInit__FP18MENUFORMPARTS_TYPE_0x225800(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22C5A8u; }
        if (ctx->pc != 0x22C5A8u) { return; }
    }
    ctx->pc = 0x22C5A8u;
label_22c5a8:
    // 0x22c5a8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x22c5a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x22c5ac: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x22c5acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22c5b0: 0xa2a20004  sb          $v0, 0x4($s5)
    ctx->pc = 0x22c5b0u;
    WRITE8(ADD32(GPR_U32(ctx, 21), 4), (uint8_t)GPR_U32(ctx, 2));
    // 0x22c5b4: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x22c5b4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22c5b8: 0xc089698  jal         func_225A60
    ctx->pc = 0x22C5B8u;
    SET_GPR_U32(ctx, 31, 0x22C5C0u);
    ctx->pc = 0x22C5BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22C5B8u;
            // 0x22c5bc: 0x24060008  addiu       $a2, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x225A60u;
    if (runtime->hasFunction(0x225A60u)) {
        auto targetFn = runtime->lookupFunction(0x225A60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22C5C0u; }
        if (ctx->pc != 0x22C5C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Func_MallocPartEffectInfo__FP18MENUFORMPARTS_TYPEP9mgCMemoryi_0x225a60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22C5C0u; }
        if (ctx->pc != 0x22C5C0u) { return; }
    }
    ctx->pc = 0x22C5C0u;
label_22c5c0:
    // 0x22c5c0: 0xc08b100  jal         func_22C400
    ctx->pc = 0x22C5C0u;
    SET_GPR_U32(ctx, 31, 0x22C5C8u);
    ctx->pc = 0x22C5C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22C5C0u;
            // 0x22c5c4: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22C400u;
    if (runtime->hasFunction(0x22C400u)) {
        auto targetFn = runtime->lookupFunction(0x22C400u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22C5C8u; }
        if (ctx->pc != 0x22C5C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Func_MenuItemIconSetEffectOne__FP18MENUFORMPARTS_TYPE_0x22c400(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22C5C8u; }
        if (ctx->pc != 0x22C5C8u) { return; }
    }
    ctx->pc = 0x22C5C8u;
label_22c5c8:
    // 0x22c5c8: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x22c5c8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x22c5cc: 0x270102a  slt         $v0, $s3, $s0
    ctx->pc = 0x22c5ccu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x22c5d0: 0x1440fff2  bnez        $v0, . + 4 + (-0xE << 2)
    ctx->pc = 0x22C5D0u;
    {
        const bool branch_taken_0x22c5d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x22C5D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22C5D0u;
            // 0x22c5d4: 0x26940048  addiu       $s4, $s4, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 72));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22c5d0) {
            ctx->pc = 0x22C59Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_22c59c;
        }
    }
    ctx->pc = 0x22C5D8u;
label_22c5d8:
    // 0x22c5d8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x22c5d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22c5dc: 0xc04e748  jal         func_139D20
    ctx->pc = 0x22C5DCu;
    SET_GPR_U32(ctx, 31, 0x22C5E4u);
    ctx->pc = 0x22C5E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22C5DCu;
            // 0x22c5e0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139D20u;
    if (runtime->hasFunction(0x139D20u)) {
        auto targetFn = runtime->lookupFunction(0x139D20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22C5E4u; }
        if (ctx->pc != 0x22C5E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Alloc__9mgCMemoryFi_0x139d20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22C5E4u; }
        if (ctx->pc != 0x22C5E4u) { return; }
    }
    ctx->pc = 0x22C5E4u;
label_22c5e4:
    // 0x22c5e4: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x22c5e4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x22c5e8: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x22c5e8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x22c5ec: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x22c5ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x22c5f0: 0xc04a3dc  jal         func_128F70
    ctx->pc = 0x22C5F0u;
    SET_GPR_U32(ctx, 31, 0x22C5F8u);
    ctx->pc = 0x22C5F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22C5F0u;
            // 0x22c5f4: 0x24a5a6d8  addiu       $a1, $a1, -0x5928 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294944472));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128F70u;
    if (runtime->hasFunction(0x128F70u)) {
        auto targetFn = runtime->lookupFunction(0x128F70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22C5F8u; }
        if (ctx->pc != 0x22C5F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcpy_0x128f70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22C5F8u; }
        if (ctx->pc != 0x22C5F8u) { return; }
    }
    ctx->pc = 0x22C5F8u;
label_22c5f8:
    // 0x22c5f8: 0x3c044200  lui         $a0, 0x4200
    ctx->pc = 0x22c5f8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16896 << 16));
    // 0x22c5fc: 0x3c034220  lui         $v1, 0x4220
    ctx->pc = 0x22c5fcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16928 << 16));
    // 0x22c600: 0xae240024  sw          $a0, 0x24($s1)
    ctx->pc = 0x22c600u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 36), GPR_U32(ctx, 4));
    // 0x22c604: 0xae230028  sw          $v1, 0x28($s1)
    ctx->pc = 0x22c604u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 40), GPR_U32(ctx, 3));
    // 0x22c608: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x22c608u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x22c60c: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x22c60cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x22c610: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x22c610u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x22c614: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x22c614u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x22c618: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x22c618u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x22c61c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x22c61cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x22c620: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x22c620u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x22c624: 0x3e00008  jr          $ra
    ctx->pc = 0x22C624u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22C628u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22C624u;
            // 0x22c628: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x22C62Cu;
}
