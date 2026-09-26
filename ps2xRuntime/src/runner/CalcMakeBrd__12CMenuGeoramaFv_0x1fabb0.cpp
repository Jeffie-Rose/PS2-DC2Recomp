#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: CalcMakeBrd__12CMenuGeoramaFv
// Address: 0x1fabb0 - 0x1fadb0
void CalcMakeBrd__12CMenuGeoramaFv_0x1fabb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("CalcMakeBrd__12CMenuGeoramaFv_0x1fabb0");
#endif

    switch (ctx->pc) {
        case 0x1fac1cu: goto label_1fac1c;
        case 0x1fac2cu: goto label_1fac2c;
        case 0x1fac70u: goto label_1fac70;
        case 0x1face4u: goto label_1face4;
        case 0x1fad40u: goto label_1fad40;
        case 0x1fad58u: goto label_1fad58;
        case 0x1fad90u: goto label_1fad90;
        default: break;
    }

    ctx->pc = 0x1fabb0u;

    // 0x1fabb0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x1fabb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x1fabb4: 0x3c050001  lui         $a1, 0x1
    ctx->pc = 0x1fabb4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)1 << 16));
    // 0x1fabb8: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x1fabb8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x1fabbc: 0x34a3b82c  ori         $v1, $a1, 0xB82C
    ctx->pc = 0x1fabbcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)47148);
    // 0x1fabc0: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x1fabc0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x1fabc4: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x1fabc4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x1fabc8: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1fabc8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1fabcc: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1fabccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1fabd0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1fabd0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1fabd4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1fabd4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1fabd8: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x1fabd8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1fabdc: 0x1060006c  beqz        $v1, . + 4 + (0x6C << 2)
    ctx->pc = 0x1FABDCu;
    {
        const bool branch_taken_0x1fabdc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FABE0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FABDCu;
            // 0x1fabe0: 0x80a02d  daddu       $s4, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fabdc) {
            ctx->pc = 0x1FAD90u;
            goto label_1fad90;
        }
    }
    ctx->pc = 0x1FABE4u;
    // 0x1fabe4: 0x86840000  lh          $a0, 0x0($s4)
    ctx->pc = 0x1fabe4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x1fabe8: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x1fabe8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x1fabec: 0x14830068  bne         $a0, $v1, . + 4 + (0x68 << 2)
    ctx->pc = 0x1FABECu;
    {
        const bool branch_taken_0x1fabec = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x1fabec) {
            ctx->pc = 0x1FAD90u;
            goto label_1fad90;
        }
    }
    ctx->pc = 0x1FABF4u;
    // 0x1fabf4: 0x86830002  lh          $v1, 0x2($s4)
    ctx->pc = 0x1fabf4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 2)));
    // 0x1fabf8: 0x14600065  bnez        $v1, . + 4 + (0x65 << 2)
    ctx->pc = 0x1FABF8u;
    {
        const bool branch_taken_0x1fabf8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1fabf8) {
            ctx->pc = 0x1FAD90u;
            goto label_1fad90;
        }
    }
    ctx->pc = 0x1FAC00u;
    // 0x1fac00: 0x8e830100  lw          $v1, 0x100($s4)
    ctx->pc = 0x1fac00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 256)));
    // 0x1fac04: 0x34a2b7e0  ori         $v0, $a1, 0xB7E0
    ctx->pc = 0x1fac04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)47072);
    // 0x1fac08: 0x2821021  addu        $v0, $s4, $v0
    ctx->pc = 0x1fac08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
    // 0x1fac0c: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1fac0cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fac10: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1fac10u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fac14: 0x10000028  b           . + 4 + (0x28 << 2)
    ctx->pc = 0x1FAC14u;
    {
        const bool branch_taken_0x1fac14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FAC18u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FAC14u;
            // 0x1fac18: 0xac430000  sw          $v1, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fac14) {
            ctx->pc = 0x1FACB8u;
            goto label_1facb8;
        }
    }
    ctx->pc = 0x1FAC1Cu;
label_1fac1c:
    // 0x1fac1c: 0x2810821  addu        $at, $s4, $at
    ctx->pc = 0x1fac1cu;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 1)));
    // 0x1fac20: 0x8c24b7f0  lw          $a0, -0x4810($at)
    ctx->pc = 0x1fac20u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294948848)));
    // 0x1fac24: 0xc06d5cc  jal         func_1B5730
    ctx->pc = 0x1FAC24u;
    SET_GPR_U32(ctx, 31, 0x1FAC2Cu);
    ctx->pc = 0x1FAC28u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1FAC24u;
            // 0x1fac28: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B5730u;
    if (runtime->hasFunction(0x1B5730u)) {
        auto targetFn = runtime->lookupFunction(0x1B5730u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FAC2Cu; }
        if (ctx->pc != 0x1FAC2Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetMaterial__14CEditPartsInfoFi_0x1b5730(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FAC2Cu; }
        if (ctx->pc != 0x1FAC2Cu) { return; }
    }
    ctx->pc = 0x1FAC2Cu;
label_1fac2c:
    // 0x1fac2c: 0x1040001f  beqz        $v0, . + 4 + (0x1F << 2)
    ctx->pc = 0x1FAC2Cu;
    {
        const bool branch_taken_0x1fac2c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FAC30u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FAC2Cu;
            // 0x1fac30: 0x2919021  addu        $s2, $s4, $s1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 17)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fac2c) {
            ctx->pc = 0x1FACACu;
            goto label_1facac;
        }
    }
    ctx->pc = 0x1FAC34u;
    // 0x1fac34: 0x3c010002  lui         $at, 0x2
    ctx->pc = 0x1fac34u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)2 << 16));
    // 0x1fac38: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1fac38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1fac3c: 0x2410821  addu        $at, $s2, $at
    ctx->pc = 0x1fac3cu;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 1)));
    // 0x1fac40: 0xa023b7c4  sb          $v1, -0x483C($at)
    ctx->pc = 0x1fac40u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 4294948804), (uint8_t)GPR_U32(ctx, 3));
    // 0x1fac44: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x1fac44u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x1fac48: 0x84440004  lh          $a0, 0x4($v0)
    ctx->pc = 0x1fac48u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x1fac4c: 0x3421b7c6  ori         $at, $at, 0xB7C6
    ctx->pc = 0x1fac4cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)47046);
    // 0x1fac50: 0x2419821  addu        $s3, $s2, $at
    ctx->pc = 0x1fac50u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 1)));
    // 0x1fac54: 0x3c010002  lui         $at, 0x2
    ctx->pc = 0x1fac54u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)2 << 16));
    // 0x1fac58: 0x2810821  addu        $at, $s4, $at
    ctx->pc = 0x1fac58u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 1)));
    // 0x1fac5c: 0x8423b7e0  lh          $v1, -0x4820($at)
    ctx->pc = 0x1fac5cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 1), 4294948832)));
    // 0x1fac60: 0x831818  mult        $v1, $a0, $v1
    ctx->pc = 0x1fac60u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x1fac64: 0xa6630000  sh          $v1, 0x0($s3)
    ctx->pc = 0x1fac64u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x1fac68: 0xc0684dc  jal         func_1A1370
    ctx->pc = 0x1FAC68u;
    SET_GPR_U32(ctx, 31, 0x1FAC70u);
    ctx->pc = 0x1FAC6Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1FAC68u;
            // 0x1fac6c: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A1370u;
    if (runtime->hasFunction(0x1A1370u)) {
        auto targetFn = runtime->lookupFunction(0x1A1370u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FAC70u; }
        if (ctx->pc != 0x1FAC70u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetUserItemHaveNum__Fi_0x1a1370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FAC70u; }
        if (ctx->pc != 0x1FAC70u) { return; }
    }
    ctx->pc = 0x1FAC70u;
label_1fac70:
    // 0x1fac70: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x1fac70u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x1fac74: 0x3421b7c5  ori         $at, $at, 0xB7C5
    ctx->pc = 0x1fac74u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)47045);
    // 0x1fac78: 0x2412021  addu        $a0, $s2, $at
    ctx->pc = 0x1fac78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 1)));
    // 0x1fac7c: 0xa0800000  sb          $zero, 0x0($a0)
    ctx->pc = 0x1fac7cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x1fac80: 0x86630000  lh          $v1, 0x0($s3)
    ctx->pc = 0x1fac80u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x1fac84: 0x43182a  slt         $v1, $v0, $v1
    ctx->pc = 0x1fac84u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x1fac88: 0x14600002  bnez        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x1FAC88u;
    {
        const bool branch_taken_0x1fac88 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FAC8Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FAC88u;
            // 0x1fac8c: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fac88) {
            ctx->pc = 0x1FAC94u;
            goto label_1fac94;
        }
    }
    ctx->pc = 0x1FAC90u;
    // 0x1fac90: 0xa0830000  sb          $v1, 0x0($a0)
    ctx->pc = 0x1fac90u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 3));
label_1fac94:
    // 0x1fac94: 0x0  nop
    ctx->pc = 0x1fac94u;
    // NOP
    // 0x1fac98: 0x86630000  lh          $v1, 0x0($s3)
    ctx->pc = 0x1fac98u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x1fac9c: 0x3c010002  lui         $at, 0x2
    ctx->pc = 0x1fac9cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)2 << 16));
    // 0x1faca0: 0x2410821  addu        $at, $s2, $at
    ctx->pc = 0x1faca0u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 1)));
    // 0x1faca4: 0x621023  subu        $v0, $v1, $v0
    ctx->pc = 0x1faca4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1faca8: 0xa422b7c8  sh          $v0, -0x4838($at)
    ctx->pc = 0x1faca8u;
    WRITE16(ADD32(GPR_U32(ctx, 1), 4294948808), (uint16_t)GPR_U32(ctx, 2));
label_1facac:
    // 0x1facac: 0x0  nop
    ctx->pc = 0x1facacu;
    // NOP
    // 0x1facb0: 0x26310006  addiu       $s1, $s1, 0x6
    ctx->pc = 0x1facb0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 6));
    // 0x1facb4: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1facb4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_1facb8:
    // 0x1facb8: 0x3c010002  lui         $at, 0x2
    ctx->pc = 0x1facb8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)2 << 16));
    // 0x1facbc: 0x2810821  addu        $at, $s4, $at
    ctx->pc = 0x1facbcu;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 1)));
    // 0x1facc0: 0x8c22b7dc  lw          $v0, -0x4824($at)
    ctx->pc = 0x1facc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294948828)));
    // 0x1facc4: 0x202102a  slt         $v0, $s0, $v0
    ctx->pc = 0x1facc4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1facc8: 0x1440ffd4  bnez        $v0, . + 4 + (-0x2C << 2)
    ctx->pc = 0x1FACC8u;
    {
        const bool branch_taken_0x1facc8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FACCCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FACC8u;
            // 0x1faccc: 0x3c010002  lui         $at, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)2 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1facc8) {
            ctx->pc = 0x1FAC1Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1fac1c;
        }
    }
    ctx->pc = 0x1FACD0u;
    // 0x1facd0: 0x2a010004  slti        $at, $s0, 0x4
    ctx->pc = 0x1facd0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x1facd4: 0x10200014  beqz        $at, . + 4 + (0x14 << 2)
    ctx->pc = 0x1FACD4u;
    {
        const bool branch_taken_0x1facd4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FACD8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FACD4u;
            // 0x1facd8: 0x101040  sll         $v0, $s0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1facd4) {
            ctx->pc = 0x1FAD28u;
            goto label_1fad28;
        }
    }
    ctx->pc = 0x1FACDCu;
    // 0x1facdc: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x1facdcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x1face0: 0x21840  sll         $v1, $v0, 1
    ctx->pc = 0x1face0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
label_1face4:
    // 0x1face4: 0x2832021  addu        $a0, $s4, $v1
    ctx->pc = 0x1face4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 3)));
    // 0x1face8: 0x3c010002  lui         $at, 0x2
    ctx->pc = 0x1face8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)2 << 16));
    // 0x1facec: 0x810821  addu        $at, $a0, $at
    ctx->pc = 0x1facecu;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 1)));
    // 0x1facf0: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1facf0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x1facf4: 0xa020b7c4  sb          $zero, -0x483C($at)
    ctx->pc = 0x1facf4u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 4294948804), (uint8_t)GPR_U32(ctx, 0));
    // 0x1facf8: 0x2a020004  slti        $v0, $s0, 0x4
    ctx->pc = 0x1facf8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x1facfc: 0x3c010002  lui         $at, 0x2
    ctx->pc = 0x1facfcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)2 << 16));
    // 0x1fad00: 0x24630006  addiu       $v1, $v1, 0x6
    ctx->pc = 0x1fad00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 6));
    // 0x1fad04: 0x810821  addu        $at, $a0, $at
    ctx->pc = 0x1fad04u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 1)));
    // 0x1fad08: 0xa020b7c5  sb          $zero, -0x483B($at)
    ctx->pc = 0x1fad08u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 4294948805), (uint8_t)GPR_U32(ctx, 0));
    // 0x1fad0c: 0x3c010002  lui         $at, 0x2
    ctx->pc = 0x1fad0cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)2 << 16));
    // 0x1fad10: 0x810821  addu        $at, $a0, $at
    ctx->pc = 0x1fad10u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 1)));
    // 0x1fad14: 0xa420b7c6  sh          $zero, -0x483A($at)
    ctx->pc = 0x1fad14u;
    WRITE16(ADD32(GPR_U32(ctx, 1), 4294948806), (uint16_t)GPR_U32(ctx, 0));
    // 0x1fad18: 0x3c010002  lui         $at, 0x2
    ctx->pc = 0x1fad18u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)2 << 16));
    // 0x1fad1c: 0x810821  addu        $at, $a0, $at
    ctx->pc = 0x1fad1cu;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 1)));
    // 0x1fad20: 0x1440fff0  bnez        $v0, . + 4 + (-0x10 << 2)
    ctx->pc = 0x1FAD20u;
    {
        const bool branch_taken_0x1fad20 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FAD24u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FAD20u;
            // 0x1fad24: 0xa420b7c8  sh          $zero, -0x4838($at) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 1), 4294948808), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fad20) {
            ctx->pc = 0x1FACE4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1face4;
        }
    }
    ctx->pc = 0x1FAD28u;
label_1fad28:
    // 0x1fad28: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x1fad28u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x1fad2c: 0x3421b7e8  ori         $at, $at, 0xB7E8
    ctx->pc = 0x1fad2cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)47080);
    // 0x1fad30: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x1fad30u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1fad34: 0x2812021  addu        $a0, $s4, $at
    ctx->pc = 0x1fad34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 1)));
    // 0x1fad38: 0xc094558  jal         func_251560
    ctx->pc = 0x1FAD38u;
    SET_GPR_U32(ctx, 31, 0x1FAD40u);
    ctx->pc = 0x1FAD3Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1FAD38u;
            // 0x1fad3c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x251560u;
    if (runtime->hasFunction(0x251560u)) {
        auto targetFn = runtime->lookupFunction(0x251560u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FAD40u; }
        if (ctx->pc != 0x1FAD40u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CalcMenuAdd__FPiii_0x251560(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FAD40u; }
        if (ctx->pc != 0x1FAD40u) { return; }
    }
    ctx->pc = 0x1FAD40u;
label_1fad40:
    // 0x1fad40: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x1fad40u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x1fad44: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x1fad44u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1fad48: 0x3421b7ec  ori         $at, $at, 0xB7EC
    ctx->pc = 0x1fad48u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)47084);
    // 0x1fad4c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1fad4cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fad50: 0xc094558  jal         func_251560
    ctx->pc = 0x1FAD50u;
    SET_GPR_U32(ctx, 31, 0x1FAD58u);
    ctx->pc = 0x1FAD54u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1FAD50u;
            // 0x1fad54: 0x2812021  addu        $a0, $s4, $at (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 1)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x251560u;
    if (runtime->hasFunction(0x251560u)) {
        auto targetFn = runtime->lookupFunction(0x251560u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FAD58u; }
        if (ctx->pc != 0x1FAD58u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CalcMenuAdd__FPiii_0x251560(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FAD58u; }
        if (ctx->pc != 0x1FAD58u) { return; }
    }
    ctx->pc = 0x1FAD58u;
label_1fad58:
    // 0x1fad58: 0x82820108  lb          $v0, 0x108($s4)
    ctx->pc = 0x1fad58u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 20), 264)));
    // 0x1fad5c: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x1fad5cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x1fad60: 0x3421b7c4  ori         $at, $at, 0xB7C4
    ctx->pc = 0x1fad60u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)47044);
    // 0x1fad64: 0x2812821  addu        $a1, $s4, $at
    ctx->pc = 0x1fad64u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 1)));
    // 0x1fad68: 0x3c010002  lui         $at, 0x2
    ctx->pc = 0x1fad68u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)2 << 16));
    // 0x1fad6c: 0x2810821  addu        $at, $s4, $at
    ctx->pc = 0x1fad6cu;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 1)));
    // 0x1fad70: 0xac22b7e4  sw          $v0, -0x481C($at)
    ctx->pc = 0x1fad70u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294948836), GPR_U32(ctx, 2));
    // 0x1fad74: 0x3c010002  lui         $at, 0x2
    ctx->pc = 0x1fad74u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)2 << 16));
    // 0x1fad78: 0x2810821  addu        $at, $s4, $at
    ctx->pc = 0x1fad78u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 1)));
    // 0x1fad7c: 0x8c22b82c  lw          $v0, -0x47D4($at)
    ctx->pc = 0x1fad7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294948908)));
    // 0x1fad80: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x1fad80u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x1fad84: 0x8c26ca48  lw          $a2, -0x35B8($at)
    ctx->pc = 0x1fad84u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294953544)));
    // 0x1fad88: 0xc088a40  jal         func_222900
    ctx->pc = 0x1FAD88u;
    SET_GPR_U32(ctx, 31, 0x1FAD90u);
    ctx->pc = 0x1FAD8Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1FAD88u;
            // 0x1fad8c: 0x2444000c  addiu       $a0, $v0, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 12));
        ctx->in_delay_slot = false;
    ctx->pc = 0x222900u;
    if (runtime->hasFunction(0x222900u)) {
        auto targetFn = runtime->lookupFunction(0x222900u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FAD90u; }
        if (ctx->pc != 0x1FAD90u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CalcCommonBrdDrawInfo__FPfP21MENUFORM_MAKEBRD_INFOP6ClsMes_0x222900(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FAD90u; }
        if (ctx->pc != 0x1FAD90u) { return; }
    }
    ctx->pc = 0x1FAD90u;
label_1fad90:
    // 0x1fad90: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x1fad90u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1fad94: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x1fad94u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1fad98: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1fad98u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1fad9c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1fad9cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1fada0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1fada0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1fada4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1fada4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1fada8: 0x3e00008  jr          $ra
    ctx->pc = 0x1FADA8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FADACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FADA8u;
            // 0x1fadac: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1FADB0u;
}
