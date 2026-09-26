#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: GetRiverPos__9CEditGridFiiPA4_f
// Address: 0x298070 - 0x29816c
void GetRiverPos__9CEditGridFiiPA4_f_0x298070(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetRiverPos__9CEditGridFiiPA4_f_0x298070");
#endif

    switch (ctx->pc) {
        case 0x2980e4u: goto label_2980e4;
        default: break;
    }

    ctx->pc = 0x298070u;

    // 0x298070: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x298070u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x298074: 0xc0102d  daddu       $v0, $a2, $zero
    ctx->pc = 0x298074u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x298078: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x298078u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x29807c: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x29807cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x298080: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x298080u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x298084: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x298084u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x298088: 0xe7b7000c  swc1        $f23, 0xC($sp)
    ctx->pc = 0x298088u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x29808c: 0xe0802d  daddu       $s0, $a3, $zero
    ctx->pc = 0x29808cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x298090: 0xe7b60008  swc1        $f22, 0x8($sp)
    ctx->pc = 0x298090u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x298094: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x298094u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x298098: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x298098u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x29809c: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x29809cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x2980a0: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x2980a0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x2980a4: 0xc481000c  lwc1        $f1, 0xC($a0)
    ctx->pc = 0x2980a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2980a8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2980a8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2980ac: 0xc4820010  lwc1        $f2, 0x10($a0)
    ctx->pc = 0x2980acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2980b0: 0x3c024080  lui         $v0, 0x4080
    ctx->pc = 0x2980b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16512 << 16));
    // 0x2980b4: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x2980b4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x2980b8: 0x46000d03  div.s       $f20, $f1, $f0
    ctx->pc = 0x2980b8u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[20] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x2980bc: 0x46001543  div.s       $f21, $f2, $f0
    ctx->pc = 0x2980bcu;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[21] = FPU_DIV_S(ctx->f[2], ctx->f[0]); }
    // 0x2980c0: 0x0  nop
    ctx->pc = 0x2980c0u;
    // NOP
    // 0x2980c4: 0x46030d83  div.s       $f22, $f1, $f3
    ctx->pc = 0x2980c4u;
    { if (ctx->f[3] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[22] = FPU_DIV_S(ctx->f[1], ctx->f[3]); }
    // 0x2980c8: 0x0  nop
    ctx->pc = 0x2980c8u;
    // NOP
    // 0x2980cc: 0x0  nop
    ctx->pc = 0x2980ccu;
    // NOP
    // 0x2980d0: 0x460315c3  div.s       $f23, $f2, $f3
    ctx->pc = 0x2980d0u;
    { if (ctx->f[3] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[23] = FPU_DIV_S(ctx->f[2], ctx->f[3]); }
    // 0x2980d4: 0x0  nop
    ctx->pc = 0x2980d4u;
    // NOP
    // 0x2980d8: 0x0  nop
    ctx->pc = 0x2980d8u;
    // NOP
    // 0x2980dc: 0xc0a5e94  jal         func_297A50
    ctx->pc = 0x2980DCu;
    SET_GPR_U32(ctx, 31, 0x2980E4u);
    ctx->pc = 0x297A50u;
    if (runtime->hasFunction(0x297A50u)) {
        auto targetFn = runtime->lookupFunction(0x297A50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2980E4u; }
        if (ctx->pc != 0x2980E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetWPos__9CEditGridFPfii_0x297a50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2980E4u; }
        if (ctx->pc != 0x2980E4u) { return; }
    }
    ctx->pc = 0x2980E4u;
label_2980e4:
    // 0x2980e4: 0xc7a10030  lwc1        $f1, 0x30($sp)
    ctx->pc = 0x2980e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2980e8: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x2980e8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x2980ec: 0xc7a00038  lwc1        $f0, 0x38($sp)
    ctx->pc = 0x2980ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2980f0: 0xc7a20034  lwc1        $f2, 0x34($sp)
    ctx->pc = 0x2980f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2980f4: 0x46140840  add.s       $f1, $f1, $f20
    ctx->pc = 0x2980f4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[20]);
    // 0x2980f8: 0x46160901  sub.s       $f4, $f1, $f22
    ctx->pc = 0x2980f8u;
    ctx->f[4] = FPU_SUB_S(ctx->f[1], ctx->f[22]);
    // 0x2980fc: 0x46150000  add.s       $f0, $f0, $f21
    ctx->pc = 0x2980fcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[21]);
    // 0x298100: 0x461608c0  add.s       $f3, $f1, $f22
    ctx->pc = 0x298100u;
    ctx->f[3] = FPU_ADD_S(ctx->f[1], ctx->f[22]);
    // 0x298104: 0x46170041  sub.s       $f1, $f0, $f23
    ctx->pc = 0x298104u;
    ctx->f[1] = FPU_SUB_S(ctx->f[0], ctx->f[23]);
    // 0x298108: 0xe6040000  swc1        $f4, 0x0($s0)
    ctx->pc = 0x298108u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
    // 0x29810c: 0xe6020004  swc1        $f2, 0x4($s0)
    ctx->pc = 0x29810cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
    // 0x298110: 0xe6010008  swc1        $f1, 0x8($s0)
    ctx->pc = 0x298110u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
    // 0x298114: 0xae03000c  sw          $v1, 0xC($s0)
    ctx->pc = 0x298114u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 3));
    // 0x298118: 0x46170000  add.s       $f0, $f0, $f23
    ctx->pc = 0x298118u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[23]);
    // 0x29811c: 0xe6030010  swc1        $f3, 0x10($s0)
    ctx->pc = 0x29811cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 16), bits); }
    // 0x298120: 0xe6020014  swc1        $f2, 0x14($s0)
    ctx->pc = 0x298120u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 20), bits); }
    // 0x298124: 0xe6010018  swc1        $f1, 0x18($s0)
    ctx->pc = 0x298124u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 24), bits); }
    // 0x298128: 0xae03001c  sw          $v1, 0x1C($s0)
    ctx->pc = 0x298128u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 3));
    // 0x29812c: 0xe6030020  swc1        $f3, 0x20($s0)
    ctx->pc = 0x29812cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 32), bits); }
    // 0x298130: 0xe6020024  swc1        $f2, 0x24($s0)
    ctx->pc = 0x298130u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 36), bits); }
    // 0x298134: 0xe6000028  swc1        $f0, 0x28($s0)
    ctx->pc = 0x298134u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 40), bits); }
    // 0x298138: 0xae03002c  sw          $v1, 0x2C($s0)
    ctx->pc = 0x298138u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 3));
    // 0x29813c: 0xe6040030  swc1        $f4, 0x30($s0)
    ctx->pc = 0x29813cu;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 48), bits); }
    // 0x298140: 0xe6020034  swc1        $f2, 0x34($s0)
    ctx->pc = 0x298140u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 52), bits); }
    // 0x298144: 0xe6000038  swc1        $f0, 0x38($s0)
    ctx->pc = 0x298144u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 56), bits); }
    // 0x298148: 0xae03003c  sw          $v1, 0x3C($s0)
    ctx->pc = 0x298148u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 60), GPR_U32(ctx, 3));
    // 0x29814c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x29814cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x298150: 0xc7b7000c  lwc1        $f23, 0xC($sp)
    ctx->pc = 0x298150u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x298154: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x298154u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x298158: 0xc7b60008  lwc1        $f22, 0x8($sp)
    ctx->pc = 0x298158u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x29815c: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x29815cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x298160: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x298160u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x298164: 0x3e00008  jr          $ra
    ctx->pc = 0x298164u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x298168u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x298164u;
            // 0x298168: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x29816Cu;
}
