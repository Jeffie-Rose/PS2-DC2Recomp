#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _CHARA_RESET_DA__FP12RS_STACKDATAi
// Address: 0x2797e0 - 0x279830
void ps2__CHARA_RESET_DA__FP12RS_STACKDATAi_0x2797e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__CHARA_RESET_DA__FP12RS_STACKDATAi_0x2797e0");
#endif

    switch (ctx->pc) {
        case 0x2797f0u: goto label_2797f0;
        case 0x2797f8u: goto label_2797f8;
        case 0x279810u: goto label_279810;
        case 0x27981cu: goto label_27981c;
        default: break;
    }

    ctx->pc = 0x2797e0u;

    // 0x2797e0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2797e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2797e4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2797e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2797e8: 0xc097e18  jal         func_25F860
    ctx->pc = 0x2797E8u;
    SET_GPR_U32(ctx, 31, 0x2797F0u);
    ctx->pc = 0x2797ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2797E8u;
            // 0x2797ec: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F860u;
    if (runtime->hasFunction(0x25F860u)) {
        auto targetFn = runtime->lookupFunction(0x25F860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2797F0u; }
        if (ctx->pc != 0x2797F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x25f860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2797F0u; }
        if (ctx->pc != 0x2797F0u) { return; }
    }
    ctx->pc = 0x2797F0u;
label_2797f0:
    // 0x2797f0: 0xc0956d4  jal         func_255B50
    ctx->pc = 0x2797F0u;
    SET_GPR_U32(ctx, 31, 0x2797F8u);
    ctx->pc = 0x2797F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2797F0u;
            // 0x2797f4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x255B50u;
    if (runtime->hasFunction(0x255B50u)) {
        auto targetFn = runtime->lookupFunction(0x255B50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2797F8u; }
        if (ctx->pc != 0x2797F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetCharacter__Fi_0x255b50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2797F8u; }
        if (ctx->pc != 0x2797F8u) { return; }
    }
    ctx->pc = 0x2797F8u;
label_2797f8:
    // 0x2797f8: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2797F8u;
    {
        const bool branch_taken_0x2797f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2797FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2797F8u;
            // 0x2797fc: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2797f8) {
            ctx->pc = 0x279808u;
            goto label_279808;
        }
    }
    ctx->pc = 0x279800u;
    // 0x279800: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x279800u;
    {
        const bool branch_taken_0x279800 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x279804u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x279800u;
            // 0x279804: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x279800) {
            ctx->pc = 0x279820u;
            goto label_279820;
        }
    }
    ctx->pc = 0x279808u;
label_279808:
    // 0x279808: 0xc05cdec  jal         func_1737B0
    ctx->pc = 0x279808u;
    SET_GPR_U32(ctx, 31, 0x279810u);
    ctx->pc = 0x27980Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x279808u;
            // 0x27980c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1737B0u;
    if (runtime->hasFunction(0x1737B0u)) {
        auto targetFn = runtime->lookupFunction(0x1737B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x279810u; }
        if (ctx->pc != 0x279810u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ResetDAPosition__11CCharacter2Fv_0x1737b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x279810u; }
        if (ctx->pc != 0x279810u) { return; }
    }
    ctx->pc = 0x279810u;
label_279810:
    // 0x279810: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x279810u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x279814: 0xc05d0b8  jal         func_1742E0
    ctx->pc = 0x279814u;
    SET_GPR_U32(ctx, 31, 0x27981Cu);
    ctx->pc = 0x279818u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x279814u;
            // 0x279818: 0x2405000a  addiu       $a1, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1742E0u;
    if (runtime->hasFunction(0x1742E0u)) {
        auto targetFn = runtime->lookupFunction(0x1742E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27981Cu; }
        if (ctx->pc != 0x27981Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        StepDA__11CCharacter2Fi_0x1742e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27981Cu; }
        if (ctx->pc != 0x27981Cu) { return; }
    }
    ctx->pc = 0x27981Cu;
label_27981c:
    // 0x27981c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x27981cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_279820:
    // 0x279820: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x279820u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x279824: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x279824u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x279828: 0x3e00008  jr          $ra
    ctx->pc = 0x279828u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x27982Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x279828u;
            // 0x27982c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x279830u;
}
