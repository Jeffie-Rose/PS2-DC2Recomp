#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: __ct__15mgCCameraFollowFffff
// Address: 0x131a90 - 0x131b18
void ps2___ct__15mgCCameraFollowFffff_0x131a90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2___ct__15mgCCameraFollowFffff_0x131a90");
#endif

    switch (ctx->pc) {
        case 0x131ac0u: goto label_131ac0;
        case 0x131af8u: goto label_131af8;
        default: break;
    }

    ctx->pc = 0x131a90u;

    // 0x131a90: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x131a90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x131a94: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x131a94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x131a98: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x131a98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x131a9c: 0xe7b60008  swc1        $f22, 0x8($sp)
    ctx->pc = 0x131a9cu;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x131aa0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x131aa0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x131aa4: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x131aa4u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x131aa8: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x131aa8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x131aac: 0x46006586  mov.s       $f22, $f12
    ctx->pc = 0x131aacu;
    ctx->f[22] = FPU_MOV_S(ctx->f[12]);
    // 0x131ab0: 0x46006d46  mov.s       $f21, $f13
    ctx->pc = 0x131ab0u;
    ctx->f[21] = FPU_MOV_S(ctx->f[13]);
    // 0x131ab4: 0x46007506  mov.s       $f20, $f14
    ctx->pc = 0x131ab4u;
    ctx->f[20] = FPU_MOV_S(ctx->f[14]);
    // 0x131ab8: 0xc04c58c  jal         func_131630
    ctx->pc = 0x131AB8u;
    SET_GPR_U32(ctx, 31, 0x131AC0u);
    ctx->pc = 0x131ABCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x131AB8u;
            // 0x131abc: 0x46007b06  mov.s       $f12, $f15 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[15]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x131630u;
    if (runtime->hasFunction(0x131630u)) {
        auto targetFn = runtime->lookupFunction(0x131630u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x131AC0u; }
        if (ctx->pc != 0x131AC0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___ct__9mgCCameraFf_0x131630(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x131AC0u; }
        if (ctx->pc != 0x131AC0u) { return; }
    }
    ctx->pc = 0x131AC0u;
label_131ac0:
    // 0x131ac0: 0x3c030037  lui         $v1, 0x37
    ctx->pc = 0x131ac0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)55 << 16));
    // 0x131ac4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x131ac4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x131ac8: 0x24634e70  addiu       $v1, $v1, 0x4E70
    ctx->pc = 0x131ac8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 20080));
    // 0x131acc: 0x26040080  addiu       $a0, $s0, 0x80
    ctx->pc = 0x131accu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 128));
    // 0x131ad0: 0xae030060  sw          $v1, 0x60($s0)
    ctx->pc = 0x131ad0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 96), GPR_U32(ctx, 3));
    // 0x131ad4: 0xae0000b0  sw          $zero, 0xB0($s0)
    ctx->pc = 0x131ad4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 176), GPR_U32(ctx, 0));
    // 0x131ad8: 0xae0000b4  sw          $zero, 0xB4($s0)
    ctx->pc = 0x131ad8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 180), GPR_U32(ctx, 0));
    // 0x131adc: 0xae0000b8  sw          $zero, 0xB8($s0)
    ctx->pc = 0x131adcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 184), GPR_U32(ctx, 0));
    // 0x131ae0: 0xe6140098  swc1        $f20, 0x98($s0)
    ctx->pc = 0x131ae0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 152), bits); }
    // 0x131ae4: 0xe614009c  swc1        $f20, 0x9C($s0)
    ctx->pc = 0x131ae4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 156), bits); }
    // 0x131ae8: 0xe6160090  swc1        $f22, 0x90($s0)
    ctx->pc = 0x131ae8u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 144), bits); }
    // 0x131aec: 0xe6150094  swc1        $f21, 0x94($s0)
    ctx->pc = 0x131aecu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 148), bits); }
    // 0x131af0: 0xc04bc8c  jal         func_12F230
    ctx->pc = 0x131AF0u;
    SET_GPR_U32(ctx, 31, 0x131AF8u);
    ctx->pc = 0x131AF4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x131AF0u;
            // 0x131af4: 0xae0200a0  sw          $v0, 0xA0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 160), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12F230u;
    if (runtime->hasFunction(0x12F230u)) {
        auto targetFn = runtime->lookupFunction(0x12F230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x131AF8u; }
        if (ctx->pc != 0x131AF8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgZeroVector__FPf_0x12f230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x131AF8u; }
        if (ctx->pc != 0x131AF8u) { return; }
    }
    ctx->pc = 0x131AF8u;
label_131af8:
    // 0x131af8: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x131af8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x131afc: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x131afcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x131b00: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x131b00u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x131b04: 0xc7b60008  lwc1        $f22, 0x8($sp)
    ctx->pc = 0x131b04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x131b08: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x131b08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x131b0c: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x131b0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x131b10: 0x3e00008  jr          $ra
    ctx->pc = 0x131B10u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x131B14u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x131B10u;
            // 0x131b14: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x131B18u;
}
