#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _GET_BTN__FP12RS_STACKDATAi
// Address: 0x2ce6a0 - 0x2ce6f0
void ps2__GET_BTN__FP12RS_STACKDATAi_0x2ce6a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__GET_BTN__FP12RS_STACKDATAi_0x2ce6a0");
#endif

    switch (ctx->pc) {
        case 0x2ce6c0u: goto label_2ce6c0;
        case 0x2ce6d0u: goto label_2ce6d0;
        case 0x2ce6dcu: goto label_2ce6dc;
        default: break;
    }

    ctx->pc = 0x2ce6a0u;

    // 0x2ce6a0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2ce6a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2ce6a4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2ce6a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2ce6a8: 0x1ca00003  bgtz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2CE6A8u;
    {
        const bool branch_taken_0x2ce6a8 = (GPR_S32(ctx, 5) > 0);
        ctx->pc = 0x2CE6ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2CE6A8u;
            // 0x2ce6ac: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ce6a8) {
            ctx->pc = 0x2CE6B8u;
            goto label_2ce6b8;
        }
    }
    ctx->pc = 0x2CE6B0u;
    // 0x2ce6b0: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x2CE6B0u;
    {
        const bool branch_taken_0x2ce6b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CE6B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2CE6B0u;
            // 0x2ce6b4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ce6b0) {
            ctx->pc = 0x2CE6E0u;
            goto label_2ce6e0;
        }
    }
    ctx->pc = 0x2CE6B8u;
label_2ce6b8:
    // 0x2ce6b8: 0xc0b378c  jal         func_2CDE30
    ctx->pc = 0x2CE6B8u;
    SET_GPR_U32(ctx, 31, 0x2CE6C0u);
    ctx->pc = 0x2CE6BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2CE6B8u;
            // 0x2ce6bc: 0x24900008  addiu       $s0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2CDE30u;
    if (runtime->hasFunction(0x2CDE30u)) {
        auto targetFn = runtime->lookupFunction(0x2CDE30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CE6C0u; }
        if (ctx->pc != 0x2CE6C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x2cde30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CE6C0u; }
        if (ctx->pc != 0x2CE6C0u) { return; }
    }
    ctx->pc = 0x2CE6C0u;
label_2ce6c0:
    // 0x2ce6c0: 0x3c04003d  lui         $a0, 0x3D
    ctx->pc = 0x2ce6c0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
    // 0x2ce6c4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2ce6c4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ce6c8: 0xc0bb538  jal         func_2ED4E0
    ctx->pc = 0x2CE6C8u;
    SET_GPR_U32(ctx, 31, 0x2CE6D0u);
    ctx->pc = 0x2CE6CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2CE6C8u;
            // 0x2ce6cc: 0x24847b60  addiu       $a0, $a0, 0x7B60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 31584));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2ED4E0u;
    if (runtime->hasFunction(0x2ED4E0u)) {
        auto targetFn = runtime->lookupFunction(0x2ED4E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CE6D0u; }
        if (ctx->pc != 0x2CE6D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Btn__11CPadControlFi_0x2ed4e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CE6D0u; }
        if (ctx->pc != 0x2CE6D0u) { return; }
    }
    ctx->pc = 0x2CE6D0u;
label_2ce6d0:
    // 0x2ce6d0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2ce6d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ce6d4: 0xc0b37ac  jal         func_2CDEB0
    ctx->pc = 0x2CE6D4u;
    SET_GPR_U32(ctx, 31, 0x2CE6DCu);
    ctx->pc = 0x2CE6D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2CE6D4u;
            // 0x2ce6d8: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2CDEB0u;
    if (runtime->hasFunction(0x2CDEB0u)) {
        auto targetFn = runtime->lookupFunction(0x2CDEB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CE6DCu; }
        if (ctx->pc != 0x2CE6DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetStack__FP12RS_STACKDATAi_0x2cdeb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CE6DCu; }
        if (ctx->pc != 0x2CE6DCu) { return; }
    }
    ctx->pc = 0x2CE6DCu;
label_2ce6dc:
    // 0x2ce6dc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2ce6dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2ce6e0:
    // 0x2ce6e0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2ce6e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2ce6e4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2ce6e4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2ce6e8: 0x3e00008  jr          $ra
    ctx->pc = 0x2CE6E8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2CE6ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2CE6E8u;
            // 0x2ce6ec: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2CE6F0u;
}
