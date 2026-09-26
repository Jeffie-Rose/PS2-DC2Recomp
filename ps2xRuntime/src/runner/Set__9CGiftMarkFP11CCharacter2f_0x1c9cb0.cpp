#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: Set__9CGiftMarkFP11CCharacter2f
// Address: 0x1c9cb0 - 0x1c9cfc
void Set__9CGiftMarkFP11CCharacter2f_0x1c9cb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Set__9CGiftMarkFP11CCharacter2f_0x1c9cb0");
#endif

    switch (ctx->pc) {
        case 0x1c9cd4u: goto label_1c9cd4;
        default: break;
    }

    ctx->pc = 0x1c9cb0u;

    // 0x1c9cb0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1c9cb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1c9cb4: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1c9cb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x1c9cb8: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x1c9cb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x1c9cbc: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1c9cbcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1c9cc0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1c9cc0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c9cc4: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x1c9cc4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x1c9cc8: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1c9cc8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c9ccc: 0xc0727c4  jal         func_1C9F10
    ctx->pc = 0x1C9CCCu;
    SET_GPR_U32(ctx, 31, 0x1C9CD4u);
    ctx->pc = 0x1C9CD0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C9CCCu;
            // 0x1c9cd0: 0x46006506  mov.s       $f20, $f12 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C9F10u;
    if (runtime->hasFunction(0x1C9F10u)) {
        auto targetFn = runtime->lookupFunction(0x1C9F10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C9CD4u; }
        if (ctx->pc != 0x1C9CD4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Initialize__9CGiftMarkFv_0x1c9f10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C9CD4u; }
        if (ctx->pc != 0x1C9CD4u) { return; }
    }
    ctx->pc = 0x1C9CD4u;
label_1c9cd4:
    // 0x1c9cd4: 0xae300000  sw          $s0, 0x0($s1)
    ctx->pc = 0x1c9cd4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 16));
    // 0x1c9cd8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1c9cd8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c9cdc: 0xe6340004  swc1        $f20, 0x4($s1)
    ctx->pc = 0x1c9cdcu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4), bits); }
    // 0x1c9ce0: 0xae23000c  sw          $v1, 0xC($s1)
    ctx->pc = 0x1c9ce0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 3));
    // 0x1c9ce4: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1c9ce4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1c9ce8: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x1c9ce8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1c9cec: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x1c9cecu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1c9cf0: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1c9cf0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c9cf4: 0x3e00008  jr          $ra
    ctx->pc = 0x1C9CF4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C9CF8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C9CF4u;
            // 0x1c9cf8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1C9CFCu;
}
