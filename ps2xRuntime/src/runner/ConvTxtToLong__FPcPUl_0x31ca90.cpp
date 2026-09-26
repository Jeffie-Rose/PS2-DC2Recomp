#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: ConvTxtToLong__FPcPUl
// Address: 0x31ca90 - 0x31cb58
void ConvTxtToLong__FPcPUl_0x31ca90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ConvTxtToLong__FPcPUl_0x31ca90");
#endif

    switch (ctx->pc) {
        case 0x31cac4u: goto label_31cac4;
        case 0x31cad8u: goto label_31cad8;
        case 0x31cb04u: goto label_31cb04;
        default: break;
    }

    ctx->pc = 0x31ca90u;

    // 0x31ca90: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x31ca90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x31ca94: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x31ca94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x31ca98: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x31ca98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x31ca9c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x31ca9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x31caa0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x31caa0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x31caa4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x31caa4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x31caa8: 0xafa40050  sw          $a0, 0x50($sp)
    ctx->pc = 0x31caa8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 4));
    // 0x31caac: 0xafa50060  sw          $a1, 0x60($sp)
    ctx->pc = 0x31caacu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 5));
    // 0x31cab0: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x31cab0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31cab4: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x31cab4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x31cab8: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x31cab8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31cabc: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x31CABCu;
    {
        const bool branch_taken_0x31cabc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x31cabc) {
            ctx->pc = 0x31CB20u;
            goto label_31cb20;
        }
    }
    ctx->pc = 0x31CAC4u;
label_31cac4:
    // 0x31cac4: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x31cac4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x31cac8: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x31cac8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x31cacc: 0x80440000  lb          $a0, 0x0($v0)
    ctx->pc = 0x31caccu;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x31cad0: 0xc0c7250  jal         func_31C940
    ctx->pc = 0x31CAD0u;
    SET_GPR_U32(ctx, 31, 0x31CAD8u);
    ctx->pc = 0x31C940u;
    if (runtime->hasFunction(0x31C940u)) {
        auto targetFn = runtime->lookupFunction(0x31C940u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31CAD8u; }
        if (ctx->pc != 0x31CAD8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        search_txt__Fc_0x31c940(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31CAD8u; }
        if (ctx->pc != 0x31CAD8u) { return; }
    }
    ctx->pc = 0x31CAD8u;
label_31cad8:
    // 0x31cad8: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x31cad8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31cadc: 0x6410004  bgez        $s2, . + 4 + (0x4 << 2)
    ctx->pc = 0x31CADCu;
    {
        const bool branch_taken_0x31cadc = (GPR_S32(ctx, 18) >= 0);
        if (branch_taken_0x31cadc) {
            ctx->pc = 0x31CAF0u;
            goto label_31caf0;
        }
    }
    ctx->pc = 0x31CAE4u;
    // 0x31cae4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x31cae4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31cae8: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x31CAE8u;
    {
        const bool branch_taken_0x31cae8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x31cae8) {
            ctx->pc = 0x31CB38u;
            goto label_31cb38;
        }
    }
    ctx->pc = 0x31CAF0u;
label_31caf0:
    // 0x31caf0: 0x12203c  dsll32      $a0, $s2, 0
    ctx->pc = 0x31caf0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 18) << (32 + 0));
    // 0x31caf4: 0x4203f  dsra32      $a0, $a0, 0
    ctx->pc = 0x31caf4u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 0));
    // 0x31caf8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x31caf8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31cafc: 0xc0a1bee  jal         func_286FB8
    ctx->pc = 0x31CAFCu;
    SET_GPR_U32(ctx, 31, 0x31CB04u);
    ctx->pc = 0x286FB8u;
    if (runtime->hasFunction(0x286FB8u)) {
        auto targetFn = runtime->lookupFunction(0x286FB8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31CB04u; }
        if (ctx->pc != 0x31CB04u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___muldi3_0x286fb8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31CB04u; }
        if (ctx->pc != 0x31CB04u) { return; }
    }
    ctx->pc = 0x31CB04u;
label_31cb04:
    // 0x31cb04: 0x262982d  daddu       $s3, $s3, $v0
    ctx->pc = 0x31cb04u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 2));
    // 0x31cb08: 0x1110f8  dsll        $v0, $s1, 3
    ctx->pc = 0x31cb08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << 3);
    // 0x31cb0c: 0x51102f  dsubu       $v0, $v0, $s1
    ctx->pc = 0x31cb0cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) - GPR_U64(ctx, 17));
    // 0x31cb10: 0x210b8  dsll        $v0, $v0, 2
    ctx->pc = 0x31cb10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 2);
    // 0x31cb14: 0x51102d  daddu       $v0, $v0, $s1
    ctx->pc = 0x31cb14u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 17));
    // 0x31cb18: 0x28878  dsll        $s1, $v0, 1
    ctx->pc = 0x31cb18u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) << 1);
    // 0x31cb1c: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x31cb1cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_31cb20:
    // 0x31cb20: 0x2a02000b  slti        $v0, $s0, 0xB
    ctx->pc = 0x31cb20u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)11) ? 1 : 0);
    // 0x31cb24: 0x1440ffe7  bnez        $v0, . + 4 + (-0x19 << 2)
    ctx->pc = 0x31CB24u;
    {
        const bool branch_taken_0x31cb24 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x31cb24) {
            ctx->pc = 0x31CAC4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_31cac4;
        }
    }
    ctx->pc = 0x31CB2Cu;
    // 0x31cb2c: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x31cb2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x31cb30: 0xfc530000  sd          $s3, 0x0($v0)
    ctx->pc = 0x31cb30u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 19));
    // 0x31cb34: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x31cb34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_31cb38:
    // 0x31cb38: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x31cb38u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x31cb3c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x31cb3cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x31cb40: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x31cb40u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x31cb44: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x31cb44u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x31cb48: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x31cb48u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x31cb4c: 0x27bd0070  addiu       $sp, $sp, 0x70
    ctx->pc = 0x31cb4cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x31cb50: 0x3e00008  jr          $ra
    ctx->pc = 0x31CB50u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x31CB58u;
}
