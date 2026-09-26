#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: Step__17CHealingEffectManFv
// Address: 0x1c17a0 - 0x1c18f0
void Step__17CHealingEffectManFv_0x1c17a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Step__17CHealingEffectManFv_0x1c17a0");
#endif

    switch (ctx->pc) {
        case 0x1c186cu: goto label_1c186c;
        default: break;
    }

    ctx->pc = 0x1c17a0u;

    // 0x1c17a0: 0x84830000  lh          $v1, 0x0($a0)
    ctx->pc = 0x1c17a0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1c17a4: 0x10600050  beqz        $v1, . + 4 + (0x50 << 2)
    ctx->pc = 0x1C17A4u;
    {
        const bool branch_taken_0x1c17a4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c17a4) {
            ctx->pc = 0x1C18E8u;
            goto label_1c18e8;
        }
    }
    ctx->pc = 0x1C17ACu;
    // 0x1c17ac: 0x84850314  lh          $a1, 0x314($a0)
    ctx->pc = 0x1c17acu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 788)));
    // 0x1c17b0: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1c17b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1c17b4: 0x10a30015  beq         $a1, $v1, . + 4 + (0x15 << 2)
    ctx->pc = 0x1C17B4u;
    {
        const bool branch_taken_0x1c17b4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x1C17B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C17B4u;
            // 0x1c17b8: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c17b4) {
            ctx->pc = 0x1C180Cu;
            goto label_1c180c;
        }
    }
    ctx->pc = 0x1C17BCu;
    // 0x1c17bc: 0x10a30003  beq         $a1, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1C17BCu;
    {
        const bool branch_taken_0x1c17bc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x1c17bc) {
            ctx->pc = 0x1C17CCu;
            goto label_1c17cc;
        }
    }
    ctx->pc = 0x1C17C4u;
    // 0x1c17c4: 0x1000001f  b           . + 4 + (0x1F << 2)
    ctx->pc = 0x1C17C4u;
    {
        const bool branch_taken_0x1c17c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C17C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C17C4u;
            // 0x1c17c8: 0x24860010  addiu       $a2, $a0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c17c4) {
            ctx->pc = 0x1C1844u;
            goto label_1c1844;
        }
    }
    ctx->pc = 0x1C17CCu;
label_1c17cc:
    // 0x1c17cc: 0xc4820310  lwc1        $f2, 0x310($a0)
    ctx->pc = 0x1c17ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 784)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1c17d0: 0x3c033d08  lui         $v1, 0x3D08
    ctx->pc = 0x1c17d0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15624 << 16));
    // 0x1c17d4: 0x34658889  ori         $a1, $v1, 0x8889
    ctx->pc = 0x1c17d4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)34953);
    // 0x1c17d8: 0x44850800  mtc1        $a1, $f1
    ctx->pc = 0x1c17d8u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1c17dc: 0x3c034000  lui         $v1, 0x4000
    ctx->pc = 0x1c17dcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
    // 0x1c17e0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1c17e0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c17e4: 0x0  nop
    ctx->pc = 0x1c17e4u;
    // NOP
    // 0x1c17e8: 0x46011040  add.s       $f1, $f2, $f1
    ctx->pc = 0x1c17e8u;
    ctx->f[1] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
    // 0x1c17ec: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1c17ecu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1c17f0: 0x0  nop
    ctx->pc = 0x1c17f0u;
    // NOP
    // 0x1c17f4: 0x45010012  bc1t        . + 4 + (0x12 << 2)
    ctx->pc = 0x1C17F4u;
    {
        const bool branch_taken_0x1c17f4 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1C17F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C17F4u;
            // 0x1c17f8: 0xe4810310  swc1        $f1, 0x310($a0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 784), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c17f4) {
            ctx->pc = 0x1C1840u;
            goto label_1c1840;
        }
    }
    ctx->pc = 0x1C17FCu;
    // 0x1c17fc: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x1c17fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1c1800: 0xa4830314  sh          $v1, 0x314($a0)
    ctx->pc = 0x1c1800u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 788), (uint16_t)GPR_U32(ctx, 3));
    // 0x1c1804: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x1C1804u;
    {
        const bool branch_taken_0x1c1804 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C1808u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C1804u;
            // 0x1c1808: 0xac800310  sw          $zero, 0x310($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 784), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c1804) {
            ctx->pc = 0x1C1840u;
            goto label_1c1840;
        }
    }
    ctx->pc = 0x1C180Cu;
label_1c180c:
    // 0x1c180c: 0xc4810310  lwc1        $f1, 0x310($a0)
    ctx->pc = 0x1c180cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 784)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1c1810: 0x3c033d08  lui         $v1, 0x3D08
    ctx->pc = 0x1c1810u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15624 << 16));
    // 0x1c1814: 0x34658889  ori         $a1, $v1, 0x8889
    ctx->pc = 0x1c1814u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)34953);
    // 0x1c1818: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x1c1818u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c181c: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x1c181cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x1c1820: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x1c1820u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1c1824: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1c1824u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1c1828: 0x46020034  c.lt.s      $f0, $f2
    ctx->pc = 0x1c1828u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1c182c: 0x0  nop
    ctx->pc = 0x1c182cu;
    // NOP
    // 0x1c1830: 0x45010003  bc1t        . + 4 + (0x3 << 2)
    ctx->pc = 0x1C1830u;
    {
        const bool branch_taken_0x1c1830 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1C1834u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C1830u;
            // 0x1c1834: 0xe4800310  swc1        $f0, 0x310($a0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 784), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c1830) {
            ctx->pc = 0x1C1840u;
            goto label_1c1840;
        }
    }
    ctx->pc = 0x1C1838u;
    // 0x1c1838: 0xa4800314  sh          $zero, 0x314($a0)
    ctx->pc = 0x1c1838u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 788), (uint16_t)GPR_U32(ctx, 0));
    // 0x1c183c: 0xe4820310  swc1        $f2, 0x310($a0)
    ctx->pc = 0x1c183cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 784), bits); }
label_1c1840:
    // 0x1c1840: 0x24860010  addiu       $a2, $a0, 0x10
    ctx->pc = 0x1c1840u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
label_1c1844:
    // 0x1c1844: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1c1844u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c1848: 0x3c0440c9  lui         $a0, 0x40C9
    ctx->pc = 0x1c1848u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16585 << 16));
    // 0x1c184c: 0x3c03c049  lui         $v1, 0xC049
    ctx->pc = 0x1c184cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49225 << 16));
    // 0x1c1850: 0x34850fdb  ori         $a1, $a0, 0xFDB
    ctx->pc = 0x1c1850u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)4059);
    // 0x1c1854: 0x34640fdb  ori         $a0, $v1, 0xFDB
    ctx->pc = 0x1c1854u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4059);
    // 0x1c1858: 0x3c034049  lui         $v1, 0x4049
    ctx->pc = 0x1c1858u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16457 << 16));
    // 0x1c185c: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x1c185cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4059);
    // 0x1c1860: 0x44851800  mtc1        $a1, $f3
    ctx->pc = 0x1c1860u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x1c1864: 0x44841000  mtc1        $a0, $f2
    ctx->pc = 0x1c1864u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1c1868: 0x44832000  mtc1        $v1, $f4
    ctx->pc = 0x1c1868u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
label_1c186c:
    // 0x1c186c: 0xc4c10024  lwc1        $f1, 0x24($a2)
    ctx->pc = 0x1c186cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1c1870: 0xc4c00014  lwc1        $f0, 0x14($a2)
    ctx->pc = 0x1c1870u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c1874: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1c1874u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1c1878: 0x46040036  c.le.s      $f0, $f4
    ctx->pc = 0x1c1878u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[4])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1c187c: 0x0  nop
    ctx->pc = 0x1c187cu;
    // NOP
    // 0x1c1880: 0x45010003  bc1t        . + 4 + (0x3 << 2)
    ctx->pc = 0x1C1880u;
    {
        const bool branch_taken_0x1c1880 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1C1884u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C1880u;
            // 0x1c1884: 0xe4c00014  swc1        $f0, 0x14($a2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 20), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c1880) {
            ctx->pc = 0x1C1890u;
            goto label_1c1890;
        }
    }
    ctx->pc = 0x1C1888u;
    // 0x1c1888: 0x46030001  sub.s       $f0, $f0, $f3
    ctx->pc = 0x1c1888u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[3]);
    // 0x1c188c: 0xe4c00014  swc1        $f0, 0x14($a2)
    ctx->pc = 0x1c188cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 20), bits); }
label_1c1890:
    // 0x1c1890: 0xc4c00014  lwc1        $f0, 0x14($a2)
    ctx->pc = 0x1c1890u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c1894: 0x46020034  c.lt.s      $f0, $f2
    ctx->pc = 0x1c1894u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1c1898: 0x0  nop
    ctx->pc = 0x1c1898u;
    // NOP
    // 0x1c189c: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x1C189Cu;
    {
        const bool branch_taken_0x1c189c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1c189c) {
            ctx->pc = 0x1C18ACu;
            goto label_1c18ac;
        }
    }
    ctx->pc = 0x1C18A4u;
    // 0x1c18a4: 0x46030000  add.s       $f0, $f0, $f3
    ctx->pc = 0x1c18a4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
    // 0x1c18a8: 0xe4c00014  swc1        $f0, 0x14($a2)
    ctx->pc = 0x1c18a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 20), bits); }
label_1c18ac:
    // 0x1c18ac: 0x0  nop
    ctx->pc = 0x1c18acu;
    // NOP
    // 0x1c18b0: 0xc4c10020  lwc1        $f1, 0x20($a2)
    ctx->pc = 0x1c18b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1c18b4: 0xc4c0001c  lwc1        $f0, 0x1C($a2)
    ctx->pc = 0x1c18b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c18b8: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1c18b8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1c18bc: 0x46040036  c.le.s      $f0, $f4
    ctx->pc = 0x1c18bcu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[4])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1c18c0: 0x0  nop
    ctx->pc = 0x1c18c0u;
    // NOP
    // 0x1c18c4: 0x45010003  bc1t        . + 4 + (0x3 << 2)
    ctx->pc = 0x1C18C4u;
    {
        const bool branch_taken_0x1c18c4 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1C18C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C18C4u;
            // 0x1c18c8: 0xe4c0001c  swc1        $f0, 0x1C($a2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 28), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c18c4) {
            ctx->pc = 0x1C18D4u;
            goto label_1c18d4;
        }
    }
    ctx->pc = 0x1C18CCu;
    // 0x1c18cc: 0x46030001  sub.s       $f0, $f0, $f3
    ctx->pc = 0x1c18ccu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[3]);
    // 0x1c18d0: 0xe4c0001c  swc1        $f0, 0x1C($a2)
    ctx->pc = 0x1c18d0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 28), bits); }
label_1c18d4:
    // 0x1c18d4: 0x0  nop
    ctx->pc = 0x1c18d4u;
    // NOP
    // 0x1c18d8: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x1c18d8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x1c18dc: 0x28e30010  slti        $v1, $a3, 0x10
    ctx->pc = 0x1c18dcu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)16) ? 1 : 0);
    // 0x1c18e0: 0x1460ffe2  bnez        $v1, . + 4 + (-0x1E << 2)
    ctx->pc = 0x1C18E0u;
    {
        const bool branch_taken_0x1c18e0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C18E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C18E0u;
            // 0x1c18e4: 0x24c60030  addiu       $a2, $a2, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c18e0) {
            ctx->pc = 0x1C186Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1c186c;
        }
    }
    ctx->pc = 0x1C18E8u;
label_1c18e8:
    // 0x1c18e8: 0x3e00008  jr          $ra
    ctx->pc = 0x1C18E8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1C18F0u;
}
