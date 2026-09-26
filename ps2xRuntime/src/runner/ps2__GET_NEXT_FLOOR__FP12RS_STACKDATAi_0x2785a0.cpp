#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _GET_NEXT_FLOOR__FP12RS_STACKDATAi
// Address: 0x2785a0 - 0x27861c
void ps2__GET_NEXT_FLOOR__FP12RS_STACKDATAi_0x2785a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__GET_NEXT_FLOOR__FP12RS_STACKDATAi_0x2785a0");
#endif

    switch (ctx->pc) {
        case 0x2785b8u: goto label_2785b8;
        case 0x2785c8u: goto label_2785c8;
        case 0x2785f8u: goto label_2785f8;
        case 0x278604u: goto label_278604;
        default: break;
    }

    ctx->pc = 0x2785a0u;

    // 0x2785a0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2785a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2785a4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2785a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2785a8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2785a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2785ac: 0x24910008  addiu       $s1, $a0, 0x8
    ctx->pc = 0x2785acu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x2785b0: 0xc097e18  jal         func_25F860
    ctx->pc = 0x2785B0u;
    SET_GPR_U32(ctx, 31, 0x2785B8u);
    ctx->pc = 0x2785B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2785B0u;
            // 0x2785b4: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F860u;
    if (runtime->hasFunction(0x25F860u)) {
        auto targetFn = runtime->lookupFunction(0x25F860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2785B8u; }
        if (ctx->pc != 0x2785B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x25f860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2785B8u; }
        if (ctx->pc != 0x2785B8u) { return; }
    }
    ctx->pc = 0x2785B8u;
label_2785b8:
    // 0x2785b8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2785b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2785bc: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2785bcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2785c0: 0xc097e18  jal         func_25F860
    ctx->pc = 0x2785C0u;
    SET_GPR_U32(ctx, 31, 0x2785C8u);
    ctx->pc = 0x2785C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2785C0u;
            // 0x2785c4: 0x24910008  addiu       $s1, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F860u;
    if (runtime->hasFunction(0x25F860u)) {
        auto targetFn = runtime->lookupFunction(0x25F860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2785C8u; }
        if (ctx->pc != 0x2785C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x25f860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2785C8u; }
        if (ctx->pc != 0x2785C8u) { return; }
    }
    ctx->pc = 0x2785C8u;
label_2785c8:
    // 0x2785c8: 0x8f8397dc  lw          $v1, -0x6824($gp)
    ctx->pc = 0x2785c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940636)));
    // 0x2785cc: 0x24632f90  addiu       $v1, $v1, 0x2F90
    ctx->pc = 0x2785ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 12176));
    // 0x2785d0: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2785D0u;
    {
        const bool branch_taken_0x2785d0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2785D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2785D0u;
            // 0x2785d4: 0x24640014  addiu       $a0, $v1, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2785d0) {
            ctx->pc = 0x2785E0u;
            goto label_2785e0;
        }
    }
    ctx->pc = 0x2785D8u;
    // 0x2785d8: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x2785D8u;
    {
        const bool branch_taken_0x2785d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2785DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2785D8u;
            // 0x2785dc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2785d8) {
            ctx->pc = 0x278608u;
            goto label_278608;
        }
    }
    ctx->pc = 0x2785E0u;
label_2785e0:
    // 0x2785e0: 0x14800003  bnez        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2785E0u;
    {
        const bool branch_taken_0x2785e0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x2785E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2785E0u;
            // 0x2785e4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2785e0) {
            ctx->pc = 0x2785F0u;
            goto label_2785f0;
        }
    }
    ctx->pc = 0x2785E8u;
    // 0x2785e8: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x2785E8u;
    {
        const bool branch_taken_0x2785e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2785ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2785E8u;
            // 0x2785ec: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2785e8) {
            ctx->pc = 0x278608u;
            goto label_278608;
        }
    }
    ctx->pc = 0x2785F0u;
label_2785f0:
    // 0x2785f0: 0xc0be954  jal         func_2FA550
    ctx->pc = 0x2785F0u;
    SET_GPR_U32(ctx, 31, 0x2785F8u);
    ctx->pc = 0x2785F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2785F0u;
            // 0x2785f4: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2FA550u;
    if (runtime->hasFunction(0x2FA550u)) {
        auto targetFn = runtime->lookupFunction(0x2FA550u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2785F8u; }
        if (ctx->pc != 0x2785F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetDngMapNextFloorID__16CDngFloorManagerFii_0x2fa550(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2785F8u; }
        if (ctx->pc != 0x2785F8u) { return; }
    }
    ctx->pc = 0x2785F8u;
label_2785f8:
    // 0x2785f8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2785f8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2785fc: 0xc097e4c  jal         func_25F930
    ctx->pc = 0x2785FCu;
    SET_GPR_U32(ctx, 31, 0x278604u);
    ctx->pc = 0x278600u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2785FCu;
            // 0x278600: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F930u;
    if (runtime->hasFunction(0x25F930u)) {
        auto targetFn = runtime->lookupFunction(0x25F930u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x278604u; }
        if (ctx->pc != 0x278604u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetStack__FP12RS_STACKDATAi_0x25f930(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x278604u; }
        if (ctx->pc != 0x278604u) { return; }
    }
    ctx->pc = 0x278604u;
label_278604:
    // 0x278604: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x278604u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_278608:
    // 0x278608: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x278608u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x27860c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x27860cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x278610: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x278610u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x278614: 0x3e00008  jr          $ra
    ctx->pc = 0x278614u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x278618u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x278614u;
            // 0x278618: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x27861Cu;
}
