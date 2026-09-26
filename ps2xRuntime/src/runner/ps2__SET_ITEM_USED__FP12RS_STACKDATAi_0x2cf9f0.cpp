#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _SET_ITEM_USED__FP12RS_STACKDATAi
// Address: 0x2cf9f0 - 0x2cfa2c
void ps2__SET_ITEM_USED__FP12RS_STACKDATAi_0x2cf9f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__SET_ITEM_USED__FP12RS_STACKDATAi_0x2cf9f0");
#endif

    switch (ctx->pc) {
        case 0x2cfa0cu: goto label_2cfa0c;
        case 0x2cfa18u: goto label_2cfa18;
        default: break;
    }

    ctx->pc = 0x2cf9f0u;

    // 0x2cf9f0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2cf9f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2cf9f4: 0x3c0101f1  lui         $at, 0x1F1
    ctx->pc = 0x2cf9f4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)497 << 16));
    // 0x2cf9f8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2cf9f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2cf9fc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2cf9fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2cfa00: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2cfa00u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cfa04: 0xc05ac08  jal         func_16B020
    ctx->pc = 0x2CFA04u;
    SET_GPR_U32(ctx, 31, 0x2CFA0Cu);
    ctx->pc = 0x2CFA08u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2CFA04u;
            // 0x2cfa08: 0x8c24d430  lw          $a0, -0x2BD0($at) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294956080)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16B020u;
    if (runtime->hasFunction(0x16B020u)) {
        auto targetFn = runtime->lookupFunction(0x16B020u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CFA0Cu; }
        if (ctx->pc != 0x2CFA0Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        UsedItemAction__12CActionCharaFv_0x16b020(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CFA0Cu; }
        if (ctx->pc != 0x2CFA0Cu) { return; }
    }
    ctx->pc = 0x2CFA0Cu;
label_2cfa0c:
    // 0x2cfa0c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2cfa0cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cfa10: 0xc0b37ac  jal         func_2CDEB0
    ctx->pc = 0x2CFA10u;
    SET_GPR_U32(ctx, 31, 0x2CFA18u);
    ctx->pc = 0x2CFA14u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2CFA10u;
            // 0x2cfa14: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2CDEB0u;
    if (runtime->hasFunction(0x2CDEB0u)) {
        auto targetFn = runtime->lookupFunction(0x2CDEB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CFA18u; }
        if (ctx->pc != 0x2CFA18u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetStack__FP12RS_STACKDATAi_0x2cdeb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CFA18u; }
        if (ctx->pc != 0x2CFA18u) { return; }
    }
    ctx->pc = 0x2CFA18u;
label_2cfa18:
    // 0x2cfa18: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2cfa18u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2cfa1c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2cfa1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2cfa20: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2cfa20u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2cfa24: 0x3e00008  jr          $ra
    ctx->pc = 0x2CFA24u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2CFA28u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2CFA24u;
            // 0x2cfa28: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2CFA2Cu;
}
