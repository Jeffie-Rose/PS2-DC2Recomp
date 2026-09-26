#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: DrawSymbol__13CRandomCircleFP14CMiniMapSymbol
// Address: 0x28be60 - 0x28bee4
void DrawSymbol__13CRandomCircleFP14CMiniMapSymbol_0x28be60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("DrawSymbol__13CRandomCircleFP14CMiniMapSymbol_0x28be60");
#endif

    switch (ctx->pc) {
        case 0x28be90u: goto label_28be90;
        case 0x28beacu: goto label_28beac;
        default: break;
    }

    ctx->pc = 0x28be60u;

    // 0x28be60: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x28be60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x28be64: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x28be64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x28be68: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x28be68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x28be6c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x28be6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x28be70: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x28be70u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28be74: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x28be74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x28be78: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x28be78u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28be7c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x28be7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x28be80: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x28be80u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28be84: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x28be84u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x28be88: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x28be88u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28be8c: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x28be8cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_28be90:
    // 0x28be90: 0x2911821  addu        $v1, $s4, $s1
    ctx->pc = 0x28be90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 17)));
    // 0x28be94: 0x8c630030  lw          $v1, 0x30($v1)
    ctx->pc = 0x28be94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 48)));
    // 0x28be98: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x28BE98u;
    {
        const bool branch_taken_0x28be98 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x28BE9Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28BE98u;
            // 0x28be9c: 0x2922821  addu        $a1, $s4, $s2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 18)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28be98) {
            ctx->pc = 0x28BEACu;
            goto label_28beac;
        }
    }
    ctx->pc = 0x28BEA0u;
    // 0x28bea0: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x28bea0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28bea4: 0xc075310  jal         func_1D4C40
    ctx->pc = 0x28BEA4u;
    SET_GPR_U32(ctx, 31, 0x28BEACu);
    ctx->pc = 0x28BEA8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x28BEA4u;
            // 0x28bea8: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D4C40u;
    if (runtime->hasFunction(0x1D4C40u)) {
        auto targetFn = runtime->lookupFunction(0x1D4C40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28BEACu; }
        if (ctx->pc != 0x28BEACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DrawSymbol__14CMiniMapSymbolFPfi_0x1d4c40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28BEACu; }
        if (ctx->pc != 0x28BEACu) { return; }
    }
    ctx->pc = 0x28BEACu;
label_28beac:
    // 0x28beac: 0x0  nop
    ctx->pc = 0x28beacu;
    // NOP
    // 0x28beb0: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x28beb0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x28beb4: 0x2a030003  slti        $v1, $s0, 0x3
    ctx->pc = 0x28beb4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x28beb8: 0x26310004  addiu       $s1, $s1, 0x4
    ctx->pc = 0x28beb8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
    // 0x28bebc: 0x1460fff4  bnez        $v1, . + 4 + (-0xC << 2)
    ctx->pc = 0x28BEBCu;
    {
        const bool branch_taken_0x28bebc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x28BEC0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28BEBCu;
            // 0x28bec0: 0x26520010  addiu       $s2, $s2, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28bebc) {
            ctx->pc = 0x28BE90u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_28be90;
        }
    }
    ctx->pc = 0x28BEC4u;
    // 0x28bec4: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x28bec4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x28bec8: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x28bec8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x28becc: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x28beccu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x28bed0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x28bed0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x28bed4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x28bed4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x28bed8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x28bed8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x28bedc: 0x3e00008  jr          $ra
    ctx->pc = 0x28BEDCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28BEE0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28BEDCu;
            // 0x28bee0: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x28BEE4u;
}
