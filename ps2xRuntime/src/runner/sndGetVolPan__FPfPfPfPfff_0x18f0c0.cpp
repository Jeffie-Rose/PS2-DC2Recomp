#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sndGetVolPan__FPfPfPfPfff
// Address: 0x18f0c0 - 0x18f134
void sndGetVolPan__FPfPfPfPfff_0x18f0c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sndGetVolPan__FPfPfPfPfff_0x18f0c0");
#endif

    switch (ctx->pc) {
        case 0x18f100u: goto label_18f100;
        case 0x18f118u: goto label_18f118;
        default: break;
    }

    ctx->pc = 0x18f0c0u;

    // 0x18f0c0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x18f0c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x18f0c4: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x18f0c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x18f0c8: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x18f0c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x18f0cc: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x18f0ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x18f0d0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x18f0d0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18f0d4: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x18f0d4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18f0d8: 0x3c04003d  lui         $a0, 0x3D
    ctx->pc = 0x18f0d8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
    // 0x18f0dc: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x18f0dcu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x18f0e0: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x18f0e0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18f0e4: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x18f0e4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x18f0e8: 0xe0302d  daddu       $a2, $a3, $zero
    ctx->pc = 0x18f0e8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18f0ec: 0x46006546  mov.s       $f21, $f12
    ctx->pc = 0x18f0ecu;
    ctx->f[21] = FPU_MOV_S(ctx->f[12]);
    // 0x18f0f0: 0x24847680  addiu       $a0, $a0, 0x7680
    ctx->pc = 0x18f0f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30336));
    // 0x18f0f4: 0x46006d06  mov.s       $f20, $f13
    ctx->pc = 0x18f0f4u;
    ctx->f[20] = FPU_MOV_S(ctx->f[13]);
    // 0x18f0f8: 0xc04bd7c  jal         func_12F5F0
    ctx->pc = 0x18F0F8u;
    SET_GPR_U32(ctx, 31, 0x18F100u);
    ctx->pc = 0x18F0FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18F0F8u;
            // 0x18f0fc: 0x27a70040  addiu       $a3, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12F5F0u;
    if (runtime->hasFunction(0x12F5F0u)) {
        auto targetFn = runtime->lookupFunction(0x12F5F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18F100u; }
        if (ctx->pc != 0x18F100u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgDistLinePoint__FPfPfPfPf_0x12f5f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18F100u; }
        if (ctx->pc != 0x18F100u) { return; }
    }
    ctx->pc = 0x18F100u;
label_18f100:
    // 0x18f100: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x18f100u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18f104: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x18f104u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18f108: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x18f108u;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    // 0x18f10c: 0x27a60040  addiu       $a2, $sp, 0x40
    ctx->pc = 0x18f10cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x18f110: 0xc063bbc  jal         func_18EEF0
    ctx->pc = 0x18F110u;
    SET_GPR_U32(ctx, 31, 0x18F118u);
    ctx->pc = 0x18F114u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18F110u;
            // 0x18f114: 0x4600a346  mov.s       $f13, $f20 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x18EEF0u;
    if (runtime->hasFunction(0x18EEF0u)) {
        auto targetFn = runtime->lookupFunction(0x18EEF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18F118u; }
        if (ctx->pc != 0x18F118u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sndGetVolPan__FPfPfPfff_0x18eef0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18F118u; }
        if (ctx->pc != 0x18F118u) { return; }
    }
    ctx->pc = 0x18F118u;
label_18f118:
    // 0x18f118: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x18f118u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x18f11c: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x18f11cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x18f120: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x18f120u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x18f124: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x18f124u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x18f128: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x18f128u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x18f12c: 0x3e00008  jr          $ra
    ctx->pc = 0x18F12Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18F130u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18F12Cu;
            // 0x18f130: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x18F134u;
}
