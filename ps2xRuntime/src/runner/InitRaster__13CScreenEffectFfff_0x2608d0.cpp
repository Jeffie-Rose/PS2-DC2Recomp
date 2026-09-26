#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: InitRaster__13CScreenEffectFfff
// Address: 0x2608d0 - 0x26092c
void InitRaster__13CScreenEffectFfff_0x2608d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("InitRaster__13CScreenEffectFfff_0x2608d0");
#endif

    switch (ctx->pc) {
        case 0x2608fcu: goto label_2608fc;
        case 0x260910u: goto label_260910;
        default: break;
    }

    ctx->pc = 0x2608d0u;

    // 0x2608d0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2608d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2608d4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2608d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2608d8: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x2608d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x2608dc: 0xe7b60008  swc1        $f22, 0x8($sp)
    ctx->pc = 0x2608dcu;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x2608e0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2608e0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2608e4: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x2608e4u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x2608e8: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x2608e8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x2608ec: 0x46006586  mov.s       $f22, $f12
    ctx->pc = 0x2608ecu;
    ctx->f[22] = FPU_MOV_S(ctx->f[12]);
    // 0x2608f0: 0x46006d46  mov.s       $f21, $f13
    ctx->pc = 0x2608f0u;
    ctx->f[21] = FPU_MOV_S(ctx->f[13]);
    // 0x2608f4: 0xc097fc0  jal         func_25FF00
    ctx->pc = 0x2608F4u;
    SET_GPR_U32(ctx, 31, 0x2608FCu);
    ctx->pc = 0x2608F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2608F4u;
            // 0x2608f8: 0x46007506  mov.s       $f20, $f14 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[14]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x25FF00u;
    if (runtime->hasFunction(0x25FF00u)) {
        auto targetFn = runtime->lookupFunction(0x25FF00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2608FCu; }
        if (ctx->pc != 0x2608FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Initialize__7CRasterFv_0x25ff00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2608FCu; }
        if (ctx->pc != 0x2608FCu) { return; }
    }
    ctx->pc = 0x2608FCu;
label_2608fc:
    // 0x2608fc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2608fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x260900: 0x4600b306  mov.s       $f12, $f22
    ctx->pc = 0x260900u;
    ctx->f[12] = FPU_MOV_S(ctx->f[22]);
    // 0x260904: 0x4600ab46  mov.s       $f13, $f21
    ctx->pc = 0x260904u;
    ctx->f[13] = FPU_MOV_S(ctx->f[21]);
    // 0x260908: 0xc097fd0  jal         func_25FF40
    ctx->pc = 0x260908u;
    SET_GPR_U32(ctx, 31, 0x260910u);
    ctx->pc = 0x26090Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x260908u;
            // 0x26090c: 0x4600a386  mov.s       $f14, $f20 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x25FF40u;
    if (runtime->hasFunction(0x25FF40u)) {
        auto targetFn = runtime->lookupFunction(0x25FF40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x260910u; }
        if (ctx->pc != 0x260910u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetParam__7CRasterFfff_0x25ff40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x260910u; }
        if (ctx->pc != 0x260910u) { return; }
    }
    ctx->pc = 0x260910u;
label_260910:
    // 0x260910: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x260910u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x260914: 0xc7b60008  lwc1        $f22, 0x8($sp)
    ctx->pc = 0x260914u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x260918: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x260918u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x26091c: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x26091cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x260920: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x260920u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x260924: 0x3e00008  jr          $ra
    ctx->pc = 0x260924u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x260928u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x260924u;
            // 0x260928: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x26092Cu;
}
