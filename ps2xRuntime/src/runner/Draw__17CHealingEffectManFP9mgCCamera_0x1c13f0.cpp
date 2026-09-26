#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: Draw__17CHealingEffectManFP9mgCCamera
// Address: 0x1c13f0 - 0x1c179c
void Draw__17CHealingEffectManFP9mgCCamera_0x1c13f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Draw__17CHealingEffectManFP9mgCCamera_0x1c13f0");
#endif

    switch (ctx->pc) {
        case 0x1c1428u: goto label_1c1428;
        case 0x1c1430u: goto label_1c1430;
        case 0x1c14a0u: goto label_1c14a0;
        case 0x1c14b4u: goto label_1c14b4;
        case 0x1c14d0u: goto label_1c14d0;
        case 0x1c14e4u: goto label_1c14e4;
        case 0x1c14f4u: goto label_1c14f4;
        case 0x1c1554u: goto label_1c1554;
        case 0x1c1568u: goto label_1c1568;
        case 0x1c1574u: goto label_1c1574;
        case 0x1c1584u: goto label_1c1584;
        case 0x1c158cu: goto label_1c158c;
        case 0x1c1598u: goto label_1c1598;
        case 0x1c15a4u: goto label_1c15a4;
        case 0x1c15b0u: goto label_1c15b0;
        case 0x1c15bcu: goto label_1c15bc;
        case 0x1c15c8u: goto label_1c15c8;
        case 0x1c15d4u: goto label_1c15d4;
        case 0x1c15e0u: goto label_1c15e0;
        case 0x1c15ecu: goto label_1c15ec;
        case 0x1c15f4u: goto label_1c15f4;
        case 0x1c1600u: goto label_1c1600;
        case 0x1c1624u: goto label_1c1624;
        case 0x1c1634u: goto label_1c1634;
        case 0x1c1644u: goto label_1c1644;
        case 0x1c1688u: goto label_1c1688;
        case 0x1c16a4u: goto label_1c16a4;
        case 0x1c16b4u: goto label_1c16b4;
        case 0x1c16c0u: goto label_1c16c0;
        case 0x1c16d0u: goto label_1c16d0;
        case 0x1c16dcu: goto label_1c16dc;
        case 0x1c1708u: goto label_1c1708;
        case 0x1c1724u: goto label_1c1724;
        case 0x1c1734u: goto label_1c1734;
        case 0x1c1740u: goto label_1c1740;
        case 0x1c1750u: goto label_1c1750;
        case 0x1c175cu: goto label_1c175c;
        case 0x1c1778u: goto label_1c1778;
        default: break;
    }

    ctx->pc = 0x1c13f0u;

    // 0x1c13f0: 0x27bdfdc0  addiu       $sp, $sp, -0x240
    ctx->pc = 0x1c13f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966720));
    // 0x1c13f4: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x1c13f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x1c13f8: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x1c13f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
    // 0x1c13fc: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x1c13fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x1c1400: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x1c1400u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x1c1404: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x1c1404u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x1c1408: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1c1408u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1c140c: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x1c140cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x1c1410: 0x84830000  lh          $v1, 0x0($a0)
    ctx->pc = 0x1c1410u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1c1414: 0x106000d8  beqz        $v1, . + 4 + (0xD8 << 2)
    ctx->pc = 0x1C1414u;
    {
        const bool branch_taken_0x1c1414 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C1418u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C1414u;
            // 0x1c1418: 0x80a02d  daddu       $s4, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c1414) {
            ctx->pc = 0x1C1778u;
            goto label_1c1778;
        }
    }
    ctx->pc = 0x1C141Cu;
    // 0x1c141c: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x1c141cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c1420: 0xc04c574  jal         func_1315D0
    ctx->pc = 0x1C1420u;
    SET_GPR_U32(ctx, 31, 0x1C1428u);
    ctx->pc = 0x1C1424u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C1420u;
            // 0x1c1424: 0x27a50070  addiu       $a1, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1315D0u;
    if (runtime->hasFunction(0x1315D0u)) {
        auto targetFn = runtime->lookupFunction(0x1315D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C1428u; }
        if (ctx->pc != 0x1C1428u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPos__9mgCCameraFPf_0x1315d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C1428u; }
        if (ctx->pc != 0x1C1428u) { return; }
    }
    ctx->pc = 0x1C1428u;
label_1c1428:
    // 0x1c1428: 0xc041c7a  jal         func_1071E8
    ctx->pc = 0x1C1428u;
    SET_GPR_U32(ctx, 31, 0x1C1430u);
    ctx->pc = 0x1C142Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C1428u;
            // 0x1c142c: 0x27a400a0  addiu       $a0, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1071E8u;
    if (runtime->hasFunction(0x1071E8u)) {
        auto targetFn = runtime->lookupFunction(0x1071E8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C1430u; }
        if (ctx->pc != 0x1C1430u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0UnitMatrix_0x1071e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C1430u; }
        if (ctx->pc != 0x1C1430u) { return; }
    }
    ctx->pc = 0x1C1430u;
label_1c1430:
    // 0x1c1430: 0x86830314  lh          $v1, 0x314($s4)
    ctx->pc = 0x1c1430u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 788)));
    // 0x1c1434: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1c1434u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1c1438: 0x10620020  beq         $v1, $v0, . + 4 + (0x20 << 2)
    ctx->pc = 0x1C1438u;
    {
        const bool branch_taken_0x1c1438 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1C143Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C1438u;
            // 0x1c143c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c1438) {
            ctx->pc = 0x1C14BCu;
            goto label_1c14bc;
        }
    }
    ctx->pc = 0x1C1440u;
    // 0x1c1440: 0x1062000d  beq         $v1, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x1C1440u;
    {
        const bool branch_taken_0x1c1440 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1C1444u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C1440u;
            // 0x1c1444: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c1440) {
            ctx->pc = 0x1C1478u;
            goto label_1c1478;
        }
    }
    ctx->pc = 0x1C1448u;
    // 0x1c1448: 0x10620008  beq         $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1C1448u;
    {
        const bool branch_taken_0x1c1448 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1c1448) {
            ctx->pc = 0x1C146Cu;
            goto label_1c146c;
        }
    }
    ctx->pc = 0x1C1450u;
    // 0x1c1450: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1C1450u;
    {
        const bool branch_taken_0x1c1450 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c1450) {
            ctx->pc = 0x1C1460u;
            goto label_1c1460;
        }
    }
    ctx->pc = 0x1C1458u;
    // 0x1c1458: 0x10000024  b           . + 4 + (0x24 << 2)
    ctx->pc = 0x1C1458u;
    {
        const bool branch_taken_0x1c1458 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C145Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C1458u;
            // 0x1c145c: 0x27a40070  addiu       $a0, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c1458) {
            ctx->pc = 0x1C14ECu;
            goto label_1c14ec;
        }
    }
    ctx->pc = 0x1C1460u;
label_1c1460:
    // 0x1c1460: 0x24100080  addiu       $s0, $zero, 0x80
    ctx->pc = 0x1c1460u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x1c1464: 0x10000020  b           . + 4 + (0x20 << 2)
    ctx->pc = 0x1C1464u;
    {
        const bool branch_taken_0x1c1464 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C1468u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C1464u;
            // 0x1c1468: 0x24110040  addiu       $s1, $zero, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c1464) {
            ctx->pc = 0x1C14E8u;
            goto label_1c14e8;
        }
    }
    ctx->pc = 0x1C146Cu;
label_1c146c:
    // 0x1c146c: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1c146cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c1470: 0x1000001d  b           . + 4 + (0x1D << 2)
    ctx->pc = 0x1C1470u;
    {
        const bool branch_taken_0x1c1470 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C1474u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C1470u;
            // 0x1c1474: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c1470) {
            ctx->pc = 0x1C14E8u;
            goto label_1c14e8;
        }
    }
    ctx->pc = 0x1C1478u;
label_1c1478:
    // 0x1c1478: 0xc6810310  lwc1        $f1, 0x310($s4)
    ctx->pc = 0x1c1478u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 784)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1c147c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1c147cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1c1480: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x1c1480u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1c1484: 0x3c02437f  lui         $v0, 0x437F
    ctx->pc = 0x1c1484u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17279 << 16));
    // 0x1c1488: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1c1488u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c148c: 0x0  nop
    ctx->pc = 0x1c148cu;
    // NOP
    // 0x1c1490: 0x46020841  sub.s       $f1, $f1, $f2
    ctx->pc = 0x1c1490u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
    // 0x1c1494: 0x46011501  sub.s       $f20, $f2, $f1
    ctx->pc = 0x1c1494u;
    ctx->f[20] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
    // 0x1c1498: 0xc0a248c  jal         func_289230
    ctx->pc = 0x1C1498u;
    SET_GPR_U32(ctx, 31, 0x1C14A0u);
    ctx->pc = 0x1C149Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C1498u;
            // 0x1c149c: 0x46140302  mul.s       $f12, $f0, $f20 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C14A0u; }
        if (ctx->pc != 0x1C14A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C14A0u; }
        if (ctx->pc != 0x1C14A0u) { return; }
    }
    ctx->pc = 0x1C14A0u;
label_1c14a0:
    // 0x1c14a0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1c14a0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c14a4: 0x3c024334  lui         $v0, 0x4334
    ctx->pc = 0x1c14a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17204 << 16));
    // 0x1c14a8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1c14a8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c14ac: 0xc0a248c  jal         func_289230
    ctx->pc = 0x1C14ACu;
    SET_GPR_U32(ctx, 31, 0x1C14B4u);
    ctx->pc = 0x1C14B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C14ACu;
            // 0x1c14b0: 0x46140302  mul.s       $f12, $f0, $f20 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C14B4u; }
        if (ctx->pc != 0x1C14B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C14B4u; }
        if (ctx->pc != 0x1C14B4u) { return; }
    }
    ctx->pc = 0x1C14B4u;
label_1c14b4:
    // 0x1c14b4: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x1C14B4u;
    {
        const bool branch_taken_0x1c14b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C14B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C14B4u;
            // 0x1c14b8: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c14b4) {
            ctx->pc = 0x1C14E8u;
            goto label_1c14e8;
        }
    }
    ctx->pc = 0x1C14BCu;
label_1c14bc:
    // 0x1c14bc: 0xc6940310  lwc1        $f20, 0x310($s4)
    ctx->pc = 0x1c14bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 784)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1c14c0: 0x3c024300  lui         $v0, 0x4300
    ctx->pc = 0x1c14c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17152 << 16));
    // 0x1c14c4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1c14c4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c14c8: 0xc0a248c  jal         func_289230
    ctx->pc = 0x1C14C8u;
    SET_GPR_U32(ctx, 31, 0x1C14D0u);
    ctx->pc = 0x1C14CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C14C8u;
            // 0x1c14cc: 0x46140302  mul.s       $f12, $f0, $f20 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C14D0u; }
        if (ctx->pc != 0x1C14D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C14D0u; }
        if (ctx->pc != 0x1C14D0u) { return; }
    }
    ctx->pc = 0x1C14D0u;
label_1c14d0:
    // 0x1c14d0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1c14d0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c14d4: 0x3c024280  lui         $v0, 0x4280
    ctx->pc = 0x1c14d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17024 << 16));
    // 0x1c14d8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1c14d8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c14dc: 0xc0a248c  jal         func_289230
    ctx->pc = 0x1C14DCu;
    SET_GPR_U32(ctx, 31, 0x1C14E4u);
    ctx->pc = 0x1C14E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C14DCu;
            // 0x1c14e0: 0x46140302  mul.s       $f12, $f0, $f20 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C14E4u; }
        if (ctx->pc != 0x1C14E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C14E4u; }
        if (ctx->pc != 0x1C14E4u) { return; }
    }
    ctx->pc = 0x1C14E4u;
label_1c14e4:
    // 0x1c14e4: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1c14e4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1c14e8:
    // 0x1c14e8: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x1c14e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_1c14ec:
    // 0x1c14ec: 0xc04c018  jal         func_130060
    ctx->pc = 0x1C14ECu;
    SET_GPR_U32(ctx, 31, 0x1C14F4u);
    ctx->pc = 0x1C14F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C14ECu;
            // 0x1c14f0: 0x26850320  addiu       $a1, $s4, 0x320 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 800));
        ctx->in_delay_slot = false;
    ctx->pc = 0x130060u;
    if (runtime->hasFunction(0x130060u)) {
        auto targetFn = runtime->lookupFunction(0x130060u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C14F4u; }
        if (ctx->pc != 0x1C14F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgDistVector__FPfPf_0x130060(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C14F4u; }
        if (ctx->pc != 0x1C14F4u) { return; }
    }
    ctx->pc = 0x1C14F4u;
label_1c14f4:
    // 0x1c14f4: 0x3c034420  lui         $v1, 0x4420
    ctx->pc = 0x1c14f4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17440 << 16));
    // 0x1c14f8: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x1c14f8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1c14fc: 0x0  nop
    ctx->pc = 0x1c14fcu;
    // NOP
    // 0x1c1500: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x1c1500u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1c1504: 0x0  nop
    ctx->pc = 0x1c1504u;
    // NOP
    // 0x1c1508: 0x4500009b  bc1f        . + 4 + (0x9B << 2)
    ctx->pc = 0x1C1508u;
    {
        const bool branch_taken_0x1c1508 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1c1508) {
            ctx->pc = 0x1C1778u;
            goto label_1c1778;
        }
    }
    ctx->pc = 0x1C1510u;
    // 0x1c1510: 0x3c0243a0  lui         $v0, 0x43A0
    ctx->pc = 0x1c1510u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17312 << 16));
    // 0x1c1514: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x1c1514u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x1c1518: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1c1518u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1c151c: 0x4483a000  mtc1        $v1, $f20
    ctx->pc = 0x1c151cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x1c1520: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x1c1520u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1c1524: 0x0  nop
    ctx->pc = 0x1c1524u;
    // NOP
    // 0x1c1528: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x1C1528u;
    {
        const bool branch_taken_0x1c1528 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1c1528) {
            ctx->pc = 0x1C1540u;
            goto label_1c1540;
        }
    }
    ctx->pc = 0x1C1530u;
    // 0x1c1530: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x1c1530u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x1c1534: 0x0  nop
    ctx->pc = 0x1c1534u;
    // NOP
    // 0x1c1538: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x1c1538u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x1c153c: 0x4600a501  sub.s       $f20, $f20, $f0
    ctx->pc = 0x1c153cu;
    ctx->f[20] = FPU_SUB_S(ctx->f[20], ctx->f[0]);
label_1c1540:
    // 0x1c1540: 0x44900000  mtc1        $s0, $f0
    ctx->pc = 0x1c1540u;
    { uint32_t bits = GPR_U32(ctx, 16); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c1544: 0x0  nop
    ctx->pc = 0x1c1544u;
    // NOP
    // 0x1c1548: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1c1548u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1c154c: 0xc0a248c  jal         func_289230
    ctx->pc = 0x1C154Cu;
    SET_GPR_U32(ctx, 31, 0x1C1554u);
    ctx->pc = 0x1C1550u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C154Cu;
            // 0x1c1550: 0x46140302  mul.s       $f12, $f0, $f20 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C1554u; }
        if (ctx->pc != 0x1C1554u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C1554u; }
        if (ctx->pc != 0x1C1554u) { return; }
    }
    ctx->pc = 0x1C1554u;
label_1c1554:
    // 0x1c1554: 0x44910000  mtc1        $s1, $f0
    ctx->pc = 0x1c1554u;
    { uint32_t bits = GPR_U32(ctx, 17); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c1558: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1c1558u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c155c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1c155cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1c1560: 0xc0a248c  jal         func_289230
    ctx->pc = 0x1C1560u;
    SET_GPR_U32(ctx, 31, 0x1C1568u);
    ctx->pc = 0x1C1564u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C1560u;
            // 0x1c1564: 0x46140302  mul.s       $f12, $f0, $f20 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C1568u; }
        if (ctx->pc != 0x1C1568u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C1568u; }
        if (ctx->pc != 0x1C1568u) { return; }
    }
    ctx->pc = 0x1C1568u;
label_1c1568:
    // 0x1c1568: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1c1568u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c156c: 0xc04d0e8  jal         func_1343A0
    ctx->pc = 0x1C156Cu;
    SET_GPR_U32(ctx, 31, 0x1C1574u);
    ctx->pc = 0x1C1570u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C156Cu;
            // 0x1c1570: 0x27a40120  addiu       $a0, $sp, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1343A0u;
    if (runtime->hasFunction(0x1343A0u)) {
        auto targetFn = runtime->lookupFunction(0x1343A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C1574u; }
        if (ctx->pc != 0x1C1574u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___ct__11mgCDrawPrimFv_0x1343a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C1574u; }
        if (ctx->pc != 0x1C1574u) { return; }
    }
    ctx->pc = 0x1C1574u;
label_1c1574:
    // 0x1c1574: 0x27a40120  addiu       $a0, $sp, 0x120
    ctx->pc = 0x1c1574u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
    // 0x1c1578: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1c1578u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c157c: 0xc04d104  jal         func_134410
    ctx->pc = 0x1C157Cu;
    SET_GPR_U32(ctx, 31, 0x1C1584u);
    ctx->pc = 0x1C1580u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C157Cu;
            // 0x1c1580: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134410u;
    if (runtime->hasFunction(0x134410u)) {
        auto targetFn = runtime->lookupFunction(0x134410u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C1584u; }
        if (ctx->pc != 0x1C1584u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Initialize__11mgCDrawPrimFP9mgCMemoryP13sceVif1Packet_0x134410(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C1584u; }
        if (ctx->pc != 0x1C1584u) { return; }
    }
    ctx->pc = 0x1C1584u;
label_1c1584:
    // 0x1c1584: 0xc079f5c  jal         func_1E7D70
    ctx->pc = 0x1C1584u;
    SET_GPR_U32(ctx, 31, 0x1C158Cu);
    ctx->pc = 0x1C1588u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C1584u;
            // 0x1c1588: 0x27a40120  addiu       $a0, $sp, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E7D70u;
    if (runtime->hasFunction(0x1E7D70u)) {
        auto targetFn = runtime->lookupFunction(0x1E7D70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C158Cu; }
        if (ctx->pc != 0x1C158Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Preset2D__10CPreSpriteFv_0x1e7d70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C158Cu; }
        if (ctx->pc != 0x1C158Cu) { return; }
    }
    ctx->pc = 0x1C158Cu;
label_1c158c:
    // 0x1c158c: 0x27a40120  addiu       $a0, $sp, 0x120
    ctx->pc = 0x1c158cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
    // 0x1c1590: 0xc04d44c  jal         func_135130
    ctx->pc = 0x1C1590u;
    SET_GPR_U32(ctx, 31, 0x1C1598u);
    ctx->pc = 0x1C1594u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C1590u;
            // 0x1c1594: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x135130u;
    if (runtime->hasFunction(0x135130u)) {
        auto targetFn = runtime->lookupFunction(0x135130u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C1598u; }
        if (ctx->pc != 0x1C1598u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Coord__11mgCDrawPrimFi_0x135130(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C1598u; }
        if (ctx->pc != 0x1C1598u) { return; }
    }
    ctx->pc = 0x1C1598u;
label_1c1598:
    // 0x1c1598: 0x27a40120  addiu       $a0, $sp, 0x120
    ctx->pc = 0x1c1598u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
    // 0x1c159c: 0xc04d3e4  jal         func_134F90
    ctx->pc = 0x1C159Cu;
    SET_GPR_U32(ctx, 31, 0x1C15A4u);
    ctx->pc = 0x1C15A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C159Cu;
            // 0x1c15a0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134F90u;
    if (runtime->hasFunction(0x134F90u)) {
        auto targetFn = runtime->lookupFunction(0x134F90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C15A4u; }
        if (ctx->pc != 0x1C15A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DepthTestEnable__11mgCDrawPrimFi_0x134f90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C15A4u; }
        if (ctx->pc != 0x1C15A4u) { return; }
    }
    ctx->pc = 0x1C15A4u;
label_1c15a4:
    // 0x1c15a4: 0x27a40120  addiu       $a0, $sp, 0x120
    ctx->pc = 0x1c15a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
    // 0x1c15a8: 0xc04d424  jal         func_135090
    ctx->pc = 0x1C15A8u;
    SET_GPR_U32(ctx, 31, 0x1C15B0u);
    ctx->pc = 0x1C15ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C15A8u;
            // 0x1c15ac: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x135090u;
    if (runtime->hasFunction(0x135090u)) {
        auto targetFn = runtime->lookupFunction(0x135090u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C15B0u; }
        if (ctx->pc != 0x1C15B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ZMask__11mgCDrawPrimFi_0x135090(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C15B0u; }
        if (ctx->pc != 0x1C15B0u) { return; }
    }
    ctx->pc = 0x1C15B0u;
label_1c15b0:
    // 0x1c15b0: 0x27a40120  addiu       $a0, $sp, 0x120
    ctx->pc = 0x1c15b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
    // 0x1c15b4: 0xc04d430  jal         func_1350C0
    ctx->pc = 0x1C15B4u;
    SET_GPR_U32(ctx, 31, 0x1C15BCu);
    ctx->pc = 0x1C15B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C15B4u;
            // 0x1c15b8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1350C0u;
    if (runtime->hasFunction(0x1350C0u)) {
        auto targetFn = runtime->lookupFunction(0x1350C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C15BCu; }
        if (ctx->pc != 0x1C15BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Bilinear__11mgCDrawPrimFi_0x1350c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C15BCu; }
        if (ctx->pc != 0x1C15BCu) { return; }
    }
    ctx->pc = 0x1C15BCu;
label_1c15bc:
    // 0x1c15bc: 0x27a40120  addiu       $a0, $sp, 0x120
    ctx->pc = 0x1c15bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
    // 0x1c15c0: 0xc04d428  jal         func_1350A0
    ctx->pc = 0x1C15C0u;
    SET_GPR_U32(ctx, 31, 0x1C15C8u);
    ctx->pc = 0x1C15C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C15C0u;
            // 0x1c15c4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1350A0u;
    if (runtime->hasFunction(0x1350A0u)) {
        auto targetFn = runtime->lookupFunction(0x1350A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C15C8u; }
        if (ctx->pc != 0x1C15C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        TextureMapEnable__11mgCDrawPrimFi_0x1350a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C15C8u; }
        if (ctx->pc != 0x1C15C8u) { return; }
    }
    ctx->pc = 0x1C15C8u;
label_1c15c8:
    // 0x1c15c8: 0x27a40120  addiu       $a0, $sp, 0x120
    ctx->pc = 0x1c15c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
    // 0x1c15cc: 0xc04d3b8  jal         func_134EE0
    ctx->pc = 0x1C15CCu;
    SET_GPR_U32(ctx, 31, 0x1C15D4u);
    ctx->pc = 0x1C15D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C15CCu;
            // 0x1c15d0: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134EE0u;
    if (runtime->hasFunction(0x134EE0u)) {
        auto targetFn = runtime->lookupFunction(0x134EE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C15D4u; }
        if (ctx->pc != 0x1C15D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        AlphaBlend__11mgCDrawPrimFi_0x134ee0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C15D4u; }
        if (ctx->pc != 0x1C15D4u) { return; }
    }
    ctx->pc = 0x1C15D4u;
label_1c15d4:
    // 0x1c15d4: 0x27a40120  addiu       $a0, $sp, 0x120
    ctx->pc = 0x1c15d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
    // 0x1c15d8: 0xc04d128  jal         func_1344A0
    ctx->pc = 0x1C15D8u;
    SET_GPR_U32(ctx, 31, 0x1C15E0u);
    ctx->pc = 0x1C15DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C15D8u;
            // 0x1c15dc: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1344A0u;
    if (runtime->hasFunction(0x1344A0u)) {
        auto targetFn = runtime->lookupFunction(0x1344A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C15E0u; }
        if (ctx->pc != 0x1C15E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Begin__11mgCDrawPrimFi_0x1344a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C15E0u; }
        if (ctx->pc != 0x1C15E0u) { return; }
    }
    ctx->pc = 0x1C15E0u;
label_1c15e0:
    // 0x1c15e0: 0x8f858e90  lw          $a1, -0x7170($gp)
    ctx->pc = 0x1c15e0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938256)));
    // 0x1c15e4: 0xc04d368  jal         func_134DA0
    ctx->pc = 0x1C15E4u;
    SET_GPR_U32(ctx, 31, 0x1C15ECu);
    ctx->pc = 0x1C15E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C15E4u;
            // 0x1c15e8: 0x27a40120  addiu       $a0, $sp, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134DA0u;
    if (runtime->hasFunction(0x134DA0u)) {
        auto targetFn = runtime->lookupFunction(0x134DA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C15ECu; }
        if (ctx->pc != 0x1C15ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Texture__11mgCDrawPrimFP10mgCTexture_0x134da0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C15ECu; }
        if (ctx->pc != 0x1C15ECu) { return; }
    }
    ctx->pc = 0x1C15ECu;
label_1c15ec:
    // 0x1c15ec: 0x26920010  addiu       $s2, $s4, 0x10
    ctx->pc = 0x1c15ecu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 20), 16));
    // 0x1c15f0: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x1c15f0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c15f4:
    // 0x1c15f4: 0xae400000  sw          $zero, 0x0($s2)
    ctx->pc = 0x1c15f4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 0));
    // 0x1c15f8: 0xc047a42  jal         func_11E908
    ctx->pc = 0x1C15F8u;
    SET_GPR_U32(ctx, 31, 0x1C1600u);
    ctx->pc = 0x1C15FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C15F8u;
            // 0x1c15fc: 0xc64c001c  lwc1        $f12, 0x1C($s2) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
    ctx->pc = 0x11E908u;
    if (runtime->hasFunction(0x11E908u)) {
        auto targetFn = runtime->lookupFunction(0x11E908u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C1600u; }
        if (ctx->pc != 0x1C1600u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sinf_0x11e908(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C1600u; }
        if (ctx->pc != 0x1C1600u) { return; }
    }
    ctx->pc = 0x1C1600u;
label_1c1600:
    // 0x1c1600: 0xc6410018  lwc1        $f1, 0x18($s2)
    ctx->pc = 0x1c1600u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1c1604: 0x27a400e0  addiu       $a0, $sp, 0xE0
    ctx->pc = 0x1c1604u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x1c1608: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x1c1608u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1c160c: 0xe6400004  swc1        $f0, 0x4($s2)
    ctx->pc = 0x1c160cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 4), bits); }
    // 0x1c1610: 0xc6400010  lwc1        $f0, 0x10($s2)
    ctx->pc = 0x1c1610u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c1614: 0xe6400008  swc1        $f0, 0x8($s2)
    ctx->pc = 0x1c1614u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 8), bits); }
    // 0x1c1618: 0xc64c0014  lwc1        $f12, 0x14($s2)
    ctx->pc = 0x1c1618u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1c161c: 0xc041cf6  jal         func_1073D8
    ctx->pc = 0x1C161Cu;
    SET_GPR_U32(ctx, 31, 0x1C1624u);
    ctx->pc = 0x1C1620u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C161Cu;
            // 0x1c1620: 0x27a500a0  addiu       $a1, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1073D8u;
    if (runtime->hasFunction(0x1073D8u)) {
        auto targetFn = runtime->lookupFunction(0x1073D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C1624u; }
        if (ctx->pc != 0x1C1624u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0RotMatrixY_0x1073d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C1624u; }
        if (ctx->pc != 0x1C1624u) { return; }
    }
    ctx->pc = 0x1C1624u;
label_1c1624:
    // 0x1c1624: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1c1624u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c1628: 0x27a500e0  addiu       $a1, $sp, 0xE0
    ctx->pc = 0x1c1628u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x1c162c: 0xc041bb0  jal         func_106EC0
    ctx->pc = 0x1C162Cu;
    SET_GPR_U32(ctx, 31, 0x1C1634u);
    ctx->pc = 0x1C1630u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C162Cu;
            // 0x1c1630: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x106EC0u;
    if (runtime->hasFunction(0x106EC0u)) {
        auto targetFn = runtime->lookupFunction(0x106EC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C1634u; }
        if (ctx->pc != 0x1C1634u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0ApplyMatrix_0x106ec0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C1634u; }
        if (ctx->pc != 0x1C1634u) { return; }
    }
    ctx->pc = 0x1C1634u;
label_1c1634:
    // 0x1c1634: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1c1634u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c1638: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1c1638u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c163c: 0xc041c38  jal         func_1070E0
    ctx->pc = 0x1C163Cu;
    SET_GPR_U32(ctx, 31, 0x1C1644u);
    ctx->pc = 0x1C1640u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C163Cu;
            // 0x1c1640: 0x26860320  addiu       $a2, $s4, 0x320 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 20), 800));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1070E0u;
    if (runtime->hasFunction(0x1070E0u)) {
        auto targetFn = runtime->lookupFunction(0x1070E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C1644u; }
        if (ctx->pc != 0x1C1644u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0AddVector_0x1070e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C1644u; }
        if (ctx->pc != 0x1C1644u) { return; }
    }
    ctx->pc = 0x1C1644u;
label_1c1644:
    // 0x1c1644: 0xc6420004  lwc1        $f2, 0x4($s2)
    ctx->pc = 0x1c1644u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1c1648: 0x3c024100  lui         $v0, 0x4100
    ctx->pc = 0x1c1648u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16640 << 16));
    // 0x1c164c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1c164cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c1650: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x1c1650u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x1c1654: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x1c1654u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x1c1658: 0x27a50090  addiu       $a1, $sp, 0x90
    ctx->pc = 0x1c1658u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x1c165c: 0x3c024040  lui         $v0, 0x4040
    ctx->pc = 0x1c165cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16448 << 16));
    // 0x1c1660: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x1c1660u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c1664: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1c1664u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1c1668: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1c1668u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c166c: 0x46001000  add.s       $f0, $f2, $f0
    ctx->pc = 0x1c166cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x1c1670: 0xe6400004  swc1        $f0, 0x4($s2)
    ctx->pc = 0x1c1670u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 4), bits); }
    // 0x1c1674: 0xae43000c  sw          $v1, 0xC($s2)
    ctx->pc = 0x1c1674u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 3));
    // 0x1c1678: 0xc6800310  lwc1        $f0, 0x310($s4)
    ctx->pc = 0x1c1678u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 784)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c167c: 0x46000b02  mul.s       $f12, $f1, $f0
    ctx->pc = 0x1c167cu;
    ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1c1680: 0xc0516ec  jal         func_145BB0
    ctx->pc = 0x1C1680u;
    SET_GPR_U32(ctx, 31, 0x1C1688u);
    ctx->pc = 0x1C1684u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C1680u;
            // 0x1c1684: 0x46006346  mov.s       $f13, $f12 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x145BB0u;
    if (runtime->hasFunction(0x145BB0u)) {
        auto targetFn = runtime->lookupFunction(0x145BB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C1688u; }
        if (ctx->pc != 0x1C1688u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgTransWorldPrim3DSprite__FPiPiPfffi_0x145bb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C1688u; }
        if (ctx->pc != 0x1C1688u) { return; }
    }
    ctx->pc = 0x1C1688u;
label_1c1688:
    // 0x1c1688: 0x10400014  beqz        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x1C1688u;
    {
        const bool branch_taken_0x1c1688 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C168Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C1688u;
            // 0x1c168c: 0x27a40120  addiu       $a0, $sp, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c1688) {
            ctx->pc = 0x1C16DCu;
            goto label_1c16dc;
        }
    }
    ctx->pc = 0x1C1690u;
    // 0x1c1690: 0x2405005a  addiu       $a1, $zero, 0x5A
    ctx->pc = 0x1c1690u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 90));
    // 0x1c1694: 0x24060080  addiu       $a2, $zero, 0x80
    ctx->pc = 0x1c1694u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x1c1698: 0x24070040  addiu       $a3, $zero, 0x40
    ctx->pc = 0x1c1698u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x1c169c: 0xc04d320  jal         func_134C80
    ctx->pc = 0x1C169Cu;
    SET_GPR_U32(ctx, 31, 0x1C16A4u);
    ctx->pc = 0x1C16A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C169Cu;
            // 0x1c16a0: 0x200402d  daddu       $t0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134C80u;
    if (runtime->hasFunction(0x134C80u)) {
        auto targetFn = runtime->lookupFunction(0x134C80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C16A4u; }
        if (ctx->pc != 0x1C16A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Color__11mgCDrawPrimFiiii_0x134c80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C16A4u; }
        if (ctx->pc != 0x1C16A4u) { return; }
    }
    ctx->pc = 0x1C16A4u;
label_1c16a4:
    // 0x1c16a4: 0x27a40120  addiu       $a0, $sp, 0x120
    ctx->pc = 0x1c16a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
    // 0x1c16a8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1c16a8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c16ac: 0xc04d35c  jal         func_134D70
    ctx->pc = 0x1C16ACu;
    SET_GPR_U32(ctx, 31, 0x1C16B4u);
    ctx->pc = 0x1C16B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C16ACu;
            // 0x1c16b0: 0x24060020  addiu       $a2, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134D70u;
    if (runtime->hasFunction(0x134D70u)) {
        auto targetFn = runtime->lookupFunction(0x134D70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C16B4u; }
        if (ctx->pc != 0x1C16B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        TextureCrd__11mgCDrawPrimFii_0x134d70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C16B4u; }
        if (ctx->pc != 0x1C16B4u) { return; }
    }
    ctx->pc = 0x1C16B4u;
label_1c16b4:
    // 0x1c16b4: 0x27a40120  addiu       $a0, $sp, 0x120
    ctx->pc = 0x1c16b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
    // 0x1c16b8: 0xc04d318  jal         func_134C60
    ctx->pc = 0x1C16B8u;
    SET_GPR_U32(ctx, 31, 0x1C16C0u);
    ctx->pc = 0x1C16BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C16B8u;
            // 0x1c16bc: 0x27a50080  addiu       $a1, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134C60u;
    if (runtime->hasFunction(0x134C60u)) {
        auto targetFn = runtime->lookupFunction(0x134C60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C16C0u; }
        if (ctx->pc != 0x1C16C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Vertex4__11mgCDrawPrimFPi_0x134c60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C16C0u; }
        if (ctx->pc != 0x1C16C0u) { return; }
    }
    ctx->pc = 0x1C16C0u;
label_1c16c0:
    // 0x1c16c0: 0x27a40120  addiu       $a0, $sp, 0x120
    ctx->pc = 0x1c16c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
    // 0x1c16c4: 0x2405001f  addiu       $a1, $zero, 0x1F
    ctx->pc = 0x1c16c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
    // 0x1c16c8: 0xc04d35c  jal         func_134D70
    ctx->pc = 0x1C16C8u;
    SET_GPR_U32(ctx, 31, 0x1C16D0u);
    ctx->pc = 0x1C16CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C16C8u;
            // 0x1c16cc: 0x2406003f  addiu       $a2, $zero, 0x3F (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134D70u;
    if (runtime->hasFunction(0x134D70u)) {
        auto targetFn = runtime->lookupFunction(0x134D70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C16D0u; }
        if (ctx->pc != 0x1C16D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        TextureCrd__11mgCDrawPrimFii_0x134d70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C16D0u; }
        if (ctx->pc != 0x1C16D0u) { return; }
    }
    ctx->pc = 0x1C16D0u;
label_1c16d0:
    // 0x1c16d0: 0x27a40120  addiu       $a0, $sp, 0x120
    ctx->pc = 0x1c16d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
    // 0x1c16d4: 0xc04d318  jal         func_134C60
    ctx->pc = 0x1C16D4u;
    SET_GPR_U32(ctx, 31, 0x1C16DCu);
    ctx->pc = 0x1C16D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C16D4u;
            // 0x1c16d8: 0x27a50090  addiu       $a1, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134C60u;
    if (runtime->hasFunction(0x134C60u)) {
        auto targetFn = runtime->lookupFunction(0x134C60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C16DCu; }
        if (ctx->pc != 0x1C16DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Vertex4__11mgCDrawPrimFPi_0x134c60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C16DCu; }
        if (ctx->pc != 0x1C16DCu) { return; }
    }
    ctx->pc = 0x1C16DCu;
label_1c16dc:
    // 0x1c16dc: 0x0  nop
    ctx->pc = 0x1c16dcu;
    // NOP
    // 0x1c16e0: 0x3c0241f0  lui         $v0, 0x41F0
    ctx->pc = 0x1c16e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16880 << 16));
    // 0x1c16e4: 0xc6800310  lwc1        $f0, 0x310($s4)
    ctx->pc = 0x1c16e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 784)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c16e8: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x1c16e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x1c16ec: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1c16ecu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1c16f0: 0x27a50090  addiu       $a1, $sp, 0x90
    ctx->pc = 0x1c16f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x1c16f4: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x1c16f4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c16f8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1c16f8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c16fc: 0x46000b02  mul.s       $f12, $f1, $f0
    ctx->pc = 0x1c16fcu;
    ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1c1700: 0xc0516ec  jal         func_145BB0
    ctx->pc = 0x1C1700u;
    SET_GPR_U32(ctx, 31, 0x1C1708u);
    ctx->pc = 0x1C1704u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C1700u;
            // 0x1c1704: 0x46006346  mov.s       $f13, $f12 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x145BB0u;
    if (runtime->hasFunction(0x145BB0u)) {
        auto targetFn = runtime->lookupFunction(0x145BB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C1708u; }
        if (ctx->pc != 0x1C1708u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgTransWorldPrim3DSprite__FPiPiPfffi_0x145bb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C1708u; }
        if (ctx->pc != 0x1C1708u) { return; }
    }
    ctx->pc = 0x1C1708u;
label_1c1708:
    // 0x1c1708: 0x10400014  beqz        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x1C1708u;
    {
        const bool branch_taken_0x1c1708 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C170Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C1708u;
            // 0x1c170c: 0x2405005a  addiu       $a1, $zero, 0x5A (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 90));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c1708) {
            ctx->pc = 0x1C175Cu;
            goto label_1c175c;
        }
    }
    ctx->pc = 0x1C1710u;
    // 0x1c1710: 0x27a40120  addiu       $a0, $sp, 0x120
    ctx->pc = 0x1c1710u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
    // 0x1c1714: 0x24060080  addiu       $a2, $zero, 0x80
    ctx->pc = 0x1c1714u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x1c1718: 0xa0382d  daddu       $a3, $a1, $zero
    ctx->pc = 0x1c1718u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c171c: 0xc04d320  jal         func_134C80
    ctx->pc = 0x1C171Cu;
    SET_GPR_U32(ctx, 31, 0x1C1724u);
    ctx->pc = 0x1C1720u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C171Cu;
            // 0x1c1720: 0x220402d  daddu       $t0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134C80u;
    if (runtime->hasFunction(0x134C80u)) {
        auto targetFn = runtime->lookupFunction(0x134C80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C1724u; }
        if (ctx->pc != 0x1C1724u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Color__11mgCDrawPrimFiiii_0x134c80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C1724u; }
        if (ctx->pc != 0x1C1724u) { return; }
    }
    ctx->pc = 0x1C1724u;
label_1c1724:
    // 0x1c1724: 0x24050040  addiu       $a1, $zero, 0x40
    ctx->pc = 0x1c1724u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x1c1728: 0x27a40120  addiu       $a0, $sp, 0x120
    ctx->pc = 0x1c1728u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
    // 0x1c172c: 0xc04d35c  jal         func_134D70
    ctx->pc = 0x1C172Cu;
    SET_GPR_U32(ctx, 31, 0x1C1734u);
    ctx->pc = 0x1C1730u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C172Cu;
            // 0x1c1730: 0xa0302d  daddu       $a2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134D70u;
    if (runtime->hasFunction(0x134D70u)) {
        auto targetFn = runtime->lookupFunction(0x134D70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C1734u; }
        if (ctx->pc != 0x1C1734u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        TextureCrd__11mgCDrawPrimFii_0x134d70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C1734u; }
        if (ctx->pc != 0x1C1734u) { return; }
    }
    ctx->pc = 0x1C1734u;
label_1c1734:
    // 0x1c1734: 0x27a40120  addiu       $a0, $sp, 0x120
    ctx->pc = 0x1c1734u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
    // 0x1c1738: 0xc04d318  jal         func_134C60
    ctx->pc = 0x1C1738u;
    SET_GPR_U32(ctx, 31, 0x1C1740u);
    ctx->pc = 0x1C173Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C1738u;
            // 0x1c173c: 0x27a50080  addiu       $a1, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134C60u;
    if (runtime->hasFunction(0x134C60u)) {
        auto targetFn = runtime->lookupFunction(0x134C60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C1740u; }
        if (ctx->pc != 0x1C1740u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Vertex4__11mgCDrawPrimFPi_0x134c60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C1740u; }
        if (ctx->pc != 0x1C1740u) { return; }
    }
    ctx->pc = 0x1C1740u;
label_1c1740:
    // 0x1c1740: 0x2405007f  addiu       $a1, $zero, 0x7F
    ctx->pc = 0x1c1740u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
    // 0x1c1744: 0x27a40120  addiu       $a0, $sp, 0x120
    ctx->pc = 0x1c1744u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
    // 0x1c1748: 0xc04d35c  jal         func_134D70
    ctx->pc = 0x1C1748u;
    SET_GPR_U32(ctx, 31, 0x1C1750u);
    ctx->pc = 0x1C174Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C1748u;
            // 0x1c174c: 0xa0302d  daddu       $a2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134D70u;
    if (runtime->hasFunction(0x134D70u)) {
        auto targetFn = runtime->lookupFunction(0x134D70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C1750u; }
        if (ctx->pc != 0x1C1750u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        TextureCrd__11mgCDrawPrimFii_0x134d70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C1750u; }
        if (ctx->pc != 0x1C1750u) { return; }
    }
    ctx->pc = 0x1C1750u;
label_1c1750:
    // 0x1c1750: 0x27a40120  addiu       $a0, $sp, 0x120
    ctx->pc = 0x1c1750u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
    // 0x1c1754: 0xc04d318  jal         func_134C60
    ctx->pc = 0x1C1754u;
    SET_GPR_U32(ctx, 31, 0x1C175Cu);
    ctx->pc = 0x1C1758u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C1754u;
            // 0x1c1758: 0x27a50090  addiu       $a1, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134C60u;
    if (runtime->hasFunction(0x134C60u)) {
        auto targetFn = runtime->lookupFunction(0x134C60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C175Cu; }
        if (ctx->pc != 0x1C175Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Vertex4__11mgCDrawPrimFPi_0x134c60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C175Cu; }
        if (ctx->pc != 0x1C175Cu) { return; }
    }
    ctx->pc = 0x1C175Cu;
label_1c175c:
    // 0x1c175c: 0x0  nop
    ctx->pc = 0x1c175cu;
    // NOP
    // 0x1c1760: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x1c1760u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x1c1764: 0x2a620010  slti        $v0, $s3, 0x10
    ctx->pc = 0x1c1764u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)16) ? 1 : 0);
    // 0x1c1768: 0x1440ffa2  bnez        $v0, . + 4 + (-0x5E << 2)
    ctx->pc = 0x1C1768u;
    {
        const bool branch_taken_0x1c1768 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C176Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C1768u;
            // 0x1c176c: 0x26520030  addiu       $s2, $s2, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c1768) {
            ctx->pc = 0x1C15F4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1c15f4;
        }
    }
    ctx->pc = 0x1C1770u;
    // 0x1c1770: 0xc04d1a4  jal         func_134690
    ctx->pc = 0x1C1770u;
    SET_GPR_U32(ctx, 31, 0x1C1778u);
    ctx->pc = 0x1C1774u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C1770u;
            // 0x1c1774: 0x27a40120  addiu       $a0, $sp, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134690u;
    if (runtime->hasFunction(0x134690u)) {
        auto targetFn = runtime->lookupFunction(0x134690u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C1778u; }
        if (ctx->pc != 0x1C1778u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        End__11mgCDrawPrimFv_0x134690(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C1778u; }
        if (ctx->pc != 0x1C1778u) { return; }
    }
    ctx->pc = 0x1C1778u;
label_1c1778:
    // 0x1c1778: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x1c1778u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1c177c: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x1c177cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1c1780: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x1c1780u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1c1784: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x1c1784u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1c1788: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x1c1788u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1c178c: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x1c178cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1c1790: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1c1790u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c1794: 0x3e00008  jr          $ra
    ctx->pc = 0x1C1794u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C1798u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C1794u;
            // 0x1c1798: 0x27bd0240  addiu       $sp, $sp, 0x240 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 576));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1C179Cu;
}
