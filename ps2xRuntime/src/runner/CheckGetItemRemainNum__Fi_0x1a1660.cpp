#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: CheckGetItemRemainNum__Fi
// Address: 0x1a1660 - 0x1a16b0
void CheckGetItemRemainNum__Fi_0x1a1660(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("CheckGetItemRemainNum__Fi_0x1a1660");
#endif

    switch (ctx->pc) {
        case 0x1a1674u: goto label_1a1674;
        case 0x1a168cu: goto label_1a168c;
        case 0x1a1698u: goto label_1a1698;
        default: break;
    }

    ctx->pc = 0x1a1660u;

    // 0x1a1660: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1a1660u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1a1664: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1a1664u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1a1668: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1a1668u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1a166c: 0xc065af8  jal         func_196BE0
    ctx->pc = 0x1A166Cu;
    SET_GPR_U32(ctx, 31, 0x1A1674u);
    ctx->pc = 0x1A1670u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A166Cu;
            // 0x1a1670: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x196BE0u;
    if (runtime->hasFunction(0x196BE0u)) {
        auto targetFn = runtime->lookupFunction(0x196BE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A1674u; }
        if (ctx->pc != 0x1A1674u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetUserDataMan__Fv_0x196be0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A1674u; }
        if (ctx->pc != 0x1A1674u) { return; }
    }
    ctx->pc = 0x1A1674u;
label_1a1674:
    // 0x1a1674: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1A1674u;
    {
        const bool branch_taken_0x1a1674 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A1678u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A1674u;
            // 0x1a1678: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a1674) {
            ctx->pc = 0x1A1684u;
            goto label_1a1684;
        }
    }
    ctx->pc = 0x1A167Cu;
    // 0x1a167c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1A167Cu;
    {
        const bool branch_taken_0x1a167c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A1680u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A167Cu;
            // 0x1a1680: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a167c) {
            ctx->pc = 0x1A16A0u;
            goto label_1a16a0;
        }
    }
    ctx->pc = 0x1A1684u;
label_1a1684:
    // 0x1a1684: 0xc067778  jal         func_19DDE0
    ctx->pc = 0x1A1684u;
    SET_GPR_U32(ctx, 31, 0x1A168Cu);
    ctx->pc = 0x1A1688u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A1684u;
            // 0x1a1688: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19DDE0u;
    if (runtime->hasFunction(0x19DDE0u)) {
        auto targetFn = runtime->lookupFunction(0x19DDE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A168Cu; }
        if (ctx->pc != 0x1A168Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetNumSameItem__16CUserDataManagerFi_0x19dde0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A168Cu; }
        if (ctx->pc != 0x1A168Cu) { return; }
    }
    ctx->pc = 0x1A168Cu;
label_1a168c:
    // 0x1a168c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1a168cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a1690: 0xc065708  jal         func_195C20
    ctx->pc = 0x1A1690u;
    SET_GPR_U32(ctx, 31, 0x1A1698u);
    ctx->pc = 0x1A1694u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A1690u;
            // 0x1a1694: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195C20u;
    if (runtime->hasFunction(0x195C20u)) {
        auto targetFn = runtime->lookupFunction(0x195C20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A1698u; }
        if (ctx->pc != 0x1A1698u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetCommonItemData__Fi_0x195c20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A1698u; }
        if (ctx->pc != 0x1A1698u) { return; }
    }
    ctx->pc = 0x1A1698u;
label_1a1698:
    // 0x1a1698: 0x9442000a  lhu         $v0, 0xA($v0)
    ctx->pc = 0x1a1698u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 10)));
    // 0x1a169c: 0x501023  subu        $v0, $v0, $s0
    ctx->pc = 0x1a169cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_1a16a0:
    // 0x1a16a0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1a16a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a16a4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1a16a4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a16a8: 0x3e00008  jr          $ra
    ctx->pc = 0x1A16A8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A16ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A16A8u;
            // 0x1a16ac: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1A16B0u;
}
