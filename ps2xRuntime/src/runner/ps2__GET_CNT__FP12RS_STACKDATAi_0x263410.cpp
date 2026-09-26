#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _GET_CNT__FP12RS_STACKDATAi
// Address: 0x263410 - 0x263470
void ps2__GET_CNT__FP12RS_STACKDATAi_0x263410(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__GET_CNT__FP12RS_STACKDATAi_0x263410");
#endif

    switch (ctx->pc) {
        case 0x263428u: goto label_263428;
        case 0x263430u: goto label_263430;
        case 0x263448u: goto label_263448;
        case 0x263458u: goto label_263458;
        default: break;
    }

    ctx->pc = 0x263410u;

    // 0x263410: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x263410u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x263414: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x263414u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x263418: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x263418u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x26341c: 0x24910008  addiu       $s1, $a0, 0x8
    ctx->pc = 0x26341cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x263420: 0xc097e18  jal         func_25F860
    ctx->pc = 0x263420u;
    SET_GPR_U32(ctx, 31, 0x263428u);
    ctx->pc = 0x263424u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x263420u;
            // 0x263424: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F860u;
    if (runtime->hasFunction(0x25F860u)) {
        auto targetFn = runtime->lookupFunction(0x25F860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x263428u; }
        if (ctx->pc != 0x263428u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x25f860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x263428u; }
        if (ctx->pc != 0x263428u) { return; }
    }
    ctx->pc = 0x263428u;
label_263428:
    // 0x263428: 0xc064220  jal         func_190880
    ctx->pc = 0x263428u;
    SET_GPR_U32(ctx, 31, 0x263430u);
    ctx->pc = 0x26342Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x263428u;
            // 0x26342c: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x190880u;
    if (runtime->hasFunction(0x190880u)) {
        auto targetFn = runtime->lookupFunction(0x190880u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x263430u; }
        if (ctx->pc != 0x263430u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetSaveData__Fv_0x190880(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x263430u; }
        if (ctx->pc != 0x263430u) { return; }
    }
    ctx->pc = 0x263430u;
label_263430:
    // 0x263430: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x263430u;
    {
        const bool branch_taken_0x263430 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x263434u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x263430u;
            // 0x263434: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x263430) {
            ctx->pc = 0x263440u;
            goto label_263440;
        }
    }
    ctx->pc = 0x263438u;
    // 0x263438: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x263438u;
    {
        const bool branch_taken_0x263438 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26343Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x263438u;
            // 0x26343c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x263438) {
            ctx->pc = 0x26345Cu;
            goto label_26345c;
        }
    }
    ctx->pc = 0x263440u;
label_263440:
    // 0x263440: 0xc0bd950  jal         func_2F6540
    ctx->pc = 0x263440u;
    SET_GPR_U32(ctx, 31, 0x263448u);
    ctx->pc = 0x263444u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x263440u;
            // 0x263444: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F6540u;
    if (runtime->hasFunction(0x2F6540u)) {
        auto targetFn = runtime->lookupFunction(0x2F6540u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x263448u; }
        if (ctx->pc != 0x263448u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetShortFlag__9CSaveDataFi_0x2f6540(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x263448u; }
        if (ctx->pc != 0x263448u) { return; }
    }
    ctx->pc = 0x263448u;
label_263448:
    // 0x263448: 0x22c3c  dsll32      $a1, $v0, 16
    ctx->pc = 0x263448u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) << (32 + 16));
    // 0x26344c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x26344cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x263450: 0xc097e4c  jal         func_25F930
    ctx->pc = 0x263450u;
    SET_GPR_U32(ctx, 31, 0x263458u);
    ctx->pc = 0x263454u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x263450u;
            // 0x263454: 0x52c3f  dsra32      $a1, $a1, 16 (Delay Slot)
        SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F930u;
    if (runtime->hasFunction(0x25F930u)) {
        auto targetFn = runtime->lookupFunction(0x25F930u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x263458u; }
        if (ctx->pc != 0x263458u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetStack__FP12RS_STACKDATAi_0x25f930(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x263458u; }
        if (ctx->pc != 0x263458u) { return; }
    }
    ctx->pc = 0x263458u;
label_263458:
    // 0x263458: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x263458u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_26345c:
    // 0x26345c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x26345cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x263460: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x263460u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x263464: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x263464u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x263468: 0x3e00008  jr          $ra
    ctx->pc = 0x263468u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x26346Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x263468u;
            // 0x26346c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x263470u;
}
