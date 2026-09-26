#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: GetCameraDist__11CCharacter2Fv
// Address: 0x173170 - 0x1731e4
void GetCameraDist__11CCharacter2Fv_0x173170(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetCameraDist__11CCharacter2Fv_0x173170");
#endif

    switch (ctx->pc) {
        case 0x1731c0u: goto label_1731c0;
        case 0x1731d4u: goto label_1731d4;
        default: break;
    }

    ctx->pc = 0x173170u;

    // 0x173170: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x173170u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x173174: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x173174u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x173178: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x173178u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x17317c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x17317cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x173180: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x173180u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x173184: 0xc4810110  lwc1        $f1, 0x110($a0)
    ctx->pc = 0x173184u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x173188: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x173188u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x17318c: 0x0  nop
    ctx->pc = 0x17318cu;
    // NOP
    // 0x173190: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x173190u;
    {
        const bool branch_taken_0x173190 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x173194u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x173190u;
            // 0x173194: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x173190) {
            ctx->pc = 0x1731A0u;
            goto label_1731a0;
        }
    }
    ctx->pc = 0x173198u;
    // 0x173198: 0x3c024208  lui         $v0, 0x4208
    ctx->pc = 0x173198u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16904 << 16));
    // 0x17319c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x17319cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1731a0:
    // 0x1731a0: 0x7a030010  lq          $v1, 0x10($s0)
    ctx->pc = 0x1731a0u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x1731a4: 0x27a20020  addiu       $v0, $sp, 0x20
    ctx->pc = 0x1731a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1731a8: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x1731a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1731ac: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x1731acu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x1731b0: 0xc7a00024  lwc1        $f0, 0x24($sp)
    ctx->pc = 0x1731b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1731b4: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1731b4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1731b8: 0xc0516d0  jal         func_145B40
    ctx->pc = 0x1731B8u;
    SET_GPR_U32(ctx, 31, 0x1731C0u);
    ctx->pc = 0x1731BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1731B8u;
            // 0x1731bc: 0xe7a00024  swc1        $f0, 0x24($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x145B40u;
    if (runtime->hasFunction(0x145B40u)) {
        auto targetFn = runtime->lookupFunction(0x145B40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1731C0u; }
        if (ctx->pc != 0x1731C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgGetCameraPos__FPf_0x145b40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1731C0u; }
        if (ctx->pc != 0x1731C0u) { return; }
    }
    ctx->pc = 0x1731C0u;
label_1731c0:
    // 0x1731c0: 0x26050010  addiu       $a1, $s0, 0x10
    ctx->pc = 0x1731c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x1731c4: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x1731c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1731c8: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x1731c8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1731cc: 0xc04bd7c  jal         func_12F5F0
    ctx->pc = 0x1731CCu;
    SET_GPR_U32(ctx, 31, 0x1731D4u);
    ctx->pc = 0x1731D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1731CCu;
            // 0x1731d0: 0x27a70040  addiu       $a3, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12F5F0u;
    if (runtime->hasFunction(0x12F5F0u)) {
        auto targetFn = runtime->lookupFunction(0x12F5F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1731D4u; }
        if (ctx->pc != 0x1731D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgDistLinePoint__FPfPfPfPf_0x12f5f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1731D4u; }
        if (ctx->pc != 0x1731D4u) { return; }
    }
    ctx->pc = 0x1731D4u;
label_1731d4:
    // 0x1731d4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1731d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1731d8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1731d8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1731dc: 0x3e00008  jr          $ra
    ctx->pc = 0x1731DCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1731E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1731DCu;
            // 0x1731e0: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1731E4u;
}
