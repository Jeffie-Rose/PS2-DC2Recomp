#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _GET_ATTK_POINT__FP12RS_STACKDATAi
// Address: 0x2d1660 - 0x2d16c8
void ps2__GET_ATTK_POINT__FP12RS_STACKDATAi_0x2d1660(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__GET_ATTK_POINT__FP12RS_STACKDATAi_0x2d1660");
#endif

    switch (ctx->pc) {
        case 0x2d1688u: goto label_2d1688;
        case 0x2d1690u: goto label_2d1690;
        case 0x2d16b0u: goto label_2d16b0;
        default: break;
    }

    ctx->pc = 0x2d1660u;

    // 0x2d1660: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2d1660u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2d1664: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2d1664u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2d1668: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2d1668u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2d166c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2d166cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2d1670: 0x10a20003  beq         $a1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2D1670u;
    {
        const bool branch_taken_0x2d1670 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x2D1674u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D1670u;
            // 0x2d1674: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d1670) {
            ctx->pc = 0x2D1680u;
            goto label_2d1680;
        }
    }
    ctx->pc = 0x2D1678u;
    // 0x2d1678: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x2D1678u;
    {
        const bool branch_taken_0x2d1678 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D167Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D1678u;
            // 0x2d167c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d1678) {
            ctx->pc = 0x2D16B4u;
            goto label_2d16b4;
        }
    }
    ctx->pc = 0x2D1680u;
label_2d1680:
    // 0x2d1680: 0xc0b378c  jal         func_2CDE30
    ctx->pc = 0x2D1680u;
    SET_GPR_U32(ctx, 31, 0x2D1688u);
    ctx->pc = 0x2D1684u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D1680u;
            // 0x2d1684: 0x24910008  addiu       $s1, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2CDE30u;
    if (runtime->hasFunction(0x2CDE30u)) {
        auto targetFn = runtime->lookupFunction(0x2CDE30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D1688u; }
        if (ctx->pc != 0x2D1688u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x2cde30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D1688u; }
        if (ctx->pc != 0x2D1688u) { return; }
    }
    ctx->pc = 0x2D1688u;
label_2d1688:
    // 0x2d1688: 0xc0683a8  jal         func_1A0EA0
    ctx->pc = 0x2D1688u;
    SET_GPR_U32(ctx, 31, 0x2D1690u);
    ctx->pc = 0x2D168Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D1688u;
            // 0x2d168c: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A0EA0u;
    if (runtime->hasFunction(0x1A0EA0u)) {
        auto targetFn = runtime->lookupFunction(0x1A0EA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D1690u; }
        if (ctx->pc != 0x2D1690u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetBattleCharaInfo__Fv_0x1a0ea0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D1690u; }
        if (ctx->pc != 0x2D1690u) { return; }
    }
    ctx->pc = 0x2D1690u;
label_2d1690:
    // 0x2d1690: 0x24430034  addiu       $v1, $v0, 0x34
    ctx->pc = 0x2d1690u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 52));
    // 0x2d1694: 0x1010c0  sll         $v0, $s0, 3
    ctx->pc = 0x2d1694u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
    // 0x2d1698: 0x501023  subu        $v0, $v0, $s0
    ctx->pc = 0x2d1698u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x2d169c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2d169cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2d16a0: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x2d16a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2d16a4: 0x84450000  lh          $a1, 0x0($v0)
    ctx->pc = 0x2d16a4u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2d16a8: 0xc0b37ac  jal         func_2CDEB0
    ctx->pc = 0x2D16A8u;
    SET_GPR_U32(ctx, 31, 0x2D16B0u);
    ctx->pc = 0x2D16ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D16A8u;
            // 0x2d16ac: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2CDEB0u;
    if (runtime->hasFunction(0x2CDEB0u)) {
        auto targetFn = runtime->lookupFunction(0x2CDEB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D16B0u; }
        if (ctx->pc != 0x2D16B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetStack__FP12RS_STACKDATAi_0x2cdeb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D16B0u; }
        if (ctx->pc != 0x2D16B0u) { return; }
    }
    ctx->pc = 0x2D16B0u;
label_2d16b0:
    // 0x2d16b0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2d16b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2d16b4:
    // 0x2d16b4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2d16b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2d16b8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2d16b8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2d16bc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2d16bcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2d16c0: 0x3e00008  jr          $ra
    ctx->pc = 0x2D16C0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D16C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D16C0u;
            // 0x2d16c4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2D16C8u;
}
