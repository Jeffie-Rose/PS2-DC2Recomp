#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: SetDummyMountain__11CAutoMapGenFv
// Address: 0x1d7b30 - 0x1d7bb0
void SetDummyMountain__11CAutoMapGenFv_0x1d7b30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SetDummyMountain__11CAutoMapGenFv_0x1d7b30");
#endif

    switch (ctx->pc) {
        case 0x1d7b48u: goto label_1d7b48;
        case 0x1d7b60u: goto label_1d7b60;
        case 0x1d7ba0u: goto label_1d7ba0;
        default: break;
    }

    ctx->pc = 0x1d7b30u;

    // 0x1d7b30: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1d7b30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1d7b34: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1d7b34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1d7b38: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1d7b38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1d7b3c: 0x8f848dac  lw          $a0, -0x7254($gp)
    ctx->pc = 0x1d7b3cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938028)));
    // 0x1d7b40: 0xc0a0f58  jal         func_283D60
    ctx->pc = 0x1D7B40u;
    SET_GPR_U32(ctx, 31, 0x1D7B48u);
    ctx->pc = 0x1D7B44u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D7B40u;
            // 0x1d7b44: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x283D60u;
    if (runtime->hasFunction(0x283D60u)) {
        auto targetFn = runtime->lookupFunction(0x283D60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D7B48u; }
        if (ctx->pc != 0x1D7B48u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetMap__6CSceneFi_0x283d60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D7B48u; }
        if (ctx->pc != 0x1D7B48u) { return; }
    }
    ctx->pc = 0x1D7B48u;
label_1d7b48:
    // 0x1d7b48: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1d7b48u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d7b4c: 0x12000014  beqz        $s0, . + 4 + (0x14 << 2)
    ctx->pc = 0x1D7B4Cu;
    {
        const bool branch_taken_0x1d7b4c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d7b4c) {
            ctx->pc = 0x1D7BA0u;
            goto label_1d7ba0;
        }
    }
    ctx->pc = 0x1D7B54u;
    // 0x1d7b54: 0x8f848dac  lw          $a0, -0x7254($gp)
    ctx->pc = 0x1d7b54u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938028)));
    // 0x1d7b58: 0xc0a0c64  jal         func_283190
    ctx->pc = 0x1D7B58u;
    SET_GPR_U32(ctx, 31, 0x1D7B60u);
    ctx->pc = 0x1D7B5Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D7B58u;
            // 0x1d7b5c: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x283190u;
    if (runtime->hasFunction(0x283190u)) {
        auto targetFn = runtime->lookupFunction(0x283190u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D7B60u; }
        if (ctx->pc != 0x1D7B60u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStack__6CSceneFi_0x283190(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D7B60u; }
        if (ctx->pc != 0x1D7B60u) { return; }
    }
    ctx->pc = 0x1D7B60u;
label_1d7b60:
    // 0x1d7b60: 0x3c030034  lui         $v1, 0x34
    ctx->pc = 0x1d7b60u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)52 << 16));
    // 0x1d7b64: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x1d7b64u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1d7b68: 0x2463d980  addiu       $v1, $v1, -0x2680
    ctx->pc = 0x1d7b68u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294957440));
    // 0x1d7b6c: 0x3c050036  lui         $a1, 0x36
    ctx->pc = 0x1d7b6cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)54 << 16));
    // 0x1d7b70: 0x786a0000  lq          $t2, 0x0($v1)
    ctx->pc = 0x1d7b70u;
    SET_GPR_VEC(ctx, 10, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1d7b74: 0x40482d  daddu       $t1, $v0, $zero
    ctx->pc = 0x1d7b74u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d7b78: 0x27a80030  addiu       $t0, $sp, 0x30
    ctx->pc = 0x1d7b78u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1d7b7c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d7b7cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d7b80: 0x24a57e00  addiu       $a1, $a1, 0x7E00
    ctx->pc = 0x1d7b80u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 32256));
    // 0x1d7b84: 0xc0382d  daddu       $a3, $a2, $zero
    ctx->pc = 0x1d7b84u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d7b88: 0x3c030034  lui         $v1, 0x34
    ctx->pc = 0x1d7b88u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)52 << 16));
    // 0x1d7b8c: 0x7cca0000  sq          $t2, 0x0($a2)
    ctx->pc = 0x1d7b8cu;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 10));
    // 0x1d7b90: 0x2463d990  addiu       $v1, $v1, -0x2670
    ctx->pc = 0x1d7b90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294957456));
    // 0x1d7b94: 0x78620000  lq          $v0, 0x0($v1)
    ctx->pc = 0x1d7b94u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1d7b98: 0xc057420  jal         func_15D080
    ctx->pc = 0x1D7B98u;
    SET_GPR_U32(ctx, 31, 0x1D7BA0u);
    ctx->pc = 0x1D7B9Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D7B98u;
            // 0x1d7b9c: 0x7d020000  sq          $v0, 0x0($t0) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 8), 0), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15D080u;
    if (runtime->hasFunction(0x15D080u)) {
        auto targetFn = runtime->lookupFunction(0x15D080u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D7BA0u; }
        if (ctx->pc != 0x1D7BA0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        PlaceParts__4CMapFPcPfPfPfP9mgCMemory_0x15d080(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D7BA0u; }
        if (ctx->pc != 0x1D7BA0u) { return; }
    }
    ctx->pc = 0x1D7BA0u;
label_1d7ba0:
    // 0x1d7ba0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1d7ba0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d7ba4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1d7ba4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d7ba8: 0x3e00008  jr          $ra
    ctx->pc = 0x1D7BA8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D7BACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D7BA8u;
            // 0x1d7bac: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1D7BB0u;
}
