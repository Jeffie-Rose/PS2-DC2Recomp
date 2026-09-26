#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: ReCalcBox__FP9mgVu0FBOX9mgVu0FBOX
// Address: 0x250730 - 0x2507c4
void ReCalcBox__FP9mgVu0FBOX9mgVu0FBOX_0x250730(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ReCalcBox__FP9mgVu0FBOX9mgVu0FBOX_0x250730");
#endif

    ctx->pc = 0x250730u;

    // 0x250730: 0x78a60000  lq          $a2, 0x0($a1)
    ctx->pc = 0x250730u;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x250734: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x250734u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x250738: 0x3c034000  lui         $v1, 0x4000
    ctx->pc = 0x250738u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
    // 0x25073c: 0x27a70000  addiu       $a3, $sp, 0x0
    ctx->pc = 0x25073cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 0));
    // 0x250740: 0x44831800  mtc1        $v1, $f3
    ctx->pc = 0x250740u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x250744: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x250744u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x250748: 0x78a50010  lq          $a1, 0x10($a1)
    ctx->pc = 0x250748u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x25074c: 0x7ce60000  sq          $a2, 0x0($a3)
    ctx->pc = 0x25074cu;
    WRITE128(ADD32(GPR_U32(ctx, 7), 0), GPR_VEC(ctx, 6));
    // 0x250750: 0x7ce50010  sq          $a1, 0x10($a3)
    ctx->pc = 0x250750u;
    WRITE128(ADD32(GPR_U32(ctx, 7), 16), GPR_VEC(ctx, 5));
    // 0x250754: 0xc7a10000  lwc1        $f1, 0x0($sp)
    ctx->pc = 0x250754u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x250758: 0xc7a60010  lwc1        $f6, 0x10($sp)
    ctx->pc = 0x250758u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x25075c: 0xc7a40004  lwc1        $f4, 0x4($sp)
    ctx->pc = 0x25075cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x250760: 0xc7a70014  lwc1        $f7, 0x14($sp)
    ctx->pc = 0x250760u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x250764: 0xc7a50008  lwc1        $f5, 0x8($sp)
    ctx->pc = 0x250764u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x250768: 0xc7a80018  lwc1        $f8, 0x18($sp)
    ctx->pc = 0x250768u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
    // 0x25076c: 0x46060800  add.s       $f0, $f1, $f6
    ctx->pc = 0x25076cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[6]);
    // 0x250770: 0x46030083  div.s       $f2, $f0, $f3
    ctx->pc = 0x250770u;
    { if (ctx->f[3] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[2] = FPU_DIV_S(ctx->f[0], ctx->f[3]); }
    // 0x250774: 0x46020801  sub.s       $f0, $f1, $f2
    ctx->pc = 0x250774u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
    // 0x250778: 0xe4800000  swc1        $f0, 0x0($a0)
    ctx->pc = 0x250778u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x25077c: 0x46072000  add.s       $f0, $f4, $f7
    ctx->pc = 0x25077cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[4], ctx->f[7]);
    // 0x250780: 0x46030043  div.s       $f1, $f0, $f3
    ctx->pc = 0x250780u;
    { if (ctx->f[3] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[0], ctx->f[3]); }
    // 0x250784: 0x46012001  sub.s       $f0, $f4, $f1
    ctx->pc = 0x250784u;
    ctx->f[0] = FPU_SUB_S(ctx->f[4], ctx->f[1]);
    // 0x250788: 0xe4800004  swc1        $f0, 0x4($a0)
    ctx->pc = 0x250788u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
    // 0x25078c: 0x46082800  add.s       $f0, $f5, $f8
    ctx->pc = 0x25078cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[5], ctx->f[8]);
    // 0x250790: 0x46030003  div.s       $f0, $f0, $f3
    ctx->pc = 0x250790u;
    { if (ctx->f[3] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[3]); }
    // 0x250794: 0x460028c1  sub.s       $f3, $f5, $f0
    ctx->pc = 0x250794u;
    ctx->f[3] = FPU_SUB_S(ctx->f[5], ctx->f[0]);
    // 0x250798: 0x46023081  sub.s       $f2, $f6, $f2
    ctx->pc = 0x250798u;
    ctx->f[2] = FPU_SUB_S(ctx->f[6], ctx->f[2]);
    // 0x25079c: 0xe4830008  swc1        $f3, 0x8($a0)
    ctx->pc = 0x25079cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
    // 0x2507a0: 0x46013841  sub.s       $f1, $f7, $f1
    ctx->pc = 0x2507a0u;
    ctx->f[1] = FPU_SUB_S(ctx->f[7], ctx->f[1]);
    // 0x2507a4: 0xe4820010  swc1        $f2, 0x10($a0)
    ctx->pc = 0x2507a4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 16), bits); }
    // 0x2507a8: 0x46004001  sub.s       $f0, $f8, $f0
    ctx->pc = 0x2507a8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[8], ctx->f[0]);
    // 0x2507ac: 0xe4810014  swc1        $f1, 0x14($a0)
    ctx->pc = 0x2507acu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 20), bits); }
    // 0x2507b0: 0xe4800018  swc1        $f0, 0x18($a0)
    ctx->pc = 0x2507b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 24), bits); }
    // 0x2507b4: 0xac83001c  sw          $v1, 0x1C($a0)
    ctx->pc = 0x2507b4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 28), GPR_U32(ctx, 3));
    // 0x2507b8: 0xac83000c  sw          $v1, 0xC($a0)
    ctx->pc = 0x2507b8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 3));
    // 0x2507bc: 0x3e00008  jr          $ra
    ctx->pc = 0x2507BCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2507C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2507BCu;
            // 0x2507c0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2507C4u;
}
