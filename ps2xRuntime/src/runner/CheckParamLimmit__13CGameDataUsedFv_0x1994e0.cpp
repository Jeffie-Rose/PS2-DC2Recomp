#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: CheckParamLimmit__13CGameDataUsedFv
// Address: 0x1994e0 - 0x19982c
void CheckParamLimmit__13CGameDataUsedFv_0x1994e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("CheckParamLimmit__13CGameDataUsedFv_0x1994e0");
#endif

    switch (ctx->pc) {
        case 0x19950cu: goto label_19950c;
        case 0x19956cu: goto label_19956c;
        case 0x1995bcu: goto label_1995bc;
        case 0x199604u: goto label_199604;
        case 0x19964cu: goto label_19964c;
        case 0x199690u: goto label_199690;
        case 0x1996e0u: goto label_1996e0;
        case 0x199718u: goto label_199718;
        case 0x199720u: goto label_199720;
        case 0x199754u: goto label_199754;
        case 0x199764u: goto label_199764;
        case 0x199778u: goto label_199778;
        case 0x1997d4u: goto label_1997d4;
        default: break;
    }

    ctx->pc = 0x1994e0u;

    // 0x1994e0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1994e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1994e4: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x1994e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1994e8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1994e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1994ec: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1994ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1994f0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1994f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1994f4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1994f4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1994f8: 0x84840000  lh          $a0, 0x0($a0)
    ctx->pc = 0x1994f8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1994fc: 0x14830041  bne         $a0, $v1, . + 4 + (0x41 << 2)
    ctx->pc = 0x1994FCu;
    {
        const bool branch_taken_0x1994fc = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x1994fc) {
            ctx->pc = 0x199604u;
            goto label_199604;
        }
    }
    ctx->pc = 0x199504u;
    // 0x199504: 0xc065710  jal         func_195C40
    ctx->pc = 0x199504u;
    SET_GPR_U32(ctx, 31, 0x19950Cu);
    ctx->pc = 0x199508u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x199504u;
            // 0x199508: 0x86240002  lh          $a0, 0x2($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195C40u;
    if (runtime->hasFunction(0x195C40u)) {
        auto targetFn = runtime->lookupFunction(0x195C40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19950Cu; }
        if (ctx->pc != 0x19950Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetWeaponInfoData__Fi_0x195c40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19950Cu; }
        if (ctx->pc != 0x19950Cu) { return; }
    }
    ctx->pc = 0x19950Cu;
label_19950c:
    // 0x19950c: 0x104000c2  beqz        $v0, . + 4 + (0xC2 << 2)
    ctx->pc = 0x19950Cu;
    {
        const bool branch_taken_0x19950c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x19950c) {
            ctx->pc = 0x199818u;
            goto label_199818;
        }
    }
    ctx->pc = 0x199514u;
    // 0x199514: 0xc6200010  lwc1        $f0, 0x10($s1)
    ctx->pc = 0x199514u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x199518: 0x3c03437f  lui         $v1, 0x437F
    ctx->pc = 0x199518u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17279 << 16));
    // 0x19951c: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x19951cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x199520: 0x0  nop
    ctx->pc = 0x199520u;
    // NOP
    // 0x199524: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x199524u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x199528: 0x0  nop
    ctx->pc = 0x199528u;
    // NOP
    // 0x19952c: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x19952Cu;
    {
        const bool branch_taken_0x19952c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x199530u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19952Cu;
            // 0x199530: 0x26300010  addiu       $s0, $s1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19952c) {
            ctx->pc = 0x199538u;
            goto label_199538;
        }
    }
    ctx->pc = 0x199534u;
    // 0x199534: 0xe6010000  swc1        $f1, 0x0($s0)
    ctx->pc = 0x199534u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
label_199538:
    // 0x199538: 0x84440008  lh          $a0, 0x8($v0)
    ctx->pc = 0x199538u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x19953c: 0x86030012  lh          $v1, 0x12($s0)
    ctx->pc = 0x19953cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 18)));
    // 0x199540: 0x83082a  slt         $at, $a0, $v1
    ctx->pc = 0x199540u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x199544: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x199544u;
    {
        const bool branch_taken_0x199544 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x199544) {
            ctx->pc = 0x199550u;
            goto label_199550;
        }
    }
    ctx->pc = 0x19954Cu;
    // 0x19954c: 0xa6040012  sh          $a0, 0x12($s0)
    ctx->pc = 0x19954cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 18), (uint16_t)GPR_U32(ctx, 4));
label_199550:
    // 0x199550: 0x8444000a  lh          $a0, 0xA($v0)
    ctx->pc = 0x199550u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 10)));
    // 0x199554: 0x86030014  lh          $v1, 0x14($s0)
    ctx->pc = 0x199554u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x199558: 0x83082a  slt         $at, $a0, $v1
    ctx->pc = 0x199558u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x19955c: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x19955Cu;
    {
        const bool branch_taken_0x19955c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x199560u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19955Cu;
            // 0x199560: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19955c) {
            ctx->pc = 0x199568u;
            goto label_199568;
        }
    }
    ctx->pc = 0x199564u;
    // 0x199564: 0xa6040014  sh          $a0, 0x14($s0)
    ctx->pc = 0x199564u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 20), (uint16_t)GPR_U32(ctx, 4));
label_199568:
    // 0x199568: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x199568u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_19956c:
    // 0x19956c: 0x2061821  addu        $v1, $s0, $a2
    ctx->pc = 0x19956cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 6)));
    // 0x199570: 0x462021  addu        $a0, $v0, $a2
    ctx->pc = 0x199570u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x199574: 0x24670016  addiu       $a3, $v1, 0x16
    ctx->pc = 0x199574u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), 22));
    // 0x199578: 0x8484001c  lh          $a0, 0x1C($a0)
    ctx->pc = 0x199578u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 28)));
    // 0x19957c: 0x84630016  lh          $v1, 0x16($v1)
    ctx->pc = 0x19957cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 22)));
    // 0x199580: 0x83082a  slt         $at, $a0, $v1
    ctx->pc = 0x199580u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x199584: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x199584u;
    {
        const bool branch_taken_0x199584 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x199584) {
            ctx->pc = 0x199590u;
            goto label_199590;
        }
    }
    ctx->pc = 0x19958Cu;
    // 0x19958c: 0xa4e40000  sh          $a0, 0x0($a3)
    ctx->pc = 0x19958cu;
    WRITE16(ADD32(GPR_U32(ctx, 7), 0), (uint16_t)GPR_U32(ctx, 4));
label_199590:
    // 0x199590: 0x84e30000  lh          $v1, 0x0($a3)
    ctx->pc = 0x199590u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x199594: 0x4610002  bgez        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x199594u;
    {
        const bool branch_taken_0x199594 = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x199594) {
            ctx->pc = 0x1995A0u;
            goto label_1995a0;
        }
    }
    ctx->pc = 0x19959Cu;
    // 0x19959c: 0xa4e00000  sh          $zero, 0x0($a3)
    ctx->pc = 0x19959cu;
    WRITE16(ADD32(GPR_U32(ctx, 7), 0), (uint16_t)GPR_U32(ctx, 0));
label_1995a0:
    // 0x1995a0: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x1995a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x1995a4: 0x28a30008  slti        $v1, $a1, 0x8
    ctx->pc = 0x1995a4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x1995a8: 0x1460fff0  bnez        $v1, . + 4 + (-0x10 << 2)
    ctx->pc = 0x1995A8u;
    {
        const bool branch_taken_0x1995a8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1995ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1995A8u;
            // 0x1995ac: 0x24c60002  addiu       $a2, $a2, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1995a8) {
            ctx->pc = 0x19956Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_19956c;
        }
    }
    ctx->pc = 0x1995B0u;
    // 0x1995b0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1995b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1995b4: 0xc065f78  jal         func_197DE0
    ctx->pc = 0x1995B4u;
    SET_GPR_U32(ctx, 31, 0x1995BCu);
    ctx->pc = 0x1995B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1995B4u;
            // 0x1995b8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x197DE0u;
    if (runtime->hasFunction(0x197DE0u)) {
        auto targetFn = runtime->lookupFunction(0x197DE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1995BCu; }
        if (ctx->pc != 0x1995BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        AddFusionPoint__13CGameDataUsedFi_0x197de0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1995BCu; }
        if (ctx->pc != 0x1995BCu) { return; }
    }
    ctx->pc = 0x1995BCu;
label_1995bc:
    // 0x1995bc: 0xc6000008  lwc1        $f0, 0x8($s0)
    ctx->pc = 0x1995bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1995c0: 0x3c0347c3  lui         $v1, 0x47C3
    ctx->pc = 0x1995c0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)18371 << 16));
    // 0x1995c4: 0x34634f80  ori         $v1, $v1, 0x4F80
    ctx->pc = 0x1995c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)20352);
    // 0x1995c8: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x1995c8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1995cc: 0x0  nop
    ctx->pc = 0x1995ccu;
    // NOP
    // 0x1995d0: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1995d0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1995d4: 0x0  nop
    ctx->pc = 0x1995d4u;
    // NOP
    // 0x1995d8: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x1995D8u;
    {
        const bool branch_taken_0x1995d8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1995d8) {
            ctx->pc = 0x1995E4u;
            goto label_1995e4;
        }
    }
    ctx->pc = 0x1995E0u;
    // 0x1995e0: 0xe6010008  swc1        $f1, 0x8($s0)
    ctx->pc = 0x1995e0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
label_1995e4:
    // 0x1995e4: 0xc6010008  lwc1        $f1, 0x8($s0)
    ctx->pc = 0x1995e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1995e8: 0xc600000c  lwc1        $f0, 0xC($s0)
    ctx->pc = 0x1995e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1995ec: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1995ecu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1995f0: 0x0  nop
    ctx->pc = 0x1995f0u;
    // NOP
    // 0x1995f4: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x1995F4u;
    {
        const bool branch_taken_0x1995f4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1995F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1995F4u;
            // 0x1995f8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1995f4) {
            ctx->pc = 0x199604u;
            goto label_199604;
        }
    }
    ctx->pc = 0x1995FCu;
    // 0x1995fc: 0xc066188  jal         func_198620
    ctx->pc = 0x1995FCu;
    SET_GPR_U32(ctx, 31, 0x199604u);
    ctx->pc = 0x198620u;
    if (runtime->hasFunction(0x198620u)) {
        auto targetFn = runtime->lookupFunction(0x198620u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x199604u; }
        if (ctx->pc != 0x199604u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        LevelUp__13CGameDataUsedFv_0x198620(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x199604u; }
        if (ctx->pc != 0x199604u) { return; }
    }
    ctx->pc = 0x199604u;
label_199604:
    // 0x199604: 0x86240000  lh          $a0, 0x0($s1)
    ctx->pc = 0x199604u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x199608: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x199608u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x19960c: 0x1483001a  bne         $a0, $v1, . + 4 + (0x1A << 2)
    ctx->pc = 0x19960Cu;
    {
        const bool branch_taken_0x19960c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x19960c) {
            ctx->pc = 0x199678u;
            goto label_199678;
        }
    }
    ctx->pc = 0x199614u;
    // 0x199614: 0x86230012  lh          $v1, 0x12($s1)
    ctx->pc = 0x199614u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 18)));
    // 0x199618: 0x286103e8  slti        $at, $v1, 0x3E8
    ctx->pc = 0x199618u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)1000) ? 1 : 0);
    // 0x19961c: 0x14200003  bnez        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x19961Cu;
    {
        const bool branch_taken_0x19961c = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x199620u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19961Cu;
            // 0x199620: 0x26250010  addiu       $a1, $s1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19961c) {
            ctx->pc = 0x19962Cu;
            goto label_19962c;
        }
    }
    ctx->pc = 0x199624u;
    // 0x199624: 0x240303e7  addiu       $v1, $zero, 0x3E7
    ctx->pc = 0x199624u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 999));
    // 0x199628: 0xa4a30002  sh          $v1, 0x2($a1)
    ctx->pc = 0x199628u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 2), (uint16_t)GPR_U32(ctx, 3));
label_19962c:
    // 0x19962c: 0x84a30004  lh          $v1, 0x4($a1)
    ctx->pc = 0x19962cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x199630: 0x286103e8  slti        $at, $v1, 0x3E8
    ctx->pc = 0x199630u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)1000) ? 1 : 0);
    // 0x199634: 0x14200003  bnez        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x199634u;
    {
        const bool branch_taken_0x199634 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x199638u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x199634u;
            // 0x199638: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x199634) {
            ctx->pc = 0x199644u;
            goto label_199644;
        }
    }
    ctx->pc = 0x19963Cu;
    // 0x19963c: 0x240303e7  addiu       $v1, $zero, 0x3E7
    ctx->pc = 0x19963cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 999));
    // 0x199640: 0xa4a30004  sh          $v1, 0x4($a1)
    ctx->pc = 0x199640u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 4), (uint16_t)GPR_U32(ctx, 3));
label_199644:
    // 0x199644: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x199644u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x199648: 0x240403e7  addiu       $a0, $zero, 0x3E7
    ctx->pc = 0x199648u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 999));
label_19964c:
    // 0x19964c: 0xa71821  addu        $v1, $a1, $a3
    ctx->pc = 0x19964cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 7)));
    // 0x199650: 0x24680006  addiu       $t0, $v1, 0x6
    ctx->pc = 0x199650u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 3), 6));
    // 0x199654: 0x84630006  lh          $v1, 0x6($v1)
    ctx->pc = 0x199654u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 6)));
    // 0x199658: 0x286303e7  slti        $v1, $v1, 0x3E7
    ctx->pc = 0x199658u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)999) ? 1 : 0);
    // 0x19965c: 0x14600002  bnez        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x19965Cu;
    {
        const bool branch_taken_0x19965c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x19965c) {
            ctx->pc = 0x199668u;
            goto label_199668;
        }
    }
    ctx->pc = 0x199664u;
    // 0x199664: 0xa5040000  sh          $a0, 0x0($t0)
    ctx->pc = 0x199664u;
    WRITE16(ADD32(GPR_U32(ctx, 8), 0), (uint16_t)GPR_U32(ctx, 4));
label_199668:
    // 0x199668: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x199668u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x19966c: 0x28c30008  slti        $v1, $a2, 0x8
    ctx->pc = 0x19966cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x199670: 0x1460fff6  bnez        $v1, . + 4 + (-0xA << 2)
    ctx->pc = 0x199670u;
    {
        const bool branch_taken_0x199670 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x199674u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x199670u;
            // 0x199674: 0x24e70002  addiu       $a3, $a3, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x199670) {
            ctx->pc = 0x19964Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_19964c;
        }
    }
    ctx->pc = 0x199678u;
label_199678:
    // 0x199678: 0x86240000  lh          $a0, 0x0($s1)
    ctx->pc = 0x199678u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x19967c: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x19967cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x199680: 0x14830065  bne         $a0, $v1, . + 4 + (0x65 << 2)
    ctx->pc = 0x199680u;
    {
        const bool branch_taken_0x199680 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x199684u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x199680u;
            // 0x199684: 0x26300010  addiu       $s0, $s1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x199680) {
            ctx->pc = 0x199818u;
            goto label_199818;
        }
    }
    ctx->pc = 0x199688u;
    // 0x199688: 0xc065b78  jal         func_196DE0
    ctx->pc = 0x199688u;
    SET_GPR_U32(ctx, 31, 0x199690u);
    ctx->pc = 0x19968Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x199688u;
            // 0x19968c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x196DE0u;
    if (runtime->hasFunction(0x196DE0u)) {
        auto targetFn = runtime->lookupFunction(0x196DE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x199690u; }
        if (ctx->pc != 0x199690u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CalcBreedFishParam__FP14BREEDFISH_USED_0x196de0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x199690u; }
        if (ctx->pc != 0x199690u) { return; }
    }
    ctx->pc = 0x199690u;
label_199690:
    // 0x199690: 0x3c0301ea  lui         $v1, 0x1EA
    ctx->pc = 0x199690u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)490 << 16));
    // 0x199694: 0x27a90030  addiu       $t1, $sp, 0x30
    ctx->pc = 0x199694u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x199698: 0x2463b110  addiu       $v1, $v1, -0x4EF0
    ctx->pc = 0x199698u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294947088));
    // 0x19969c: 0x26070026  addiu       $a3, $s0, 0x26
    ctx->pc = 0x19969cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 38));
    // 0x1996a0: 0x78680000  lq          $t0, 0x0($v1)
    ctx->pc = 0x1996a0u;
    SET_GPR_VEC(ctx, 8, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1996a4: 0xc4600010  lwc1        $f0, 0x10($v1)
    ctx->pc = 0x1996a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1996a8: 0x26060028  addiu       $a2, $s0, 0x28
    ctx->pc = 0x1996a8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 40));
    // 0x1996ac: 0x2605002a  addiu       $a1, $s0, 0x2A
    ctx->pc = 0x1996acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 42));
    // 0x1996b0: 0x2604002c  addiu       $a0, $s0, 0x2C
    ctx->pc = 0x1996b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 44));
    // 0x1996b4: 0x2451fe70  addiu       $s1, $v0, -0x190
    ctx->pc = 0x1996b4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966896));
    // 0x1996b8: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1996b8u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1996bc: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x1996bcu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1996c0: 0x7d280000  sq          $t0, 0x0($t1)
    ctx->pc = 0x1996c0u;
    WRITE128(ADD32(GPR_U32(ctx, 9), 0), GPR_VEC(ctx, 8));
    // 0x1996c4: 0x2603002e  addiu       $v1, $s0, 0x2E
    ctx->pc = 0x1996c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 46));
    // 0x1996c8: 0xe5200010  swc1        $f0, 0x10($t1)
    ctx->pc = 0x1996c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 9), 16), bits); }
    // 0x1996cc: 0xafa70030  sw          $a3, 0x30($sp)
    ctx->pc = 0x1996ccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 7));
    // 0x1996d0: 0xafa60034  sw          $a2, 0x34($sp)
    ctx->pc = 0x1996d0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 6));
    // 0x1996d4: 0xafa50038  sw          $a1, 0x38($sp)
    ctx->pc = 0x1996d4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 5));
    // 0x1996d8: 0xafa4003c  sw          $a0, 0x3C($sp)
    ctx->pc = 0x1996d8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 60), GPR_U32(ctx, 4));
    // 0x1996dc: 0xafa30040  sw          $v1, 0x40($sp)
    ctx->pc = 0x1996dcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 3));
label_1996e0:
    // 0x1996e0: 0x17d1821  addu        $v1, $t3, $sp
    ctx->pc = 0x1996e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 29)));
    // 0x1996e4: 0x24640030  addiu       $a0, $v1, 0x30
    ctx->pc = 0x1996e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 48));
    // 0x1996e8: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x1996e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1996ec: 0x94630000  lhu         $v1, 0x0($v1)
    ctx->pc = 0x1996ecu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1996f0: 0x286101f5  slti        $at, $v1, 0x1F5
    ctx->pc = 0x1996f0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)501) ? 1 : 0);
    // 0x1996f4: 0x14200002  bnez        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x1996F4u;
    {
        const bool branch_taken_0x1996f4 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x1996f4) {
            ctx->pc = 0x199700u;
            goto label_199700;
        }
    }
    ctx->pc = 0x1996FCu;
    // 0x1996fc: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x1996fcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
label_199700:
    // 0x199700: 0x254a0001  addiu       $t2, $t2, 0x1
    ctx->pc = 0x199700u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
    // 0x199704: 0x29430005  slti        $v1, $t2, 0x5
    ctx->pc = 0x199704u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 10) < (int64_t)(int32_t)5) ? 1 : 0);
    // 0x199708: 0x1460fff5  bnez        $v1, . + 4 + (-0xB << 2)
    ctx->pc = 0x199708u;
    {
        const bool branch_taken_0x199708 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x19970Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x199708u;
            // 0x19970c: 0x256b0004  addiu       $t3, $t3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x199708) {
            ctx->pc = 0x1996E0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1996e0;
        }
    }
    ctx->pc = 0x199710u;
    // 0x199710: 0x1a20000f  blez        $s1, . + 4 + (0xF << 2)
    ctx->pc = 0x199710u;
    {
        const bool branch_taken_0x199710 = (GPR_S32(ctx, 17) <= 0);
        if (branch_taken_0x199710) {
            ctx->pc = 0x199750u;
            goto label_199750;
        }
    }
    ctx->pc = 0x199718u;
label_199718:
    // 0x199718: 0xc0941b0  jal         func_2506C0
    ctx->pc = 0x199718u;
    SET_GPR_U32(ctx, 31, 0x199720u);
    ctx->pc = 0x19971Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x199718u;
            // 0x19971c: 0x24040005  addiu       $a0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2506C0u;
    if (runtime->hasFunction(0x2506C0u)) {
        auto targetFn = runtime->lookupFunction(0x2506C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x199720u; }
        if (ctx->pc != 0x199720u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetRandI__Fi_0x2506c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x199720u; }
        if (ctx->pc != 0x199720u) { return; }
    }
    ctx->pc = 0x199720u;
label_199720:
    // 0x199720: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x199720u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x199724: 0x7d1821  addu        $v1, $v1, $sp
    ctx->pc = 0x199724u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 29)));
    // 0x199728: 0x8c640030  lw          $a0, 0x30($v1)
    ctx->pc = 0x199728u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 48)));
    // 0x19972c: 0x94830000  lhu         $v1, 0x0($a0)
    ctx->pc = 0x19972cu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x199730: 0x3082a  slt         $at, $zero, $v1
    ctx->pc = 0x199730u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x199734: 0x10200004  beqz        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x199734u;
    {
        const bool branch_taken_0x199734 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x199734) {
            ctx->pc = 0x199748u;
            goto label_199748;
        }
    }
    ctx->pc = 0x19973Cu;
    // 0x19973c: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x19973cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x199740: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x199740u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    // 0x199744: 0xa4830000  sh          $v1, 0x0($a0)
    ctx->pc = 0x199744u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 3));
label_199748:
    // 0x199748: 0x1e20fff3  bgtz        $s1, . + 4 + (-0xD << 2)
    ctx->pc = 0x199748u;
    {
        const bool branch_taken_0x199748 = (GPR_S32(ctx, 17) > 0);
        if (branch_taken_0x199748) {
            ctx->pc = 0x199718u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_199718;
        }
    }
    ctx->pc = 0x199750u;
label_199750:
    // 0x199750: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x199750u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_199754:
    // 0x199754: 0x64060001  daddiu      $a2, $zero, 0x1
    ctx->pc = 0x199754u;
    SET_GPR_S64(ctx, 6, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
    // 0x199758: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x199758u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19975c: 0x1000001d  b           . + 4 + (0x1D << 2)
    ctx->pc = 0x19975Cu;
    {
        const bool branch_taken_0x19975c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x199760u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19975Cu;
            // 0x199760: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19975c) {
            ctx->pc = 0x1997D4u;
            goto label_1997d4;
        }
    }
    ctx->pc = 0x199764u;
label_199764:
    // 0x199764: 0x0  nop
    ctx->pc = 0x199764u;
    // NOP
    // 0x199768: 0x8fa80030  lw          $t0, 0x30($sp)
    ctx->pc = 0x199768u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x19976c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x19976cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x199770: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x199770u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x199774: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x199774u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_199778:
    // 0x199778: 0x110c0008  beq         $t0, $t4, . + 4 + (0x8 << 2)
    ctx->pc = 0x199778u;
    {
        const bool branch_taken_0x199778 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 12));
        ctx->pc = 0x19977Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x199778u;
            // 0x19977c: 0x15d2021  addu        $a0, $t2, $sp (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 29)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x199778) {
            ctx->pc = 0x19979Cu;
            goto label_19979c;
        }
    }
    ctx->pc = 0x199780u;
    // 0x199780: 0x95030000  lhu         $v1, 0x0($t0)
    ctx->pc = 0x199780u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x199784: 0x8c8d0030  lw          $t5, 0x30($a0)
    ctx->pc = 0x199784u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 48)));
    // 0x199788: 0x95a40000  lhu         $a0, 0x0($t5)
    ctx->pc = 0x199788u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 13), 0)));
    // 0x19978c: 0x83082a  slt         $at, $a0, $v1
    ctx->pc = 0x19978cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x199790: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x199790u;
    {
        const bool branch_taken_0x199790 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x199790) {
            ctx->pc = 0x19979Cu;
            goto label_19979c;
        }
    }
    ctx->pc = 0x199798u;
    // 0x199798: 0x1a0402d  daddu       $t0, $t5, $zero
    ctx->pc = 0x199798u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 13) + (uint64_t)GPR_U64(ctx, 0));
label_19979c:
    // 0x19979c: 0x0  nop
    ctx->pc = 0x19979cu;
    // NOP
    // 0x1997a0: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x1997a0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x1997a4: 0x29230005  slti        $v1, $t1, 0x5
    ctx->pc = 0x1997a4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 9) < (int64_t)(int32_t)5) ? 1 : 0);
    // 0x1997a8: 0x1460fff3  bnez        $v1, . + 4 + (-0xD << 2)
    ctx->pc = 0x1997A8u;
    {
        const bool branch_taken_0x1997a8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1997ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1997A8u;
            // 0x1997ac: 0x254a0004  addiu       $t2, $t2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1997a8) {
            ctx->pc = 0x199778u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_199778;
        }
    }
    ctx->pc = 0x1997B0u;
    // 0x1997b0: 0x11000004  beqz        $t0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1997B0u;
    {
        const bool branch_taken_0x1997b0 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        if (branch_taken_0x1997b0) {
            ctx->pc = 0x1997C4u;
            goto label_1997c4;
        }
    }
    ctx->pc = 0x1997B8u;
    // 0x1997b8: 0x95030000  lhu         $v1, 0x0($t0)
    ctx->pc = 0x1997b8u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x1997bc: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1997bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1997c0: 0xa5030000  sh          $v1, 0x0($t0)
    ctx->pc = 0x1997c0u;
    WRITE16(ADD32(GPR_U32(ctx, 8), 0), (uint16_t)GPR_U32(ctx, 3));
label_1997c4:
    // 0x1997c4: 0x0  nop
    ctx->pc = 0x1997c4u;
    // NOP
    // 0x1997c8: 0x95830000  lhu         $v1, 0x0($t4)
    ctx->pc = 0x1997c8u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x1997cc: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x1997ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x1997d0: 0xa5830000  sh          $v1, 0x0($t4)
    ctx->pc = 0x1997d0u;
    WRITE16(ADD32(GPR_U32(ctx, 12), 0), (uint16_t)GPR_U32(ctx, 3));
label_1997d4:
    // 0x1997d4: 0x0  nop
    ctx->pc = 0x1997d4u;
    // NOP
    // 0x1997d8: 0x17d1821  addu        $v1, $t3, $sp
    ctx->pc = 0x1997d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 29)));
    // 0x1997dc: 0x8c6c0030  lw          $t4, 0x30($v1)
    ctx->pc = 0x1997dcu;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 48)));
    // 0x1997e0: 0x95830000  lhu         $v1, 0x0($t4)
    ctx->pc = 0x1997e0u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x1997e4: 0x28610065  slti        $at, $v1, 0x65
    ctx->pc = 0x1997e4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)101) ? 1 : 0);
    // 0x1997e8: 0x1020ffde  beqz        $at, . + 4 + (-0x22 << 2)
    ctx->pc = 0x1997E8u;
    {
        const bool branch_taken_0x1997e8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1997e8) {
            ctx->pc = 0x199764u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_199764;
        }
    }
    ctx->pc = 0x1997F0u;
    // 0x1997f0: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x1997f0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x1997f4: 0x28e30005  slti        $v1, $a3, 0x5
    ctx->pc = 0x1997f4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)5) ? 1 : 0);
    // 0x1997f8: 0x1460fff6  bnez        $v1, . + 4 + (-0xA << 2)
    ctx->pc = 0x1997F8u;
    {
        const bool branch_taken_0x1997f8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1997FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1997F8u;
            // 0x1997fc: 0x256b0004  addiu       $t3, $t3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1997f8) {
            ctx->pc = 0x1997D4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1997d4;
        }
    }
    ctx->pc = 0x199800u;
    // 0x199800: 0x14c00005  bnez        $a2, . + 4 + (0x5 << 2)
    ctx->pc = 0x199800u;
    {
        const bool branch_taken_0x199800 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x199804u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x199800u;
            // 0x199804: 0x28a10004  slti        $at, $a1, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)4) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x199800) {
            ctx->pc = 0x199818u;
            goto label_199818;
        }
    }
    ctx->pc = 0x199808u;
    // 0x199808: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x199808u;
    {
        const bool branch_taken_0x199808 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x199808) {
            ctx->pc = 0x199818u;
            goto label_199818;
        }
    }
    ctx->pc = 0x199810u;
    // 0x199810: 0x1000ffd0  b           . + 4 + (-0x30 << 2)
    ctx->pc = 0x199810u;
    {
        const bool branch_taken_0x199810 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x199814u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x199810u;
            // 0x199814: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x199810) {
            ctx->pc = 0x199754u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_199754;
        }
    }
    ctx->pc = 0x199818u;
label_199818:
    // 0x199818: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x199818u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x19981c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x19981cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x199820: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x199820u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x199824: 0x3e00008  jr          $ra
    ctx->pc = 0x199824u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x199828u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x199824u;
            // 0x199828: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x19982Cu;
}
