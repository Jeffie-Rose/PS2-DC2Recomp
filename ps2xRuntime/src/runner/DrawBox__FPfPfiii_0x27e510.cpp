#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: DrawBox__FPfPfiii
// Address: 0x27e510 - 0x27e5ec
void DrawBox__FPfPfiii_0x27e510(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("DrawBox__FPfPfiii_0x27e510");
#endif

    switch (ctx->pc) {
        case 0x27e5e0u: goto label_27e5e0;
        default: break;
    }

    ctx->pc = 0x27e510u;

    // 0x27e510: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x27e510u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x27e514: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x27e514u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x27e518: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x27e518u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x27e51c: 0x27a300a0  addiu       $v1, $sp, 0xA0
    ctx->pc = 0x27e51cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x27e520: 0x78a90000  lq          $t1, 0x0($a1)
    ctx->pc = 0x27e520u;
    SET_GPR_VEC(ctx, 9, READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x27e524: 0x27a50090  addiu       $a1, $sp, 0x90
    ctx->pc = 0x27e524u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x27e528: 0x7ca90000  sq          $t1, 0x0($a1)
    ctx->pc = 0x27e528u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 9));
    // 0x27e52c: 0x78840000  lq          $a0, 0x0($a0)
    ctx->pc = 0x27e52cu;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x27e530: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x27e530u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27e534: 0xe0302d  daddu       $a2, $a3, $zero
    ctx->pc = 0x27e534u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27e538: 0x100382d  daddu       $a3, $t0, $zero
    ctx->pc = 0x27e538u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27e53c: 0x7c640000  sq          $a0, 0x0($v1)
    ctx->pc = 0x27e53cu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 4));
    // 0x27e540: 0xc7a20090  lwc1        $f2, 0x90($sp)
    ctx->pc = 0x27e540u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x27e544: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x27e544u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x27e548: 0xc7a00094  lwc1        $f0, 0x94($sp)
    ctx->pc = 0x27e548u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x27e54c: 0xafa2001c  sw          $v0, 0x1C($sp)
    ctx->pc = 0x27e54cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 2));
    // 0x27e550: 0xc7a10098  lwc1        $f1, 0x98($sp)
    ctx->pc = 0x27e550u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x27e554: 0xafa2002c  sw          $v0, 0x2C($sp)
    ctx->pc = 0x27e554u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 2));
    // 0x27e558: 0xc7a300a0  lwc1        $f3, 0xA0($sp)
    ctx->pc = 0x27e558u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x27e55c: 0xafa2003c  sw          $v0, 0x3C($sp)
    ctx->pc = 0x27e55cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 60), GPR_U32(ctx, 2));
    // 0x27e560: 0xc7a400a4  lwc1        $f4, 0xA4($sp)
    ctx->pc = 0x27e560u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x27e564: 0xafa2004c  sw          $v0, 0x4C($sp)
    ctx->pc = 0x27e564u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 76), GPR_U32(ctx, 2));
    // 0x27e568: 0xc7a500a8  lwc1        $f5, 0xA8($sp)
    ctx->pc = 0x27e568u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x27e56c: 0xafa2005c  sw          $v0, 0x5C($sp)
    ctx->pc = 0x27e56cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 92), GPR_U32(ctx, 2));
    // 0x27e570: 0xafa2006c  sw          $v0, 0x6C($sp)
    ctx->pc = 0x27e570u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 108), GPR_U32(ctx, 2));
    // 0x27e574: 0xe7a20010  swc1        $f2, 0x10($sp)
    ctx->pc = 0x27e574u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x27e578: 0xafa2007c  sw          $v0, 0x7C($sp)
    ctx->pc = 0x27e578u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 124), GPR_U32(ctx, 2));
    // 0x27e57c: 0xe7a00014  swc1        $f0, 0x14($sp)
    ctx->pc = 0x27e57cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x27e580: 0xafa2008c  sw          $v0, 0x8C($sp)
    ctx->pc = 0x27e580u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 140), GPR_U32(ctx, 2));
    // 0x27e584: 0xe7a10018  swc1        $f1, 0x18($sp)
    ctx->pc = 0x27e584u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x27e588: 0xe7a30020  swc1        $f3, 0x20($sp)
    ctx->pc = 0x27e588u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x27e58c: 0xe7a00024  swc1        $f0, 0x24($sp)
    ctx->pc = 0x27e58cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x27e590: 0xe7a10028  swc1        $f1, 0x28($sp)
    ctx->pc = 0x27e590u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x27e594: 0xe7a20030  swc1        $f2, 0x30($sp)
    ctx->pc = 0x27e594u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x27e598: 0xe7a40034  swc1        $f4, 0x34($sp)
    ctx->pc = 0x27e598u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x27e59c: 0xe7a10038  swc1        $f1, 0x38($sp)
    ctx->pc = 0x27e59cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x27e5a0: 0xe7a10048  swc1        $f1, 0x48($sp)
    ctx->pc = 0x27e5a0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x27e5a4: 0xe7a30040  swc1        $f3, 0x40($sp)
    ctx->pc = 0x27e5a4u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x27e5a8: 0xe7a40044  swc1        $f4, 0x44($sp)
    ctx->pc = 0x27e5a8u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    // 0x27e5ac: 0xe7a20050  swc1        $f2, 0x50($sp)
    ctx->pc = 0x27e5acu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x27e5b0: 0xe7a20070  swc1        $f2, 0x70($sp)
    ctx->pc = 0x27e5b0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
    // 0x27e5b4: 0xe7a00054  swc1        $f0, 0x54($sp)
    ctx->pc = 0x27e5b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
    // 0x27e5b8: 0xe7a00064  swc1        $f0, 0x64($sp)
    ctx->pc = 0x27e5b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
    // 0x27e5bc: 0xe7a50058  swc1        $f5, 0x58($sp)
    ctx->pc = 0x27e5bcu;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
    // 0x27e5c0: 0xe7a30060  swc1        $f3, 0x60($sp)
    ctx->pc = 0x27e5c0u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x27e5c4: 0xe7a30080  swc1        $f3, 0x80($sp)
    ctx->pc = 0x27e5c4u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
    // 0x27e5c8: 0xe7a50068  swc1        $f5, 0x68($sp)
    ctx->pc = 0x27e5c8u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
    // 0x27e5cc: 0xe7a40074  swc1        $f4, 0x74($sp)
    ctx->pc = 0x27e5ccu;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 116), bits); }
    // 0x27e5d0: 0xe7a40084  swc1        $f4, 0x84($sp)
    ctx->pc = 0x27e5d0u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 132), bits); }
    // 0x27e5d4: 0xe7a50078  swc1        $f5, 0x78($sp)
    ctx->pc = 0x27e5d4u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
    // 0x27e5d8: 0xc09f97c  jal         func_27E5F0
    ctx->pc = 0x27E5D8u;
    SET_GPR_U32(ctx, 31, 0x27E5E0u);
    ctx->pc = 0x27E5DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27E5D8u;
            // 0x27e5dc: 0xe7a50088  swc1        $f5, 0x88($sp) (Delay Slot)
        { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 136), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x27E5F0u;
    if (runtime->hasFunction(0x27E5F0u)) {
        auto targetFn = runtime->lookupFunction(0x27E5F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27E5E0u; }
        if (ctx->pc != 0x27E5E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DrawBox__FPA4_fiii_0x27e5f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27E5E0u; }
        if (ctx->pc != 0x27E5E0u) { return; }
    }
    ctx->pc = 0x27E5E0u;
label_27e5e0:
    // 0x27e5e0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x27e5e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x27e5e4: 0x3e00008  jr          $ra
    ctx->pc = 0x27E5E4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x27E5E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27E5E4u;
            // 0x27e5e8: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x27E5ECu;
}
