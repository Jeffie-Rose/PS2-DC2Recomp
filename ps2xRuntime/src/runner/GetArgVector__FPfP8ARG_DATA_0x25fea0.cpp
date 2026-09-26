#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: GetArgVector__FPfP8ARG_DATA
// Address: 0x25fea0 - 0x25ff00
void GetArgVector__FPfP8ARG_DATA_0x25fea0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetArgVector__FPfP8ARG_DATA_0x25fea0");
#endif

    switch (ctx->pc) {
        case 0x25fec4u: goto label_25fec4;
        case 0x25fed4u: goto label_25fed4;
        case 0x25fee0u: goto label_25fee0;
        default: break;
    }

    ctx->pc = 0x25fea0u;

    // 0x25fea0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x25fea0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x25fea4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x25fea4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x25fea8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x25fea8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x25feac: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x25feacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x25feb0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x25feb0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25feb4: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x25feb4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25feb8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x25feb8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25febc: 0xc097f84  jal         func_25FE10
    ctx->pc = 0x25FEBCu;
    SET_GPR_U32(ctx, 31, 0x25FEC4u);
    ctx->pc = 0x25FEC0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x25FEBCu;
            // 0x25fec0: 0x24900008  addiu       $s0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25FE10u;
    if (runtime->hasFunction(0x25FE10u)) {
        auto targetFn = runtime->lookupFunction(0x25FE10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25FEC4u; }
        if (ctx->pc != 0x25FEC4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetArgFloat__FP8ARG_DATA_0x25fe10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25FEC4u; }
        if (ctx->pc != 0x25FEC4u) { return; }
    }
    ctx->pc = 0x25FEC4u;
label_25fec4:
    // 0x25fec4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x25fec4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25fec8: 0xe6200000  swc1        $f0, 0x0($s1)
    ctx->pc = 0x25fec8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
    // 0x25fecc: 0xc097f84  jal         func_25FE10
    ctx->pc = 0x25FECCu;
    SET_GPR_U32(ctx, 31, 0x25FED4u);
    ctx->pc = 0x25FED0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x25FECCu;
            // 0x25fed0: 0x24900008  addiu       $s0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25FE10u;
    if (runtime->hasFunction(0x25FE10u)) {
        auto targetFn = runtime->lookupFunction(0x25FE10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25FED4u; }
        if (ctx->pc != 0x25FED4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetArgFloat__FP8ARG_DATA_0x25fe10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25FED4u; }
        if (ctx->pc != 0x25FED4u) { return; }
    }
    ctx->pc = 0x25FED4u;
label_25fed4:
    // 0x25fed4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x25fed4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25fed8: 0xc097f84  jal         func_25FE10
    ctx->pc = 0x25FED8u;
    SET_GPR_U32(ctx, 31, 0x25FEE0u);
    ctx->pc = 0x25FEDCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x25FED8u;
            // 0x25fedc: 0xe6200004  swc1        $f0, 0x4($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x25FE10u;
    if (runtime->hasFunction(0x25FE10u)) {
        auto targetFn = runtime->lookupFunction(0x25FE10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25FEE0u; }
        if (ctx->pc != 0x25FEE0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetArgFloat__FP8ARG_DATA_0x25fe10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25FEE0u; }
        if (ctx->pc != 0x25FEE0u) { return; }
    }
    ctx->pc = 0x25FEE0u;
label_25fee0:
    // 0x25fee0: 0xe6200008  swc1        $f0, 0x8($s1)
    ctx->pc = 0x25fee0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 8), bits); }
    // 0x25fee4: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x25fee4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x25fee8: 0xae23000c  sw          $v1, 0xC($s1)
    ctx->pc = 0x25fee8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 3));
    // 0x25feec: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x25feecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x25fef0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x25fef0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x25fef4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x25fef4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x25fef8: 0x3e00008  jr          $ra
    ctx->pc = 0x25FEF8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x25FEFCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25FEF8u;
            // 0x25fefc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x25FF00u;
}
