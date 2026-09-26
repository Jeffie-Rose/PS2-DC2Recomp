#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _SET_XCHG_STEP__FP12RS_STACKDATAi
// Address: 0x2d1b50 - 0x2d1ba8
void ps2__SET_XCHG_STEP__FP12RS_STACKDATAi_0x2d1b50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__SET_XCHG_STEP__FP12RS_STACKDATAi_0x2d1b50");
#endif

    switch (ctx->pc) {
        case 0x2d1b70u: goto label_2d1b70;
        default: break;
    }

    ctx->pc = 0x2d1b50u;

    // 0x2d1b50: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2d1b50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2d1b54: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2d1b54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d1b58: 0x10a20003  beq         $a1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2D1B58u;
    {
        const bool branch_taken_0x2d1b58 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x2D1B5Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D1B58u;
            // 0x2d1b5c: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d1b58) {
            ctx->pc = 0x2D1B68u;
            goto label_2d1b68;
        }
    }
    ctx->pc = 0x2D1B60u;
    // 0x2d1b60: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x2D1B60u;
    {
        const bool branch_taken_0x2d1b60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D1B64u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D1B60u;
            // 0x2d1b64: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d1b60) {
            ctx->pc = 0x2D1B9Cu;
            goto label_2d1b9c;
        }
    }
    ctx->pc = 0x2D1B68u;
label_2d1b68:
    // 0x2d1b68: 0xc0b379c  jal         func_2CDE70
    ctx->pc = 0x2D1B68u;
    SET_GPR_U32(ctx, 31, 0x2D1B70u);
    ctx->pc = 0x2CDE70u;
    if (runtime->hasFunction(0x2CDE70u)) {
        auto targetFn = runtime->lookupFunction(0x2CDE70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D1B70u; }
        if (ctx->pc != 0x2D1B70u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackFloat__FP12RS_STACKDATA_0x2cde70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D1B70u; }
        if (ctx->pc != 0x2D1B70u) { return; }
    }
    ctx->pc = 0x2D1B70u;
label_2d1b70:
    // 0x2d1b70: 0x3c0101f1  lui         $at, 0x1F1
    ctx->pc = 0x2d1b70u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)497 << 16));
    // 0x2d1b74: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x2d1b74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x2d1b78: 0x8c23d430  lw          $v1, -0x2BD0($at)
    ctx->pc = 0x2d1b78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294956080)));
    // 0x2d1b7c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2d1b7cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2d1b80: 0x0  nop
    ctx->pc = 0x2d1b80u;
    // NOP
    // 0x2d1b84: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x2d1b84u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2d1b88: 0x0  nop
    ctx->pc = 0x2d1b88u;
    // NOP
    // 0x2d1b8c: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x2D1B8Cu;
    {
        const bool branch_taken_0x2d1b8c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2D1B90u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D1B8Cu;
            // 0x2d1b90: 0xe460050c  swc1        $f0, 0x50C($v1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 1292), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d1b8c) {
            ctx->pc = 0x2D1B98u;
            goto label_2d1b98;
        }
    }
    ctx->pc = 0x2D1B94u;
    // 0x2d1b94: 0xe4610508  swc1        $f1, 0x508($v1)
    ctx->pc = 0x2d1b94u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 1288), bits); }
label_2d1b98:
    // 0x2d1b98: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2d1b98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2d1b9c:
    // 0x2d1b9c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2d1b9cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2d1ba0: 0x3e00008  jr          $ra
    ctx->pc = 0x2D1BA0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D1BA4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D1BA0u;
            // 0x2d1ba4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2D1BA8u;
}
