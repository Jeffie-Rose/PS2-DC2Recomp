#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: GetParam__9CObjAnimeFPf
// Address: 0x29d1b0 - 0x29d284
void GetParam__9CObjAnimeFPf_0x29d1b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetParam__9CObjAnimeFPf_0x29d1b0");
#endif

    ctx->pc = 0x29d1b0u;

    // 0x29d1b0: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x29d1b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x29d1b4: 0x8c870004  lw          $a3, 0x4($a0)
    ctx->pc = 0x29d1b4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x29d1b8: 0x14e00003  bnez        $a3, . + 4 + (0x3 << 2)
    ctx->pc = 0x29D1B8u;
    {
        const bool branch_taken_0x29d1b8 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        ctx->pc = 0x29D1BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29D1B8u;
            // 0x29d1bc: 0x24660020  addiu       $a2, $v1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29d1b8) {
            ctx->pc = 0x29D1C8u;
            goto label_29d1c8;
        }
    }
    ctx->pc = 0x29D1C0u;
    // 0x29d1c0: 0x8c870008  lw          $a3, 0x8($a0)
    ctx->pc = 0x29d1c0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x29d1c4: 0x0  nop
    ctx->pc = 0x29d1c4u;
    // NOP
label_29d1c8:
    // 0x29d1c8: 0x14e00003  bnez        $a3, . + 4 + (0x3 << 2)
    ctx->pc = 0x29D1C8u;
    {
        const bool branch_taken_0x29d1c8 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        if (branch_taken_0x29d1c8) {
            ctx->pc = 0x29D1D8u;
            goto label_29d1d8;
        }
    }
    ctx->pc = 0x29D1D0u;
    // 0x29d1d0: 0x8c87000c  lw          $a3, 0xC($a0)
    ctx->pc = 0x29d1d0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x29d1d4: 0x0  nop
    ctx->pc = 0x29d1d4u;
    // NOP
label_29d1d8:
    // 0x29d1d8: 0x10e00028  beqz        $a3, . + 4 + (0x28 << 2)
    ctx->pc = 0x29D1D8u;
    {
        const bool branch_taken_0x29d1d8 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        if (branch_taken_0x29d1d8) {
            ctx->pc = 0x29D27Cu;
            goto label_29d27c;
        }
    }
    ctx->pc = 0x29D1E0u;
    // 0x29d1e0: 0x78840020  lq          $a0, 0x20($a0)
    ctx->pc = 0x29d1e0u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 4), 32)));
    // 0x29d1e4: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x29d1e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x29d1e8: 0x7ca40000  sq          $a0, 0x0($a1)
    ctx->pc = 0x29d1e8u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 4));
    // 0x29d1ec: 0x8cc4000c  lw          $a0, 0xC($a2)
    ctx->pc = 0x29d1ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
    // 0x29d1f0: 0x1083001b  beq         $a0, $v1, . + 4 + (0x1B << 2)
    ctx->pc = 0x29D1F0u;
    {
        const bool branch_taken_0x29d1f0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x29D1F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29D1F0u;
            // 0x29d1f4: 0x24030003  addiu       $v1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29d1f0) {
            ctx->pc = 0x29D260u;
            goto label_29d260;
        }
    }
    ctx->pc = 0x29D1F8u;
    // 0x29d1f8: 0x10830019  beq         $a0, $v1, . + 4 + (0x19 << 2)
    ctx->pc = 0x29D1F8u;
    {
        const bool branch_taken_0x29d1f8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x29D1FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29D1F8u;
            // 0x29d1fc: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29d1f8) {
            ctx->pc = 0x29D260u;
            goto label_29d260;
        }
    }
    ctx->pc = 0x29D200u;
    // 0x29d200: 0x10830005  beq         $a0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x29D200u;
    {
        const bool branch_taken_0x29d200 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x29D204u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29D200u;
            // 0x29d204: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29d200) {
            ctx->pc = 0x29D218u;
            goto label_29d218;
        }
    }
    ctx->pc = 0x29D208u;
    // 0x29d208: 0x10830015  beq         $a0, $v1, . + 4 + (0x15 << 2)
    ctx->pc = 0x29D208u;
    {
        const bool branch_taken_0x29d208 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x29d208) {
            ctx->pc = 0x29D260u;
            goto label_29d260;
        }
    }
    ctx->pc = 0x29D210u;
    // 0x29d210: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x29D210u;
    {
        const bool branch_taken_0x29d210 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29D214u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29D210u;
            // 0x29d214: 0x84c30014  lh          $v1, 0x14($a2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29d210) {
            ctx->pc = 0x29D264u;
            goto label_29d264;
        }
    }
    ctx->pc = 0x29D218u;
label_29d218:
    // 0x29d218: 0xc4a00000  lwc1        $f0, 0x0($a1)
    ctx->pc = 0x29d218u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29d21c: 0x3c034334  lui         $v1, 0x4334
    ctx->pc = 0x29d21cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17204 << 16));
    // 0x29d220: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x29d220u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x29d224: 0x3c034049  lui         $v1, 0x4049
    ctx->pc = 0x29d224u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16457 << 16));
    // 0x29d228: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x29d228u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4059);
    // 0x29d22c: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x29d22cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x29d230: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x29d230u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x29d234: 0x46020003  div.s       $f0, $f0, $f2
    ctx->pc = 0x29d234u;
    { if (ctx->f[2] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[2]); }
    // 0x29d238: 0xe4a00000  swc1        $f0, 0x0($a1)
    ctx->pc = 0x29d238u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 0), bits); }
    // 0x29d23c: 0xc4a00004  lwc1        $f0, 0x4($a1)
    ctx->pc = 0x29d23cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29d240: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x29d240u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x29d244: 0x46020003  div.s       $f0, $f0, $f2
    ctx->pc = 0x29d244u;
    { if (ctx->f[2] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[2]); }
    // 0x29d248: 0xe4a00004  swc1        $f0, 0x4($a1)
    ctx->pc = 0x29d248u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 4), bits); }
    // 0x29d24c: 0xc4a00008  lwc1        $f0, 0x8($a1)
    ctx->pc = 0x29d24cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29d250: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x29d250u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x29d254: 0x46020003  div.s       $f0, $f0, $f2
    ctx->pc = 0x29d254u;
    { if (ctx->f[2] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[2]); }
    // 0x29d258: 0xe4a00008  swc1        $f0, 0x8($a1)
    ctx->pc = 0x29d258u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 8), bits); }
    // 0x29d25c: 0xaca0000c  sw          $zero, 0xC($a1)
    ctx->pc = 0x29d25cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 0));
label_29d260:
    // 0x29d260: 0x84c30014  lh          $v1, 0x14($a2)
    ctx->pc = 0x29d260u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 20)));
label_29d264:
    // 0x29d264: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x29D264u;
    {
        const bool branch_taken_0x29d264 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x29d264) {
            ctx->pc = 0x29D27Cu;
            goto label_29d27c;
        }
    }
    ctx->pc = 0x29D26Cu;
    // 0x29d26c: 0xc4a00000  lwc1        $f0, 0x0($a1)
    ctx->pc = 0x29d26cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29d270: 0xe4a00004  swc1        $f0, 0x4($a1)
    ctx->pc = 0x29d270u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 4), bits); }
    // 0x29d274: 0xc4a00000  lwc1        $f0, 0x0($a1)
    ctx->pc = 0x29d274u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29d278: 0xe4a00008  swc1        $f0, 0x8($a1)
    ctx->pc = 0x29d278u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 8), bits); }
label_29d27c:
    // 0x29d27c: 0x3e00008  jr          $ra
    ctx->pc = 0x29D27Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x29D284u;
}
