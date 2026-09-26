#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: EnableUseItemAlphaStep__Fv
// Address: 0x220670 - 0x2206fc
void EnableUseItemAlphaStep__Fv_0x220670(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("EnableUseItemAlphaStep__Fv_0x220670");
#endif

    switch (ctx->pc) {
        case 0x2206ccu: goto label_2206cc;
        case 0x2206ecu: goto label_2206ec;
        default: break;
    }

    ctx->pc = 0x220670u;

    // 0x220670: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x220670u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x220674: 0x3c033d56  lui         $v1, 0x3D56
    ctx->pc = 0x220674u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15702 << 16));
    // 0x220678: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x220678u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x22067c: 0x34637750  ori         $v1, $v1, 0x7750
    ctx->pc = 0x22067cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)30544);
    // 0x220680: 0xc782934c  lwc1        $f2, -0x6CB4($gp)
    ctx->pc = 0x220680u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294939468)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x220684: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x220684u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
    // 0x220688: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x220688u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x22068c: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x22068cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x220690: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x220690u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x220694: 0x0  nop
    ctx->pc = 0x220694u;
    // NOP
    // 0x220698: 0x46011040  add.s       $f1, $f2, $f1
    ctx->pc = 0x220698u;
    ctx->f[1] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
    // 0x22069c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x22069cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2206a0: 0x0  nop
    ctx->pc = 0x2206a0u;
    // NOP
    // 0x2206a4: 0x45010007  bc1t        . + 4 + (0x7 << 2)
    ctx->pc = 0x2206A4u;
    {
        const bool branch_taken_0x2206a4 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2206A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2206A4u;
            // 0x2206a8: 0xe781934c  swc1        $f1, -0x6CB4($gp) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 28), 4294939468), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2206a4) {
            ctx->pc = 0x2206C4u;
            goto label_2206c4;
        }
    }
    ctx->pc = 0x2206ACu;
    // 0x2206ac: 0x3c0240c9  lui         $v0, 0x40C9
    ctx->pc = 0x2206acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
    // 0x2206b0: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x2206b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x2206b4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2206b4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2206b8: 0x0  nop
    ctx->pc = 0x2206b8u;
    // NOP
    // 0x2206bc: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x2206bcu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2206c0: 0xe780934c  swc1        $f0, -0x6CB4($gp)
    ctx->pc = 0x2206c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 28), 4294939468), bits); }
label_2206c4:
    // 0x2206c4: 0xc047a42  jal         func_11E908
    ctx->pc = 0x2206C4u;
    SET_GPR_U32(ctx, 31, 0x2206CCu);
    ctx->pc = 0x2206C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2206C4u;
            // 0x2206c8: 0xc78c934c  lwc1        $f12, -0x6CB4($gp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294939468)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
    ctx->pc = 0x11E908u;
    if (runtime->hasFunction(0x11E908u)) {
        auto targetFn = runtime->lookupFunction(0x11E908u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2206CCu; }
        if (ctx->pc != 0x2206CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sinf_0x11e908(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2206CCu; }
        if (ctx->pc != 0x2206CCu) { return; }
    }
    ctx->pc = 0x2206CCu;
label_2206cc:
    // 0x2206cc: 0x3c034200  lui         $v1, 0x4200
    ctx->pc = 0x2206ccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16896 << 16));
    // 0x2206d0: 0x3c024240  lui         $v0, 0x4240
    ctx->pc = 0x2206d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16960 << 16));
    // 0x2206d4: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x2206d4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2206d8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2206d8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2206dc: 0x0  nop
    ctx->pc = 0x2206dcu;
    // NOP
    // 0x2206e0: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x2206e0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x2206e4: 0xc0a248c  jal         func_289230
    ctx->pc = 0x2206E4u;
    SET_GPR_U32(ctx, 31, 0x2206ECu);
    ctx->pc = 0x2206E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2206E4u;
            // 0x2206e8: 0x46000b00  add.s       $f12, $f1, $f0 (Delay Slot)
        ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2206ECu; }
        if (ctx->pc != 0x2206ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2206ECu; }
        if (ctx->pc != 0x2206ECu) { return; }
    }
    ctx->pc = 0x2206ECu;
label_2206ec:
    // 0x2206ec: 0xaf829350  sw          $v0, -0x6CB0($gp)
    ctx->pc = 0x2206ecu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294939472), GPR_U32(ctx, 2));
    // 0x2206f0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2206f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2206f4: 0x3e00008  jr          $ra
    ctx->pc = 0x2206F4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2206F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2206F4u;
            // 0x2206f8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2206FCu;
}
