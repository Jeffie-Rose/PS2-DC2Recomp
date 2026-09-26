#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: CalcTex__11CManualMenuFv
// Address: 0x2c1450 - 0x2c18c4
void CalcTex__11CManualMenuFv_0x2c1450(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("CalcTex__11CManualMenuFv_0x2c1450");
#endif

    switch (ctx->pc) {
        case 0x2c149cu: goto label_2c149c;
        case 0x2c14a8u: goto label_2c14a8;
        case 0x2c14c0u: goto label_2c14c0;
        case 0x2c14ccu: goto label_2c14cc;
        case 0x2c151cu: goto label_2c151c;
        case 0x2c1580u: goto label_2c1580;
        case 0x2c15a8u: goto label_2c15a8;
        case 0x2c15b8u: goto label_2c15b8;
        case 0x2c15f0u: goto label_2c15f0;
        case 0x2c16f4u: goto label_2c16f4;
        case 0x2c173cu: goto label_2c173c;
        case 0x2c1790u: goto label_2c1790;
        case 0x2c17c4u: goto label_2c17c4;
        case 0x2c17d8u: goto label_2c17d8;
        case 0x2c17ecu: goto label_2c17ec;
        case 0x2c1808u: goto label_2c1808;
        case 0x2c1820u: goto label_2c1820;
        case 0x2c1850u: goto label_2c1850;
        case 0x2c1874u: goto label_2c1874;
        default: break;
    }

    ctx->pc = 0x2c1450u;

    // 0x2c1450: 0x27bdfee0  addiu       $sp, $sp, -0x120
    ctx->pc = 0x2c1450u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967008));
    // 0x2c1454: 0xffbf00a0  sd          $ra, 0xA0($sp)
    ctx->pc = 0x2c1454u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
    // 0x2c1458: 0x7fbe0090  sq          $fp, 0x90($sp)
    ctx->pc = 0x2c1458u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 30));
    // 0x2c145c: 0x7fb70080  sq          $s7, 0x80($sp)
    ctx->pc = 0x2c145cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 23));
    // 0x2c1460: 0x7fb60070  sq          $s6, 0x70($sp)
    ctx->pc = 0x2c1460u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 22));
    // 0x2c1464: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x2c1464u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
    // 0x2c1468: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x2c1468u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
    // 0x2c146c: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x2c146cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x2c1470: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x2c1470u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x2c1474: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x2c1474u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x2c1478: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x2c1478u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x2c147c: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x2c147cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x2c1480: 0x8f939c54  lw          $s3, -0x63AC($gp)
    ctx->pc = 0x2c1480u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941780)));
    // 0x2c1484: 0x12600102  beqz        $s3, . + 4 + (0x102 << 2)
    ctx->pc = 0x2C1484u;
    {
        const bool branch_taken_0x2c1484 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C1488u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C1484u;
            // 0x2c1488: 0x80a82d  daddu       $s5, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c1484) {
            ctx->pc = 0x2C1890u;
            goto label_2c1890;
        }
    }
    ctx->pc = 0x2C148Cu;
    // 0x2c148c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2c148cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c1490: 0xb82d  daddu       $s7, $zero, $zero
    ctx->pc = 0x2c1490u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c1494: 0xc088ffc  jal         func_223FF0
    ctx->pc = 0x2C1494u;
    SET_GPR_U32(ctx, 31, 0x2C149Cu);
    ctx->pc = 0x2C1498u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C1494u;
            // 0x2c1498: 0xf02d  daddu       $fp, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x223FF0u;
    if (runtime->hasFunction(0x223FF0u)) {
        auto targetFn = runtime->lookupFunction(0x223FF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C149Cu; }
        if (ctx->pc != 0x2C149Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetMenuMainFrameLeftTopPos__Fi_0x223ff0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C149Cu; }
        if (ctx->pc != 0x2C149Cu) { return; }
    }
    ctx->pc = 0x2C149Cu;
label_2c149c:
    // 0x2c149c: 0xc44c0000  lwc1        $f12, 0x0($v0)
    ctx->pc = 0x2c149cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2c14a0: 0xc0a248c  jal         func_289230
    ctx->pc = 0x2C14A0u;
    SET_GPR_U32(ctx, 31, 0x2C14A8u);
    ctx->pc = 0x2C14A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C14A0u;
            // 0x2c14a4: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C14A8u; }
        if (ctx->pc != 0x2C14A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C14A8u; }
        if (ctx->pc != 0x2C14A8u) { return; }
    }
    ctx->pc = 0x2C14A8u;
label_2c14a8:
    // 0x2c14a8: 0xafa20100  sw          $v0, 0x100($sp)
    ctx->pc = 0x2c14a8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 256), GPR_U32(ctx, 2));
    // 0x2c14ac: 0xc6010004  lwc1        $f1, 0x4($s0)
    ctx->pc = 0x2c14acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c14b0: 0x3c0243ce  lui         $v0, 0x43CE
    ctx->pc = 0x2c14b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17358 << 16));
    // 0x2c14b4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2c14b4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c14b8: 0xc0a248c  jal         func_289230
    ctx->pc = 0x2C14B8u;
    SET_GPR_U32(ctx, 31, 0x2C14C0u);
    ctx->pc = 0x2C14BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C14B8u;
            // 0x2c14bc: 0x46010300  add.s       $f12, $f0, $f1 (Delay Slot)
        ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C14C0u; }
        if (ctx->pc != 0x2C14C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C14C0u; }
        if (ctx->pc != 0x2C14C0u) { return; }
    }
    ctx->pc = 0x2C14C0u;
label_2c14c0:
    // 0x2c14c0: 0x27b40104  addiu       $s4, $sp, 0x104
    ctx->pc = 0x2c14c0u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 260));
    // 0x2c14c4: 0xc088ff8  jal         func_223FE0
    ctx->pc = 0x2C14C4u;
    SET_GPR_U32(ctx, 31, 0x2C14CCu);
    ctx->pc = 0x2C14C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C14C4u;
            // 0x2c14c8: 0xae820000  sw          $v0, 0x0($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x223FE0u;
    if (runtime->hasFunction(0x223FE0u)) {
        auto targetFn = runtime->lookupFunction(0x223FE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C14CCu; }
        if (ctx->pc != 0x2C14CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetMenuMainFrameEndFlag__Fv_0x223fe0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C14CCu; }
        if (ctx->pc != 0x2C14CCu) { return; }
    }
    ctx->pc = 0x2C14CCu;
label_2c14cc:
    // 0x2c14cc: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x2C14CCu;
    {
        const bool branch_taken_0x2c14cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2c14cc) {
            ctx->pc = 0x2C14F8u;
            goto label_2c14f8;
        }
    }
    ctx->pc = 0x2C14D4u;
    // 0x2c14d4: 0xc7a00100  lwc1        $f0, 0x100($sp)
    ctx->pc = 0x2c14d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 256)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c14d8: 0x24170001  addiu       $s7, $zero, 0x1
    ctx->pc = 0x2c14d8u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2c14dc: 0x2e0f02d  daddu       $fp, $s7, $zero
    ctx->pc = 0x2c14dcu;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c14e0: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2c14e0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2c14e4: 0xe660000c  swc1        $f0, 0xC($s3)
    ctx->pc = 0x2c14e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 12), bits); }
    // 0x2c14e8: 0xc6800000  lwc1        $f0, 0x0($s4)
    ctx->pc = 0x2c14e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c14ec: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2c14ecu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2c14f0: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2C14F0u;
    {
        const bool branch_taken_0x2c14f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C14F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C14F0u;
            // 0x2c14f4: 0xe6600010  swc1        $f0, 0x10($s3) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 16), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c14f0) {
            ctx->pc = 0x2C1504u;
            goto label_2c1504;
        }
    }
    ctx->pc = 0x2C14F8u;
label_2c14f8:
    // 0x2c14f8: 0xc7a00100  lwc1        $f0, 0x100($sp)
    ctx->pc = 0x2c14f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 256)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c14fc: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2c14fcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2c1500: 0xe660000c  swc1        $f0, 0xC($s3)
    ctx->pc = 0x2c1500u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 12), bits); }
label_2c1504:
    // 0x2c1504: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x2c1504u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x2c1508: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2c1508u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c150c: 0x24a5f9e8  addiu       $a1, $a1, -0x618
    ctx->pc = 0x2c150cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294965736));
    // 0x2c1510: 0x27a60100  addiu       $a2, $sp, 0x100
    ctx->pc = 0x2c1510u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x2c1514: 0xc08974c  jal         func_225D30
    ctx->pc = 0x2C1514u;
    SET_GPR_U32(ctx, 31, 0x2C151Cu);
    ctx->pc = 0x2C1518u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C1514u;
            // 0x2c1518: 0x280382d  daddu       $a3, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x225D30u;
    if (runtime->hasFunction(0x225D30u)) {
        auto targetFn = runtime->lookupFunction(0x225D30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C151Cu; }
        if (ctx->pc != 0x2C151Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPutPosXY__16CMenuPosDataFormFPcRiRi_0x225d30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C151Cu; }
        if (ctx->pc != 0x2C151Cu) { return; }
    }
    ctx->pc = 0x2C151Cu;
label_2c151c:
    // 0x2c151c: 0x86a30000  lh          $v1, 0x0($s5)
    ctx->pc = 0x2c151cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x2c1520: 0x3c024060  lui         $v0, 0x4060
    ctx->pc = 0x2c1520u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16480 << 16));
    // 0x2c1524: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x2c1524u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x2c1528: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2c1528u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2c152c: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2C152Cu;
    {
        const bool branch_taken_0x2c152c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2C1530u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C152Cu;
            // 0x2c1530: 0x3c023f80  lui         $v0, 0x3F80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c152c) {
            ctx->pc = 0x2C1544u;
            goto label_2c1544;
        }
    }
    ctx->pc = 0x2C1534u;
    // 0x2c1534: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2c1534u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2c1538: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2C1538u;
    {
        const bool branch_taken_0x2c1538 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2c1538) {
            ctx->pc = 0x2C1548u;
            goto label_2c1548;
        }
    }
    ctx->pc = 0x2C1540u;
    // 0x2c1540: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x2c1540u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_2c1544:
    // 0x2c1544: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x2c1544u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_2c1548:
    // 0x2c1548: 0x8ea60114  lw          $a2, 0x114($s5)
    ctx->pc = 0x2c1548u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 276)));
    // 0x2c154c: 0x26a40170  addiu       $a0, $s5, 0x170
    ctx->pc = 0x2c154cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 368));
    // 0x2c1550: 0x8e820000  lw          $v0, 0x0($s4)
    ctx->pc = 0x2c1550u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x2c1554: 0x46006b86  mov.s       $f14, $f13
    ctx->pc = 0x2c1554u;
    ctx->f[14] = FPU_MOV_S(ctx->f[13]);
    // 0x2c1558: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2c1558u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c155c: 0x61840  sll         $v1, $a2, 1
    ctx->pc = 0x2c155cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
    // 0x2c1560: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x2c1560u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x2c1564: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x2c1564u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x2c1568: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x2c1568u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2c156c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2c156cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c1570: 0x0  nop
    ctx->pc = 0x2c1570u;
    // NOP
    // 0x2c1574: 0x46800520  cvt.s.w     $f20, $f0
    ctx->pc = 0x2c1574u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[20] = FPU_CVT_S_W(tmp); }
    // 0x2c1578: 0xc094514  jal         func_251450
    ctx->pc = 0x2C1578u;
    SET_GPR_U32(ctx, 31, 0x2C1580u);
    ctx->pc = 0x2C157Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C1578u;
            // 0x2c157c: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x251450u;
    if (runtime->hasFunction(0x251450u)) {
        auto targetFn = runtime->lookupFunction(0x251450u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C1580u; }
        if (ctx->pc != 0x2C1580u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CalcMenu1__FfPfffi_0x251450(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C1580u; }
        if (ctx->pc != 0x2C1580u) { return; }
    }
    ctx->pc = 0x2C1580u;
label_2c1580:
    // 0x2c1580: 0xc6810000  lwc1        $f1, 0x0($s4)
    ctx->pc = 0x2c1580u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c1584: 0xc6a00170  lwc1        $f0, 0x170($s5)
    ctx->pc = 0x2c1584u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 368)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c1588: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x2c1588u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x2c158c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2c158cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2c1590: 0x0  nop
    ctx->pc = 0x2c1590u;
    // NOP
    // 0x2c1594: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x2C1594u;
    {
        const bool branch_taken_0x2c1594 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2c1594) {
            ctx->pc = 0x2C15A0u;
            goto label_2c15a0;
        }
    }
    ctx->pc = 0x2C159Cu;
    // 0x2c159c: 0xe6b40170  swc1        $f20, 0x170($s5)
    ctx->pc = 0x2c159cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 368), bits); }
label_2c15a0:
    // 0x2c15a0: 0xc0a248c  jal         func_289230
    ctx->pc = 0x2C15A0u;
    SET_GPR_U32(ctx, 31, 0x2C15A8u);
    ctx->pc = 0x2C15A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C15A0u;
            // 0x2c15a4: 0xc6ac0170  lwc1        $f12, 0x170($s5) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 368)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C15A8u; }
        if (ctx->pc != 0x2C15A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C15A8u; }
        if (ctx->pc != 0x2C15A8u) { return; }
    }
    ctx->pc = 0x2C15A8u;
label_2c15a8:
    // 0x2c15a8: 0xae820000  sw          $v0, 0x0($s4)
    ctx->pc = 0x2c15a8u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 2));
    // 0x2c15ac: 0x27968500  addiu       $s6, $gp, -0x7B00
    ctx->pc = 0x2c15acu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 28), 4294935808));
    // 0x2c15b0: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x2c15b0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c15b4: 0x2d01021  addu        $v0, $s6, $s0
    ctx->pc = 0x2c15b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 16)));
label_2c15b8:
    // 0x2c15b8: 0x3c0501ed  lui         $a1, 0x1ED
    ctx->pc = 0x2c15b8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)493 << 16));
    // 0x2c15bc: 0x80460000  lb          $a2, 0x0($v0)
    ctx->pc = 0x2c15bcu;
    SET_GPR_S32(ctx, 6, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2c15c0: 0x3c0401ed  lui         $a0, 0x1ED
    ctx->pc = 0x2c15c0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)493 << 16));
    // 0x2c15c4: 0x24a5ca40  addiu       $a1, $a1, -0x35C0
    ctx->pc = 0x2c15c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294953536));
    // 0x2c15c8: 0x2484cb30  addiu       $a0, $a0, -0x34D0
    ctx->pc = 0x2c15c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294953776));
    // 0x2c15cc: 0x8e920000  lw          $s2, 0x0($s4)
    ctx->pc = 0x2c15ccu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x2c15d0: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x2c15d0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c15d4: 0x63880  sll         $a3, $a2, 2
    ctx->pc = 0x2c15d4u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x2c15d8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2c15d8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c15dc: 0xa73021  addu        $a2, $a1, $a3
    ctx->pc = 0x2c15dcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 7)));
    // 0x2c15e0: 0x872821  addu        $a1, $a0, $a3
    ctx->pc = 0x2c15e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
    // 0x2c15e4: 0x8cc40000  lw          $a0, 0x0($a2)
    ctx->pc = 0x2c15e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x2c15e8: 0x8cb10000  lw          $s1, 0x0($a1)
    ctx->pc = 0x2c15e8u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2c15ec: 0x0  nop
    ctx->pc = 0x2c15ecu;
    // NOP
label_2c15f0:
    // 0x2c15f0: 0x8fa70100  lw          $a3, 0x100($sp)
    ctx->pc = 0x2c15f0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x2c15f4: 0x7d2821  addu        $a1, $v1, $sp
    ctx->pc = 0x2c15f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 29)));
    // 0x2c15f8: 0x24420008  addiu       $v0, $v0, 0x8
    ctx->pc = 0x2c15f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x2c15fc: 0x24a500b0  addiu       $a1, $a1, 0xB0
    ctx->pc = 0x2c15fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 176));
    // 0x2c1600: 0x28460002  slti        $a2, $v0, 0x2
    ctx->pc = 0x2c1600u;
    SET_GPR_U64(ctx, 6, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x2c1604: 0x24630040  addiu       $v1, $v1, 0x40
    ctx->pc = 0x2c1604u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 64));
    // 0x2c1608: 0xaca70000  sw          $a3, 0x0($a1)
    ctx->pc = 0x2c1608u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 7));
    // 0x2c160c: 0x8e870000  lw          $a3, 0x0($s4)
    ctx->pc = 0x2c160cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x2c1610: 0xaca70004  sw          $a3, 0x4($a1)
    ctx->pc = 0x2c1610u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 7));
    // 0x2c1614: 0x8e870000  lw          $a3, 0x0($s4)
    ctx->pc = 0x2c1614u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x2c1618: 0x24e70018  addiu       $a3, $a3, 0x18
    ctx->pc = 0x2c1618u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 24));
    // 0x2c161c: 0xae870000  sw          $a3, 0x0($s4)
    ctx->pc = 0x2c161cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 7));
    // 0x2c1620: 0x8fa70100  lw          $a3, 0x100($sp)
    ctx->pc = 0x2c1620u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x2c1624: 0xaca70008  sw          $a3, 0x8($a1)
    ctx->pc = 0x2c1624u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 7));
    // 0x2c1628: 0x8e870000  lw          $a3, 0x0($s4)
    ctx->pc = 0x2c1628u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x2c162c: 0xaca7000c  sw          $a3, 0xC($a1)
    ctx->pc = 0x2c162cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 7));
    // 0x2c1630: 0x8e870000  lw          $a3, 0x0($s4)
    ctx->pc = 0x2c1630u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x2c1634: 0x24e70018  addiu       $a3, $a3, 0x18
    ctx->pc = 0x2c1634u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 24));
    // 0x2c1638: 0xae870000  sw          $a3, 0x0($s4)
    ctx->pc = 0x2c1638u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 7));
    // 0x2c163c: 0x8fa70100  lw          $a3, 0x100($sp)
    ctx->pc = 0x2c163cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x2c1640: 0xaca70010  sw          $a3, 0x10($a1)
    ctx->pc = 0x2c1640u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 16), GPR_U32(ctx, 7));
    // 0x2c1644: 0x8e870000  lw          $a3, 0x0($s4)
    ctx->pc = 0x2c1644u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x2c1648: 0xaca70014  sw          $a3, 0x14($a1)
    ctx->pc = 0x2c1648u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 20), GPR_U32(ctx, 7));
    // 0x2c164c: 0x8e870000  lw          $a3, 0x0($s4)
    ctx->pc = 0x2c164cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x2c1650: 0x24e70018  addiu       $a3, $a3, 0x18
    ctx->pc = 0x2c1650u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 24));
    // 0x2c1654: 0xae870000  sw          $a3, 0x0($s4)
    ctx->pc = 0x2c1654u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 7));
    // 0x2c1658: 0x8fa70100  lw          $a3, 0x100($sp)
    ctx->pc = 0x2c1658u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x2c165c: 0xaca70018  sw          $a3, 0x18($a1)
    ctx->pc = 0x2c165cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 24), GPR_U32(ctx, 7));
    // 0x2c1660: 0x8e870000  lw          $a3, 0x0($s4)
    ctx->pc = 0x2c1660u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x2c1664: 0xaca7001c  sw          $a3, 0x1C($a1)
    ctx->pc = 0x2c1664u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 28), GPR_U32(ctx, 7));
    // 0x2c1668: 0x8e870000  lw          $a3, 0x0($s4)
    ctx->pc = 0x2c1668u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x2c166c: 0x24e70018  addiu       $a3, $a3, 0x18
    ctx->pc = 0x2c166cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 24));
    // 0x2c1670: 0xae870000  sw          $a3, 0x0($s4)
    ctx->pc = 0x2c1670u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 7));
    // 0x2c1674: 0x8fa70100  lw          $a3, 0x100($sp)
    ctx->pc = 0x2c1674u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x2c1678: 0xaca70020  sw          $a3, 0x20($a1)
    ctx->pc = 0x2c1678u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 32), GPR_U32(ctx, 7));
    // 0x2c167c: 0x8e870000  lw          $a3, 0x0($s4)
    ctx->pc = 0x2c167cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x2c1680: 0xaca70024  sw          $a3, 0x24($a1)
    ctx->pc = 0x2c1680u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 36), GPR_U32(ctx, 7));
    // 0x2c1684: 0x8e870000  lw          $a3, 0x0($s4)
    ctx->pc = 0x2c1684u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x2c1688: 0x24e70018  addiu       $a3, $a3, 0x18
    ctx->pc = 0x2c1688u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 24));
    // 0x2c168c: 0xae870000  sw          $a3, 0x0($s4)
    ctx->pc = 0x2c168cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 7));
    // 0x2c1690: 0x8fa70100  lw          $a3, 0x100($sp)
    ctx->pc = 0x2c1690u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x2c1694: 0xaca70028  sw          $a3, 0x28($a1)
    ctx->pc = 0x2c1694u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 40), GPR_U32(ctx, 7));
    // 0x2c1698: 0x8e870000  lw          $a3, 0x0($s4)
    ctx->pc = 0x2c1698u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x2c169c: 0xaca7002c  sw          $a3, 0x2C($a1)
    ctx->pc = 0x2c169cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 44), GPR_U32(ctx, 7));
    // 0x2c16a0: 0x8e870000  lw          $a3, 0x0($s4)
    ctx->pc = 0x2c16a0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x2c16a4: 0x24e70018  addiu       $a3, $a3, 0x18
    ctx->pc = 0x2c16a4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 24));
    // 0x2c16a8: 0xae870000  sw          $a3, 0x0($s4)
    ctx->pc = 0x2c16a8u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 7));
    // 0x2c16ac: 0x8fa70100  lw          $a3, 0x100($sp)
    ctx->pc = 0x2c16acu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x2c16b0: 0xaca70030  sw          $a3, 0x30($a1)
    ctx->pc = 0x2c16b0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 48), GPR_U32(ctx, 7));
    // 0x2c16b4: 0x8e870000  lw          $a3, 0x0($s4)
    ctx->pc = 0x2c16b4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x2c16b8: 0xaca70034  sw          $a3, 0x34($a1)
    ctx->pc = 0x2c16b8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 52), GPR_U32(ctx, 7));
    // 0x2c16bc: 0x8e870000  lw          $a3, 0x0($s4)
    ctx->pc = 0x2c16bcu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x2c16c0: 0x24e70018  addiu       $a3, $a3, 0x18
    ctx->pc = 0x2c16c0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 24));
    // 0x2c16c4: 0xae870000  sw          $a3, 0x0($s4)
    ctx->pc = 0x2c16c4u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 7));
    // 0x2c16c8: 0x8fa70100  lw          $a3, 0x100($sp)
    ctx->pc = 0x2c16c8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x2c16cc: 0xaca70038  sw          $a3, 0x38($a1)
    ctx->pc = 0x2c16ccu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 56), GPR_U32(ctx, 7));
    // 0x2c16d0: 0x8e870000  lw          $a3, 0x0($s4)
    ctx->pc = 0x2c16d0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x2c16d4: 0xaca7003c  sw          $a3, 0x3C($a1)
    ctx->pc = 0x2c16d4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 60), GPR_U32(ctx, 7));
    // 0x2c16d8: 0x8e850000  lw          $a1, 0x0($s4)
    ctx->pc = 0x2c16d8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x2c16dc: 0x24a50018  addiu       $a1, $a1, 0x18
    ctx->pc = 0x2c16dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 24));
    // 0x2c16e0: 0x14c0ffc3  bnez        $a2, . + 4 + (-0x3D << 2)
    ctx->pc = 0x2C16E0u;
    {
        const bool branch_taken_0x2c16e0 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C16E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C16E0u;
            // 0x2c16e4: 0xae850000  sw          $a1, 0x0($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c16e0) {
            ctx->pc = 0x2C15F0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2c15f0;
        }
    }
    ctx->pc = 0x2C16E8u;
    // 0x2c16e8: 0x2841000a  slti        $at, $v0, 0xA
    ctx->pc = 0x2c16e8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)10) ? 1 : 0);
    // 0x2c16ec: 0x1020000f  beqz        $at, . + 4 + (0xF << 2)
    ctx->pc = 0x2C16ECu;
    {
        const bool branch_taken_0x2c16ec = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C16F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C16ECu;
            // 0x2c16f0: 0x230c0  sll         $a2, $v0, 3 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c16ec) {
            ctx->pc = 0x2C172Cu;
            goto label_2c172c;
        }
    }
    ctx->pc = 0x2C16F4u;
label_2c16f4:
    // 0x2c16f4: 0x0  nop
    ctx->pc = 0x2c16f4u;
    // NOP
    // 0x2c16f8: 0x8fa50100  lw          $a1, 0x100($sp)
    ctx->pc = 0x2c16f8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x2c16fc: 0xdd1821  addu        $v1, $a2, $sp
    ctx->pc = 0x2c16fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 29)));
    // 0x2c1700: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2c1700u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2c1704: 0x246700b0  addiu       $a3, $v1, 0xB0
    ctx->pc = 0x2c1704u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), 176));
    // 0x2c1708: 0x24c60008  addiu       $a2, $a2, 0x8
    ctx->pc = 0x2c1708u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
    // 0x2c170c: 0x2843000a  slti        $v1, $v0, 0xA
    ctx->pc = 0x2c170cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)10) ? 1 : 0);
    // 0x2c1710: 0xace50000  sw          $a1, 0x0($a3)
    ctx->pc = 0x2c1710u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 5));
    // 0x2c1714: 0x8e850000  lw          $a1, 0x0($s4)
    ctx->pc = 0x2c1714u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x2c1718: 0xace50004  sw          $a1, 0x4($a3)
    ctx->pc = 0x2c1718u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 5));
    // 0x2c171c: 0x8e850000  lw          $a1, 0x0($s4)
    ctx->pc = 0x2c171cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x2c1720: 0x24a50018  addiu       $a1, $a1, 0x18
    ctx->pc = 0x2c1720u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 24));
    // 0x2c1724: 0x1460fff3  bnez        $v1, . + 4 + (-0xD << 2)
    ctx->pc = 0x2C1724u;
    {
        const bool branch_taken_0x2c1724 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C1728u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C1724u;
            // 0x2c1728: 0xae850000  sw          $a1, 0x0($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c1724) {
            ctx->pc = 0x2C16F4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2c16f4;
        }
    }
    ctx->pc = 0x2C172Cu;
label_2c172c:
    // 0x2c172c: 0x0  nop
    ctx->pc = 0x2c172cu;
    // NOP
    // 0x2c1730: 0x27a500b0  addiu       $a1, $sp, 0xB0
    ctx->pc = 0x2c1730u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x2c1734: 0xc0877c4  jal         func_21DF10
    ctx->pc = 0x2C1734u;
    SET_GPR_U32(ctx, 31, 0x2C173Cu);
    ctx->pc = 0x2C1738u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C1734u;
            // 0x2c1738: 0x2406000a  addiu       $a2, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21DF10u;
    if (runtime->hasFunction(0x21DF10u)) {
        auto targetFn = runtime->lookupFunction(0x21DF10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C173Cu; }
        if (ctx->pc != 0x2C173Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetMsgItemPos__7CDC2MesFPii_0x21df10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C173Cu; }
        if (ctx->pc != 0x2C173Cu) { return; }
    }
    ctx->pc = 0x2C173Cu;
label_2c173c:
    // 0x2c173c: 0x8e820000  lw          $v0, 0x0($s4)
    ctx->pc = 0x2c173cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x2c1740: 0x28420048  slti        $v0, $v0, 0x48
    ctx->pc = 0x2c1740u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)72) ? 1 : 0);
    // 0x2c1744: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2C1744u;
    {
        const bool branch_taken_0x2c1744 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C1748u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C1744u;
            // 0x2c1748: 0x2a410147  slti        $at, $s2, 0x147 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)327) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c1744) {
            ctx->pc = 0x2C1754u;
            goto label_2c1754;
        }
    }
    ctx->pc = 0x2C174Cu;
    // 0x2c174c: 0x14200004  bnez        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x2C174Cu;
    {
        const bool branch_taken_0x2c174c = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x2c174c) {
            ctx->pc = 0x2C1760u;
            goto label_2c1760;
        }
    }
    ctx->pc = 0x2C1754u;
label_2c1754:
    // 0x2c1754: 0x0  nop
    ctx->pc = 0x2c1754u;
    // NOP
    // 0x2c1758: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2C1758u;
    {
        const bool branch_taken_0x2c1758 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C175Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C1758u;
            // 0x2c175c: 0xa2200001  sb          $zero, 0x1($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 1), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c1758) {
            ctx->pc = 0x2C1768u;
            goto label_2c1768;
        }
    }
    ctx->pc = 0x2C1760u;
label_2c1760:
    // 0x2c1760: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2c1760u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2c1764: 0xa2220001  sb          $v0, 0x1($s1)
    ctx->pc = 0x2c1764u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1), (uint8_t)GPR_U32(ctx, 2));
label_2c1768:
    // 0x2c1768: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x2c1768u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x2c176c: 0x2a020005  slti        $v0, $s0, 0x5
    ctx->pc = 0x2c176cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)5) ? 1 : 0);
    // 0x2c1770: 0x1440ff91  bnez        $v0, . + 4 + (-0x6F << 2)
    ctx->pc = 0x2C1770u;
    {
        const bool branch_taken_0x2c1770 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C1774u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C1770u;
            // 0x2c1774: 0x2d01021  addu        $v0, $s6, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c1770) {
            ctx->pc = 0x2C15B8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2c15b8;
        }
    }
    ctx->pc = 0x2C1778u;
    // 0x2c1778: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x2c1778u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x2c177c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2c177cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c1780: 0x24a5f9f8  addiu       $a1, $a1, -0x608
    ctx->pc = 0x2c1780u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294965752));
    // 0x2c1784: 0x27a60100  addiu       $a2, $sp, 0x100
    ctx->pc = 0x2c1784u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x2c1788: 0xc08974c  jal         func_225D30
    ctx->pc = 0x2C1788u;
    SET_GPR_U32(ctx, 31, 0x2C1790u);
    ctx->pc = 0x2C178Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C1788u;
            // 0x2c178c: 0x280382d  daddu       $a3, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x225D30u;
    if (runtime->hasFunction(0x225D30u)) {
        auto targetFn = runtime->lookupFunction(0x225D30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C1790u; }
        if (ctx->pc != 0x2C1790u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPutPosXY__16CMenuPosDataFormFPcRiRi_0x225d30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C1790u; }
        if (ctx->pc != 0x2C1790u) { return; }
    }
    ctx->pc = 0x2C1790u;
label_2c1790:
    // 0x2c1790: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x2c1790u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x2c1794: 0x8c22cb3c  lw          $v0, -0x34C4($at)
    ctx->pc = 0x2c1794u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294953788)));
    // 0x2c1798: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2C1798u;
    {
        const bool branch_taken_0x2c1798 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C179Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C1798u;
            // 0x2c179c: 0x3c050037  lui         $a1, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c1798) {
            ctx->pc = 0x2C17B8u;
            goto label_2c17b8;
        }
    }
    ctx->pc = 0x2C17A0u;
    // 0x2c17a0: 0xc7a00100  lwc1        $f0, 0x100($sp)
    ctx->pc = 0x2c17a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 256)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c17a4: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2c17a4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2c17a8: 0xe440000c  swc1        $f0, 0xC($v0)
    ctx->pc = 0x2c17a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    // 0x2c17ac: 0xc6800000  lwc1        $f0, 0x0($s4)
    ctx->pc = 0x2c17acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c17b0: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2c17b0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2c17b4: 0xe4400010  swc1        $f0, 0x10($v0)
    ctx->pc = 0x2c17b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 16), bits); }
label_2c17b8:
    // 0x2c17b8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2c17b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c17bc: 0xc089664  jal         func_225990
    ctx->pc = 0x2C17BCu;
    SET_GPR_U32(ctx, 31, 0x2C17C4u);
    ctx->pc = 0x2C17C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C17BCu;
            // 0x2c17c0: 0x24a5fa08  addiu       $a1, $a1, -0x5F8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294965768));
        ctx->in_delay_slot = false;
    ctx->pc = 0x225990u;
    if (runtime->hasFunction(0x225990u)) {
        auto targetFn = runtime->lookupFunction(0x225990u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C17C4u; }
        if (ctx->pc != 0x2C17C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPartInfo__16CMenuPosDataFormFPc_0x225990(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C17C4u; }
        if (ctx->pc != 0x2C17C4u) { return; }
    }
    ctx->pc = 0x2C17C4u;
label_2c17c4:
    // 0x2c17c4: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x2c17c4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x2c17c8: 0xafa20108  sw          $v0, 0x108($sp)
    ctx->pc = 0x2c17c8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 264), GPR_U32(ctx, 2));
    // 0x2c17cc: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2c17ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c17d0: 0xc089664  jal         func_225990
    ctx->pc = 0x2C17D0u;
    SET_GPR_U32(ctx, 31, 0x2C17D8u);
    ctx->pc = 0x2C17D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C17D0u;
            // 0x2c17d4: 0x24a5fa10  addiu       $a1, $a1, -0x5F0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294965776));
        ctx->in_delay_slot = false;
    ctx->pc = 0x225990u;
    if (runtime->hasFunction(0x225990u)) {
        auto targetFn = runtime->lookupFunction(0x225990u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C17D8u; }
        if (ctx->pc != 0x2C17D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPartInfo__16CMenuPosDataFormFPc_0x225990(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C17D8u; }
        if (ctx->pc != 0x2C17D8u) { return; }
    }
    ctx->pc = 0x2C17D8u;
label_2c17d8:
    // 0x2c17d8: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x2c17d8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x2c17dc: 0xafa2010c  sw          $v0, 0x10C($sp)
    ctx->pc = 0x2c17dcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 268), GPR_U32(ctx, 2));
    // 0x2c17e0: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2c17e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c17e4: 0xc089664  jal         func_225990
    ctx->pc = 0x2C17E4u;
    SET_GPR_U32(ctx, 31, 0x2C17ECu);
    ctx->pc = 0x2C17E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C17E4u;
            // 0x2c17e8: 0x24a5fa18  addiu       $a1, $a1, -0x5E8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294965784));
        ctx->in_delay_slot = false;
    ctx->pc = 0x225990u;
    if (runtime->hasFunction(0x225990u)) {
        auto targetFn = runtime->lookupFunction(0x225990u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C17ECu; }
        if (ctx->pc != 0x2C17ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPartInfo__16CMenuPosDataFormFPc_0x225990(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C17ECu; }
        if (ctx->pc != 0x2C17ECu) { return; }
    }
    ctx->pc = 0x2C17ECu;
label_2c17ec:
    // 0x2c17ec: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x2c17ecu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x2c17f0: 0xafa20110  sw          $v0, 0x110($sp)
    ctx->pc = 0x2c17f0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 272), GPR_U32(ctx, 2));
    // 0x2c17f4: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2c17f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c17f8: 0x24a5fa20  addiu       $a1, $a1, -0x5E0
    ctx->pc = 0x2c17f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294965792));
    // 0x2c17fc: 0x27a600b0  addiu       $a2, $sp, 0xB0
    ctx->pc = 0x2c17fcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x2c1800: 0xc08974c  jal         func_225D30
    ctx->pc = 0x2C1800u;
    SET_GPR_U32(ctx, 31, 0x2C1808u);
    ctx->pc = 0x2C1804u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C1800u;
            // 0x2c1804: 0x27a700b4  addiu       $a3, $sp, 0xB4 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 180));
        ctx->in_delay_slot = false;
    ctx->pc = 0x225D30u;
    if (runtime->hasFunction(0x225D30u)) {
        auto targetFn = runtime->lookupFunction(0x225D30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C1808u; }
        if (ctx->pc != 0x2C1808u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPutPosXY__16CMenuPosDataFormFPcRiRi_0x225d30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C1808u; }
        if (ctx->pc != 0x2C1808u) { return; }
    }
    ctx->pc = 0x2C1808u;
label_2c1808:
    // 0x2c1808: 0x8f849450  lw          $a0, -0x6BB0($gp)
    ctx->pc = 0x2c1808u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939728)));
    // 0x2c180c: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x2c180cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x2c1810: 0x24a5fa30  addiu       $a1, $a1, -0x5D0
    ctx->pc = 0x2c1810u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294965808));
    // 0x2c1814: 0x27a60118  addiu       $a2, $sp, 0x118
    ctx->pc = 0x2c1814u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 280));
    // 0x2c1818: 0xc08aaec  jal         func_22ABB0
    ctx->pc = 0x2C1818u;
    SET_GPR_U32(ctx, 31, 0x2C1820u);
    ctx->pc = 0x2C181Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C1818u;
            // 0x2c181c: 0x27a7011c  addiu       $a3, $sp, 0x11C (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 284));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22ABB0u;
    if (runtime->hasFunction(0x22ABB0u)) {
        auto targetFn = runtime->lookupFunction(0x22ABB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C1820u; }
        if (ctx->pc != 0x2C1820u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetEtcTblValue__14CPosDataManageFPcRiRi_0x22abb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C1820u; }
        if (ctx->pc != 0x2C1820u) { return; }
    }
    ctx->pc = 0x2C1820u;
label_2c1820:
    // 0x2c1820: 0x17c0000b  bnez        $fp, . + 4 + (0xB << 2)
    ctx->pc = 0x2C1820u;
    {
        const bool branch_taken_0x2c1820 = (GPR_U64(ctx, 30) != GPR_U64(ctx, 0));
        if (branch_taken_0x2c1820) {
            ctx->pc = 0x2C1850u;
            goto label_2c1850;
        }
    }
    ctx->pc = 0x2C1828u;
    // 0x2c1828: 0x8ea70114  lw          $a3, 0x114($s5)
    ctx->pc = 0x2c1828u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 276)));
    // 0x2c182c: 0x3c034238  lui         $v1, 0x4238
    ctx->pc = 0x2c182cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16952 << 16));
    // 0x2c1830: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x2c1830u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
    // 0x2c1834: 0x2e0402d  daddu       $t0, $s7, $zero
    ctx->pc = 0x2c1834u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c1838: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x2c1838u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2c183c: 0x27a40108  addiu       $a0, $sp, 0x108
    ctx->pc = 0x2c183cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 264));
    // 0x2c1840: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x2c1840u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x2c1844: 0x27a500b0  addiu       $a1, $sp, 0xB0
    ctx->pc = 0x2c1844u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x2c1848: 0xc0b0b74  jal         func_2C2DD0
    ctx->pc = 0x2C1848u;
    SET_GPR_U32(ctx, 31, 0x2C1850u);
    ctx->pc = 0x2C184Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C1848u;
            // 0x2c184c: 0x27a60118  addiu       $a2, $sp, 0x118 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 280));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2C2DD0u;
    if (runtime->hasFunction(0x2C2DD0u)) {
        auto targetFn = runtime->lookupFunction(0x2C2DD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C1850u; }
        if (ctx->pc != 0x2C1850u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        LocalFunc_AdjustScrlBar__FPP18MENUFORMPARTS_TYPEPiPiiffi_0x2c2dd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C1850u; }
        if (ctx->pc != 0x2C1850u) { return; }
    }
    ctx->pc = 0x2C1850u;
label_2c1850:
    // 0x2c1850: 0x8f839c58  lw          $v1, -0x63A8($gp)
    ctx->pc = 0x2c1850u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941784)));
    // 0x2c1854: 0x1060000e  beqz        $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x2C1854u;
    {
        const bool branch_taken_0x2c1854 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c1854) {
            ctx->pc = 0x2C1890u;
            goto label_2c1890;
        }
    }
    ctx->pc = 0x2C185Cu;
    // 0x2c185c: 0x8f849c54  lw          $a0, -0x63AC($gp)
    ctx->pc = 0x2c185cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941780)));
    // 0x2c1860: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x2c1860u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x2c1864: 0x24a5fa40  addiu       $a1, $a1, -0x5C0
    ctx->pc = 0x2c1864u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294965824));
    // 0x2c1868: 0x27a60100  addiu       $a2, $sp, 0x100
    ctx->pc = 0x2c1868u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x2c186c: 0xc08974c  jal         func_225D30
    ctx->pc = 0x2C186Cu;
    SET_GPR_U32(ctx, 31, 0x2C1874u);
    ctx->pc = 0x2C1870u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C186Cu;
            // 0x2c1870: 0x280382d  daddu       $a3, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x225D30u;
    if (runtime->hasFunction(0x225D30u)) {
        auto targetFn = runtime->lookupFunction(0x225D30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C1874u; }
        if (ctx->pc != 0x2C1874u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPutPosXY__16CMenuPosDataFormFPcRiRi_0x225d30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C1874u; }
        if (ctx->pc != 0x2C1874u) { return; }
    }
    ctx->pc = 0x2C1874u;
label_2c1874:
    // 0x2c1874: 0xc7a00100  lwc1        $f0, 0x100($sp)
    ctx->pc = 0x2c1874u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 256)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c1878: 0x8f839c58  lw          $v1, -0x63A8($gp)
    ctx->pc = 0x2c1878u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941784)));
    // 0x2c187c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2c187cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2c1880: 0xe460000c  swc1        $f0, 0xC($v1)
    ctx->pc = 0x2c1880u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 12), bits); }
    // 0x2c1884: 0xc6800000  lwc1        $f0, 0x0($s4)
    ctx->pc = 0x2c1884u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c1888: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2c1888u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2c188c: 0xe4600010  swc1        $f0, 0x10($v1)
    ctx->pc = 0x2c188cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 16), bits); }
label_2c1890:
    // 0x2c1890: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x2c1890u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x2c1894: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x2c1894u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2c1898: 0x7bbe0090  lq          $fp, 0x90($sp)
    ctx->pc = 0x2c1898u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2c189c: 0x7bb70080  lq          $s7, 0x80($sp)
    ctx->pc = 0x2c189cu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2c18a0: 0x7bb60070  lq          $s6, 0x70($sp)
    ctx->pc = 0x2c18a0u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2c18a4: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x2c18a4u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2c18a8: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x2c18a8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2c18ac: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x2c18acu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2c18b0: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x2c18b0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2c18b4: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x2c18b4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2c18b8: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x2c18b8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2c18bc: 0x3e00008  jr          $ra
    ctx->pc = 0x2C18BCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C18C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C18BCu;
            // 0x2c18c0: 0x27bd0120  addiu       $sp, $sp, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2C18C4u;
}
