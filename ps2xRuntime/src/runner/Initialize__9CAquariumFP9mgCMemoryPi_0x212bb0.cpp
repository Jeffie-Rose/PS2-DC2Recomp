#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: Initialize__9CAquariumFP9mgCMemoryPi
// Address: 0x212bb0 - 0x2133b4
void Initialize__9CAquariumFP9mgCMemoryPi_0x212bb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Initialize__9CAquariumFP9mgCMemoryPi_0x212bb0");
#endif

    switch (ctx->pc) {
        case 0x212becu: goto label_212bec;
        case 0x212c20u: goto label_212c20;
        case 0x212c84u: goto label_212c84;
        case 0x212cc0u: goto label_212cc0;
        case 0x212d4cu: goto label_212d4c;
        case 0x212d70u: goto label_212d70;
        case 0x212d80u: goto label_212d80;
        case 0x212da4u: goto label_212da4;
        case 0x212db4u: goto label_212db4;
        case 0x212dc0u: goto label_212dc0;
        case 0x212de4u: goto label_212de4;
        case 0x212df4u: goto label_212df4;
        case 0x212dfcu: goto label_212dfc;
        case 0x212e0cu: goto label_212e0c;
        case 0x212e18u: goto label_212e18;
        case 0x212e30u: goto label_212e30;
        case 0x212e5cu: goto label_212e5c;
        case 0x212e6cu: goto label_212e6c;
        case 0x212e78u: goto label_212e78;
        case 0x212ea8u: goto label_212ea8;
        case 0x212ee0u: goto label_212ee0;
        case 0x212eecu: goto label_212eec;
        case 0x212f00u: goto label_212f00;
        case 0x212f0cu: goto label_212f0c;
        case 0x212f20u: goto label_212f20;
        case 0x212f2cu: goto label_212f2c;
        case 0x212f3cu: goto label_212f3c;
        case 0x213024u: goto label_213024;
        case 0x213034u: goto label_213034;
        case 0x213074u: goto label_213074;
        case 0x213094u: goto label_213094;
        case 0x2130a0u: goto label_2130a0;
        case 0x2130acu: goto label_2130ac;
        case 0x2131ccu: goto label_2131cc;
        case 0x213204u: goto label_213204;
        case 0x21322cu: goto label_21322c;
        case 0x21326cu: goto label_21326c;
        case 0x21327cu: goto label_21327c;
        case 0x21328cu: goto label_21328c;
        case 0x21329cu: goto label_21329c;
        case 0x2132b4u: goto label_2132b4;
        case 0x2132c0u: goto label_2132c0;
        case 0x2132d8u: goto label_2132d8;
        case 0x2132ecu: goto label_2132ec;
        case 0x213314u: goto label_213314;
        case 0x21332cu: goto label_21332c;
        case 0x213340u: goto label_213340;
        case 0x213358u: goto label_213358;
        case 0x213368u: goto label_213368;
        case 0x213384u: goto label_213384;
        default: break;
    }

    ctx->pc = 0x212bb0u;

    // 0x212bb0: 0x27bdfe70  addiu       $sp, $sp, -0x190
    ctx->pc = 0x212bb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966896));
    // 0x212bb4: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x212bb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x212bb8: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x212bb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
    // 0x212bbc: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x212bbcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x212bc0: 0x80f02d  daddu       $fp, $a0, $zero
    ctx->pc = 0x212bc0u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x212bc4: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x212bc4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x212bc8: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x212bc8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x212bcc: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x212bccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x212bd0: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x212bd0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x212bd4: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x212bd4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x212bd8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x212bd8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x212bdc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x212bdcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x212be0: 0xafa500dc  sw          $a1, 0xDC($sp)
    ctx->pc = 0x212be0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 220), GPR_U32(ctx, 5));
    // 0x212be4: 0xc064220  jal         func_190880
    ctx->pc = 0x212BE4u;
    SET_GPR_U32(ctx, 31, 0x212BECu);
    ctx->pc = 0x212BE8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x212BE4u;
            // 0x212be8: 0xc0802d  daddu       $s0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x190880u;
    if (runtime->hasFunction(0x190880u)) {
        auto targetFn = runtime->lookupFunction(0x190880u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x212BECu; }
        if (ctx->pc != 0x212BECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetSaveData__Fv_0x190880(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x212BECu; }
        if (ctx->pc != 0x212BECu) { return; }
    }
    ctx->pc = 0x212BECu;
label_212bec:
    // 0x212bec: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x212becu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x212bf0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x212bf0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x212bf4: 0x3421d2a0  ori         $at, $at, 0xD2A0
    ctx->pc = 0x212bf4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)53920);
    // 0x212bf8: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x212bf8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x212bfc: 0x411021  addu        $v0, $v0, $at
    ctx->pc = 0x212bfcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 1)));
    // 0x212c00: 0xafc2006c  sw          $v0, 0x6C($fp)
    ctx->pc = 0x212c00u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 108), GPR_U32(ctx, 2));
    // 0x212c04: 0x8fc2006c  lw          $v0, 0x6C($fp)
    ctx->pc = 0x212c04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 108)));
    // 0x212c08: 0x24424958  addiu       $v0, $v0, 0x4958
    ctx->pc = 0x212c08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 18776));
    // 0x212c0c: 0xaf82920c  sw          $v0, -0x6DF4($gp)
    ctx->pc = 0x212c0cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294939148), GPR_U32(ctx, 2));
    // 0x212c10: 0x8fa200dc  lw          $v0, 0xDC($sp)
    ctx->pc = 0x212c10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 220)));
    // 0x212c14: 0xac400024  sw          $zero, 0x24($v0)
    ctx->pc = 0x212c14u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 36), GPR_U32(ctx, 0));
    // 0x212c18: 0x8fa200dc  lw          $v0, 0xDC($sp)
    ctx->pc = 0x212c18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 220)));
    // 0x212c1c: 0xac40001c  sw          $zero, 0x1C($v0)
    ctx->pc = 0x212c1cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 28), GPR_U32(ctx, 0));
label_212c20:
    // 0x212c20: 0x2043021  addu        $a2, $s0, $a0
    ctx->pc = 0x212c20u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
    // 0x212c24: 0x3c43821  addu        $a3, $fp, $a0
    ctx->pc = 0x212c24u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 4)));
    // 0x212c28: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x212c28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x212c2c: 0x24a50008  addiu       $a1, $a1, 0x8
    ctx->pc = 0x212c2cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
    // 0x212c30: 0x28a20004  slti        $v0, $a1, 0x4
    ctx->pc = 0x212c30u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x212c34: 0x24840020  addiu       $a0, $a0, 0x20
    ctx->pc = 0x212c34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
    // 0x212c38: 0xace30038  sw          $v1, 0x38($a3)
    ctx->pc = 0x212c38u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 56), GPR_U32(ctx, 3));
    // 0x212c3c: 0x8cc30004  lw          $v1, 0x4($a2)
    ctx->pc = 0x212c3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x212c40: 0xace3003c  sw          $v1, 0x3C($a3)
    ctx->pc = 0x212c40u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 60), GPR_U32(ctx, 3));
    // 0x212c44: 0x8cc30008  lw          $v1, 0x8($a2)
    ctx->pc = 0x212c44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x212c48: 0xace30040  sw          $v1, 0x40($a3)
    ctx->pc = 0x212c48u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 64), GPR_U32(ctx, 3));
    // 0x212c4c: 0x8cc3000c  lw          $v1, 0xC($a2)
    ctx->pc = 0x212c4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
    // 0x212c50: 0xace30044  sw          $v1, 0x44($a3)
    ctx->pc = 0x212c50u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 68), GPR_U32(ctx, 3));
    // 0x212c54: 0x8cc30010  lw          $v1, 0x10($a2)
    ctx->pc = 0x212c54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 16)));
    // 0x212c58: 0xace30048  sw          $v1, 0x48($a3)
    ctx->pc = 0x212c58u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 72), GPR_U32(ctx, 3));
    // 0x212c5c: 0x8cc30014  lw          $v1, 0x14($a2)
    ctx->pc = 0x212c5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 20)));
    // 0x212c60: 0xace3004c  sw          $v1, 0x4C($a3)
    ctx->pc = 0x212c60u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 76), GPR_U32(ctx, 3));
    // 0x212c64: 0x8cc30018  lw          $v1, 0x18($a2)
    ctx->pc = 0x212c64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 24)));
    // 0x212c68: 0xace30050  sw          $v1, 0x50($a3)
    ctx->pc = 0x212c68u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 80), GPR_U32(ctx, 3));
    // 0x212c6c: 0x8cc3001c  lw          $v1, 0x1C($a2)
    ctx->pc = 0x212c6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 28)));
    // 0x212c70: 0x1440ffeb  bnez        $v0, . + 4 + (-0x15 << 2)
    ctx->pc = 0x212C70u;
    {
        const bool branch_taken_0x212c70 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x212C74u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x212C70u;
            // 0x212c74: 0xace30054  sw          $v1, 0x54($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 84), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x212c70) {
            ctx->pc = 0x212C20u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_212c20;
        }
    }
    ctx->pc = 0x212C78u;
    // 0x212c78: 0x28a1000c  slti        $at, $a1, 0xC
    ctx->pc = 0x212c78u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)12) ? 1 : 0);
    // 0x212c7c: 0x10200009  beqz        $at, . + 4 + (0x9 << 2)
    ctx->pc = 0x212C7Cu;
    {
        const bool branch_taken_0x212c7c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x212C80u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x212C7Cu;
            // 0x212c80: 0x53080  sll         $a2, $a1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x212c7c) {
            ctx->pc = 0x212CA4u;
            goto label_212ca4;
        }
    }
    ctx->pc = 0x212C84u;
label_212c84:
    // 0x212c84: 0x2061021  addu        $v0, $s0, $a2
    ctx->pc = 0x212c84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 6)));
    // 0x212c88: 0x3c61821  addu        $v1, $fp, $a2
    ctx->pc = 0x212c88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 6)));
    // 0x212c8c: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x212c8cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x212c90: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x212c90u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x212c94: 0x24c60004  addiu       $a2, $a2, 0x4
    ctx->pc = 0x212c94u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
    // 0x212c98: 0x28a2000c  slti        $v0, $a1, 0xC
    ctx->pc = 0x212c98u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)12) ? 1 : 0);
    // 0x212c9c: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x212C9Cu;
    {
        const bool branch_taken_0x212c9c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x212CA0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x212C9Cu;
            // 0x212ca0: 0xac640038  sw          $a0, 0x38($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 56), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x212c9c) {
            ctx->pc = 0x212C84u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_212c84;
        }
    }
    ctx->pc = 0x212CA4u;
label_212ca4:
    // 0x212ca4: 0x0  nop
    ctx->pc = 0x212ca4u;
    // NOP
    // 0x212ca8: 0x51080  sll         $v0, $a1, 2
    ctx->pc = 0x212ca8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x212cac: 0x5e1021  addu        $v0, $v0, $fp
    ctx->pc = 0x212cacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 30)));
    // 0x212cb0: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x212cb0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x212cb4: 0xac430038  sw          $v1, 0x38($v0)
    ctx->pc = 0x212cb4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 56), GPR_U32(ctx, 3));
    // 0x212cb8: 0xc0944a4  jal         func_251290
    ctx->pc = 0x212CB8u;
    SET_GPR_U32(ctx, 31, 0x212CC0u);
    ctx->pc = 0x212CBCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x212CB8u;
            // 0x212cbc: 0x27c40038  addiu       $a0, $fp, 0x38 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 30), 56));
        ctx->in_delay_slot = false;
    ctx->pc = 0x251290u;
    if (runtime->hasFunction(0x251290u)) {
        auto targetFn = runtime->lookupFunction(0x251290u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x212CC0u; }
        if (ctx->pc != 0x212CC0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuDeleteTextureBlock__FPi_0x251290(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x212CC0u; }
        if (ctx->pc != 0x212CC0u) { return; }
    }
    ctx->pc = 0x212CC0u;
label_212cc0:
    // 0x212cc0: 0x87c30038  lh          $v1, 0x38($fp)
    ctx->pc = 0x212cc0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 30), 56)));
    // 0x212cc4: 0x27c2004c  addiu       $v0, $fp, 0x4C
    ctx->pc = 0x212cc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 30), 76));
    // 0x212cc8: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x212cc8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x212ccc: 0x27a400e0  addiu       $a0, $sp, 0xE0
    ctx->pc = 0x212cccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x212cd0: 0xa7c300b4  sh          $v1, 0xB4($fp)
    ctx->pc = 0x212cd0u;
    WRITE16(ADD32(GPR_U32(ctx, 30), 180), (uint16_t)GPR_U32(ctx, 3));
    // 0x212cd4: 0x87c3003c  lh          $v1, 0x3C($fp)
    ctx->pc = 0x212cd4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 30), 60)));
    // 0x212cd8: 0xa7c300b0  sh          $v1, 0xB0($fp)
    ctx->pc = 0x212cd8u;
    WRITE16(ADD32(GPR_U32(ctx, 30), 176), (uint16_t)GPR_U32(ctx, 3));
    // 0x212cdc: 0x87c3003c  lh          $v1, 0x3C($fp)
    ctx->pc = 0x212cdcu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 30), 60)));
    // 0x212ce0: 0xa7c300b2  sh          $v1, 0xB2($fp)
    ctx->pc = 0x212ce0u;
    WRITE16(ADD32(GPR_U32(ctx, 30), 178), (uint16_t)GPR_U32(ctx, 3));
    // 0x212ce4: 0x87c3003c  lh          $v1, 0x3C($fp)
    ctx->pc = 0x212ce4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 30), 60)));
    // 0x212ce8: 0xa7c300bc  sh          $v1, 0xBC($fp)
    ctx->pc = 0x212ce8u;
    WRITE16(ADD32(GPR_U32(ctx, 30), 188), (uint16_t)GPR_U32(ctx, 3));
    // 0x212cec: 0x87c30040  lh          $v1, 0x40($fp)
    ctx->pc = 0x212cecu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 30), 64)));
    // 0x212cf0: 0xa7c30190  sh          $v1, 0x190($fp)
    ctx->pc = 0x212cf0u;
    WRITE16(ADD32(GPR_U32(ctx, 30), 400), (uint16_t)GPR_U32(ctx, 3));
    // 0x212cf4: 0x87c30044  lh          $v1, 0x44($fp)
    ctx->pc = 0x212cf4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 30), 68)));
    // 0x212cf8: 0xa7c30324  sh          $v1, 0x324($fp)
    ctx->pc = 0x212cf8u;
    WRITE16(ADD32(GPR_U32(ctx, 30), 804), (uint16_t)GPR_U32(ctx, 3));
    // 0x212cfc: 0x87c30048  lh          $v1, 0x48($fp)
    ctx->pc = 0x212cfcu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 30), 72)));
    // 0x212d00: 0xa7c30386  sh          $v1, 0x386($fp)
    ctx->pc = 0x212d00u;
    WRITE16(ADD32(GPR_U32(ctx, 30), 902), (uint16_t)GPR_U32(ctx, 3));
    // 0x212d04: 0x87c3004c  lh          $v1, 0x4C($fp)
    ctx->pc = 0x212d04u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 30), 76)));
    // 0x212d08: 0xa7c302cc  sh          $v1, 0x2CC($fp)
    ctx->pc = 0x212d08u;
    WRITE16(ADD32(GPR_U32(ctx, 30), 716), (uint16_t)GPR_U32(ctx, 3));
    // 0x212d0c: 0x87c30050  lh          $v1, 0x50($fp)
    ctx->pc = 0x212d0cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 30), 80)));
    // 0x212d10: 0xa7c302ce  sh          $v1, 0x2CE($fp)
    ctx->pc = 0x212d10u;
    WRITE16(ADD32(GPR_U32(ctx, 30), 718), (uint16_t)GPR_U32(ctx, 3));
    // 0x212d14: 0x87c30054  lh          $v1, 0x54($fp)
    ctx->pc = 0x212d14u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 30), 84)));
    // 0x212d18: 0xa7c302d0  sh          $v1, 0x2D0($fp)
    ctx->pc = 0x212d18u;
    WRITE16(ADD32(GPR_U32(ctx, 30), 720), (uint16_t)GPR_U32(ctx, 3));
    // 0x212d1c: 0x87c30058  lh          $v1, 0x58($fp)
    ctx->pc = 0x212d1cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 30), 88)));
    // 0x212d20: 0xa7c302d2  sh          $v1, 0x2D2($fp)
    ctx->pc = 0x212d20u;
    WRITE16(ADD32(GPR_U32(ctx, 30), 722), (uint16_t)GPR_U32(ctx, 3));
    // 0x212d24: 0x87c3005c  lh          $v1, 0x5C($fp)
    ctx->pc = 0x212d24u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 30), 92)));
    // 0x212d28: 0xa7c302d4  sh          $v1, 0x2D4($fp)
    ctx->pc = 0x212d28u;
    WRITE16(ADD32(GPR_U32(ctx, 30), 724), (uint16_t)GPR_U32(ctx, 3));
    // 0x212d2c: 0x87c30060  lh          $v1, 0x60($fp)
    ctx->pc = 0x212d2cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 30), 96)));
    // 0x212d30: 0xa7c302d6  sh          $v1, 0x2D6($fp)
    ctx->pc = 0x212d30u;
    WRITE16(ADD32(GPR_U32(ctx, 30), 726), (uint16_t)GPR_U32(ctx, 3));
    // 0x212d34: 0xaf8291b8  sw          $v0, -0x6E48($gp)
    ctx->pc = 0x212d34u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294939064), GPR_U32(ctx, 2));
    // 0x212d38: 0xafc00340  sw          $zero, 0x340($fp)
    ctx->pc = 0x212d38u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 832), GPR_U32(ctx, 0));
    // 0x212d3c: 0xac20d5b4  sw          $zero, -0x2A4C($at)
    ctx->pc = 0x212d3cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294956468), GPR_U32(ctx, 0));
    // 0x212d40: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x212d40u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x212d44: 0xc04e640  jal         func_139900
    ctx->pc = 0x212D44u;
    SET_GPR_U32(ctx, 31, 0x212D4Cu);
    ctx->pc = 0x212D48u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x212D44u;
            // 0x212d48: 0xac20d5ac  sw          $zero, -0x2A54($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 4294956460), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139900u;
    if (runtime->hasFunction(0x139900u)) {
        auto targetFn = runtime->lookupFunction(0x139900u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x212D4Cu; }
        if (ctx->pc != 0x212D4Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Init__9mgCMemoryFv_0x139900(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x212D4Cu; }
        if (ctx->pc != 0x212D4Cu) { return; }
    }
    ctx->pc = 0x212D4Cu;
label_212d4c:
    // 0x212d4c: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x212d4cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x212d50: 0x27a400e0  addiu       $a0, $sp, 0xE0
    ctx->pc = 0x212d50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x212d54: 0x8c23d5b4  lw          $v1, -0x2A4C($at)
    ctx->pc = 0x212d54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294956468)));
    // 0x212d58: 0x24060080  addiu       $a2, $zero, 0x80
    ctx->pc = 0x212d58u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x212d5c: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x212d5cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x212d60: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x212d60u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x212d64: 0x8c22d5b0  lw          $v0, -0x2A50($at)
    ctx->pc = 0x212d64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294956464)));
    // 0x212d68: 0xc04e79c  jal         func_139E70
    ctx->pc = 0x212D68u;
    SET_GPR_U32(ctx, 31, 0x212D70u);
    ctx->pc = 0x212D6Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x212D68u;
            // 0x212d6c: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139E70u;
    if (runtime->hasFunction(0x139E70u)) {
        auto targetFn = runtime->lookupFunction(0x139E70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x212D70u; }
        if (ctx->pc != 0x212D70u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        stSetBuffer__9mgCMemoryFP1i_0x139e70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x212D70u; }
        if (ctx->pc != 0x212D70u) { return; }
    }
    ctx->pc = 0x212D70u;
label_212d70:
    // 0x212d70: 0x3c0401ed  lui         $a0, 0x1ED
    ctx->pc = 0x212d70u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)493 << 16));
    // 0x212d74: 0x24050080  addiu       $a1, $zero, 0x80
    ctx->pc = 0x212d74u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x212d78: 0xc04e748  jal         func_139D20
    ctx->pc = 0x212D78u;
    SET_GPR_U32(ctx, 31, 0x212D80u);
    ctx->pc = 0x212D7Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x212D78u;
            // 0x212d7c: 0x2484d590  addiu       $a0, $a0, -0x2A70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294956432));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139D20u;
    if (runtime->hasFunction(0x139D20u)) {
        auto targetFn = runtime->lookupFunction(0x139D20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x212D80u; }
        if (ctx->pc != 0x212D80u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Alloc__9mgCMemoryFi_0x139d20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x212D80u; }
        if (ctx->pc != 0x212D80u) { return; }
    }
    ctx->pc = 0x212D80u;
label_212d80:
    // 0x212d80: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x212d80u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x212d84: 0x27c40160  addiu       $a0, $fp, 0x160
    ctx->pc = 0x212d84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 30), 352));
    // 0x212d88: 0x8c23d5b4  lw          $v1, -0x2A4C($at)
    ctx->pc = 0x212d88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294956468)));
    // 0x212d8c: 0x24064650  addiu       $a2, $zero, 0x4650
    ctx->pc = 0x212d8cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 18000));
    // 0x212d90: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x212d90u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x212d94: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x212d94u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x212d98: 0x8c22d5b0  lw          $v0, -0x2A50($at)
    ctx->pc = 0x212d98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294956464)));
    // 0x212d9c: 0xc04e79c  jal         func_139E70
    ctx->pc = 0x212D9Cu;
    SET_GPR_U32(ctx, 31, 0x212DA4u);
    ctx->pc = 0x212DA0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x212D9Cu;
            // 0x212da0: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139E70u;
    if (runtime->hasFunction(0x139E70u)) {
        auto targetFn = runtime->lookupFunction(0x139E70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x212DA4u; }
        if (ctx->pc != 0x212DA4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        stSetBuffer__9mgCMemoryFP1i_0x139e70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x212DA4u; }
        if (ctx->pc != 0x212DA4u) { return; }
    }
    ctx->pc = 0x212DA4u;
label_212da4:
    // 0x212da4: 0x3c0401ed  lui         $a0, 0x1ED
    ctx->pc = 0x212da4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)493 << 16));
    // 0x212da8: 0x24054650  addiu       $a1, $zero, 0x4650
    ctx->pc = 0x212da8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 18000));
    // 0x212dac: 0xc04e748  jal         func_139D20
    ctx->pc = 0x212DACu;
    SET_GPR_U32(ctx, 31, 0x212DB4u);
    ctx->pc = 0x212DB0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x212DACu;
            // 0x212db0: 0x2484d590  addiu       $a0, $a0, -0x2A70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294956432));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139D20u;
    if (runtime->hasFunction(0x139D20u)) {
        auto targetFn = runtime->lookupFunction(0x139D20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x212DB4u; }
        if (ctx->pc != 0x212DB4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Alloc__9mgCMemoryFi_0x139d20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x212DB4u; }
        if (ctx->pc != 0x212DB4u) { return; }
    }
    ctx->pc = 0x212DB4u;
label_212db4:
    // 0x212db4: 0x3c0401ed  lui         $a0, 0x1ED
    ctx->pc = 0x212db4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)493 << 16));
    // 0x212db8: 0xc04e780  jal         func_139E00
    ctx->pc = 0x212DB8u;
    SET_GPR_U32(ctx, 31, 0x212DC0u);
    ctx->pc = 0x212DBCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x212DB8u;
            // 0x212dbc: 0x2484d590  addiu       $a0, $a0, -0x2A70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294956432));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139E00u;
    if (runtime->hasFunction(0x139E00u)) {
        auto targetFn = runtime->lookupFunction(0x139E00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x212DC0u; }
        if (ctx->pc != 0x212DC0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Align64__9mgCMemoryFv_0x139e00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x212DC0u; }
        if (ctx->pc != 0x212DC0u) { return; }
    }
    ctx->pc = 0x212DC0u;
label_212dc0:
    // 0x212dc0: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x212dc0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x212dc4: 0x27c400c8  addiu       $a0, $fp, 0xC8
    ctx->pc = 0x212dc4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 30), 200));
    // 0x212dc8: 0x8c23d5b4  lw          $v1, -0x2A4C($at)
    ctx->pc = 0x212dc8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294956468)));
    // 0x212dcc: 0x24061e00  addiu       $a2, $zero, 0x1E00
    ctx->pc = 0x212dccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 7680));
    // 0x212dd0: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x212dd0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x212dd4: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x212dd4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x212dd8: 0x8c22d5b0  lw          $v0, -0x2A50($at)
    ctx->pc = 0x212dd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294956464)));
    // 0x212ddc: 0xc04e79c  jal         func_139E70
    ctx->pc = 0x212DDCu;
    SET_GPR_U32(ctx, 31, 0x212DE4u);
    ctx->pc = 0x212DE0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x212DDCu;
            // 0x212de0: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139E70u;
    if (runtime->hasFunction(0x139E70u)) {
        auto targetFn = runtime->lookupFunction(0x139E70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x212DE4u; }
        if (ctx->pc != 0x212DE4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        stSetBuffer__9mgCMemoryFP1i_0x139e70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x212DE4u; }
        if (ctx->pc != 0x212DE4u) { return; }
    }
    ctx->pc = 0x212DE4u;
label_212de4:
    // 0x212de4: 0x3c0401ed  lui         $a0, 0x1ED
    ctx->pc = 0x212de4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)493 << 16));
    // 0x212de8: 0x24051e00  addiu       $a1, $zero, 0x1E00
    ctx->pc = 0x212de8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7680));
    // 0x212dec: 0xc04e748  jal         func_139D20
    ctx->pc = 0x212DECu;
    SET_GPR_U32(ctx, 31, 0x212DF4u);
    ctx->pc = 0x212DF0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x212DECu;
            // 0x212df0: 0x2484d590  addiu       $a0, $a0, -0x2A70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294956432));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139D20u;
    if (runtime->hasFunction(0x139D20u)) {
        auto targetFn = runtime->lookupFunction(0x139D20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x212DF4u; }
        if (ctx->pc != 0x212DF4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Alloc__9mgCMemoryFi_0x139d20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x212DF4u; }
        if (ctx->pc != 0x212DF4u) { return; }
    }
    ctx->pc = 0x212DF4u;
label_212df4:
    // 0x212df4: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x212df4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x212df8: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x212df8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_212dfc:
    // 0x212dfc: 0x3c0401ed  lui         $a0, 0x1ED
    ctx->pc = 0x212dfcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)493 << 16));
    // 0x212e00: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x212e00u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x212e04: 0xc04e748  jal         func_139D20
    ctx->pc = 0x212E04u;
    SET_GPR_U32(ctx, 31, 0x212E0Cu);
    ctx->pc = 0x212E08u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x212E04u;
            // 0x212e08: 0x2484d590  addiu       $a0, $a0, -0x2A70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294956432));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139D20u;
    if (runtime->hasFunction(0x139D20u)) {
        auto targetFn = runtime->lookupFunction(0x139D20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x212E0Cu; }
        if (ctx->pc != 0x212E0Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Alloc__9mgCMemoryFi_0x139d20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x212E0Cu; }
        if (ctx->pc != 0x212E0Cu) { return; }
    }
    ctx->pc = 0x212E0Cu;
label_212e0c:
    // 0x212e0c: 0x24040010  addiu       $a0, $zero, 0x10
    ctx->pc = 0x212e0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x212e10: 0xc04e638  jal         func_1398E0
    ctx->pc = 0x212E10u;
    SET_GPR_U32(ctx, 31, 0x212E18u);
    ctx->pc = 0x212E14u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x212E10u;
            // 0x212e14: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1398E0u;
    if (runtime->hasFunction(0x1398E0u)) {
        auto targetFn = runtime->lookupFunction(0x1398E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x212E18u; }
        if (ctx->pc != 0x212E18u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___nw__FUiP1_0x1398e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x212E18u; }
        if (ctx->pc != 0x212E18u) { return; }
    }
    ctx->pc = 0x212E18u;
label_212e18:
    // 0x212e18: 0x3c0301ed  lui         $v1, 0x1ED
    ctx->pc = 0x212e18u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)493 << 16));
    // 0x212e1c: 0x2463c480  addiu       $v1, $v1, -0x3B80
    ctx->pc = 0x212e1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294952064));
    // 0x212e20: 0x711821  addu        $v1, $v1, $s1
    ctx->pc = 0x212e20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x212e24: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x212e24u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x212e28: 0xc083bcc  jal         func_20EF30
    ctx->pc = 0x212E28u;
    SET_GPR_U32(ctx, 31, 0x212E30u);
    ctx->pc = 0x212E2Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x212E28u;
            // 0x212e2c: 0x8c640000  lw          $a0, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x20EF30u;
    if (runtime->hasFunction(0x20EF30u)) {
        auto targetFn = runtime->lookupFunction(0x20EF30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x212E30u; }
        if (ctx->pc != 0x212E30u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Initialize__12CAquaFishEffFv_0x20ef30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x212E30u; }
        if (ctx->pc != 0x212E30u) { return; }
    }
    ctx->pc = 0x212E30u;
label_212e30:
    // 0x212e30: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x212e30u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x212e34: 0x2a020006  slti        $v0, $s0, 0x6
    ctx->pc = 0x212e34u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)6) ? 1 : 0);
    // 0x212e38: 0x1440fff0  bnez        $v0, . + 4 + (-0x10 << 2)
    ctx->pc = 0x212E38u;
    {
        const bool branch_taken_0x212e38 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x212E3Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x212E38u;
            // 0x212e3c: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x212e38) {
            ctx->pc = 0x212DFCu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_212dfc;
        }
    }
    ctx->pc = 0x212E40u;
    // 0x212e40: 0x3c020035  lui         $v0, 0x35
    ctx->pc = 0x212e40u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)53 << 16));
    // 0x212e44: 0x27a30110  addiu       $v1, $sp, 0x110
    ctx->pc = 0x212e44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    // 0x212e48: 0x2442fbd0  addiu       $v0, $v0, -0x430
    ctx->pc = 0x212e48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966224));
    // 0x212e4c: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x212e4cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x212e50: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x212e50u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x212e54: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x212e54u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x212e58: 0x7c620000  sq          $v0, 0x0($v1)
    ctx->pc = 0x212e58u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
label_212e5c:
    // 0x212e5c: 0x3c0401ed  lui         $a0, 0x1ED
    ctx->pc = 0x212e5cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)493 << 16));
    // 0x212e60: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x212e60u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x212e64: 0xc04e748  jal         func_139D20
    ctx->pc = 0x212E64u;
    SET_GPR_U32(ctx, 31, 0x212E6Cu);
    ctx->pc = 0x212E68u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x212E64u;
            // 0x212e68: 0x2484d590  addiu       $a0, $a0, -0x2A70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294956432));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139D20u;
    if (runtime->hasFunction(0x139D20u)) {
        auto targetFn = runtime->lookupFunction(0x139D20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x212E6Cu; }
        if (ctx->pc != 0x212E6Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Alloc__9mgCMemoryFi_0x139d20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x212E6Cu; }
        if (ctx->pc != 0x212E6Cu) { return; }
    }
    ctx->pc = 0x212E6Cu;
label_212e6c:
    // 0x212e6c: 0x24040040  addiu       $a0, $zero, 0x40
    ctx->pc = 0x212e6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x212e70: 0xc04e638  jal         func_1398E0
    ctx->pc = 0x212E70u;
    SET_GPR_U32(ctx, 31, 0x212E78u);
    ctx->pc = 0x212E74u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x212E70u;
            // 0x212e74: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1398E0u;
    if (runtime->hasFunction(0x1398E0u)) {
        auto targetFn = runtime->lookupFunction(0x1398E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x212E78u; }
        if (ctx->pc != 0x212E78u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___nw__FUiP1_0x1398e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x212E78u; }
        if (ctx->pc != 0x212E78u) { return; }
    }
    ctx->pc = 0x212E78u;
label_212e78:
    // 0x212e78: 0x3c0401ed  lui         $a0, 0x1ED
    ctx->pc = 0x212e78u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)493 << 16));
    // 0x212e7c: 0x3c03423c  lui         $v1, 0x423C
    ctx->pc = 0x212e7cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16956 << 16));
    // 0x212e80: 0x2484c450  addiu       $a0, $a0, -0x3BB0
    ctx->pc = 0x212e80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294952016));
    // 0x212e84: 0x3c0501ed  lui         $a1, 0x1ED
    ctx->pc = 0x212e84u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)493 << 16));
    // 0x212e88: 0x919021  addu        $s2, $a0, $s1
    ctx->pc = 0x212e88u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 17)));
    // 0x212e8c: 0x24a5d590  addiu       $a1, $a1, -0x2A70
    ctx->pc = 0x212e8cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294956432));
    // 0x212e90: 0xae420000  sw          $v0, 0x0($s2)
    ctx->pc = 0x212e90u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
    // 0x212e94: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x212e94u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x212e98: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x212e98u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x212e9c: 0x27a60110  addiu       $a2, $sp, 0x110
    ctx->pc = 0x212e9cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    // 0x212ea0: 0xc08344c  jal         func_20D130
    ctx->pc = 0x212EA0u;
    SET_GPR_U32(ctx, 31, 0x212EA8u);
    ctx->pc = 0x212EA4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x212EA0u;
            // 0x212ea4: 0x24070088  addiu       $a3, $zero, 0x88 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 136));
        ctx->in_delay_slot = false;
    ctx->pc = 0x20D130u;
    if (runtime->hasFunction(0x20D130u)) {
        auto targetFn = runtime->lookupFunction(0x20D130u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x212EA8u; }
        if (ctx->pc != 0x212EA8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Initialize__7CBubbleFP9mgCMemoryPfif_0x20d130(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x212EA8u; }
        if (ctx->pc != 0x212EA8u) { return; }
    }
    ctx->pc = 0x212EA8u;
label_212ea8:
    // 0x212ea8: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x212ea8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x212eac: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x212eacu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x212eb0: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x212eb0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x212eb4: 0x26310004  addiu       $s1, $s1, 0x4
    ctx->pc = 0x212eb4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
    // 0x212eb8: 0x2a020006  slti        $v0, $s0, 0x6
    ctx->pc = 0x212eb8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)6) ? 1 : 0);
    // 0x212ebc: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x212ebcu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x212ec0: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x212ec0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x212ec4: 0xa0600001  sb          $zero, 0x1($v1)
    ctx->pc = 0x212ec4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x212ec8: 0x1440ffe4  bnez        $v0, . + 4 + (-0x1C << 2)
    ctx->pc = 0x212EC8u;
    {
        const bool branch_taken_0x212ec8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x212ECCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x212EC8u;
            // 0x212ecc: 0xac600004  sw          $zero, 0x4($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x212ec8) {
            ctx->pc = 0x212E5Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_212e5c;
        }
    }
    ctx->pc = 0x212ED0u;
    // 0x212ed0: 0x3c0401ed  lui         $a0, 0x1ED
    ctx->pc = 0x212ed0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)493 << 16));
    // 0x212ed4: 0x2405003e  addiu       $a1, $zero, 0x3E
    ctx->pc = 0x212ed4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 62));
    // 0x212ed8: 0xc04e748  jal         func_139D20
    ctx->pc = 0x212ED8u;
    SET_GPR_U32(ctx, 31, 0x212EE0u);
    ctx->pc = 0x212EDCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x212ED8u;
            // 0x212edc: 0x2484d590  addiu       $a0, $a0, -0x2A70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294956432));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139D20u;
    if (runtime->hasFunction(0x139D20u)) {
        auto targetFn = runtime->lookupFunction(0x139D20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x212EE0u; }
        if (ctx->pc != 0x212EE0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Alloc__9mgCMemoryFi_0x139d20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x212EE0u; }
        if (ctx->pc != 0x212EE0u) { return; }
    }
    ctx->pc = 0x212EE0u;
label_212ee0:
    // 0x212ee0: 0x240403c0  addiu       $a0, $zero, 0x3C0
    ctx->pc = 0x212ee0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 960));
    // 0x212ee4: 0xc04e63c  jal         func_1398F0
    ctx->pc = 0x212EE4u;
    SET_GPR_U32(ctx, 31, 0x212EECu);
    ctx->pc = 0x212EE8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x212EE4u;
            // 0x212ee8: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1398F0u;
    if (runtime->hasFunction(0x1398F0u)) {
        auto targetFn = runtime->lookupFunction(0x1398F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x212EECu; }
        if (ctx->pc != 0x212EECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___nwa__FUiP1_0x1398f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x212EECu; }
        if (ctx->pc != 0x212EECu) { return; }
    }
    ctx->pc = 0x212EECu;
label_212eec:
    // 0x212eec: 0x3c0401ed  lui         $a0, 0x1ED
    ctx->pc = 0x212eecu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)493 << 16));
    // 0x212ef0: 0xaf8291e0  sw          $v0, -0x6E20($gp)
    ctx->pc = 0x212ef0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294939104), GPR_U32(ctx, 2));
    // 0x212ef4: 0x2484d590  addiu       $a0, $a0, -0x2A70
    ctx->pc = 0x212ef4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294956432));
    // 0x212ef8: 0xc04e748  jal         func_139D20
    ctx->pc = 0x212EF8u;
    SET_GPR_U32(ctx, 31, 0x212F00u);
    ctx->pc = 0x212EFCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x212EF8u;
            // 0x212efc: 0x2405003e  addiu       $a1, $zero, 0x3E (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 62));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139D20u;
    if (runtime->hasFunction(0x139D20u)) {
        auto targetFn = runtime->lookupFunction(0x139D20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x212F00u; }
        if (ctx->pc != 0x212F00u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Alloc__9mgCMemoryFi_0x139d20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x212F00u; }
        if (ctx->pc != 0x212F00u) { return; }
    }
    ctx->pc = 0x212F00u;
label_212f00:
    // 0x212f00: 0x240403c0  addiu       $a0, $zero, 0x3C0
    ctx->pc = 0x212f00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 960));
    // 0x212f04: 0xc04e63c  jal         func_1398F0
    ctx->pc = 0x212F04u;
    SET_GPR_U32(ctx, 31, 0x212F0Cu);
    ctx->pc = 0x212F08u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x212F04u;
            // 0x212f08: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1398F0u;
    if (runtime->hasFunction(0x1398F0u)) {
        auto targetFn = runtime->lookupFunction(0x1398F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x212F0Cu; }
        if (ctx->pc != 0x212F0Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___nwa__FUiP1_0x1398f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x212F0Cu; }
        if (ctx->pc != 0x212F0Cu) { return; }
    }
    ctx->pc = 0x212F0Cu;
label_212f0c:
    // 0x212f0c: 0x3c0401ed  lui         $a0, 0x1ED
    ctx->pc = 0x212f0cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)493 << 16));
    // 0x212f10: 0xaf8291f0  sw          $v0, -0x6E10($gp)
    ctx->pc = 0x212f10u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294939120), GPR_U32(ctx, 2));
    // 0x212f14: 0x2484d590  addiu       $a0, $a0, -0x2A70
    ctx->pc = 0x212f14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294956432));
    // 0x212f18: 0xc04e748  jal         func_139D20
    ctx->pc = 0x212F18u;
    SET_GPR_U32(ctx, 31, 0x212F20u);
    ctx->pc = 0x212F1Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x212F18u;
            // 0x212f1c: 0x24050020  addiu       $a1, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139D20u;
    if (runtime->hasFunction(0x139D20u)) {
        auto targetFn = runtime->lookupFunction(0x139D20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x212F20u; }
        if (ctx->pc != 0x212F20u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Alloc__9mgCMemoryFi_0x139d20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x212F20u; }
        if (ctx->pc != 0x212F20u) { return; }
    }
    ctx->pc = 0x212F20u;
label_212f20:
    // 0x212f20: 0x240401e0  addiu       $a0, $zero, 0x1E0
    ctx->pc = 0x212f20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 480));
    // 0x212f24: 0xc04e63c  jal         func_1398F0
    ctx->pc = 0x212F24u;
    SET_GPR_U32(ctx, 31, 0x212F2Cu);
    ctx->pc = 0x212F28u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x212F24u;
            // 0x212f28: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1398F0u;
    if (runtime->hasFunction(0x1398F0u)) {
        auto targetFn = runtime->lookupFunction(0x1398F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x212F2Cu; }
        if (ctx->pc != 0x212F2Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___nwa__FUiP1_0x1398f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x212F2Cu; }
        if (ctx->pc != 0x212F2Cu) { return; }
    }
    ctx->pc = 0x212F2Cu;
label_212f2c:
    // 0x212f2c: 0xaf8291f4  sw          $v0, -0x6E0C($gp)
    ctx->pc = 0x212f2cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294939124), GPR_U32(ctx, 2));
    // 0x212f30: 0xafa000a0  sw          $zero, 0xA0($sp)
    ctx->pc = 0x212f30u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 0));
    // 0x212f34: 0xafa000c0  sw          $zero, 0xC0($sp)
    ctx->pc = 0x212f34u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 0));
    // 0x212f38: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x212f38u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_212f3c:
    // 0x212f3c: 0x0  nop
    ctx->pc = 0x212f3cu;
    // NOP
    // 0x212f40: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x212f40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x212f44: 0x44962000  mtc1        $s6, $f4
    ctx->pc = 0x212f44u;
    { uint32_t bits = GPR_U32(ctx, 22); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x212f48: 0x3c04c1f8  lui         $a0, 0xC1F8
    ctx->pc = 0x212f48u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)49656 << 16));
    // 0x212f4c: 0x44841800  mtc1        $a0, $f3
    ctx->pc = 0x212f4cu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x212f50: 0x3c110035  lui         $s1, 0x35
    ctx->pc = 0x212f50u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)53 << 16));
    // 0x212f54: 0x46802120  cvt.s.w     $f4, $f4
    ctx->pc = 0x212f54u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[4], sizeof(tmp)); ctx->f[4] = FPU_CVT_S_W(tmp); }
    // 0x212f58: 0x8f8591e0  lw          $a1, -0x6E20($gp)
    ctx->pc = 0x212f58u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939104)));
    // 0x212f5c: 0x3c04c190  lui         $a0, 0xC190
    ctx->pc = 0x212f5cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)49552 << 16));
    // 0x212f60: 0x3c073f80  lui         $a3, 0x3F80
    ctx->pc = 0x212f60u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)16256 << 16));
    // 0x212f64: 0x2631f4b0  addiu       $s1, $s1, -0xB50
    ctx->pc = 0x212f64u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294964400));
    // 0x212f68: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x212f68u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x212f6c: 0x2c21021  addu        $v0, $s6, $v0
    ctx->pc = 0x212f6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 2)));
    // 0x212f70: 0xafa200b0  sw          $v0, 0xB0($sp)
    ctx->pc = 0x212f70u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 2));
    // 0x212f74: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x212f74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x212f78: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x212f78u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x212f7c: 0x2b900  sll         $s7, $v0, 4
    ctx->pc = 0x212f7cu;
    SET_GPR_S32(ctx, 23, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x212f80: 0x3c0240c6  lui         $v0, 0x40C6
    ctx->pc = 0x212f80u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16582 << 16));
    // 0x212f84: 0xb7a821  addu        $s5, $a1, $s7
    ctx->pc = 0x212f84u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 23)));
    // 0x212f88: 0x34436666  ori         $v1, $v0, 0x6666
    ctx->pc = 0x212f88u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)26214);
    // 0x212f8c: 0x3c0541f2  lui         $a1, 0x41F2
    ctx->pc = 0x212f8cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16882 << 16));
    // 0x212f90: 0x44832800  mtc1        $v1, $f5
    ctx->pc = 0x212f90u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
    // 0x212f94: 0x3c024046  lui         $v0, 0x4046
    ctx->pc = 0x212f94u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16454 << 16));
    // 0x212f98: 0x46042902  mul.s       $f4, $f5, $f4
    ctx->pc = 0x212f98u;
    ctx->f[4] = FPU_MUL_S(ctx->f[5], ctx->f[4]);
    // 0x212f9c: 0x34436666  ori         $v1, $v0, 0x6666
    ctx->pc = 0x212f9cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)26214);
    // 0x212fa0: 0x3c0240c0  lui         $v0, 0x40C0
    ctx->pc = 0x212fa0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16576 << 16));
    // 0x212fa4: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x212fa4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x212fa8: 0x0  nop
    ctx->pc = 0x212fa8u;
    // NOP
    // 0x212fac: 0x460418c0  add.s       $f3, $f3, $f4
    ctx->pc = 0x212facu;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[4]);
    // 0x212fb0: 0x3c024207  lui         $v0, 0x4207
    ctx->pc = 0x212fb0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16903 << 16));
    // 0x212fb4: 0x34483333  ori         $t0, $v0, 0x3333
    ctx->pc = 0x212fb4u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)13107);
    // 0x212fb8: 0x3c0241b9  lui         $v0, 0x41B9
    ctx->pc = 0x212fb8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16825 << 16));
    // 0x212fbc: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x212fbcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x212fc0: 0x34463334  ori         $a2, $v0, 0x3334
    ctx->pc = 0x212fc0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)13108);
    // 0x212fc4: 0x3c024215  lui         $v0, 0x4215
    ctx->pc = 0x212fc4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16917 << 16));
    // 0x212fc8: 0x46030840  add.s       $f1, $f1, $f3
    ctx->pc = 0x212fc8u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[3]);
    // 0x212fcc: 0x3c034040  lui         $v1, 0x4040
    ctx->pc = 0x212fccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16448 << 16));
    // 0x212fd0: 0x34446667  ori         $a0, $v0, 0x6667
    ctx->pc = 0x212fd0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)26215);
    // 0x212fd4: 0x3c024231  lui         $v0, 0x4231
    ctx->pc = 0x212fd4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16945 << 16));
    // 0x212fd8: 0x44833000  mtc1        $v1, $f6
    ctx->pc = 0x212fd8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[6], &bits, sizeof(bits)); }
    // 0x212fdc: 0xe6a10000  swc1        $f1, 0x0($s5)
    ctx->pc = 0x212fdcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 0), bits); }
    // 0x212fe0: 0x3443cccd  ori         $v1, $v0, 0xCCCD
    ctx->pc = 0x212fe0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x212fe4: 0x8fa200a0  lw          $v0, 0xA0($sp)
    ctx->pc = 0x212fe4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x212fe8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x212fe8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x212fec: 0x0  nop
    ctx->pc = 0x212fecu;
    // NOP
    // 0x212ff0: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x212ff0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x212ff4: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x212ff4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x212ff8: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x212ff8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x212ffc: 0x46003000  add.s       $f0, $f6, $f0
    ctx->pc = 0x212ffcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[6], ctx->f[0]);
    // 0x213000: 0xe6a00008  swc1        $f0, 0x8($s5)
    ctx->pc = 0x213000u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 8), bits); }
    // 0x213004: 0xaea80004  sw          $t0, 0x4($s5)
    ctx->pc = 0x213004u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 4), GPR_U32(ctx, 8));
    // 0x213008: 0xaea7000c  sw          $a3, 0xC($s5)
    ctx->pc = 0x213008u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 12), GPR_U32(ctx, 7));
    // 0x21300c: 0x8f8291e0  lw          $v0, -0x6E20($gp)
    ctx->pc = 0x21300cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939104)));
    // 0x213010: 0x578021  addu        $s0, $v0, $s7
    ctx->pc = 0x213010u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 23)));
    // 0x213014: 0xae060000  sw          $a2, 0x0($s0)
    ctx->pc = 0x213014u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 6));
    // 0x213018: 0xae050004  sw          $a1, 0x4($s0)
    ctx->pc = 0x213018u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 5));
    // 0x21301c: 0xae040008  sw          $a0, 0x8($s0)
    ctx->pc = 0x21301cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 4));
    // 0x213020: 0xae03000c  sw          $v1, 0xC($s0)
    ctx->pc = 0x213020u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 3));
label_213024:
    // 0x213024: 0x0  nop
    ctx->pc = 0x213024u;
    // NOP
    // 0x213028: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x213028u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21302c: 0xc04c028  jal         func_1300A0
    ctx->pc = 0x21302Cu;
    SET_GPR_U32(ctx, 31, 0x213034u);
    ctx->pc = 0x213030u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21302Cu;
            // 0x213030: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1300A0u;
    if (runtime->hasFunction(0x1300A0u)) {
        auto targetFn = runtime->lookupFunction(0x1300A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x213034u; }
        if (ctx->pc != 0x213034u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgDistVectorXZ__FPfPf_0x1300a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x213034u; }
        if (ctx->pc != 0x213034u) { return; }
    }
    ctx->pc = 0x213034u;
label_213034:
    // 0x213034: 0x3c0240f6  lui         $v0, 0x40F6
    ctx->pc = 0x213034u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16630 << 16));
    // 0x213038: 0x34426666  ori         $v0, $v0, 0x6666
    ctx->pc = 0x213038u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)26214);
    // 0x21303c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x21303cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x213040: 0x0  nop
    ctx->pc = 0x213040u;
    // NOP
    // 0x213044: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x213044u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x213048: 0x0  nop
    ctx->pc = 0x213048u;
    // NOP
    // 0x21304c: 0x45000041  bc1f        . + 4 + (0x41 << 2)
    ctx->pc = 0x21304Cu;
    {
        const bool branch_taken_0x21304c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x21304c) {
            ctx->pc = 0x213154u;
            goto label_213154;
        }
    }
    ctx->pc = 0x213054u;
    // 0x213054: 0xc6a00000  lwc1        $f0, 0x0($s5)
    ctx->pc = 0x213054u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x213058: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x213058u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x21305c: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x21305cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x213060: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x213060u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x213064: 0xe7a00120  swc1        $f0, 0x120($sp)
    ctx->pc = 0x213064u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 288), bits); }
    // 0x213068: 0xc6a00008  lwc1        $f0, 0x8($s5)
    ctx->pc = 0x213068u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x21306c: 0xe7a00128  swc1        $f0, 0x128($sp)
    ctx->pc = 0x21306cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 296), bits); }
    // 0x213070: 0xafa2012c  sw          $v0, 0x12C($sp)
    ctx->pc = 0x213070u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 300), GPR_U32(ctx, 2));
label_213074:
    // 0x213074: 0x0  nop
    ctx->pc = 0x213074u;
    // NOP
    // 0x213078: 0x2141021  addu        $v0, $s0, $s4
    ctx->pc = 0x213078u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 20)));
    // 0x21307c: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x21307cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x213080: 0x27a40130  addiu       $a0, $sp, 0x130
    ctx->pc = 0x213080u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
    // 0x213084: 0x27a50120  addiu       $a1, $sp, 0x120
    ctx->pc = 0x213084u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
    // 0x213088: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x213088u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21308c: 0xc041c3e  jal         func_1070F8
    ctx->pc = 0x21308Cu;
    SET_GPR_U32(ctx, 31, 0x213094u);
    ctx->pc = 0x213090u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21308Cu;
            // 0x213090: 0xe7a00124  swc1        $f0, 0x124($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 292), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x1070F8u;
    if (runtime->hasFunction(0x1070F8u)) {
        auto targetFn = runtime->lookupFunction(0x1070F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x213094u; }
        if (ctx->pc != 0x213094u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0SubVector_0x1070f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x213094u; }
        if (ctx->pc != 0x213094u) { return; }
    }
    ctx->pc = 0x213094u;
label_213094:
    // 0x213094: 0x27a40130  addiu       $a0, $sp, 0x130
    ctx->pc = 0x213094u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
    // 0x213098: 0xc041be0  jal         func_106F80
    ctx->pc = 0x213098u;
    SET_GPR_U32(ctx, 31, 0x2130A0u);
    ctx->pc = 0x21309Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x213098u;
            // 0x21309c: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x106F80u;
    if (runtime->hasFunction(0x106F80u)) {
        auto targetFn = runtime->lookupFunction(0x106F80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2130A0u; }
        if (ctx->pc != 0x2130A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0Normalize_0x106f80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2130A0u; }
        if (ctx->pc != 0x2130A0u) { return; }
    }
    ctx->pc = 0x2130A0u;
label_2130a0:
    // 0x2130a0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2130a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2130a4: 0xc04c018  jal         func_130060
    ctx->pc = 0x2130A4u;
    SET_GPR_U32(ctx, 31, 0x2130ACu);
    ctx->pc = 0x2130A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2130A4u;
            // 0x2130a8: 0x27a50120  addiu       $a1, $sp, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
        ctx->in_delay_slot = false;
    ctx->pc = 0x130060u;
    if (runtime->hasFunction(0x130060u)) {
        auto targetFn = runtime->lookupFunction(0x130060u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2130ACu; }
        if (ctx->pc != 0x2130ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgDistVector__FPfPf_0x130060(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2130ACu; }
        if (ctx->pc != 0x2130ACu) { return; }
    }
    ctx->pc = 0x2130ACu;
label_2130ac:
    // 0x2130ac: 0xc7a40134  lwc1        $f4, 0x134($sp)
    ctx->pc = 0x2130acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 308)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x2130b0: 0x3c0241e3  lui         $v0, 0x41E3
    ctx->pc = 0x2130b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16867 << 16));
    // 0x2130b4: 0x34433333  ori         $v1, $v0, 0x3333
    ctx->pc = 0x2130b4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)13107);
    // 0x2130b8: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x2130b8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x2130bc: 0x3c024063  lui         $v0, 0x4063
    ctx->pc = 0x2130bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16483 << 16));
    // 0x2130c0: 0x26940004  addiu       $s4, $s4, 0x4
    ctx->pc = 0x2130c0u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4));
    // 0x2130c4: 0x34423333  ori         $v0, $v0, 0x3333
    ctx->pc = 0x2130c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)13107);
    // 0x2130c8: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x2130c8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2130cc: 0x44831800  mtc1        $v1, $f3
    ctx->pc = 0x2130ccu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x2130d0: 0x46040102  mul.s       $f4, $f0, $f4
    ctx->pc = 0x2130d0u;
    ctx->f[4] = FPU_MUL_S(ctx->f[0], ctx->f[4]);
    // 0x2130d4: 0x3c024040  lui         $v0, 0x4040
    ctx->pc = 0x2130d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16448 << 16));
    // 0x2130d8: 0x46041801  sub.s       $f0, $f3, $f4
    ctx->pc = 0x2130d8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[3], ctx->f[4]);
    // 0x2130dc: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x2130dcu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    // 0x2130e0: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2130e0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2130e4: 0x0  nop
    ctx->pc = 0x2130e4u;
    // NOP
    // 0x2130e8: 0x46010083  div.s       $f2, $f0, $f1
    ctx->pc = 0x2130e8u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[2] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x2130ec: 0x2a620002  slti        $v0, $s3, 0x2
    ctx->pc = 0x2130ecu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x2130f0: 0x0  nop
    ctx->pc = 0x2130f0u;
    // NOP
    // 0x2130f4: 0x0  nop
    ctx->pc = 0x2130f4u;
    // NOP
    // 0x2130f8: 0x1440ffde  bnez        $v0, . + 4 + (-0x22 << 2)
    ctx->pc = 0x2130F8u;
    {
        const bool branch_taken_0x2130f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2130f8) {
            ctx->pc = 0x213074u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_213074;
        }
    }
    ctx->pc = 0x213100u;
    // 0x213100: 0x3c02419c  lui         $v0, 0x419C
    ctx->pc = 0x213100u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16796 << 16));
    // 0x213104: 0x3c043f40  lui         $a0, 0x3F40
    ctx->pc = 0x213104u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16192 << 16));
    // 0x213108: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x213108u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x21310c: 0x3c033f00  lui         $v1, 0x3F00
    ctx->pc = 0x21310cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16128 << 16));
    // 0x213110: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x213110u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x213114: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x213114u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x213118: 0x0  nop
    ctx->pc = 0x213118u;
    // NOP
    // 0x21311c: 0x460408c0  add.s       $f3, $f1, $f4
    ctx->pc = 0x21311cu;
    ctx->f[3] = FPU_ADD_S(ctx->f[1], ctx->f[4]);
    // 0x213120: 0x3c023fc0  lui         $v0, 0x3FC0
    ctx->pc = 0x213120u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16320 << 16));
    // 0x213124: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x213124u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x213128: 0x46001818  adda.s      $f3, $f0
    ctx->pc = 0x213128u;
    ctx->f[31] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
    // 0x21312c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x21312cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x213130: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x213130u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x213134: 0x0  nop
    ctx->pc = 0x213134u;
    // NOP
    // 0x213138: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x213138u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x21313c: 0x46020902  mul.s       $f4, $f1, $f2
    ctx->pc = 0x21313cu;
    ctx->f[4] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x213140: 0x46001800  add.s       $f0, $f3, $f0
    ctx->pc = 0x213140u;
    ctx->f[0] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
    // 0x213144: 0x4602085d  msub.s      $f1, $f1, $f2
    ctx->pc = 0x213144u;
    ctx->f[1] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[1], ctx->f[2]));
    // 0x213148: 0x46040001  sub.s       $f0, $f0, $f4
    ctx->pc = 0x213148u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[4]);
    // 0x21314c: 0xe6010000  swc1        $f1, 0x0($s0)
    ctx->pc = 0x21314cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
    // 0x213150: 0xe6000004  swc1        $f0, 0x4($s0)
    ctx->pc = 0x213150u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
label_213154:
    // 0x213154: 0x0  nop
    ctx->pc = 0x213154u;
    // NOP
    // 0x213158: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x213158u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x21315c: 0x2a420009  slti        $v0, $s2, 0x9
    ctx->pc = 0x21315cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)9) ? 1 : 0);
    // 0x213160: 0x1440ffb0  bnez        $v0, . + 4 + (-0x50 << 2)
    ctx->pc = 0x213160u;
    {
        const bool branch_taken_0x213160 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x213164u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x213160u;
            // 0x213164: 0x26310020  addiu       $s1, $s1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x213160) {
            ctx->pc = 0x213024u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_213024;
        }
    }
    ctx->pc = 0x213168u;
    // 0x213168: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x213168u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x21316c: 0x26d60001  addiu       $s6, $s6, 0x1
    ctx->pc = 0x21316cu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
    // 0x213170: 0x8f8391f4  lw          $v1, -0x6E0C($gp)
    ctx->pc = 0x213170u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939124)));
    // 0x213174: 0x228c0  sll         $a1, $v0, 3
    ctx->pc = 0x213174u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x213178: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x213178u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x21317c: 0x2ac2000a  slti        $v0, $s6, 0xA
    ctx->pc = 0x21317cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 22) < (int64_t)(int32_t)10) ? 1 : 0);
    // 0x213180: 0xac750000  sw          $s5, 0x0($v1)
    ctx->pc = 0x213180u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 21));
    // 0x213184: 0x8f8491f0  lw          $a0, -0x6E10($gp)
    ctx->pc = 0x213184u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939120)));
    // 0x213188: 0x8f8391f4  lw          $v1, -0x6E0C($gp)
    ctx->pc = 0x213188u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939124)));
    // 0x21318c: 0x972021  addu        $a0, $a0, $s7
    ctx->pc = 0x21318cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 23)));
    // 0x213190: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x213190u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x213194: 0x1440ff69  bnez        $v0, . + 4 + (-0x97 << 2)
    ctx->pc = 0x213194u;
    {
        const bool branch_taken_0x213194 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x213198u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x213194u;
            // 0x213198: 0xac640004  sw          $a0, 0x4($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x213194) {
            ctx->pc = 0x212F3Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_212f3c;
        }
    }
    ctx->pc = 0x21319Cu;
    // 0x21319c: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x21319cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x2131a0: 0x2442000a  addiu       $v0, $v0, 0xA
    ctx->pc = 0x2131a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10));
    // 0x2131a4: 0xafa200c0  sw          $v0, 0xC0($sp)
    ctx->pc = 0x2131a4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 2));
    // 0x2131a8: 0x8fa200a0  lw          $v0, 0xA0($sp)
    ctx->pc = 0x2131a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x2131ac: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2131acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2131b0: 0xafa200a0  sw          $v0, 0xA0($sp)
    ctx->pc = 0x2131b0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 2));
    // 0x2131b4: 0x8fa200a0  lw          $v0, 0xA0($sp)
    ctx->pc = 0x2131b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x2131b8: 0x28420006  slti        $v0, $v0, 0x6
    ctx->pc = 0x2131b8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)6) ? 1 : 0);
    // 0x2131bc: 0x1440ff5f  bnez        $v0, . + 4 + (-0xA1 << 2)
    ctx->pc = 0x2131BCu;
    {
        const bool branch_taken_0x2131bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2131C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2131BCu;
            // 0x2131c0: 0xb02d  daddu       $s6, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2131bc) {
            ctx->pc = 0x212F3Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_212f3c;
        }
    }
    ctx->pc = 0x2131C4u;
    // 0x2131c4: 0xc04e780  jal         func_139E00
    ctx->pc = 0x2131C4u;
    SET_GPR_U32(ctx, 31, 0x2131CCu);
    ctx->pc = 0x2131C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2131C4u;
            // 0x2131c8: 0x8fa400dc  lw          $a0, 0xDC($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 220)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139E00u;
    if (runtime->hasFunction(0x139E00u)) {
        auto targetFn = runtime->lookupFunction(0x139E00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2131CCu; }
        if (ctx->pc != 0x2131CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Align64__9mgCMemoryFv_0x139e00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2131CCu; }
        if (ctx->pc != 0x2131CCu) { return; }
    }
    ctx->pc = 0x2131CCu;
label_2131cc:
    // 0x2131cc: 0x8fa200dc  lw          $v0, 0xDC($sp)
    ctx->pc = 0x2131ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 220)));
    // 0x2131d0: 0x27c40008  addiu       $a0, $fp, 0x8
    ctx->pc = 0x2131d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 30), 8));
    // 0x2131d4: 0x240610cc  addiu       $a2, $zero, 0x10CC
    ctx->pc = 0x2131d4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4300));
    // 0x2131d8: 0x8c430024  lw          $v1, 0x24($v0)
    ctx->pc = 0x2131d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 36)));
    // 0x2131dc: 0x8c420020  lw          $v0, 0x20($v0)
    ctx->pc = 0x2131dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x2131e0: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x2131e0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x2131e4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2131e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2131e8: 0xafc20004  sw          $v0, 0x4($fp)
    ctx->pc = 0x2131e8u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 4), GPR_U32(ctx, 2));
    // 0x2131ec: 0x8fa200dc  lw          $v0, 0xDC($sp)
    ctx->pc = 0x2131ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 220)));
    // 0x2131f0: 0x8c430024  lw          $v1, 0x24($v0)
    ctx->pc = 0x2131f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 36)));
    // 0x2131f4: 0x8c420020  lw          $v0, 0x20($v0)
    ctx->pc = 0x2131f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x2131f8: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x2131f8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x2131fc: 0xc04e79c  jal         func_139E70
    ctx->pc = 0x2131FCu;
    SET_GPR_U32(ctx, 31, 0x213204u);
    ctx->pc = 0x213200u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2131FCu;
            // 0x213200: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139E70u;
    if (runtime->hasFunction(0x139E70u)) {
        auto targetFn = runtime->lookupFunction(0x139E70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x213204u; }
        if (ctx->pc != 0x213204u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        stSetBuffer__9mgCMemoryFP1i_0x139e70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x213204u; }
        if (ctx->pc != 0x213204u) { return; }
    }
    ctx->pc = 0x213204u;
label_213204:
    // 0x213204: 0x8fa200dc  lw          $v0, 0xDC($sp)
    ctx->pc = 0x213204u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 220)));
    // 0x213208: 0x3c0401ed  lui         $a0, 0x1ED
    ctx->pc = 0x213208u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)493 << 16));
    // 0x21320c: 0x2484c410  addiu       $a0, $a0, -0x3BF0
    ctx->pc = 0x21320cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294951952));
    // 0x213210: 0x8c450024  lw          $a1, 0x24($v0)
    ctx->pc = 0x213210u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 36)));
    // 0x213214: 0x8c430020  lw          $v1, 0x20($v0)
    ctx->pc = 0x213214u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x213218: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x213218u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x21321c: 0x344629a8  ori         $a2, $v0, 0x29A8
    ctx->pc = 0x21321cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)10664);
    // 0x213220: 0x51100  sll         $v0, $a1, 4
    ctx->pc = 0x213220u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x213224: 0xc04e79c  jal         func_139E70
    ctx->pc = 0x213224u;
    SET_GPR_U32(ctx, 31, 0x21322Cu);
    ctx->pc = 0x213228u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x213224u;
            // 0x213228: 0x622821  addu        $a1, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139E70u;
    if (runtime->hasFunction(0x139E70u)) {
        auto targetFn = runtime->lookupFunction(0x139E70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21322Cu; }
        if (ctx->pc != 0x21322Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        stSetBuffer__9mgCMemoryFP1i_0x139e70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21322Cu; }
        if (ctx->pc != 0x21322Cu) { return; }
    }
    ctx->pc = 0x21322Cu;
label_21322c:
    // 0x21322c: 0x8fa200dc  lw          $v0, 0xDC($sp)
    ctx->pc = 0x21322cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 220)));
    // 0x213230: 0x3c040037  lui         $a0, 0x37
    ctx->pc = 0x213230u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)55 << 16));
    // 0x213234: 0x24849f20  addiu       $a0, $a0, -0x60E0
    ctx->pc = 0x213234u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294942496));
    // 0x213238: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x213238u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21323c: 0x8c450024  lw          $a1, 0x24($v0)
    ctx->pc = 0x21323cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 36)));
    // 0x213240: 0x8c430020  lw          $v1, 0x20($v0)
    ctx->pc = 0x213240u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x213244: 0x52900  sll         $a1, $a1, 4
    ctx->pc = 0x213244u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x213248: 0x8c420028  lw          $v0, 0x28($v0)
    ctx->pc = 0x213248u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
    // 0x21324c: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x21324cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x213250: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x213250u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x213254: 0xa78091c0  sh          $zero, -0x6E40($gp)
    ctx->pc = 0x213254u;
    WRITE16(ADD32(GPR_U32(ctx, 28), 4294939072), (uint16_t)GPR_U32(ctx, 0));
    // 0x213258: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x213258u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x21325c: 0xaf829210  sw          $v0, -0x6DF0($gp)
    ctx->pc = 0x21325cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294939152), GPR_U32(ctx, 2));
    // 0x213260: 0x8fc50004  lw          $a1, 0x4($fp)
    ctx->pc = 0x213260u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4)));
    // 0x213264: 0xc0524dc  jal         func_149370
    ctx->pc = 0x213264u;
    SET_GPR_U32(ctx, 31, 0x21326Cu);
    ctx->pc = 0x213268u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x213264u;
            // 0x213268: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x149370u;
    if (runtime->hasFunction(0x149370u)) {
        auto targetFn = runtime->lookupFunction(0x149370u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21326Cu; }
        if (ctx->pc != 0x21326Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        LoadFile2__FPcPvPii_0x149370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21326Cu; }
        if (ctx->pc != 0x21326Cu) { return; }
    }
    ctx->pc = 0x21326Cu;
label_21326c:
    // 0x21326c: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x21326Cu;
    {
        const bool branch_taken_0x21326c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x21326c) {
            ctx->pc = 0x2132A4u;
            goto label_2132a4;
        }
    }
    ctx->pc = 0x213274u;
    // 0x213274: 0xc06334c  jal         func_18CD30
    ctx->pc = 0x213274u;
    SET_GPR_U32(ctx, 31, 0x21327Cu);
    ctx->pc = 0x213278u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x213274u;
            // 0x213278: 0x24040008  addiu       $a0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18CD30u;
    if (runtime->hasFunction(0x18CD30u)) {
        auto targetFn = runtime->lookupFunction(0x18CD30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21327Cu; }
        if (ctx->pc != 0x21327Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sndInitPort__Fi_0x18cd30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21327Cu; }
        if (ctx->pc != 0x21327Cu) { return; }
    }
    ctx->pc = 0x21327Cu;
label_21327c:
    // 0x21327c: 0x8fc50004  lw          $a1, 0x4($fp)
    ctx->pc = 0x21327cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4)));
    // 0x213280: 0x24040008  addiu       $a0, $zero, 0x8
    ctx->pc = 0x213280u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x213284: 0xc06368c  jal         func_18DA30
    ctx->pc = 0x213284u;
    SET_GPR_U32(ctx, 31, 0x21328Cu);
    ctx->pc = 0x213288u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x213284u;
            // 0x213288: 0x27a600e0  addiu       $a2, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18DA30u;
    if (runtime->hasFunction(0x18DA30u)) {
        auto targetFn = runtime->lookupFunction(0x18DA30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21328Cu; }
        if (ctx->pc != 0x21328Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sndLoadSound__FiPUiP9mgCMemory_0x18da30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21328Cu; }
        if (ctx->pc != 0x21328Cu) { return; }
    }
    ctx->pc = 0x21328Cu;
label_21328c:
    // 0x21328c: 0xaf8291bc  sw          $v0, -0x6E44($gp)
    ctx->pc = 0x21328cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294939068), GPR_U32(ctx, 2));
    // 0x213290: 0x8f8491bc  lw          $a0, -0x6E44($gp)
    ctx->pc = 0x213290u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939068)));
    // 0x213294: 0xc094280  jal         func_250A00
    ctx->pc = 0x213294u;
    SET_GPR_U32(ctx, 31, 0x21329Cu);
    ctx->pc = 0x213298u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x213294u;
            // 0x213298: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x250A00u;
    if (runtime->hasFunction(0x250A00u)) {
        auto targetFn = runtime->lookupFunction(0x250A00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21329Cu; }
        if (ctx->pc != 0x21329Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuSePlay__FUii_0x250a00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21329Cu; }
        if (ctx->pc != 0x21329Cu) { return; }
    }
    ctx->pc = 0x21329Cu;
label_21329c:
    // 0x21329c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x21329cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2132a0: 0xa382978c  sb          $v0, -0x6874($gp)
    ctx->pc = 0x2132a0u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294940556), (uint8_t)GPR_U32(ctx, 2));
label_2132a4:
    // 0x2132a4: 0x3c100038  lui         $s0, 0x38
    ctx->pc = 0x2132a4u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)56 << 16));
    // 0x2132a8: 0x27c40160  addiu       $a0, $fp, 0x160
    ctx->pc = 0x2132a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 30), 352));
    // 0x2132ac: 0xc04e780  jal         func_139E00
    ctx->pc = 0x2132ACu;
    SET_GPR_U32(ctx, 31, 0x2132B4u);
    ctx->pc = 0x2132B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2132ACu;
            // 0x2132b0: 0x26101ef0  addiu       $s0, $s0, 0x1EF0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 7920));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139E00u;
    if (runtime->hasFunction(0x139E00u)) {
        auto targetFn = runtime->lookupFunction(0x139E00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2132B4u; }
        if (ctx->pc != 0x2132B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Align64__9mgCMemoryFv_0x139e00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2132B4u; }
        if (ctx->pc != 0x2132B4u) { return; }
    }
    ctx->pc = 0x2132B4u;
label_2132b4:
    // 0x2132b4: 0x27c40160  addiu       $a0, $fp, 0x160
    ctx->pc = 0x2132b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 30), 352));
    // 0x2132b8: 0xc04e714  jal         func_139C50
    ctx->pc = 0x2132B8u;
    SET_GPR_U32(ctx, 31, 0x2132C0u);
    ctx->pc = 0x2132BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2132B8u;
            // 0x2132bc: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139C50u;
    if (runtime->hasFunction(0x139C50u)) {
        auto targetFn = runtime->lookupFunction(0x139C50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2132C0u; }
        if (ctx->pc != 0x2132C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        stAllocTest__9mgCMemoryFi_0x139c50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2132C0u; }
        if (ctx->pc != 0x2132C0u) { return; }
    }
    ctx->pc = 0x2132C0u;
label_2132c0:
    // 0x2132c0: 0x8f868ad0  lw          $a2, -0x7530($gp)
    ctx->pc = 0x2132c0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937296)));
    // 0x2132c4: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x2132c4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x2132c8: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2132c8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2132cc: 0x27a40140  addiu       $a0, $sp, 0x140
    ctx->pc = 0x2132ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
    // 0x2132d0: 0xc04a234  jal         func_1288D0
    ctx->pc = 0x2132D0u;
    SET_GPR_U32(ctx, 31, 0x2132D8u);
    ctx->pc = 0x2132D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2132D0u;
            // 0x2132d4: 0x24a59f40  addiu       $a1, $a1, -0x60C0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294942528));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1288D0u;
    if (runtime->hasFunction(0x1288D0u)) {
        auto targetFn = runtime->lookupFunction(0x1288D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2132D8u; }
        if (ctx->pc != 0x2132D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sprintf_0x1288d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2132D8u; }
        if (ctx->pc != 0x2132D8u) { return; }
    }
    ctx->pc = 0x2132D8u;
label_2132d8:
    // 0x2132d8: 0x27a40140  addiu       $a0, $sp, 0x140
    ctx->pc = 0x2132d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
    // 0x2132dc: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2132dcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2132e0: 0x27a6018c  addiu       $a2, $sp, 0x18C
    ctx->pc = 0x2132e0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 396));
    // 0x2132e4: 0xc0524dc  jal         func_149370
    ctx->pc = 0x2132E4u;
    SET_GPR_U32(ctx, 31, 0x2132ECu);
    ctx->pc = 0x2132E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2132E4u;
            // 0x2132e8: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x149370u;
    if (runtime->hasFunction(0x149370u)) {
        auto targetFn = runtime->lookupFunction(0x149370u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2132ECu; }
        if (ctx->pc != 0x2132ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        LoadFile2__FPcPvPii_0x149370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2132ECu; }
        if (ctx->pc != 0x2132ECu) { return; }
    }
    ctx->pc = 0x2132ECu;
label_2132ec:
    // 0x2132ec: 0x1040001c  beqz        $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x2132ECu;
    {
        const bool branch_taken_0x2132ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2132F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2132ECu;
            // 0x2132f0: 0x27c400fc  addiu       $a0, $fp, 0xFC (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 30), 252));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2132ec) {
            ctx->pc = 0x213360u;
            goto label_213360;
        }
    }
    ctx->pc = 0x2132F4u;
    // 0x2132f4: 0x8fa3018c  lw          $v1, 0x18C($sp)
    ctx->pc = 0x2132f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 396)));
    // 0x2132f8: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2132F8u;
    {
        const bool branch_taken_0x2132f8 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x2132FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2132F8u;
            // 0x2132fc: 0x31103  sra         $v0, $v1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2132f8) {
            ctx->pc = 0x213308u;
            goto label_213308;
        }
    }
    ctx->pc = 0x213300u;
    // 0x213300: 0x2462000f  addiu       $v0, $v1, 0xF
    ctx->pc = 0x213300u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 15));
    // 0x213304: 0x21103  sra         $v0, $v0, 4
    ctx->pc = 0x213304u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 4));
label_213308:
    // 0x213308: 0x24450001  addiu       $a1, $v0, 0x1
    ctx->pc = 0x213308u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x21330c: 0xc04e748  jal         func_139D20
    ctx->pc = 0x21330Cu;
    SET_GPR_U32(ctx, 31, 0x213314u);
    ctx->pc = 0x213310u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21330Cu;
            // 0x213310: 0x27c40160  addiu       $a0, $fp, 0x160 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 30), 352));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139D20u;
    if (runtime->hasFunction(0x139D20u)) {
        auto targetFn = runtime->lookupFunction(0x139D20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x213314u; }
        if (ctx->pc != 0x213314u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Alloc__9mgCMemoryFi_0x139d20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x213314u; }
        if (ctx->pc != 0x213314u) { return; }
    }
    ctx->pc = 0x213314u;
label_213314:
    // 0x213314: 0x87c60190  lh          $a2, 0x190($fp)
    ctx->pc = 0x213314u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 30), 400)));
    // 0x213318: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x213318u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21331c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x21331cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x213320: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x213320u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x213324: 0xc04b6a4  jal         func_12DA90
    ctx->pc = 0x213324u;
    SET_GPR_U32(ctx, 31, 0x21332Cu);
    ctx->pc = 0x213328u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x213324u;
            // 0x213328: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12DA90u;
    if (runtime->hasFunction(0x12DA90u)) {
        auto targetFn = runtime->lookupFunction(0x12DA90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21332Cu; }
        if (ctx->pc != 0x21332Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnterIMGFile__17mgCTextureManagerFPUciP9mgCMemoryP15mgCEnterIMGInfo_0x12da90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21332Cu; }
        if (ctx->pc != 0x21332Cu) { return; }
    }
    ctx->pc = 0x21332Cu;
label_21332c:
    // 0x21332c: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x21332cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x213330: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x213330u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x213334: 0x24a59f58  addiu       $a1, $a1, -0x60A8
    ctx->pc = 0x213334u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294942552));
    // 0x213338: 0xc04b414  jal         func_12D050
    ctx->pc = 0x213338u;
    SET_GPR_U32(ctx, 31, 0x213340u);
    ctx->pc = 0x21333Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x213338u;
            // 0x21333c: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12D050u;
    if (runtime->hasFunction(0x12D050u)) {
        auto targetFn = runtime->lookupFunction(0x12D050u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x213340u; }
        if (ctx->pc != 0x213340u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetTexture__17mgCTextureManagerFPci_0x12d050(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x213340u; }
        if (ctx->pc != 0x213340u) { return; }
    }
    ctx->pc = 0x213340u;
label_213340:
    // 0x213340: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x213340u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x213344: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x213344u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x213348: 0xaf8291d0  sw          $v0, -0x6E30($gp)
    ctx->pc = 0x213348u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294939088), GPR_U32(ctx, 2));
    // 0x21334c: 0x24a59f60  addiu       $a1, $a1, -0x60A0
    ctx->pc = 0x21334cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294942560));
    // 0x213350: 0xc04b414  jal         func_12D050
    ctx->pc = 0x213350u;
    SET_GPR_U32(ctx, 31, 0x213358u);
    ctx->pc = 0x213354u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x213350u;
            // 0x213354: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12D050u;
    if (runtime->hasFunction(0x12D050u)) {
        auto targetFn = runtime->lookupFunction(0x12D050u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x213358u; }
        if (ctx->pc != 0x213358u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetTexture__17mgCTextureManagerFPci_0x12d050(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x213358u; }
        if (ctx->pc != 0x213358u) { return; }
    }
    ctx->pc = 0x213358u;
label_213358:
    // 0x213358: 0xaf8291d4  sw          $v0, -0x6E2C($gp)
    ctx->pc = 0x213358u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294939092), GPR_U32(ctx, 2));
    // 0x21335c: 0x27c400fc  addiu       $a0, $fp, 0xFC
    ctx->pc = 0x21335cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 30), 252));
label_213360:
    // 0x213360: 0xc083ec4  jal         func_20FB10
    ctx->pc = 0x213360u;
    SET_GPR_U32(ctx, 31, 0x213368u);
    ctx->pc = 0x213364u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x213360u;
            // 0x213364: 0x27c50160  addiu       $a1, $fp, 0x160 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 30), 352));
        ctx->in_delay_slot = false;
    ctx->pc = 0x20FB10u;
    if (runtime->hasFunction(0x20FB10u)) {
        auto targetFn = runtime->lookupFunction(0x20FB10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x213368u; }
        if (ctx->pc != 0x213368u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Initialize__8CAquaMesFP9mgCMemory_0x20fb10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x213368u; }
        if (ctx->pc != 0x213368u) { return; }
    }
    ctx->pc = 0x213368u;
label_213368:
    // 0x213368: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x213368u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x21336c: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x21336cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x213370: 0xa3c20108  sb          $v0, 0x108($fp)
    ctx->pc = 0x213370u;
    WRITE8(ADD32(GPR_U32(ctx, 30), 264), (uint8_t)GPR_U32(ctx, 2));
    // 0x213374: 0xa3c20144  sb          $v0, 0x144($fp)
    ctx->pc = 0x213374u;
    WRITE8(ADD32(GPR_U32(ctx, 30), 324), (uint8_t)GPR_U32(ctx, 2));
    // 0x213378: 0xa7c00388  sh          $zero, 0x388($fp)
    ctx->pc = 0x213378u;
    WRITE16(ADD32(GPR_U32(ctx, 30), 904), (uint16_t)GPR_U32(ctx, 0));
    // 0x21337c: 0xc084dc4  jal         func_213710
    ctx->pc = 0x21337Cu;
    SET_GPR_U32(ctx, 31, 0x213384u);
    ctx->pc = 0x213380u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21337Cu;
            // 0x213380: 0xa7c0038a  sh          $zero, 0x38A($fp) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 30), 906), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x213710u;
    if (runtime->hasFunction(0x213710u)) {
        auto targetFn = runtime->lookupFunction(0x213710u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x213384u; }
        if (ctx->pc != 0x213384u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SettingAqua__9CAquariumFv_0x213710(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x213384u; }
        if (ctx->pc != 0x213384u) { return; }
    }
    ctx->pc = 0x213384u;
label_213384:
    // 0x213384: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x213384u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x213388: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x213388u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x21338c: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x21338cu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x213390: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x213390u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x213394: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x213394u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x213398: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x213398u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x21339c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x21339cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2133a0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2133a0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2133a4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2133a4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2133a8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2133a8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2133ac: 0x3e00008  jr          $ra
    ctx->pc = 0x2133ACu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2133B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2133ACu;
            // 0x2133b0: 0x27bd0190  addiu       $sp, $sp, 0x190 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2133B4u;
}
