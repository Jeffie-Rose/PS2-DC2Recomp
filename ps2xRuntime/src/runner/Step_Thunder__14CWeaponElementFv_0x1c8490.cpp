#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: Step_Thunder__14CWeaponElementFv
// Address: 0x1c8490 - 0x1c8750
void Step_Thunder__14CWeaponElementFv_0x1c8490(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Step_Thunder__14CWeaponElementFv_0x1c8490");
#endif

    switch (ctx->pc) {
        case 0x1c84e4u: goto label_1c84e4;
        case 0x1c85a0u: goto label_1c85a0;
        case 0x1c85c0u: goto label_1c85c0;
        case 0x1c85f4u: goto label_1c85f4;
        case 0x1c85fcu: goto label_1c85fc;
        case 0x1c8638u: goto label_1c8638;
        case 0x1c8640u: goto label_1c8640;
        case 0x1c867cu: goto label_1c867c;
        case 0x1c8690u: goto label_1c8690;
        case 0x1c86ccu: goto label_1c86cc;
        default: break;
    }

    ctx->pc = 0x1c8490u;

    // 0x1c8490: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x1c8490u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x1c8494: 0x3c033c23  lui         $v1, 0x3C23
    ctx->pc = 0x1c8494u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15395 << 16));
    // 0x1c8498: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x1c8498u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x1c849c: 0x3463d70a  ori         $v1, $v1, 0xD70A
    ctx->pc = 0x1c849cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)55050);
    // 0x1c84a0: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x1c84a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x1c84a4: 0x44831800  mtc1        $v1, $f3
    ctx->pc = 0x1c84a4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x1c84a8: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1c84a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1c84ac: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x1c84acu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c84b0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1c84b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1c84b4: 0x3c044080  lui         $a0, 0x4080
    ctx->pc = 0x1c84b4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16512 << 16));
    // 0x1c84b8: 0x3c034040  lui         $v1, 0x4040
    ctx->pc = 0x1c84b8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16448 << 16));
    // 0x1c84bc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1c84bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1c84c0: 0x44802800  mtc1        $zero, $f5
    ctx->pc = 0x1c84c0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
    // 0x1c84c4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1c84c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1c84c8: 0x44841000  mtc1        $a0, $f2
    ctx->pc = 0x1c84c8u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1c84cc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1c84ccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c84d0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1c84d0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c84d4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1c84d4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c84d8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1c84d8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c84dc: 0x10000025  b           . + 4 + (0x25 << 2)
    ctx->pc = 0x1C84DCu;
    {
        const bool branch_taken_0x1c84dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C84E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C84DCu;
            // 0x1c84e0: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c84dc) {
            ctx->pc = 0x1C8574u;
            goto label_1c8574;
        }
    }
    ctx->pc = 0x1C84E4u;
label_1c84e4:
    // 0x1c84e4: 0x2872021  addu        $a0, $s4, $a3
    ctx->pc = 0x1c84e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 7)));
    // 0x1c84e8: 0xc4810520  lwc1        $f1, 0x520($a0)
    ctx->pc = 0x1c84e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 1312)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1c84ec: 0x46050836  c.le.s      $f1, $f5
    ctx->pc = 0x1c84ecu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[5])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1c84f0: 0x0  nop
    ctx->pc = 0x1c84f0u;
    // NOP
    // 0x1c84f4: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x1C84F4u;
    {
        const bool branch_taken_0x1c84f4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1C84F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C84F4u;
            // 0x1c84f8: 0x24890520  addiu       $t1, $a0, 0x520 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 4), 1312));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c84f4) {
            ctx->pc = 0x1C8504u;
            goto label_1c8504;
        }
    }
    ctx->pc = 0x1C84FCu;
    // 0x1c84fc: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x1C84FCu;
    {
        const bool branch_taken_0x1c84fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C8500u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C84FCu;
            // 0x1c8500: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c84fc) {
            ctx->pc = 0x1C8564u;
            goto label_1c8564;
        }
    }
    ctx->pc = 0x1C8504u;
label_1c8504:
    // 0x1c8504: 0x0  nop
    ctx->pc = 0x1c8504u;
    // NOP
    // 0x1c8508: 0x2881821  addu        $v1, $s4, $t0
    ctx->pc = 0x1c8508u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 8)));
    // 0x1c850c: 0xc4640220  lwc1        $f4, 0x220($v1)
    ctx->pc = 0x1c850cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 544)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x1c8510: 0xc4610020  lwc1        $f1, 0x20($v1)
    ctx->pc = 0x1c8510u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1c8514: 0x46040840  add.s       $f1, $f1, $f4
    ctx->pc = 0x1c8514u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[4]);
    // 0x1c8518: 0xe4610020  swc1        $f1, 0x20($v1)
    ctx->pc = 0x1c8518u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 32), bits); }
    // 0x1c851c: 0xc4640224  lwc1        $f4, 0x224($v1)
    ctx->pc = 0x1c851cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 548)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x1c8520: 0xc4610024  lwc1        $f1, 0x24($v1)
    ctx->pc = 0x1c8520u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1c8524: 0x46040840  add.s       $f1, $f1, $f4
    ctx->pc = 0x1c8524u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[4]);
    // 0x1c8528: 0xe4610024  swc1        $f1, 0x24($v1)
    ctx->pc = 0x1c8528u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 36), bits); }
    // 0x1c852c: 0xc4640228  lwc1        $f4, 0x228($v1)
    ctx->pc = 0x1c852cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 552)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x1c8530: 0xc4610028  lwc1        $f1, 0x28($v1)
    ctx->pc = 0x1c8530u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1c8534: 0x46040840  add.s       $f1, $f1, $f4
    ctx->pc = 0x1c8534u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[4]);
    // 0x1c8538: 0xe4610028  swc1        $f1, 0x28($v1)
    ctx->pc = 0x1c8538u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 40), bits); }
    // 0x1c853c: 0xc48104a0  lwc1        $f1, 0x4A0($a0)
    ctx->pc = 0x1c853cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 1184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1c8540: 0x46030841  sub.s       $f1, $f1, $f3
    ctx->pc = 0x1c8540u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[3]);
    // 0x1c8544: 0xe48104a0  swc1        $f1, 0x4A0($a0)
    ctx->pc = 0x1c8544u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 1184), bits); }
    // 0x1c8548: 0xc5210000  lwc1        $f1, 0x0($t1)
    ctx->pc = 0x1c8548u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1c854c: 0x46020841  sub.s       $f1, $f1, $f2
    ctx->pc = 0x1c854cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
    // 0x1c8550: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1c8550u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1c8554: 0x0  nop
    ctx->pc = 0x1c8554u;
    // NOP
    // 0x1c8558: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x1C8558u;
    {
        const bool branch_taken_0x1c8558 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1C855Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C8558u;
            // 0x1c855c: 0xe5210000  swc1        $f1, 0x0($t1) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 9), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c8558) {
            ctx->pc = 0x1C8564u;
            goto label_1c8564;
        }
    }
    ctx->pc = 0x1C8560u;
    // 0x1c8560: 0xe5250000  swc1        $f5, 0x0($t1)
    ctx->pc = 0x1c8560u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 9), 0), bits); }
label_1c8564:
    // 0x1c8564: 0x0  nop
    ctx->pc = 0x1c8564u;
    // NOP
    // 0x1c8568: 0x24e70004  addiu       $a3, $a3, 0x4
    ctx->pc = 0x1c8568u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
    // 0x1c856c: 0x25080010  addiu       $t0, $t0, 0x10
    ctx->pc = 0x1c856cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 16));
    // 0x1c8570: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x1c8570u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_1c8574:
    // 0x1c8574: 0x0  nop
    ctx->pc = 0x1c8574u;
    // NOP
    // 0x1c8578: 0x868405ae  lh          $a0, 0x5AE($s4)
    ctx->pc = 0x1c8578u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 1454)));
    // 0x1c857c: 0xc4182a  slt         $v1, $a2, $a0
    ctx->pc = 0x1c857cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x1c8580: 0x1460ffd8  bnez        $v1, . + 4 + (-0x28 << 2)
    ctx->pc = 0x1C8580u;
    {
        const bool branch_taken_0x1c8580 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C8584u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C8580u;
            // 0x1c8584: 0xa4182a  slt         $v1, $a1, $a0 (Delay Slot)
        SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c8580) {
            ctx->pc = 0x1C84E4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1c84e4;
        }
    }
    ctx->pc = 0x1C8588u;
    // 0x1c8588: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1C8588u;
    {
        const bool branch_taken_0x1c8588 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C858Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C8588u;
            // 0x1c858c: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c8588) {
            ctx->pc = 0x1C8598u;
            goto label_1c8598;
        }
    }
    ctx->pc = 0x1C8590u;
    // 0x1c8590: 0x10000067  b           . + 4 + (0x67 << 2)
    ctx->pc = 0x1C8590u;
    {
        const bool branch_taken_0x1c8590 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C8594u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C8590u;
            // 0x1c8594: 0xa68005ac  sh          $zero, 0x5AC($s4) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 20), 1452), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c8590) {
            ctx->pc = 0x1C8730u;
            goto label_1c8730;
        }
    }
    ctx->pc = 0x1C8598u;
label_1c8598:
    // 0x1c8598: 0x10000061  b           . + 4 + (0x61 << 2)
    ctx->pc = 0x1C8598u;
    {
        const bool branch_taken_0x1c8598 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C859Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C8598u;
            // 0x1c859c: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c8598) {
            ctx->pc = 0x1C8720u;
            goto label_1c8720;
        }
    }
    ctx->pc = 0x1C85A0u;
label_1c85a0:
    // 0x1c85a0: 0x8663077c  lh          $v1, 0x77C($s3)
    ctx->pc = 0x1c85a0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 1916)));
    // 0x1c85a4: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x1c85a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x1c85a8: 0xa663077c  sh          $v1, 0x77C($s3)
    ctx->pc = 0x1c85a8u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 1916), (uint16_t)GPR_U32(ctx, 3));
    // 0x1c85ac: 0x8664077c  lh          $a0, 0x77C($s3)
    ctx->pc = 0x1c85acu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 1916)));
    // 0x1c85b0: 0x1c800048  bgtz        $a0, . + 4 + (0x48 << 2)
    ctx->pc = 0x1C85B0u;
    {
        const bool branch_taken_0x1c85b0 = (GPR_S32(ctx, 4) > 0);
        ctx->pc = 0x1C85B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C85B0u;
            // 0x1c85b4: 0x2672077c  addiu       $s2, $s3, 0x77C (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 19), 1916));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c85b0) {
            ctx->pc = 0x1C86D4u;
            goto label_1c86d4;
        }
    }
    ctx->pc = 0x1C85B8u;
    // 0x1c85b8: 0xc04a0ea  jal         func_1283A8
    ctx->pc = 0x1C85B8u;
    SET_GPR_U32(ctx, 31, 0x1C85C0u);
    ctx->pc = 0x1283A8u;
    if (runtime->hasFunction(0x1283A8u)) {
        auto targetFn = runtime->lookupFunction(0x1283A8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C85C0u; }
        if (ctx->pc != 0x1C85C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        rand_0x1283a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C85C0u; }
        if (ctx->pc != 0x1C85C0u) { return; }
    }
    ctx->pc = 0x1C85C0u;
label_1c85c0:
    // 0x1c85c0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1c85c0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c85c4: 0x868305ae  lh          $v1, 0x5AE($s4)
    ctx->pc = 0x1c85c4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 1454)));
    // 0x1c85c8: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x1c85c8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1c85cc: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x1c85ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
    // 0x1c85d0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1c85d0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c85d4: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x1c85d4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1c85d8: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1c85d8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1c85dc: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1c85dcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1c85e0: 0x46020303  div.s       $f12, $f0, $f2
    ctx->pc = 0x1c85e0u;
    { if (ctx->f[2] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = FPU_DIV_S(ctx->f[0], ctx->f[2]); }
    // 0x1c85e4: 0x0  nop
    ctx->pc = 0x1c85e4u;
    // NOP
    // 0x1c85e8: 0x0  nop
    ctx->pc = 0x1c85e8u;
    // NOP
    // 0x1c85ec: 0xc0a248c  jal         func_289230
    ctx->pc = 0x1C85ECu;
    SET_GPR_U32(ctx, 31, 0x1C85F4u);
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C85F4u; }
        if (ctx->pc != 0x1C85F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C85F4u; }
        if (ctx->pc != 0x1C85F4u) { return; }
    }
    ctx->pc = 0x1C85F4u;
label_1c85f4:
    // 0x1c85f4: 0xc04a0ea  jal         func_1283A8
    ctx->pc = 0x1C85F4u;
    SET_GPR_U32(ctx, 31, 0x1C85FCu);
    ctx->pc = 0x1C85F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C85F4u;
            // 0x1c85f8: 0xa662073c  sh          $v0, 0x73C($s3) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 19), 1852), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1283A8u;
    if (runtime->hasFunction(0x1283A8u)) {
        auto targetFn = runtime->lookupFunction(0x1283A8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C85FCu; }
        if (ctx->pc != 0x1C85FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        rand_0x1283a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C85FCu; }
        if (ctx->pc != 0x1C85FCu) { return; }
    }
    ctx->pc = 0x1C85FCu;
label_1c85fc:
    // 0x1c85fc: 0x868305ae  lh          $v1, 0x5AE($s4)
    ctx->pc = 0x1c85fcu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 1454)));
    // 0x1c8600: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1c8600u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c8604: 0x0  nop
    ctx->pc = 0x1c8604u;
    // NOP
    // 0x1c8608: 0x468000a0  cvt.s.w     $f2, $f0
    ctx->pc = 0x1c8608u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x1c860c: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x1c860cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
    // 0x1c8610: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x1c8610u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1c8614: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1c8614u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c8618: 0x0  nop
    ctx->pc = 0x1c8618u;
    // NOP
    // 0x1c861c: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1c861cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1c8620: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x1c8620u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x1c8624: 0x46000b03  div.s       $f12, $f1, $f0
    ctx->pc = 0x1c8624u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x1c8628: 0x0  nop
    ctx->pc = 0x1c8628u;
    // NOP
    // 0x1c862c: 0x0  nop
    ctx->pc = 0x1c862cu;
    // NOP
    // 0x1c8630: 0xc0a248c  jal         func_289230
    ctx->pc = 0x1C8630u;
    SET_GPR_U32(ctx, 31, 0x1C8638u);
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C8638u; }
        if (ctx->pc != 0x1C8638u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C8638u; }
        if (ctx->pc != 0x1C8638u) { return; }
    }
    ctx->pc = 0x1C8638u;
label_1c8638:
    // 0x1c8638: 0xc04a0ea  jal         func_1283A8
    ctx->pc = 0x1C8638u;
    SET_GPR_U32(ctx, 31, 0x1C8640u);
    ctx->pc = 0x1C863Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C8638u;
            // 0x1c863c: 0xa662075c  sh          $v0, 0x75C($s3) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 19), 1884), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1283A8u;
    if (runtime->hasFunction(0x1283A8u)) {
        auto targetFn = runtime->lookupFunction(0x1283A8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C8640u; }
        if (ctx->pc != 0x1C8640u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        rand_0x1283a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C8640u; }
        if (ctx->pc != 0x1C8640u) { return; }
    }
    ctx->pc = 0x1C8640u;
label_1c8640:
    // 0x1c8640: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1c8640u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1c8644: 0x0  nop
    ctx->pc = 0x1c8644u;
    // NOP
    // 0x1c8648: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1c8648u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1c864c: 0x3c0240c0  lui         $v0, 0x40C0
    ctx->pc = 0x1c864cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16576 << 16));
    // 0x1c8650: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1c8650u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c8654: 0x0  nop
    ctx->pc = 0x1c8654u;
    // NOP
    // 0x1c8658: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x1c8658u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1c865c: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x1c865cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
    // 0x1c8660: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1c8660u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c8664: 0x0  nop
    ctx->pc = 0x1c8664u;
    // NOP
    // 0x1c8668: 0x46000b03  div.s       $f12, $f1, $f0
    ctx->pc = 0x1c8668u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x1c866c: 0x0  nop
    ctx->pc = 0x1c866cu;
    // NOP
    // 0x1c8670: 0x0  nop
    ctx->pc = 0x1c8670u;
    // NOP
    // 0x1c8674: 0xc0a248c  jal         func_289230
    ctx->pc = 0x1C8674u;
    SET_GPR_U32(ctx, 31, 0x1C867Cu);
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C867Cu; }
        if (ctx->pc != 0x1C867Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C867Cu; }
        if (ctx->pc != 0x1C867Cu) { return; }
    }
    ctx->pc = 0x1C867Cu;
label_1c867c:
    // 0x1c867c: 0x21840  sll         $v1, $v0, 1
    ctx->pc = 0x1c867cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x1c8680: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x1c8680u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1c8684: 0x24420003  addiu       $v0, $v0, 0x3
    ctx->pc = 0x1c8684u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3));
    // 0x1c8688: 0xc04a0ea  jal         func_1283A8
    ctx->pc = 0x1C8688u;
    SET_GPR_U32(ctx, 31, 0x1C8690u);
    ctx->pc = 0x1C868Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C8688u;
            // 0x1c868c: 0xa6420000  sh          $v0, 0x0($s2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 18), 0), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1283A8u;
    if (runtime->hasFunction(0x1283A8u)) {
        auto targetFn = runtime->lookupFunction(0x1283A8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C8690u; }
        if (ctx->pc != 0x1C8690u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        rand_0x1283a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C8690u; }
        if (ctx->pc != 0x1C8690u) { return; }
    }
    ctx->pc = 0x1C8690u;
label_1c8690:
    // 0x1c8690: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1c8690u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1c8694: 0x0  nop
    ctx->pc = 0x1c8694u;
    // NOP
    // 0x1c8698: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1c8698u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1c869c: 0x3c024080  lui         $v0, 0x4080
    ctx->pc = 0x1c869cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16512 << 16));
    // 0x1c86a0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1c86a0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c86a4: 0x0  nop
    ctx->pc = 0x1c86a4u;
    // NOP
    // 0x1c86a8: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x1c86a8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1c86ac: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x1c86acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
    // 0x1c86b0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1c86b0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c86b4: 0x0  nop
    ctx->pc = 0x1c86b4u;
    // NOP
    // 0x1c86b8: 0x46000b03  div.s       $f12, $f1, $f0
    ctx->pc = 0x1c86b8u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x1c86bc: 0x0  nop
    ctx->pc = 0x1c86bcu;
    // NOP
    // 0x1c86c0: 0x0  nop
    ctx->pc = 0x1c86c0u;
    // NOP
    // 0x1c86c4: 0xc0a248c  jal         func_289230
    ctx->pc = 0x1C86C4u;
    SET_GPR_U32(ctx, 31, 0x1C86CCu);
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C86CCu; }
        if (ctx->pc != 0x1C86CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C86CCu; }
        if (ctx->pc != 0x1C86CCu) { return; }
    }
    ctx->pc = 0x1C86CCu;
label_1c86cc:
    // 0x1c86cc: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x1C86CCu;
    {
        const bool branch_taken_0x1c86cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C86D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C86CCu;
            // 0x1c86d0: 0xa662079c  sh          $v0, 0x79C($s3) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 19), 1948), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c86cc) {
            ctx->pc = 0x1C8714u;
            goto label_1c8714;
        }
    }
    ctx->pc = 0x1C86D4u;
label_1c86d4:
    // 0x1c86d4: 0x0  nop
    ctx->pc = 0x1c86d4u;
    // NOP
    // 0x1c86d8: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x1c86d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1c86dc: 0x83001a  div         $zero, $a0, $v1
    ctx->pc = 0x1c86dcu;
    { int32_t divisor = GPR_S32(ctx, 3);    int32_t dividend = GPR_S32(ctx, 4);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x1c86e0: 0x0  nop
    ctx->pc = 0x1c86e0u;
    // NOP
    // 0x1c86e4: 0x0  nop
    ctx->pc = 0x1c86e4u;
    // NOP
    // 0x1c86e8: 0x1810  mfhi        $v1
    ctx->pc = 0x1c86e8u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x1c86ec: 0x14600009  bnez        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x1C86ECu;
    {
        const bool branch_taken_0x1c86ec = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c86ec) {
            ctx->pc = 0x1C8714u;
            goto label_1c8714;
        }
    }
    ctx->pc = 0x1C86F4u;
    // 0x1c86f4: 0x8663079c  lh          $v1, 0x79C($s3)
    ctx->pc = 0x1c86f4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 1948)));
    // 0x1c86f8: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1c86f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1c86fc: 0xa663079c  sh          $v1, 0x79C($s3)
    ctx->pc = 0x1c86fcu;
    WRITE16(ADD32(GPR_U32(ctx, 19), 1948), (uint16_t)GPR_U32(ctx, 3));
    // 0x1c8700: 0x8663079c  lh          $v1, 0x79C($s3)
    ctx->pc = 0x1c8700u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 1948)));
    // 0x1c8704: 0x28630004  slti        $v1, $v1, 0x4
    ctx->pc = 0x1c8704u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x1c8708: 0x14600002  bnez        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x1C8708u;
    {
        const bool branch_taken_0x1c8708 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C870Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C8708u;
            // 0x1c870c: 0x2664079c  addiu       $a0, $s3, 0x79C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 1948));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c8708) {
            ctx->pc = 0x1C8714u;
            goto label_1c8714;
        }
    }
    ctx->pc = 0x1C8710u;
    // 0x1c8710: 0xa4800000  sh          $zero, 0x0($a0)
    ctx->pc = 0x1c8710u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 0));
label_1c8714:
    // 0x1c8714: 0x0  nop
    ctx->pc = 0x1c8714u;
    // NOP
    // 0x1c8718: 0x26310002  addiu       $s1, $s1, 0x2
    ctx->pc = 0x1c8718u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 2));
    // 0x1c871c: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1c871cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_1c8720:
    // 0x1c8720: 0x868307bc  lh          $v1, 0x7BC($s4)
    ctx->pc = 0x1c8720u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 1980)));
    // 0x1c8724: 0x203182a  slt         $v1, $s0, $v1
    ctx->pc = 0x1c8724u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x1c8728: 0x1460ff9d  bnez        $v1, . + 4 + (-0x63 << 2)
    ctx->pc = 0x1C8728u;
    {
        const bool branch_taken_0x1c8728 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C872Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C8728u;
            // 0x1c872c: 0x2919821  addu        $s3, $s4, $s1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 17)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c8728) {
            ctx->pc = 0x1C85A0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1c85a0;
        }
    }
    ctx->pc = 0x1C8730u;
label_1c8730:
    // 0x1c8730: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x1c8730u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1c8734: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x1c8734u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1c8738: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1c8738u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1c873c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1c873cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1c8740: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1c8740u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c8744: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1c8744u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c8748: 0x3e00008  jr          $ra
    ctx->pc = 0x1C8748u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C874Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C8748u;
            // 0x1c874c: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1C8750u;
}
