#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: BuildUpWeaponTrans__FP13CGameDataUsedi
// Address: 0x24ac20 - 0x24af90
void BuildUpWeaponTrans__FP13CGameDataUsedi_0x24ac20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("BuildUpWeaponTrans__FP13CGameDataUsedi_0x24ac20");
#endif

    switch (ctx->pc) {
        case 0x24ac50u: goto label_24ac50;
        case 0x24ac88u: goto label_24ac88;
        case 0x24ac9cu: goto label_24ac9c;
        case 0x24aca8u: goto label_24aca8;
        case 0x24acb4u: goto label_24acb4;
        case 0x24acc4u: goto label_24acc4;
        case 0x24acd0u: goto label_24acd0;
        case 0x24ad58u: goto label_24ad58;
        case 0x24ad94u: goto label_24ad94;
        case 0x24add0u: goto label_24add0;
        case 0x24ae0cu: goto label_24ae0c;
        case 0x24ae48u: goto label_24ae48;
        case 0x24ae84u: goto label_24ae84;
        case 0x24aec0u: goto label_24aec0;
        case 0x24aefcu: goto label_24aefc;
        case 0x24af38u: goto label_24af38;
        case 0x24af48u: goto label_24af48;
        case 0x24af54u: goto label_24af54;
        case 0x24af5cu: goto label_24af5c;
        case 0x24af6cu: goto label_24af6c;
        default: break;
    }

    ctx->pc = 0x24ac20u;

    // 0x24ac20: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x24ac20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x24ac24: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x24ac24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x24ac28: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x24ac28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x24ac2c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x24ac2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x24ac30: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x24ac30u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24ac34: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x24ac34u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x24ac38: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x24ac38u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24ac3c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x24ac3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x24ac40: 0x3c0401e7  lui         $a0, 0x1E7
    ctx->pc = 0x24ac40u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)487 << 16));
    // 0x24ac44: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x24ac44u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x24ac48: 0xc0655f8  jal         func_1957E0
    ctx->pc = 0x24AC48u;
    SET_GPR_U32(ctx, 31, 0x24AC50u);
    ctx->pc = 0x24AC4Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x24AC48u;
            // 0x24ac4c: 0x24849570  addiu       $a0, $a0, -0x6A90 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294940016));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1957E0u;
    if (runtime->hasFunction(0x1957E0u)) {
        auto targetFn = runtime->lookupFunction(0x1957E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24AC50u; }
        if (ctx->pc != 0x24AC50u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetWeaponData__9CGameDataFi_0x1957e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24AC50u; }
        if (ctx->pc != 0x24AC50u) { return; }
    }
    ctx->pc = 0x24AC50u;
label_24ac50:
    // 0x24ac50: 0x16400003  bnez        $s2, . + 4 + (0x3 << 2)
    ctx->pc = 0x24AC50u;
    {
        const bool branch_taken_0x24ac50 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x24AC54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x24AC50u;
            // 0x24ac54: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24ac50) {
            ctx->pc = 0x24AC60u;
            goto label_24ac60;
        }
    }
    ctx->pc = 0x24AC58u;
    // 0x24ac58: 0x100000c5  b           . + 4 + (0xC5 << 2)
    ctx->pc = 0x24AC58u;
    {
        const bool branch_taken_0x24ac58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24AC5Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x24AC58u;
            // 0x24ac5c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24ac58) {
            ctx->pc = 0x24AF70u;
            goto label_24af70;
        }
    }
    ctx->pc = 0x24AC60u;
label_24ac60:
    // 0x24ac60: 0x16000003  bnez        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x24AC60u;
    {
        const bool branch_taken_0x24ac60 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x24AC64u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x24AC60u;
            // 0x24ac64: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24ac60) {
            ctx->pc = 0x24AC70u;
            goto label_24ac70;
        }
    }
    ctx->pc = 0x24AC68u;
    // 0x24ac68: 0x100000c2  b           . + 4 + (0xC2 << 2)
    ctx->pc = 0x24AC68u;
    {
        const bool branch_taken_0x24ac68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24AC6Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x24AC68u;
            // 0x24ac6c: 0xdfbf0050  ld          $ra, 0x50($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24ac68) {
            ctx->pc = 0x24AF74u;
            goto label_24af74;
        }
    }
    ctx->pc = 0x24AC70u;
label_24ac70:
    // 0x24ac70: 0x86530002  lh          $s3, 0x2($s2)
    ctx->pc = 0x24ac70u;
    SET_GPR_S32(ctx, 19, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 2)));
    // 0x24ac74: 0x3c0401e7  lui         $a0, 0x1E7
    ctx->pc = 0x24ac74u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)487 << 16));
    // 0x24ac78: 0x24849570  addiu       $a0, $a0, -0x6A90
    ctx->pc = 0x24ac78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294940016));
    // 0x24ac7c: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x24ac7cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24ac80: 0xc0656e0  jal         func_195B80
    ctx->pc = 0x24AC80u;
    SET_GPR_U32(ctx, 31, 0x24AC88u);
    ctx->pc = 0x24AC84u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x24AC80u;
            // 0x24ac84: 0xa6540002  sh          $s4, 0x2($s2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 18), 2), (uint16_t)GPR_U32(ctx, 20));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195B80u;
    if (runtime->hasFunction(0x195B80u)) {
        auto targetFn = runtime->lookupFunction(0x195B80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24AC88u; }
        if (ctx->pc != 0x24AC88u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetDataType__9CGameDataFi_0x195b80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24AC88u; }
        if (ctx->pc != 0x24AC88u) { return; }
    }
    ctx->pc = 0x24AC88u;
label_24ac88:
    // 0x24ac88: 0xa2420004  sb          $v0, 0x4($s2)
    ctx->pc = 0x24ac88u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 4), (uint8_t)GPR_U32(ctx, 2));
    // 0x24ac8c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x24ac8cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24ac90: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x24ac90u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24ac94: 0xc065dc0  jal         func_197700
    ctx->pc = 0x24AC94u;
    SET_GPR_U32(ctx, 31, 0x24AC9Cu);
    ctx->pc = 0x24AC98u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x24AC94u;
            // 0x24ac98: 0x26510010  addiu       $s1, $s2, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x197700u;
    if (runtime->hasFunction(0x197700u)) {
        auto targetFn = runtime->lookupFunction(0x197700u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24AC9Cu; }
        if (ctx->pc != 0x24AC9Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetName__13CGameDataUsedFi_0x197700(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24AC9Cu; }
        if (ctx->pc != 0x24AC9Cu) { return; }
    }
    ctx->pc = 0x24AC9Cu;
label_24ac9c:
    // 0x24ac9c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x24ac9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24aca0: 0xc065810  jal         func_196040
    ctx->pc = 0x24ACA0u;
    SET_GPR_U32(ctx, 31, 0x24ACA8u);
    ctx->pc = 0x24ACA4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x24ACA0u;
            // 0x24aca4: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x196040u;
    if (runtime->hasFunction(0x196040u)) {
        auto targetFn = runtime->lookupFunction(0x196040u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24ACA8u; }
        if (ctx->pc != 0x24ACA8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetItemMessage__Fi_0x196040(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24ACA8u; }
        if (ctx->pc != 0x24ACA8u) { return; }
    }
    ctx->pc = 0x24ACA8u;
label_24aca8:
    // 0x24aca8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x24aca8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24acac: 0xc04a38a  jal         func_128E28
    ctx->pc = 0x24ACACu;
    SET_GPR_U32(ctx, 31, 0x24ACB4u);
    ctx->pc = 0x24ACB0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x24ACACu;
            // 0x24acb0: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128E28u;
    if (runtime->hasFunction(0x128E28u)) {
        auto targetFn = runtime->lookupFunction(0x128E28u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24ACB4u; }
        if (ctx->pc != 0x24ACB4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcmp_0x128e28(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24ACB4u; }
        if (ctx->pc != 0x24ACB4u) { return; }
    }
    ctx->pc = 0x24ACB4u;
label_24acb4:
    // 0x24acb4: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x24ACB4u;
    {
        const bool branch_taken_0x24acb4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x24acb4) {
            ctx->pc = 0x24ACD0u;
            goto label_24acd0;
        }
    }
    ctx->pc = 0x24ACBCu;
    // 0x24acbc: 0xc065810  jal         func_196040
    ctx->pc = 0x24ACBCu;
    SET_GPR_U32(ctx, 31, 0x24ACC4u);
    ctx->pc = 0x24ACC0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x24ACBCu;
            // 0x24acc0: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x196040u;
    if (runtime->hasFunction(0x196040u)) {
        auto targetFn = runtime->lookupFunction(0x196040u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24ACC4u; }
        if (ctx->pc != 0x24ACC4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetItemMessage__Fi_0x196040(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24ACC4u; }
        if (ctx->pc != 0x24ACC4u) { return; }
    }
    ctx->pc = 0x24ACC4u;
label_24acc4:
    // 0x24acc4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x24acc4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24acc8: 0xc065d8c  jal         func_197630
    ctx->pc = 0x24ACC8u;
    SET_GPR_U32(ctx, 31, 0x24ACD0u);
    ctx->pc = 0x24ACCCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x24ACC8u;
            // 0x24accc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x197630u;
    if (runtime->hasFunction(0x197630u)) {
        auto targetFn = runtime->lookupFunction(0x197630u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24ACD0u; }
        if (ctx->pc != 0x24ACD0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetName__13CGameDataUsedFPc_0x197630(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24ACD0u; }
        if (ctx->pc != 0x24ACD0u) { return; }
    }
    ctx->pc = 0x24ACD0u;
label_24acd0:
    // 0x24acd0: 0xa6200010  sh          $zero, 0x10($s1)
    ctx->pc = 0x24acd0u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 16), (uint16_t)GPR_U32(ctx, 0));
    // 0x24acd4: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x24acd4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x24acd8: 0xc6220008  lwc1        $f2, 0x8($s1)
    ctx->pc = 0x24acd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x24acdc: 0x46020832  c.eq.s      $f1, $f2
    ctx->pc = 0x24acdcu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x24ace0: 0x0  nop
    ctx->pc = 0x24ace0u;
    // NOP
    // 0x24ace4: 0x45010004  bc1t        . + 4 + (0x4 << 2)
    ctx->pc = 0x24ACE4u;
    {
        const bool branch_taken_0x24ace4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x24ace4) {
            ctx->pc = 0x24ACF8u;
            goto label_24acf8;
        }
    }
    ctx->pc = 0x24ACECu;
    // 0x24acec: 0xc620000c  lwc1        $f0, 0xC($s1)
    ctx->pc = 0x24acecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x24acf0: 0x0  nop
    ctx->pc = 0x24acf0u;
    // NOP
    // 0x24acf4: 0x46020043  div.s       $f1, $f0, $f2
    ctx->pc = 0x24acf4u;
    { if (ctx->f[2] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[0], ctx->f[2]); }
label_24acf8:
    // 0x24acf8: 0x86030002  lh          $v1, 0x2($s0)
    ctx->pc = 0x24acf8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x24acfc: 0x3c023dcc  lui         $v0, 0x3DCC
    ctx->pc = 0x24acfcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15820 << 16));
    // 0x24ad00: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x24ad00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x24ad04: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x24ad04u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x24ad08: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x24ad08u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x24ad0c: 0x0  nop
    ctx->pc = 0x24ad0cu;
    // NOP
    // 0x24ad10: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x24ad10u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x24ad14: 0xe6200008  swc1        $f0, 0x8($s1)
    ctx->pc = 0x24ad14u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 8), bits); }
    // 0x24ad18: 0x86020002  lh          $v0, 0x2($s0)
    ctx->pc = 0x24ad18u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x24ad1c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x24ad1cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x24ad20: 0x0  nop
    ctx->pc = 0x24ad20u;
    // NOP
    // 0x24ad24: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x24ad24u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x24ad28: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x24ad28u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x24ad2c: 0xe620000c  swc1        $f0, 0xC($s1)
    ctx->pc = 0x24ad2cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 12), bits); }
    // 0x24ad30: 0x86030004  lh          $v1, 0x4($s0)
    ctx->pc = 0x24ad30u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x24ad34: 0x86220012  lh          $v0, 0x12($s1)
    ctx->pc = 0x24ad34u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 18)));
    // 0x24ad38: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x24ad38u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x24ad3c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x24ad3cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x24ad40: 0x0  nop
    ctx->pc = 0x24ad40u;
    // NOP
    // 0x24ad44: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x24ad44u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x24ad48: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x24ad48u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x24ad4c: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x24ad4cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x24ad50: 0xc0a248c  jal         func_289230
    ctx->pc = 0x24AD50u;
    SET_GPR_U32(ctx, 31, 0x24AD58u);
    ctx->pc = 0x24AD54u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x24AD50u;
            // 0x24ad54: 0x46010300  add.s       $f12, $f0, $f1 (Delay Slot)
        ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24AD58u; }
        if (ctx->pc != 0x24AD58u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24AD58u; }
        if (ctx->pc != 0x24AD58u) { return; }
    }
    ctx->pc = 0x24AD58u;
label_24ad58:
    // 0x24ad58: 0xa6220012  sh          $v0, 0x12($s1)
    ctx->pc = 0x24ad58u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 18), (uint16_t)GPR_U32(ctx, 2));
    // 0x24ad5c: 0x8603000c  lh          $v1, 0xC($s0)
    ctx->pc = 0x24ad5cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x24ad60: 0x3c023dcc  lui         $v0, 0x3DCC
    ctx->pc = 0x24ad60u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15820 << 16));
    // 0x24ad64: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x24ad64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x24ad68: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x24ad68u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x24ad6c: 0x86220016  lh          $v0, 0x16($s1)
    ctx->pc = 0x24ad6cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 22)));
    // 0x24ad70: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x24ad70u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x24ad74: 0x0  nop
    ctx->pc = 0x24ad74u;
    // NOP
    // 0x24ad78: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x24ad78u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x24ad7c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x24ad7cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x24ad80: 0x0  nop
    ctx->pc = 0x24ad80u;
    // NOP
    // 0x24ad84: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x24ad84u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x24ad88: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x24ad88u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x24ad8c: 0xc0a248c  jal         func_289230
    ctx->pc = 0x24AD8Cu;
    SET_GPR_U32(ctx, 31, 0x24AD94u);
    ctx->pc = 0x24AD90u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x24AD8Cu;
            // 0x24ad90: 0x46010300  add.s       $f12, $f0, $f1 (Delay Slot)
        ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24AD94u; }
        if (ctx->pc != 0x24AD94u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24AD94u; }
        if (ctx->pc != 0x24AD94u) { return; }
    }
    ctx->pc = 0x24AD94u;
label_24ad94:
    // 0x24ad94: 0xa6220016  sh          $v0, 0x16($s1)
    ctx->pc = 0x24ad94u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 22), (uint16_t)GPR_U32(ctx, 2));
    // 0x24ad98: 0x8603000e  lh          $v1, 0xE($s0)
    ctx->pc = 0x24ad98u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 14)));
    // 0x24ad9c: 0x3c023dcc  lui         $v0, 0x3DCC
    ctx->pc = 0x24ad9cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15820 << 16));
    // 0x24ada0: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x24ada0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x24ada4: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x24ada4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x24ada8: 0x86220018  lh          $v0, 0x18($s1)
    ctx->pc = 0x24ada8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 24)));
    // 0x24adac: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x24adacu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x24adb0: 0x0  nop
    ctx->pc = 0x24adb0u;
    // NOP
    // 0x24adb4: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x24adb4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x24adb8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x24adb8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x24adbc: 0x0  nop
    ctx->pc = 0x24adbcu;
    // NOP
    // 0x24adc0: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x24adc0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x24adc4: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x24adc4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x24adc8: 0xc0a248c  jal         func_289230
    ctx->pc = 0x24ADC8u;
    SET_GPR_U32(ctx, 31, 0x24ADD0u);
    ctx->pc = 0x24ADCCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x24ADC8u;
            // 0x24adcc: 0x46010300  add.s       $f12, $f0, $f1 (Delay Slot)
        ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24ADD0u; }
        if (ctx->pc != 0x24ADD0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24ADD0u; }
        if (ctx->pc != 0x24ADD0u) { return; }
    }
    ctx->pc = 0x24ADD0u;
label_24add0:
    // 0x24add0: 0xa6220018  sh          $v0, 0x18($s1)
    ctx->pc = 0x24add0u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 24), (uint16_t)GPR_U32(ctx, 2));
    // 0x24add4: 0x86030010  lh          $v1, 0x10($s0)
    ctx->pc = 0x24add4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x24add8: 0x3c023dcc  lui         $v0, 0x3DCC
    ctx->pc = 0x24add8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15820 << 16));
    // 0x24addc: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x24addcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x24ade0: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x24ade0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x24ade4: 0x8622001a  lh          $v0, 0x1A($s1)
    ctx->pc = 0x24ade4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 26)));
    // 0x24ade8: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x24ade8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x24adec: 0x0  nop
    ctx->pc = 0x24adecu;
    // NOP
    // 0x24adf0: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x24adf0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x24adf4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x24adf4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x24adf8: 0x0  nop
    ctx->pc = 0x24adf8u;
    // NOP
    // 0x24adfc: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x24adfcu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x24ae00: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x24ae00u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x24ae04: 0xc0a248c  jal         func_289230
    ctx->pc = 0x24AE04u;
    SET_GPR_U32(ctx, 31, 0x24AE0Cu);
    ctx->pc = 0x24AE08u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x24AE04u;
            // 0x24ae08: 0x46010300  add.s       $f12, $f0, $f1 (Delay Slot)
        ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24AE0Cu; }
        if (ctx->pc != 0x24AE0Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24AE0Cu; }
        if (ctx->pc != 0x24AE0Cu) { return; }
    }
    ctx->pc = 0x24AE0Cu;
label_24ae0c:
    // 0x24ae0c: 0xa622001a  sh          $v0, 0x1A($s1)
    ctx->pc = 0x24ae0cu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 26), (uint16_t)GPR_U32(ctx, 2));
    // 0x24ae10: 0x86030012  lh          $v1, 0x12($s0)
    ctx->pc = 0x24ae10u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 18)));
    // 0x24ae14: 0x3c023dcc  lui         $v0, 0x3DCC
    ctx->pc = 0x24ae14u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15820 << 16));
    // 0x24ae18: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x24ae18u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x24ae1c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x24ae1cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x24ae20: 0x8622001c  lh          $v0, 0x1C($s1)
    ctx->pc = 0x24ae20u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 28)));
    // 0x24ae24: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x24ae24u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x24ae28: 0x0  nop
    ctx->pc = 0x24ae28u;
    // NOP
    // 0x24ae2c: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x24ae2cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x24ae30: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x24ae30u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x24ae34: 0x0  nop
    ctx->pc = 0x24ae34u;
    // NOP
    // 0x24ae38: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x24ae38u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x24ae3c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x24ae3cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x24ae40: 0xc0a248c  jal         func_289230
    ctx->pc = 0x24AE40u;
    SET_GPR_U32(ctx, 31, 0x24AE48u);
    ctx->pc = 0x24AE44u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x24AE40u;
            // 0x24ae44: 0x46010300  add.s       $f12, $f0, $f1 (Delay Slot)
        ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24AE48u; }
        if (ctx->pc != 0x24AE48u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24AE48u; }
        if (ctx->pc != 0x24AE48u) { return; }
    }
    ctx->pc = 0x24AE48u;
label_24ae48:
    // 0x24ae48: 0xa622001c  sh          $v0, 0x1C($s1)
    ctx->pc = 0x24ae48u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 28), (uint16_t)GPR_U32(ctx, 2));
    // 0x24ae4c: 0x86030014  lh          $v1, 0x14($s0)
    ctx->pc = 0x24ae4cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x24ae50: 0x3c023dcc  lui         $v0, 0x3DCC
    ctx->pc = 0x24ae50u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15820 << 16));
    // 0x24ae54: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x24ae54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x24ae58: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x24ae58u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x24ae5c: 0x8622001e  lh          $v0, 0x1E($s1)
    ctx->pc = 0x24ae5cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 30)));
    // 0x24ae60: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x24ae60u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x24ae64: 0x0  nop
    ctx->pc = 0x24ae64u;
    // NOP
    // 0x24ae68: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x24ae68u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x24ae6c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x24ae6cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x24ae70: 0x0  nop
    ctx->pc = 0x24ae70u;
    // NOP
    // 0x24ae74: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x24ae74u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x24ae78: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x24ae78u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x24ae7c: 0xc0a248c  jal         func_289230
    ctx->pc = 0x24AE7Cu;
    SET_GPR_U32(ctx, 31, 0x24AE84u);
    ctx->pc = 0x24AE80u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x24AE7Cu;
            // 0x24ae80: 0x46010300  add.s       $f12, $f0, $f1 (Delay Slot)
        ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24AE84u; }
        if (ctx->pc != 0x24AE84u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24AE84u; }
        if (ctx->pc != 0x24AE84u) { return; }
    }
    ctx->pc = 0x24AE84u;
label_24ae84:
    // 0x24ae84: 0xa622001e  sh          $v0, 0x1E($s1)
    ctx->pc = 0x24ae84u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 30), (uint16_t)GPR_U32(ctx, 2));
    // 0x24ae88: 0x86030016  lh          $v1, 0x16($s0)
    ctx->pc = 0x24ae88u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 22)));
    // 0x24ae8c: 0x3c023dcc  lui         $v0, 0x3DCC
    ctx->pc = 0x24ae8cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15820 << 16));
    // 0x24ae90: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x24ae90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x24ae94: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x24ae94u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x24ae98: 0x86220020  lh          $v0, 0x20($s1)
    ctx->pc = 0x24ae98u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x24ae9c: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x24ae9cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x24aea0: 0x0  nop
    ctx->pc = 0x24aea0u;
    // NOP
    // 0x24aea4: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x24aea4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x24aea8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x24aea8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x24aeac: 0x0  nop
    ctx->pc = 0x24aeacu;
    // NOP
    // 0x24aeb0: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x24aeb0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x24aeb4: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x24aeb4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x24aeb8: 0xc0a248c  jal         func_289230
    ctx->pc = 0x24AEB8u;
    SET_GPR_U32(ctx, 31, 0x24AEC0u);
    ctx->pc = 0x24AEBCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x24AEB8u;
            // 0x24aebc: 0x46010300  add.s       $f12, $f0, $f1 (Delay Slot)
        ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24AEC0u; }
        if (ctx->pc != 0x24AEC0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24AEC0u; }
        if (ctx->pc != 0x24AEC0u) { return; }
    }
    ctx->pc = 0x24AEC0u;
label_24aec0:
    // 0x24aec0: 0xa6220020  sh          $v0, 0x20($s1)
    ctx->pc = 0x24aec0u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 32), (uint16_t)GPR_U32(ctx, 2));
    // 0x24aec4: 0x86030018  lh          $v1, 0x18($s0)
    ctx->pc = 0x24aec4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x24aec8: 0x3c023dcc  lui         $v0, 0x3DCC
    ctx->pc = 0x24aec8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15820 << 16));
    // 0x24aecc: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x24aeccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x24aed0: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x24aed0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x24aed4: 0x86220022  lh          $v0, 0x22($s1)
    ctx->pc = 0x24aed4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 34)));
    // 0x24aed8: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x24aed8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x24aedc: 0x0  nop
    ctx->pc = 0x24aedcu;
    // NOP
    // 0x24aee0: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x24aee0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x24aee4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x24aee4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x24aee8: 0x0  nop
    ctx->pc = 0x24aee8u;
    // NOP
    // 0x24aeec: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x24aeecu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x24aef0: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x24aef0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x24aef4: 0xc0a248c  jal         func_289230
    ctx->pc = 0x24AEF4u;
    SET_GPR_U32(ctx, 31, 0x24AEFCu);
    ctx->pc = 0x24AEF8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x24AEF4u;
            // 0x24aef8: 0x46010300  add.s       $f12, $f0, $f1 (Delay Slot)
        ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24AEFCu; }
        if (ctx->pc != 0x24AEFCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24AEFCu; }
        if (ctx->pc != 0x24AEFCu) { return; }
    }
    ctx->pc = 0x24AEFCu;
label_24aefc:
    // 0x24aefc: 0xa6220022  sh          $v0, 0x22($s1)
    ctx->pc = 0x24aefcu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 34), (uint16_t)GPR_U32(ctx, 2));
    // 0x24af00: 0x8603001a  lh          $v1, 0x1A($s0)
    ctx->pc = 0x24af00u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 26)));
    // 0x24af04: 0x3c023dcc  lui         $v0, 0x3DCC
    ctx->pc = 0x24af04u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15820 << 16));
    // 0x24af08: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x24af08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x24af0c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x24af0cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x24af10: 0x86220024  lh          $v0, 0x24($s1)
    ctx->pc = 0x24af10u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 36)));
    // 0x24af14: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x24af14u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x24af18: 0x0  nop
    ctx->pc = 0x24af18u;
    // NOP
    // 0x24af1c: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x24af1cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x24af20: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x24af20u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x24af24: 0x0  nop
    ctx->pc = 0x24af24u;
    // NOP
    // 0x24af28: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x24af28u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x24af2c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x24af2cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x24af30: 0xc0a248c  jal         func_289230
    ctx->pc = 0x24AF30u;
    SET_GPR_U32(ctx, 31, 0x24AF38u);
    ctx->pc = 0x24AF34u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x24AF30u;
            // 0x24af34: 0x46010300  add.s       $f12, $f0, $f1 (Delay Slot)
        ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24AF38u; }
        if (ctx->pc != 0x24AF38u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24AF38u; }
        if (ctx->pc != 0x24AF38u) { return; }
    }
    ctx->pc = 0x24AF38u;
label_24af38:
    // 0x24af38: 0xa6220024  sh          $v0, 0x24($s1)
    ctx->pc = 0x24af38u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 36), (uint16_t)GPR_U32(ctx, 2));
    // 0x24af3c: 0x8e240028  lw          $a0, 0x28($s1)
    ctx->pc = 0x24af3cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 40)));
    // 0x24af40: 0xc068400  jal         func_1A1000
    ctx->pc = 0x24AF40u;
    SET_GPR_U32(ctx, 31, 0x24AF48u);
    ctx->pc = 0x24AF44u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x24AF40u;
            // 0x24af44: 0x8e05002c  lw          $a1, 0x2C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A1000u;
    if (runtime->hasFunction(0x1A1000u)) {
        auto targetFn = runtime->lookupFunction(0x1A1000u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24AF48u; }
        if (ctx->pc != 0x24AF48u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CheckWeaponAttribute__FUiUi_0x1a1000(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24AF48u; }
        if (ctx->pc != 0x24AF48u) { return; }
    }
    ctx->pc = 0x24AF48u;
label_24af48:
    // 0x24af48: 0xae220028  sw          $v0, 0x28($s1)
    ctx->pc = 0x24af48u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 40), GPR_U32(ctx, 2));
    // 0x24af4c: 0xc066538  jal         func_1994E0
    ctx->pc = 0x24AF4Cu;
    SET_GPR_U32(ctx, 31, 0x24AF54u);
    ctx->pc = 0x24AF50u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x24AF4Cu;
            // 0x24af50: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1994E0u;
    if (runtime->hasFunction(0x1994E0u)) {
        auto targetFn = runtime->lookupFunction(0x1994E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24AF54u; }
        if (ctx->pc != 0x24AF54u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CheckParamLimmit__13CGameDataUsedFv_0x1994e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24AF54u; }
        if (ctx->pc != 0x24AF54u) { return; }
    }
    ctx->pc = 0x24AF54u;
label_24af54:
    // 0x24af54: 0xc064220  jal         func_190880
    ctx->pc = 0x24AF54u;
    SET_GPR_U32(ctx, 31, 0x24AF5Cu);
    ctx->pc = 0x190880u;
    if (runtime->hasFunction(0x190880u)) {
        auto targetFn = runtime->lookupFunction(0x190880u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24AF5Cu; }
        if (ctx->pc != 0x24AF5Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetSaveData__Fv_0x190880(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24AF5Cu; }
        if (ctx->pc != 0x24AF5Cu) { return; }
    }
    ctx->pc = 0x24AF5Cu;
label_24af5c:
    // 0x24af5c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x24af5cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24af60: 0x24050031  addiu       $a1, $zero, 0x31
    ctx->pc = 0x24af60u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 49));
    // 0x24af64: 0xc0bd8f4  jal         func_2F63D0
    ctx->pc = 0x24AF64u;
    SET_GPR_U32(ctx, 31, 0x24AF6Cu);
    ctx->pc = 0x24AF68u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x24AF64u;
            // 0x24af68: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F63D0u;
    if (runtime->hasFunction(0x2F63D0u)) {
        auto targetFn = runtime->lookupFunction(0x2F63D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24AF6Cu; }
        if (ctx->pc != 0x24AF6Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetBitFlag__9CSaveDataFii_0x2f63d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24AF6Cu; }
        if (ctx->pc != 0x24AF6Cu) { return; }
    }
    ctx->pc = 0x24AF6Cu;
label_24af6c:
    // 0x24af6c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x24af6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_24af70:
    // 0x24af70: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x24af70u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_24af74:
    // 0x24af74: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x24af74u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x24af78: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x24af78u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x24af7c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x24af7cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x24af80: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x24af80u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x24af84: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x24af84u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x24af88: 0x3e00008  jr          $ra
    ctx->pc = 0x24AF88u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x24AF8Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x24AF88u;
            // 0x24af8c: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x24AF90u;
}
