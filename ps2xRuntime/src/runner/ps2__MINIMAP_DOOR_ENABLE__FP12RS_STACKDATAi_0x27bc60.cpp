#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _MINIMAP_DOOR_ENABLE__FP12RS_STACKDATAi
// Address: 0x27bc60 - 0x27bc9c
void ps2__MINIMAP_DOOR_ENABLE__FP12RS_STACKDATAi_0x27bc60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__MINIMAP_DOOR_ENABLE__FP12RS_STACKDATAi_0x27bc60");
#endif

    switch (ctx->pc) {
        case 0x27bc84u: goto label_27bc84;
        case 0x27bc8cu: goto label_27bc8c;
        default: break;
    }

    ctx->pc = 0x27bc60u;

    // 0x27bc60: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x27bc60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x27bc64: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x27bc64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x27bc68: 0x10a20003  beq         $a1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x27BC68u;
    {
        const bool branch_taken_0x27bc68 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x27BC6Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27BC68u;
            // 0x27bc6c: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27bc68) {
            ctx->pc = 0x27BC78u;
            goto label_27bc78;
        }
    }
    ctx->pc = 0x27BC70u;
    // 0x27bc70: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x27BC70u;
    {
        const bool branch_taken_0x27bc70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27BC74u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27BC70u;
            // 0x27bc74: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27bc70) {
            ctx->pc = 0x27BC90u;
            goto label_27bc90;
        }
    }
    ctx->pc = 0x27BC78u;
label_27bc78:
    // 0x27bc78: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x27bc78u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27bc7c: 0xc097e34  jal         func_25F8D0
    ctx->pc = 0x27BC7Cu;
    SET_GPR_U32(ctx, 31, 0x27BC84u);
    ctx->pc = 0x27BC80u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27BC7Cu;
            // 0x27bc80: 0x27a40010  addiu       $a0, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F8D0u;
    if (runtime->hasFunction(0x25F8D0u)) {
        auto targetFn = runtime->lookupFunction(0x25F8D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27BC84u; }
        if (ctx->pc != 0x27BC84u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackVector__FPfP12RS_STACKDATA_0x25f8d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27BC84u; }
        if (ctx->pc != 0x27BC84u) { return; }
    }
    ctx->pc = 0x27BC84u;
label_27bc84:
    // 0x27bc84: 0xc0a3f3c  jal         func_28FCF0
    ctx->pc = 0x27BC84u;
    SET_GPR_U32(ctx, 31, 0x27BC8Cu);
    ctx->pc = 0x27BC88u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27BC84u;
            // 0x27bc88: 0x27a40010  addiu       $a0, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x28FCF0u;
    if (runtime->hasFunction(0x28FCF0u)) {
        auto targetFn = runtime->lookupFunction(0x28FCF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27BC8Cu; }
        if (ctx->pc != 0x27BC8Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MinimapDoorEnable__FPf_0x28fcf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27BC8Cu; }
        if (ctx->pc != 0x27BC8Cu) { return; }
    }
    ctx->pc = 0x27BC8Cu;
label_27bc8c:
    // 0x27bc8c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x27bc8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_27bc90:
    // 0x27bc90: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x27bc90u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x27bc94: 0x3e00008  jr          $ra
    ctx->pc = 0x27BC94u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x27BC98u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27BC94u;
            // 0x27bc98: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x27BC9Cu;
}
