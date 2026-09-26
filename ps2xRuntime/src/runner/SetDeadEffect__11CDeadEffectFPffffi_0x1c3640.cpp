#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: SetDeadEffect__11CDeadEffectFPffffi
// Address: 0x1c3640 - 0x1c36a8
void SetDeadEffect__11CDeadEffectFPffffi_0x1c3640(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SetDeadEffect__11CDeadEffectFPffffi_0x1c3640");
#endif

    switch (ctx->pc) {
        case 0x1c3674u: goto label_1c3674;
        default: break;
    }

    ctx->pc = 0x1c3640u;

    // 0x1c3640: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1c3640u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1c3644: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1c3644u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x1c3648: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x1c3648u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x1c364c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1c364cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1c3650: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1c3650u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c3654: 0xe7b60008  swc1        $f22, 0x8($sp)
    ctx->pc = 0x1c3654u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x1c3658: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x1c3658u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c365c: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x1c365cu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x1c3660: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x1c3660u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x1c3664: 0x46006586  mov.s       $f22, $f12
    ctx->pc = 0x1c3664u;
    ctx->f[22] = FPU_MOV_S(ctx->f[12]);
    // 0x1c3668: 0x46006d46  mov.s       $f21, $f13
    ctx->pc = 0x1c3668u;
    ctx->f[21] = FPU_MOV_S(ctx->f[13]);
    // 0x1c366c: 0xc041c5c  jal         func_107170
    ctx->pc = 0x1C366Cu;
    SET_GPR_U32(ctx, 31, 0x1C3674u);
    ctx->pc = 0x1C3670u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C366Cu;
            // 0x1c3670: 0x46007506  mov.s       $f20, $f14 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[14]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x107170u;
    if (runtime->hasFunction(0x107170u)) {
        auto targetFn = runtime->lookupFunction(0x107170u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C3674u; }
        if (ctx->pc != 0x1C3674u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0CopyVector_0x107170(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C3674u; }
        if (ctx->pc != 0x1C3674u) { return; }
    }
    ctx->pc = 0x1C3674u;
label_1c3674:
    // 0x1c3674: 0xe6360014  swc1        $f22, 0x14($s1)
    ctx->pc = 0x1c3674u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 20), bits); }
    // 0x1c3678: 0xe6350010  swc1        $f21, 0x10($s1)
    ctx->pc = 0x1c3678u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 16), bits); }
    // 0x1c367c: 0xe6340018  swc1        $f20, 0x18($s1)
    ctx->pc = 0x1c367cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 24), bits); }
    // 0x1c3680: 0xae30001c  sw          $s0, 0x1C($s1)
    ctx->pc = 0x1c3680u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 28), GPR_U32(ctx, 16));
    // 0x1c3684: 0xae200020  sw          $zero, 0x20($s1)
    ctx->pc = 0x1c3684u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 32), GPR_U32(ctx, 0));
    // 0x1c3688: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1c3688u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1c368c: 0xc7b60008  lwc1        $f22, 0x8($sp)
    ctx->pc = 0x1c368cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x1c3690: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x1c3690u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1c3694: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x1c3694u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x1c3698: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1c3698u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c369c: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x1c369cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1c36a0: 0x3e00008  jr          $ra
    ctx->pc = 0x1C36A0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C36A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C36A0u;
            // 0x1c36a4: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1C36A8u;
}
