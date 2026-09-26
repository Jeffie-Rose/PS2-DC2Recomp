#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: calcWeaponParamWhp__FP14CActiveMonsterP8CColPrim
// Address: 0x1e8630 - 0x1e87e0
void calcWeaponParamWhp__FP14CActiveMonsterP8CColPrim_0x1e8630(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("calcWeaponParamWhp__FP14CActiveMonsterP8CColPrim_0x1e8630");
#endif

    switch (ctx->pc) {
        case 0x1e865cu: goto label_1e865c;
        case 0x1e8698u: goto label_1e8698;
        case 0x1e86e4u: goto label_1e86e4;
        case 0x1e8704u: goto label_1e8704;
        case 0x1e8710u: goto label_1e8710;
        case 0x1e871cu: goto label_1e871c;
        case 0x1e8724u: goto label_1e8724;
        case 0x1e8778u: goto label_1e8778;
        case 0x1e87bcu: goto label_1e87bc;
        default: break;
    }

    ctx->pc = 0x1e8630u;

    // 0x1e8630: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x1e8630u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x1e8634: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x1e8634u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x1e8638: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x1e8638u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x1e863c: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x1e863cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x1e8640: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x1e8640u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e8644: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x1e8644u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x1e8648: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x1e8648u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e864c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1e864cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1e8650: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x1e8650u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x1e8654: 0xc0683a8  jal         func_1A0EA0
    ctx->pc = 0x1E8654u;
    SET_GPR_U32(ctx, 31, 0x1E865Cu);
    ctx->pc = 0x1E8658u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E8654u;
            // 0x1e8658: 0xe7b40000  swc1        $f20, 0x0($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A0EA0u;
    if (runtime->hasFunction(0x1A0EA0u)) {
        auto targetFn = runtime->lookupFunction(0x1A0EA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E865Cu; }
        if (ctx->pc != 0x1E865Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetBattleCharaInfo__Fv_0x1a0ea0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E865Cu; }
        if (ctx->pc != 0x1E865Cu) { return; }
    }
    ctx->pc = 0x1E865Cu;
label_1e865c:
    // 0x1e865c: 0x8e440008  lw          $a0, 0x8($s2)
    ctx->pc = 0x1e865cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x1e8660: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1e8660u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e8664: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x1e8664u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1e8668: 0x80840018  lb          $a0, 0x18($a0)
    ctx->pc = 0x1e8668u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x1e866c: 0x10830007  beq         $a0, $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x1E866Cu;
    {
        const bool branch_taken_0x1e866c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x1E8670u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E866Cu;
            // 0x1e8670: 0x26110034  addiu       $s1, $s0, 0x34 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 52));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e866c) {
            ctx->pc = 0x1E868Cu;
            goto label_1e868c;
        }
    }
    ctx->pc = 0x1E8674u;
    // 0x1e8674: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1E8674u;
    {
        const bool branch_taken_0x1e8674 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E8678u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E8674u;
            // 0x1e8678: 0x2403000b  addiu       $v1, $zero, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e8674) {
            ctx->pc = 0x1E868Cu;
            goto label_1e868c;
        }
    }
    ctx->pc = 0x1E867Cu;
    // 0x1e867c: 0x10830003  beq         $a0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1E867Cu;
    {
        const bool branch_taken_0x1e867c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x1E8680u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E867Cu;
            // 0x1e8680: 0x2403000c  addiu       $v1, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e867c) {
            ctx->pc = 0x1E868Cu;
            goto label_1e868c;
        }
    }
    ctx->pc = 0x1E8684u;
    // 0x1e8684: 0x1483004d  bne         $a0, $v1, . + 4 + (0x4D << 2)
    ctx->pc = 0x1E8684u;
    {
        const bool branch_taken_0x1e8684 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x1e8684) {
            ctx->pc = 0x1E87BCu;
            goto label_1e87bc;
        }
    }
    ctx->pc = 0x1E868Cu;
label_1e868c:
    // 0x1e868c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1e868cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e8690: 0xc067e98  jal         func_19FA60
    ctx->pc = 0x1E8690u;
    SET_GPR_U32(ctx, 31, 0x1E8698u);
    ctx->pc = 0x1E8694u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E8690u;
            // 0x1e8694: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19FA60u;
    if (runtime->hasFunction(0x19FA60u)) {
        auto targetFn = runtime->lookupFunction(0x19FA60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E8698u; }
        if (ctx->pc != 0x1E8698u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetWhpNowVol__16CBattleCharaInfoFi_0x19fa60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E8698u; }
        if (ctx->pc != 0x1E8698u) { return; }
    }
    ctx->pc = 0x1E8698u;
label_1e8698:
    // 0x1e8698: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1e8698u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1e869c: 0x96621324  lhu         $v0, 0x1324($s3)
    ctx->pc = 0x1e869cu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 4900)));
    // 0x1e86a0: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1E86A0u;
    {
        const bool branch_taken_0x1e86a0 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x1E86A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E86A0u;
            // 0x1e86a4: 0x46800520  cvt.s.w     $f20, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[20] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e86a0) {
            ctx->pc = 0x1E86B4u;
            goto label_1e86b4;
        }
    }
    ctx->pc = 0x1E86A8u;
    // 0x1e86a8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1e86a8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1e86ac: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1E86ACu;
    {
        const bool branch_taken_0x1e86ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E86B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E86ACu;
            // 0x1e86b0: 0x46800560  cvt.s.w     $f21, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[21] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e86ac) {
            ctx->pc = 0x1E86D0u;
            goto label_1e86d0;
        }
    }
    ctx->pc = 0x1E86B4u;
label_1e86b4:
    // 0x1e86b4: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x1e86b4u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x1e86b8: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1e86b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1e86bc: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x1e86bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1e86c0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1e86c0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1e86c4: 0x0  nop
    ctx->pc = 0x1e86c4u;
    // NOP
    // 0x1e86c8: 0x46800560  cvt.s.w     $f21, $f0
    ctx->pc = 0x1e86c8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[21] = FPU_CVT_S_W(tmp); }
    // 0x1e86cc: 0x4615ad40  add.s       $f21, $f21, $f21
    ctx->pc = 0x1e86ccu;
    ctx->f[21] = FPU_ADD_S(ctx->f[21], ctx->f[21]);
label_1e86d0:
    // 0x1e86d0: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x1e86d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x1e86d4: 0x86240002  lh          $a0, 0x2($s1)
    ctx->pc = 0x1e86d4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 2)));
    // 0x1e86d8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1e86d8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1e86dc: 0xc0a215c  jal         func_288570
    ctx->pc = 0x1E86DCu;
    SET_GPR_U32(ctx, 31, 0x1E86E4u);
    ctx->pc = 0x1E86E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E86DCu;
            // 0x1e86e0: 0x4600ad42  mul.s       $f21, $f21, $f0 (Delay Slot)
        ctx->f[21] = FPU_MUL_S(ctx->f[21], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x288570u;
    if (runtime->hasFunction(0x288570u)) {
        auto targetFn = runtime->lookupFunction(0x288570u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E86E4u; }
        if (ctx->pc != 0x1E86E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        litodp_0x288570(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E86E4u; }
        if (ctx->pc != 0x1E86E4u) { return; }
    }
    ctx->pc = 0x1E86E4u;
label_1e86e4:
    // 0x1e86e4: 0x3c043f74  lui         $a0, 0x3F74
    ctx->pc = 0x1e86e4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16244 << 16));
    // 0x1e86e8: 0x3c0347ae  lui         $v1, 0x47AE
    ctx->pc = 0x1e86e8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)18350 << 16));
    // 0x1e86ec: 0x34847ae1  ori         $a0, $a0, 0x7AE1
    ctx->pc = 0x1e86ecu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)31457);
    // 0x1e86f0: 0x3463147b  ori         $v1, $v1, 0x147B
    ctx->pc = 0x1e86f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)5243);
    // 0x1e86f4: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x1e86f4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
    // 0x1e86f8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1e86f8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e86fc: 0xc0a1ffe  jal         func_287FF8
    ctx->pc = 0x1E86FCu;
    SET_GPR_U32(ctx, 31, 0x1E8704u);
    ctx->pc = 0x1E8700u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E86FCu;
            // 0x1e8700: 0x642025  or          $a0, $v1, $a0 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x287FF8u;
    if (runtime->hasFunction(0x287FF8u)) {
        auto targetFn = runtime->lookupFunction(0x287FF8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E8704u; }
        if (ctx->pc != 0x1E8704u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dpmul_0x287ff8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E8704u; }
        if (ctx->pc != 0x1E8704u) { return; }
    }
    ctx->pc = 0x1E8704u;
label_1e8704:
    // 0x1e8704: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1e8704u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e8708: 0xc0a24f0  jal         func_2893C0
    ctx->pc = 0x1E8708u;
    SET_GPR_U32(ctx, 31, 0x1E8710u);
    ctx->pc = 0x1E870Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E8708u;
            // 0x1e870c: 0x4600ab06  mov.s       $f12, $f21 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[21]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x2893C0u;
    if (runtime->hasFunction(0x2893C0u)) {
        auto targetFn = runtime->lookupFunction(0x2893C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E8710u; }
        if (ctx->pc != 0x1E8710u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptodp_0x2893c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E8710u; }
        if (ctx->pc != 0x1E8710u) { return; }
    }
    ctx->pc = 0x1E8710u;
label_1e8710:
    // 0x1e8710: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1e8710u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e8714: 0xc0a1ffe  jal         func_287FF8
    ctx->pc = 0x1E8714u;
    SET_GPR_U32(ctx, 31, 0x1E871Cu);
    ctx->pc = 0x1E8718u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E8714u;
            // 0x1e8718: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x287FF8u;
    if (runtime->hasFunction(0x287FF8u)) {
        auto targetFn = runtime->lookupFunction(0x287FF8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E871Cu; }
        if (ctx->pc != 0x1E871Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dpmul_0x287ff8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E871Cu; }
        if (ctx->pc != 0x1E871Cu) { return; }
    }
    ctx->pc = 0x1E871Cu;
label_1e871c:
    // 0x1e871c: 0xc0a21f2  jal         func_2887C8
    ctx->pc = 0x1E871Cu;
    SET_GPR_U32(ctx, 31, 0x1E8724u);
    ctx->pc = 0x1E8720u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E871Cu;
            // 0x1e8720: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2887C8u;
    if (runtime->hasFunction(0x2887C8u)) {
        auto targetFn = runtime->lookupFunction(0x2887C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E8724u; }
        if (ctx->pc != 0x1E8724u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dptofp_0x2887c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E8724u; }
        if (ctx->pc != 0x1E8724u) { return; }
    }
    ctx->pc = 0x1E8724u;
label_1e8724:
    // 0x1e8724: 0x8e4300a0  lw          $v1, 0xA0($s2)
    ctx->pc = 0x1e8724u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 160)));
    // 0x1e8728: 0x30620020  andi        $v0, $v1, 0x20
    ctx->pc = 0x1e8728u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32);
    // 0x1e872c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1E872Cu;
    {
        const bool branch_taken_0x1e872c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E8730u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E872Cu;
            // 0x1e8730: 0x4600ad41  sub.s       $f21, $f21, $f0 (Delay Slot)
        ctx->f[21] = FPU_SUB_S(ctx->f[21], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e872c) {
            ctx->pc = 0x1E8748u;
            goto label_1e8748;
        }
    }
    ctx->pc = 0x1E8734u;
    // 0x1e8734: 0x3c023fa6  lui         $v0, 0x3FA6
    ctx->pc = 0x1e8734u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16294 << 16));
    // 0x1e8738: 0x34426666  ori         $v0, $v0, 0x6666
    ctx->pc = 0x1e8738u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)26214);
    // 0x1e873c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1e873cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1e8740: 0x0  nop
    ctx->pc = 0x1e8740u;
    // NOP
    // 0x1e8744: 0x4600ad42  mul.s       $f21, $f21, $f0
    ctx->pc = 0x1e8744u;
    ctx->f[21] = FPU_MUL_S(ctx->f[21], ctx->f[0]);
label_1e8748:
    // 0x1e8748: 0x30620040  andi        $v0, $v1, 0x40
    ctx->pc = 0x1e8748u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)64);
    // 0x1e874c: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1E874Cu;
    {
        const bool branch_taken_0x1e874c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E8750u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E874Cu;
            // 0x1e8750: 0x4600ab07  neg.s       $f12, $f21 (Delay Slot)
        ctx->f[12] = FPU_NEG_S(ctx->f[21]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e874c) {
            ctx->pc = 0x1E876Cu;
            goto label_1e876c;
        }
    }
    ctx->pc = 0x1E8754u;
    // 0x1e8754: 0x3c023f4c  lui         $v0, 0x3F4C
    ctx->pc = 0x1e8754u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16204 << 16));
    // 0x1e8758: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x1e8758u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x1e875c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1e875cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1e8760: 0x0  nop
    ctx->pc = 0x1e8760u;
    // NOP
    // 0x1e8764: 0x4600ad42  mul.s       $f21, $f21, $f0
    ctx->pc = 0x1e8764u;
    ctx->f[21] = FPU_MUL_S(ctx->f[21], ctx->f[0]);
    // 0x1e8768: 0x4600ab07  neg.s       $f12, $f21
    ctx->pc = 0x1e8768u;
    ctx->f[12] = FPU_NEG_S(ctx->f[21]);
label_1e876c:
    // 0x1e876c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1e876cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e8770: 0xc067e64  jal         func_19F990
    ctx->pc = 0x1E8770u;
    SET_GPR_U32(ctx, 31, 0x1E8778u);
    ctx->pc = 0x1E8774u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E8770u;
            // 0x1e8774: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19F990u;
    if (runtime->hasFunction(0x19F990u)) {
        auto targetFn = runtime->lookupFunction(0x19F990u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E8778u; }
        if (ctx->pc != 0x1E8778u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        AddWhp__16CBattleCharaInfoFif_0x19f990(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E8778u; }
        if (ctx->pc != 0x1E8778u) { return; }
    }
    ctx->pc = 0x1E8778u;
label_1e8778:
    // 0x1e8778: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x1e8778u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1e877c: 0x0  nop
    ctx->pc = 0x1e877cu;
    // NOP
    // 0x1e8780: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x1e8780u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1e8784: 0x0  nop
    ctx->pc = 0x1e8784u;
    // NOP
    // 0x1e8788: 0x4500000c  bc1f        . + 4 + (0xC << 2)
    ctx->pc = 0x1E8788u;
    {
        const bool branch_taken_0x1e8788 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1e8788) {
            ctx->pc = 0x1E87BCu;
            goto label_1e87bc;
        }
    }
    ctx->pc = 0x1E8790u;
    // 0x1e8790: 0x4601a036  c.le.s      $f20, $f1
    ctx->pc = 0x1e8790u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[20], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1e8794: 0x0  nop
    ctx->pc = 0x1e8794u;
    // NOP
    // 0x1e8798: 0x45010008  bc1t        . + 4 + (0x8 << 2)
    ctx->pc = 0x1E8798u;
    {
        const bool branch_taken_0x1e8798 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1e8798) {
            ctx->pc = 0x1E87BCu;
            goto label_1e87bc;
        }
    }
    ctx->pc = 0x1E87A0u;
    // 0x1e87a0: 0x3c02bdcc  lui         $v0, 0xBDCC
    ctx->pc = 0x1e87a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48588 << 16));
    // 0x1e87a4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1e87a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e87a8: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x1e87a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x1e87ac: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1e87acu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e87b0: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1e87b0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1e87b4: 0xc067fb8  jal         func_19FEE0
    ctx->pc = 0x1E87B4u;
    SET_GPR_U32(ctx, 31, 0x1E87BCu);
    ctx->pc = 0x1E87B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E87B4u;
            // 0x1e87b8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19FEE0u;
    if (runtime->hasFunction(0x19FEE0u)) {
        auto targetFn = runtime->lookupFunction(0x19FEE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E87BCu; }
        if (ctx->pc != 0x1E87BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        AddAbsRate__16CBattleCharaInfoFifPi_0x19fee0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E87BCu; }
        if (ctx->pc != 0x1E87BCu) { return; }
    }
    ctx->pc = 0x1E87BCu;
label_1e87bc:
    // 0x1e87bc: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x1e87bcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1e87c0: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x1e87c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x1e87c4: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x1e87c4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1e87c8: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x1e87c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1e87cc: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x1e87ccu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1e87d0: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x1e87d0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1e87d4: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1e87d4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e87d8: 0x3e00008  jr          $ra
    ctx->pc = 0x1E87D8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E87DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E87D8u;
            // 0x1e87dc: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1E87E0u;
}
