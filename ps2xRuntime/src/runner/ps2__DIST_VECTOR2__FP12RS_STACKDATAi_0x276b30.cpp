#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _DIST_VECTOR2__FP12RS_STACKDATAi
// Address: 0x276b30 - 0x276b88
void ps2__DIST_VECTOR2__FP12RS_STACKDATAi_0x276b30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__DIST_VECTOR2__FP12RS_STACKDATAi_0x276b30");
#endif

    switch (ctx->pc) {
        case 0x276b4cu: goto label_276b4c;
        case 0x276b58u: goto label_276b58;
        case 0x276b68u: goto label_276b68;
        case 0x276b74u: goto label_276b74;
        default: break;
    }

    ctx->pc = 0x276b30u;

    // 0x276b30: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x276b30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x276b34: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x276b34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x276b38: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x276b38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x276b3c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x276b3cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x276b40: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x276b40u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x276b44: 0xc097e34  jal         func_25F8D0
    ctx->pc = 0x276B44u;
    SET_GPR_U32(ctx, 31, 0x276B4Cu);
    ctx->pc = 0x276B48u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x276B44u;
            // 0x276b48: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F8D0u;
    if (runtime->hasFunction(0x25F8D0u)) {
        auto targetFn = runtime->lookupFunction(0x25F8D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x276B4Cu; }
        if (ctx->pc != 0x276B4Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackVector__FPfP12RS_STACKDATA_0x25f8d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x276B4Cu; }
        if (ctx->pc != 0x276B4Cu) { return; }
    }
    ctx->pc = 0x276B4Cu;
label_276b4c:
    // 0x276b4c: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x276b4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x276b50: 0xc097e34  jal         func_25F8D0
    ctx->pc = 0x276B50u;
    SET_GPR_U32(ctx, 31, 0x276B58u);
    ctx->pc = 0x276B54u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x276B50u;
            // 0x276b54: 0x26050018  addiu       $a1, $s0, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 24));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F8D0u;
    if (runtime->hasFunction(0x25F8D0u)) {
        auto targetFn = runtime->lookupFunction(0x25F8D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x276B58u; }
        if (ctx->pc != 0x276B58u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackVector__FPfP12RS_STACKDATA_0x25f8d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x276B58u; }
        if (ctx->pc != 0x276B58u) { return; }
    }
    ctx->pc = 0x276B58u;
label_276b58:
    // 0x276b58: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x276b58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x276b5c: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x276b5cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x276b60: 0xc04c018  jal         func_130060
    ctx->pc = 0x276B60u;
    SET_GPR_U32(ctx, 31, 0x276B68u);
    ctx->pc = 0x276B64u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x276B60u;
            // 0x276b64: 0x26100030  addiu       $s0, $s0, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
        ctx->in_delay_slot = false;
    ctx->pc = 0x130060u;
    if (runtime->hasFunction(0x130060u)) {
        auto targetFn = runtime->lookupFunction(0x130060u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x276B68u; }
        if (ctx->pc != 0x276B68u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgDistVector__FPfPf_0x130060(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x276B68u; }
        if (ctx->pc != 0x276B68u) { return; }
    }
    ctx->pc = 0x276B68u;
label_276b68:
    // 0x276b68: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x276b68u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x276b6c: 0xc097e54  jal         func_25F950
    ctx->pc = 0x276B6Cu;
    SET_GPR_U32(ctx, 31, 0x276B74u);
    ctx->pc = 0x276B70u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x276B6Cu;
            // 0x276b70: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F950u;
    if (runtime->hasFunction(0x25F950u)) {
        auto targetFn = runtime->lookupFunction(0x25F950u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x276B74u; }
        if (ctx->pc != 0x276B74u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetStack__FP12RS_STACKDATAf_0x25f950(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x276B74u; }
        if (ctx->pc != 0x276B74u) { return; }
    }
    ctx->pc = 0x276B74u;
label_276b74:
    // 0x276b74: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x276b74u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x276b78: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x276b78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x276b7c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x276b7cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x276b80: 0x3e00008  jr          $ra
    ctx->pc = 0x276B80u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x276B84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x276B80u;
            // 0x276b84: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x276B88u;
}
