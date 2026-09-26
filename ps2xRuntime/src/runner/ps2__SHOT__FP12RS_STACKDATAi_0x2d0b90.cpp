#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _SHOT__FP12RS_STACKDATAi
// Address: 0x2d0b90 - 0x2d1490
void ps2__SHOT__FP12RS_STACKDATAi_0x2d0b90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__SHOT__FP12RS_STACKDATAi_0x2d0b90");
#endif

    switch (ctx->pc) {
        case 0x2d0bb0u: goto label_2d0bb0;
        case 0x2d0bbcu: goto label_2d0bbc;
        case 0x2d0becu: goto label_2d0bec;
        case 0x2d0c50u: goto label_2d0c50;
        case 0x2d0c68u: goto label_2d0c68;
        case 0x2d0c90u: goto label_2d0c90;
        case 0x2d0ca8u: goto label_2d0ca8;
        case 0x2d0cc8u: goto label_2d0cc8;
        case 0x2d0d04u: goto label_2d0d04;
        case 0x2d0d24u: goto label_2d0d24;
        case 0x2d0d68u: goto label_2d0d68;
        case 0x2d0d74u: goto label_2d0d74;
        case 0x2d0d88u: goto label_2d0d88;
        case 0x2d0d98u: goto label_2d0d98;
        case 0x2d0dc4u: goto label_2d0dc4;
        case 0x2d0dd4u: goto label_2d0dd4;
        case 0x2d0de0u: goto label_2d0de0;
        case 0x2d0dfcu: goto label_2d0dfc;
        case 0x2d0e30u: goto label_2d0e30;
        case 0x2d0e50u: goto label_2d0e50;
        case 0x2d0e64u: goto label_2d0e64;
        case 0x2d0e70u: goto label_2d0e70;
        case 0x2d0e84u: goto label_2d0e84;
        case 0x2d0e9cu: goto label_2d0e9c;
        case 0x2d0ec8u: goto label_2d0ec8;
        case 0x2d0f20u: goto label_2d0f20;
        case 0x2d0f40u: goto label_2d0f40;
        case 0x2d0f50u: goto label_2d0f50;
        case 0x2d0f60u: goto label_2d0f60;
        case 0x2d0f90u: goto label_2d0f90;
        case 0x2d0fbcu: goto label_2d0fbc;
        case 0x2d0fd4u: goto label_2d0fd4;
        case 0x2d0ff0u: goto label_2d0ff0;
        case 0x2d100cu: goto label_2d100c;
        case 0x2d102cu: goto label_2d102c;
        case 0x2d1040u: goto label_2d1040;
        case 0x2d104cu: goto label_2d104c;
        case 0x2d1060u: goto label_2d1060;
        case 0x2d1078u: goto label_2d1078;
        case 0x2d109cu: goto label_2d109c;
        case 0x2d10acu: goto label_2d10ac;
        case 0x2d10bcu: goto label_2d10bc;
        case 0x2d10c8u: goto label_2d10c8;
        case 0x2d10d4u: goto label_2d10d4;
        case 0x2d10f0u: goto label_2d10f0;
        case 0x2d110cu: goto label_2d110c;
        case 0x2d1118u: goto label_2d1118;
        case 0x2d1138u: goto label_2d1138;
        case 0x2d114cu: goto label_2d114c;
        case 0x2d1158u: goto label_2d1158;
        case 0x2d116cu: goto label_2d116c;
        case 0x2d1184u: goto label_2d1184;
        case 0x2d11a8u: goto label_2d11a8;
        case 0x2d11c4u: goto label_2d11c4;
        case 0x2d11e4u: goto label_2d11e4;
        case 0x2d1204u: goto label_2d1204;
        case 0x2d1228u: goto label_2d1228;
        case 0x2d124cu: goto label_2d124c;
        case 0x2d1270u: goto label_2d1270;
        case 0x2d129cu: goto label_2d129c;
        case 0x2d12acu: goto label_2d12ac;
        case 0x2d12c0u: goto label_2d12c0;
        case 0x2d12d0u: goto label_2d12d0;
        case 0x2d12dcu: goto label_2d12dc;
        case 0x2d12f8u: goto label_2d12f8;
        case 0x2d1314u: goto label_2d1314;
        case 0x2d1320u: goto label_2d1320;
        case 0x2d1340u: goto label_2d1340;
        case 0x2d1354u: goto label_2d1354;
        case 0x2d1360u: goto label_2d1360;
        case 0x2d1374u: goto label_2d1374;
        case 0x2d1398u: goto label_2d1398;
        case 0x2d13b4u: goto label_2d13b4;
        case 0x2d13d4u: goto label_2d13d4;
        case 0x2d13f8u: goto label_2d13f8;
        case 0x2d141cu: goto label_2d141c;
        case 0x2d143cu: goto label_2d143c;
        case 0x2d1460u: goto label_2d1460;
        default: break;
    }

    ctx->pc = 0x2d0b90u;

    // 0x2d0b90: 0x27bdff00  addiu       $sp, $sp, -0x100
    ctx->pc = 0x2d0b90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967040));
    // 0x2d0b94: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x2d0b94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x2d0b98: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2d0b98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x2d0b9c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2d0b9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2d0ba0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2d0ba0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2d0ba4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2d0ba4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2d0ba8: 0xc0683a8  jal         func_1A0EA0
    ctx->pc = 0x2D0BA8u;
    SET_GPR_U32(ctx, 31, 0x2D0BB0u);
    ctx->pc = 0x2D0BACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D0BA8u;
            // 0x2d0bac: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A0EA0u;
    if (runtime->hasFunction(0x1A0EA0u)) {
        auto targetFn = runtime->lookupFunction(0x1A0EA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D0BB0u; }
        if (ctx->pc != 0x2D0BB0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetBattleCharaInfo__Fv_0x1a0ea0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D0BB0u; }
        if (ctx->pc != 0x2D0BB0u) { return; }
    }
    ctx->pc = 0x2D0BB0u;
label_2d0bb0:
    // 0x2d0bb0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2d0bb0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d0bb4: 0xc0b378c  jal         func_2CDE30
    ctx->pc = 0x2D0BB4u;
    SET_GPR_U32(ctx, 31, 0x2D0BBCu);
    ctx->pc = 0x2D0BB8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D0BB4u;
            // 0x2d0bb8: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2CDE30u;
    if (runtime->hasFunction(0x2CDE30u)) {
        auto targetFn = runtime->lookupFunction(0x2CDE30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D0BBCu; }
        if (ctx->pc != 0x2D0BBCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x2cde30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D0BBCu; }
        if (ctx->pc != 0x2D0BBCu) { return; }
    }
    ctx->pc = 0x2D0BBCu;
label_2d0bbc:
    // 0x2d0bbc: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2d0bbcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d0bc0: 0x3c0101f1  lui         $at, 0x1F1
    ctx->pc = 0x2d0bc0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)497 << 16));
    // 0x2d0bc4: 0x8c22d430  lw          $v0, -0x2BD0($at)
    ctx->pc = 0x2d0bc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294956080)));
    // 0x2d0bc8: 0x24430764  addiu       $v1, $v0, 0x764
    ctx->pc = 0x2d0bc8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 1892));
    // 0x2d0bcc: 0x84420764  lh          $v0, 0x764($v0)
    ctx->pc = 0x2d0bccu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 1892)));
    // 0x2d0bd0: 0x18400003  blez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2D0BD0u;
    {
        const bool branch_taken_0x2d0bd0 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x2D0BD4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D0BD0u;
            // 0x2d0bd4: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d0bd0) {
            ctx->pc = 0x2D0BE0u;
            goto label_2d0be0;
        }
    }
    ctx->pc = 0x2D0BD8u;
    // 0x2d0bd8: 0x10000226  b           . + 4 + (0x226 << 2)
    ctx->pc = 0x2D0BD8u;
    {
        const bool branch_taken_0x2d0bd8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D0BDCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D0BD8u;
            // 0x2d0bdc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d0bd8) {
            ctx->pc = 0x2D1474u;
            goto label_2d1474;
        }
    }
    ctx->pc = 0x2D0BE0u;
label_2d0be0:
    // 0x2d0be0: 0xa4620000  sh          $v0, 0x0($v1)
    ctx->pc = 0x2d0be0u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x2d0be4: 0xc0664d0  jal         func_199340
    ctx->pc = 0x2D0BE4u;
    SET_GPR_U32(ctx, 31, 0x2D0BECu);
    ctx->pc = 0x2D0BE8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D0BE4u;
            // 0x2d0be8: 0x8e040030  lw          $a0, 0x30($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x199340u;
    if (runtime->hasFunction(0x199340u)) {
        auto targetFn = runtime->lookupFunction(0x199340u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D0BECu; }
        if (ctx->pc != 0x2D0BECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetAttackType__13CGameDataUsedFv_0x199340(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D0BECu; }
        if (ctx->pc != 0x2D0BECu) { return; }
    }
    ctx->pc = 0x2D0BECu;
label_2d0bec:
    // 0x2d0bec: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x2d0becu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d0bf0: 0x83829db0  lb          $v0, -0x6250($gp)
    ctx->pc = 0x2d0bf0u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294942128)));
    // 0x2d0bf4: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2D0BF4u;
    {
        const bool branch_taken_0x2d0bf4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2D0BF8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D0BF4u;
            // 0x2d0bf8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d0bf4) {
            ctx->pc = 0x2D0C04u;
            goto label_2d0c04;
        }
    }
    ctx->pc = 0x2D0BFCu;
    // 0x2d0bfc: 0xaf829dac  sw          $v0, -0x6254($gp)
    ctx->pc = 0x2d0bfcu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294942124), GPR_U32(ctx, 2));
    // 0x2d0c00: 0xa3829db0  sb          $v0, -0x6250($gp)
    ctx->pc = 0x2d0c00u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294942128), (uint8_t)GPR_U32(ctx, 2));
label_2d0c04:
    // 0x2d0c04: 0x83829db8  lb          $v0, -0x6248($gp)
    ctx->pc = 0x2d0c04u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294942136)));
    // 0x2d0c08: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2D0C08u;
    {
        const bool branch_taken_0x2d0c08 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2D0C0Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D0C08u;
            // 0x2d0c0c: 0x24020028  addiu       $v0, $zero, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d0c08) {
            ctx->pc = 0x2D0C20u;
            goto label_2d0c20;
        }
    }
    ctx->pc = 0x2D0C10u;
    // 0x2d0c10: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2d0c10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d0c14: 0xaf809db4  sw          $zero, -0x624C($gp)
    ctx->pc = 0x2d0c14u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294942132), GPR_U32(ctx, 0));
    // 0x2d0c18: 0xa3829db8  sb          $v0, -0x6248($gp)
    ctx->pc = 0x2d0c18u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294942136), (uint8_t)GPR_U32(ctx, 2));
    // 0x2d0c1c: 0x24020028  addiu       $v0, $zero, 0x28
    ctx->pc = 0x2d0c1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
label_2d0c20:
    // 0x2d0c20: 0x1242002b  beq         $s2, $v0, . + 4 + (0x2B << 2)
    ctx->pc = 0x2D0C20u;
    {
        const bool branch_taken_0x2d0c20 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 2));
        ctx->pc = 0x2D0C24u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D0C20u;
            // 0x2d0c24: 0x3c020035  lui         $v0, 0x35 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)53 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d0c20) {
            ctx->pc = 0x2D0CD0u;
            goto label_2d0cd0;
        }
    }
    ctx->pc = 0x2D0C28u;
    // 0x2d0c28: 0x2402005a  addiu       $v0, $zero, 0x5A
    ctx->pc = 0x2d0c28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 90));
    // 0x2d0c2c: 0x16420010  bne         $s2, $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x2D0C2Cu;
    {
        const bool branch_taken_0x2d0c2c = (GPR_U64(ctx, 18) != GPR_U64(ctx, 2));
        if (branch_taken_0x2d0c2c) {
            ctx->pc = 0x2D0C70u;
            goto label_2d0c70;
        }
    }
    ctx->pc = 0x2D0C34u;
    // 0x2d0c34: 0x12200008  beqz        $s1, . + 4 + (0x8 << 2)
    ctx->pc = 0x2D0C34u;
    {
        const bool branch_taken_0x2d0c34 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D0C38u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D0C34u;
            // 0x2d0c38: 0x3c0101f1  lui         $at, 0x1F1 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)497 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d0c34) {
            ctx->pc = 0x2D0C58u;
            goto label_2d0c58;
        }
    }
    ctx->pc = 0x2D0C3Cu;
    // 0x2d0c3c: 0x3c0101f1  lui         $at, 0x1F1
    ctx->pc = 0x2d0c3cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)497 << 16));
    // 0x2d0c40: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x2d0c40u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x2d0c44: 0x8c24d430  lw          $a0, -0x2BD0($at)
    ctx->pc = 0x2d0c44u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294956080)));
    // 0x2d0c48: 0xc05af3c  jal         func_16BCF0
    ctx->pc = 0x2D0C48u;
    SET_GPR_U32(ctx, 31, 0x2D0C50u);
    ctx->pc = 0x2D0C4Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D0C48u;
            // 0x2d0c4c: 0x24a503d8  addiu       $a1, $a1, 0x3D8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 984));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16BCF0u;
    if (runtime->hasFunction(0x16BCF0u)) {
        auto targetFn = runtime->lookupFunction(0x16BCF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D0C50u; }
        if (ctx->pc != 0x2D0C50u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SearchObject__12CActionCharaFPc_0x16bcf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D0C50u; }
        if (ctx->pc != 0x2D0C50u) { return; }
    }
    ctx->pc = 0x2D0C50u;
label_2d0c50:
    // 0x2d0c50: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x2D0C50u;
    {
        const bool branch_taken_0x2d0c50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d0c50) {
            ctx->pc = 0x2D0CB0u;
            goto label_2d0cb0;
        }
    }
    ctx->pc = 0x2D0C58u;
label_2d0c58:
    // 0x2d0c58: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x2d0c58u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x2d0c5c: 0x8c24d430  lw          $a0, -0x2BD0($at)
    ctx->pc = 0x2d0c5cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294956080)));
    // 0x2d0c60: 0xc05af3c  jal         func_16BCF0
    ctx->pc = 0x2D0C60u;
    SET_GPR_U32(ctx, 31, 0x2D0C68u);
    ctx->pc = 0x2D0C64u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D0C60u;
            // 0x2d0c64: 0x24a503e0  addiu       $a1, $a1, 0x3E0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 992));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16BCF0u;
    if (runtime->hasFunction(0x16BCF0u)) {
        auto targetFn = runtime->lookupFunction(0x16BCF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D0C68u; }
        if (ctx->pc != 0x2D0C68u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SearchObject__12CActionCharaFPc_0x16bcf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D0C68u; }
        if (ctx->pc != 0x2D0C68u) { return; }
    }
    ctx->pc = 0x2D0C68u;
label_2d0c68:
    // 0x2d0c68: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x2D0C68u;
    {
        const bool branch_taken_0x2d0c68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d0c68) {
            ctx->pc = 0x2D0CB0u;
            goto label_2d0cb0;
        }
    }
    ctx->pc = 0x2D0C70u;
label_2d0c70:
    // 0x2d0c70: 0x8f829dac  lw          $v0, -0x6254($gp)
    ctx->pc = 0x2d0c70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942124)));
    // 0x2d0c74: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2D0C74u;
    {
        const bool branch_taken_0x2d0c74 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D0C78u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D0C74u;
            // 0x2d0c78: 0x3c0101f1  lui         $at, 0x1F1 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)497 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d0c74) {
            ctx->pc = 0x2D0C98u;
            goto label_2d0c98;
        }
    }
    ctx->pc = 0x2D0C7Cu;
    // 0x2d0c7c: 0x3c0101f1  lui         $at, 0x1F1
    ctx->pc = 0x2d0c7cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)497 << 16));
    // 0x2d0c80: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x2d0c80u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x2d0c84: 0x8c24d430  lw          $a0, -0x2BD0($at)
    ctx->pc = 0x2d0c84u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294956080)));
    // 0x2d0c88: 0xc05af3c  jal         func_16BCF0
    ctx->pc = 0x2D0C88u;
    SET_GPR_U32(ctx, 31, 0x2D0C90u);
    ctx->pc = 0x2D0C8Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D0C88u;
            // 0x2d0c8c: 0x24a503e0  addiu       $a1, $a1, 0x3E0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 992));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16BCF0u;
    if (runtime->hasFunction(0x16BCF0u)) {
        auto targetFn = runtime->lookupFunction(0x16BCF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D0C90u; }
        if (ctx->pc != 0x2D0C90u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SearchObject__12CActionCharaFPc_0x16bcf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D0C90u; }
        if (ctx->pc != 0x2D0C90u) { return; }
    }
    ctx->pc = 0x2D0C90u;
label_2d0c90:
    // 0x2d0c90: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x2D0C90u;
    {
        const bool branch_taken_0x2d0c90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D0C94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D0C90u;
            // 0x2d0c94: 0xaf809dac  sw          $zero, -0x6254($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294942124), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d0c90) {
            ctx->pc = 0x2D0CB0u;
            goto label_2d0cb0;
        }
    }
    ctx->pc = 0x2D0C98u;
label_2d0c98:
    // 0x2d0c98: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x2d0c98u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x2d0c9c: 0x8c24d430  lw          $a0, -0x2BD0($at)
    ctx->pc = 0x2d0c9cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294956080)));
    // 0x2d0ca0: 0xc05af3c  jal         func_16BCF0
    ctx->pc = 0x2D0CA0u;
    SET_GPR_U32(ctx, 31, 0x2D0CA8u);
    ctx->pc = 0x2D0CA4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D0CA0u;
            // 0x2d0ca4: 0x24a503d8  addiu       $a1, $a1, 0x3D8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 984));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16BCF0u;
    if (runtime->hasFunction(0x16BCF0u)) {
        auto targetFn = runtime->lookupFunction(0x16BCF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D0CA8u; }
        if (ctx->pc != 0x2D0CA8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SearchObject__12CActionCharaFPc_0x16bcf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D0CA8u; }
        if (ctx->pc != 0x2D0CA8u) { return; }
    }
    ctx->pc = 0x2D0CA8u;
label_2d0ca8:
    // 0x2d0ca8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2d0ca8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d0cac: 0xaf839dac  sw          $v1, -0x6254($gp)
    ctx->pc = 0x2d0cacu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294942124), GPR_U32(ctx, 3));
label_2d0cb0:
    // 0x2d0cb0: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2D0CB0u;
    {
        const bool branch_taken_0x2d0cb0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2D0CB4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D0CB0u;
            // 0x2d0cb4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d0cb0) {
            ctx->pc = 0x2D0CC0u;
            goto label_2d0cc0;
        }
    }
    ctx->pc = 0x2D0CB8u;
    // 0x2d0cb8: 0x100001ee  b           . + 4 + (0x1EE << 2)
    ctx->pc = 0x2D0CB8u;
    {
        const bool branch_taken_0x2d0cb8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D0CBCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D0CB8u;
            // 0x2d0cbc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d0cb8) {
            ctx->pc = 0x2D1474u;
            goto label_2d1474;
        }
    }
    ctx->pc = 0x2D0CC0u;
label_2d0cc0:
    // 0x2d0cc0: 0xc04de0c  jal         func_137830
    ctx->pc = 0x2D0CC0u;
    SET_GPR_U32(ctx, 31, 0x2D0CC8u);
    ctx->pc = 0x2D0CC4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D0CC0u;
            // 0x2d0cc4: 0x27a50050  addiu       $a1, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
    ctx->pc = 0x137830u;
    if (runtime->hasFunction(0x137830u)) {
        auto targetFn = runtime->lookupFunction(0x137830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D0CC8u; }
        if (ctx->pc != 0x2D0CC8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetWorldPosition0__8mgCFrameFPf_0x137830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D0CC8u; }
        if (ctx->pc != 0x2D0CC8u) { return; }
    }
    ctx->pc = 0x2D0CC8u;
label_2d0cc8:
    // 0x2d0cc8: 0x1000002a  b           . + 4 + (0x2A << 2)
    ctx->pc = 0x2D0CC8u;
    {
        const bool branch_taken_0x2d0cc8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d0cc8) {
            ctx->pc = 0x2D0D74u;
            goto label_2d0d74;
        }
    }
    ctx->pc = 0x2D0CD0u;
label_2d0cd0:
    // 0x2d0cd0: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x2d0cd0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x2d0cd4: 0x244260f0  addiu       $v0, $v0, 0x60F0
    ctx->pc = 0x2d0cd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 24816));
    // 0x2d0cd8: 0x3c0101f1  lui         $at, 0x1F1
    ctx->pc = 0x2d0cd8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)497 << 16));
    // 0x2d0cdc: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x2d0cdcu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2d0ce0: 0x78420010  lq          $v0, 0x10($v0)
    ctx->pc = 0x2d0ce0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x2d0ce4: 0x7c830000  sq          $v1, 0x0($a0)
    ctx->pc = 0x2d0ce4u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 3));
    // 0x2d0ce8: 0x7c820010  sq          $v0, 0x10($a0)
    ctx->pc = 0x2d0ce8u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 16), GPR_VEC(ctx, 2));
    // 0x2d0cec: 0x8f829db4  lw          $v0, -0x624C($gp)
    ctx->pc = 0x2d0cecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942132)));
    // 0x2d0cf0: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x2d0cf0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x2d0cf4: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x2d0cf4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x2d0cf8: 0x8c450080  lw          $a1, 0x80($v0)
    ctx->pc = 0x2d0cf8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 128)));
    // 0x2d0cfc: 0xc05af3c  jal         func_16BCF0
    ctx->pc = 0x2D0CFCu;
    SET_GPR_U32(ctx, 31, 0x2D0D04u);
    ctx->pc = 0x2D0D00u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D0CFCu;
            // 0x2d0d00: 0x8c24d430  lw          $a0, -0x2BD0($at) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294956080)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16BCF0u;
    if (runtime->hasFunction(0x16BCF0u)) {
        auto targetFn = runtime->lookupFunction(0x16BCF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D0D04u; }
        if (ctx->pc != 0x2D0D04u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SearchObject__12CActionCharaFPc_0x16bcf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D0D04u; }
        if (ctx->pc != 0x2D0D04u) { return; }
    }
    ctx->pc = 0x2D0D04u;
label_2d0d04:
    // 0x2d0d04: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x2d0d04u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d0d08: 0x3c0101f1  lui         $at, 0x1F1
    ctx->pc = 0x2d0d08u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)497 << 16));
    // 0x2d0d0c: 0x8f829db4  lw          $v0, -0x624C($gp)
    ctx->pc = 0x2d0d0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942132)));
    // 0x2d0d10: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x2d0d10u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x2d0d14: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x2d0d14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x2d0d18: 0x8c450084  lw          $a1, 0x84($v0)
    ctx->pc = 0x2d0d18u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 132)));
    // 0x2d0d1c: 0xc05af3c  jal         func_16BCF0
    ctx->pc = 0x2D0D1Cu;
    SET_GPR_U32(ctx, 31, 0x2D0D24u);
    ctx->pc = 0x2D0D20u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D0D1Cu;
            // 0x2d0d20: 0x8c24d430  lw          $a0, -0x2BD0($at) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294956080)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16BCF0u;
    if (runtime->hasFunction(0x16BCF0u)) {
        auto targetFn = runtime->lookupFunction(0x16BCF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D0D24u; }
        if (ctx->pc != 0x2D0D24u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SearchObject__12CActionCharaFPc_0x16bcf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D0D24u; }
        if (ctx->pc != 0x2D0D24u) { return; }
    }
    ctx->pc = 0x2D0D24u;
label_2d0d24:
    // 0x2d0d24: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2d0d24u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d0d28: 0x8f829db4  lw          $v0, -0x624C($gp)
    ctx->pc = 0x2d0d28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942132)));
    // 0x2d0d2c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2d0d2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2d0d30: 0xaf829db4  sw          $v0, -0x624C($gp)
    ctx->pc = 0x2d0d30u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294942132), GPR_U32(ctx, 2));
    // 0x2d0d34: 0x8f829db4  lw          $v0, -0x624C($gp)
    ctx->pc = 0x2d0d34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942132)));
    // 0x2d0d38: 0x28420004  slti        $v0, $v0, 0x4
    ctx->pc = 0x2d0d38u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x2d0d3c: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x2D0D3Cu;
    {
        const bool branch_taken_0x2d0d3c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2d0d3c) {
            ctx->pc = 0x2D0D48u;
            goto label_2d0d48;
        }
    }
    ctx->pc = 0x2D0D44u;
    // 0x2d0d44: 0xaf809db4  sw          $zero, -0x624C($gp)
    ctx->pc = 0x2d0d44u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294942132), GPR_U32(ctx, 0));
label_2d0d48:
    // 0x2d0d48: 0x12600003  beqz        $s3, . + 4 + (0x3 << 2)
    ctx->pc = 0x2D0D48u;
    {
        const bool branch_taken_0x2d0d48 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D0D4Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D0D48u;
            // 0x2d0d4c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d0d48) {
            ctx->pc = 0x2D0D58u;
            goto label_2d0d58;
        }
    }
    ctx->pc = 0x2D0D50u;
    // 0x2d0d50: 0x16200003  bnez        $s1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2D0D50u;
    {
        const bool branch_taken_0x2d0d50 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x2D0D54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D0D50u;
            // 0x2d0d54: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d0d50) {
            ctx->pc = 0x2D0D60u;
            goto label_2d0d60;
        }
    }
    ctx->pc = 0x2D0D58u;
label_2d0d58:
    // 0x2d0d58: 0x100001c7  b           . + 4 + (0x1C7 << 2)
    ctx->pc = 0x2D0D58u;
    {
        const bool branch_taken_0x2d0d58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D0D5Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D0D58u;
            // 0x2d0d5c: 0xdfbf0040  ld          $ra, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d0d58) {
            ctx->pc = 0x2D1478u;
            goto label_2d1478;
        }
    }
    ctx->pc = 0x2D0D60u;
label_2d0d60:
    // 0x2d0d60: 0xc04de0c  jal         func_137830
    ctx->pc = 0x2D0D60u;
    SET_GPR_U32(ctx, 31, 0x2D0D68u);
    ctx->pc = 0x2D0D64u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D0D60u;
            // 0x2d0d64: 0x27a50050  addiu       $a1, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
    ctx->pc = 0x137830u;
    if (runtime->hasFunction(0x137830u)) {
        auto targetFn = runtime->lookupFunction(0x137830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D0D68u; }
        if (ctx->pc != 0x2D0D68u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetWorldPosition0__8mgCFrameFPf_0x137830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D0D68u; }
        if (ctx->pc != 0x2D0D68u) { return; }
    }
    ctx->pc = 0x2D0D68u;
label_2d0d68:
    // 0x2d0d68: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2d0d68u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d0d6c: 0xc04de0c  jal         func_137830
    ctx->pc = 0x2D0D6Cu;
    SET_GPR_U32(ctx, 31, 0x2D0D74u);
    ctx->pc = 0x2D0D70u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D0D6Cu;
            // 0x2d0d70: 0x27a50060  addiu       $a1, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
    ctx->pc = 0x137830u;
    if (runtime->hasFunction(0x137830u)) {
        auto targetFn = runtime->lookupFunction(0x137830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D0D74u; }
        if (ctx->pc != 0x2D0D74u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetWorldPosition0__8mgCFrameFPf_0x137830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D0D74u; }
        if (ctx->pc != 0x2D0D74u) { return; }
    }
    ctx->pc = 0x2D0D74u;
label_2d0d74:
    // 0x2d0d74: 0x3c0101f1  lui         $at, 0x1F1
    ctx->pc = 0x2d0d74u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)497 << 16));
    // 0x2d0d78: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x2d0d78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x2d0d7c: 0x8c22d430  lw          $v0, -0x2BD0($at)
    ctx->pc = 0x2d0d7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294956080)));
    // 0x2d0d80: 0xc041c5c  jal         func_107170
    ctx->pc = 0x2D0D80u;
    SET_GPR_U32(ctx, 31, 0x2D0D88u);
    ctx->pc = 0x2D0D84u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D0D80u;
            // 0x2d0d84: 0x24450690  addiu       $a1, $v0, 0x690 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 1680));
        ctx->in_delay_slot = false;
    ctx->pc = 0x107170u;
    if (runtime->hasFunction(0x107170u)) {
        auto targetFn = runtime->lookupFunction(0x107170u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D0D88u; }
        if (ctx->pc != 0x2D0D88u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0CopyVector_0x107170(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D0D88u; }
        if (ctx->pc != 0x2D0D88u) { return; }
    }
    ctx->pc = 0x2D0D88u;
label_2d0d88:
    // 0x2d0d88: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2d0d88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d0d8c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2d0d8cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d0d90: 0xc067e84  jal         func_19FA10
    ctx->pc = 0x2D0D90u;
    SET_GPR_U32(ctx, 31, 0x2D0D98u);
    ctx->pc = 0x2D0D94u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D0D90u;
            // 0x2d0d94: 0x27a600f8  addiu       $a2, $sp, 0xF8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 248));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19FA10u;
    if (runtime->hasFunction(0x19FA10u)) {
        auto targetFn = runtime->lookupFunction(0x19FA10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D0D98u; }
        if (ctx->pc != 0x2D0D98u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetNowWhp__16CBattleCharaInfoFiPi_0x19fa10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D0D98u; }
        if (ctx->pc != 0x2D0D98u) { return; }
    }
    ctx->pc = 0x2D0D98u;
label_2d0d98:
    // 0x2d0d98: 0x8fa200f8  lw          $v0, 0xF8($sp)
    ctx->pc = 0x2d0d98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x2d0d9c: 0x184001b5  blez        $v0, . + 4 + (0x1B5 << 2)
    ctx->pc = 0x2D0D9Cu;
    {
        const bool branch_taken_0x2d0d9c = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x2D0DA0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D0D9Cu;
            // 0x2d0da0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d0d9c) {
            ctx->pc = 0x2D1474u;
            goto label_2d1474;
        }
    }
    ctx->pc = 0x2D0DA4u;
    // 0x2d0da4: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x2d0da4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x2d0da8: 0x1642003e  bne         $s2, $v0, . + 4 + (0x3E << 2)
    ctx->pc = 0x2D0DA8u;
    {
        const bool branch_taken_0x2d0da8 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 2));
        ctx->pc = 0x2D0DACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D0DA8u;
            // 0x2d0dac: 0x2402001e  addiu       $v0, $zero, 0x1E (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d0da8) {
            ctx->pc = 0x2D0EA4u;
            goto label_2d0ea4;
        }
    }
    ctx->pc = 0x2D0DB0u;
    // 0x2d0db0: 0x3c0243fa  lui         $v0, 0x43FA
    ctx->pc = 0x2d0db0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17402 << 16));
    // 0x2d0db4: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x2d0db4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x2d0db8: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x2d0db8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2d0dbc: 0xc041c4a  jal         func_107128
    ctx->pc = 0x2D0DBCu;
    SET_GPR_U32(ctx, 31, 0x2D0DC4u);
    ctx->pc = 0x2D0DC0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D0DBCu;
            // 0x2d0dc0: 0x27a50070  addiu       $a1, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
    ctx->pc = 0x107128u;
    if (runtime->hasFunction(0x107128u)) {
        auto targetFn = runtime->lookupFunction(0x107128u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D0DC4u; }
        if (ctx->pc != 0x2D0DC4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0ScaleVector_0x107128(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D0DC4u; }
        if (ctx->pc != 0x2D0DC4u) { return; }
    }
    ctx->pc = 0x2D0DC4u;
label_2d0dc4:
    // 0x2d0dc4: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x2d0dc4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x2d0dc8: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x2d0dc8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x2d0dcc: 0xc041c38  jal         func_1070E0
    ctx->pc = 0x2D0DCCu;
    SET_GPR_U32(ctx, 31, 0x2D0DD4u);
    ctx->pc = 0x2D0DD0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D0DCCu;
            // 0x2d0dd0: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1070E0u;
    if (runtime->hasFunction(0x1070E0u)) {
        auto targetFn = runtime->lookupFunction(0x1070E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D0DD4u; }
        if (ctx->pc != 0x2D0DD4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0AddVector_0x1070e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D0DD4u; }
        if (ctx->pc != 0x2D0DD4u) { return; }
    }
    ctx->pc = 0x2D0DD4u;
label_2d0dd4:
    // 0x2d0dd4: 0x3c0401eb  lui         $a0, 0x1EB
    ctx->pc = 0x2d0dd4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)491 << 16));
    // 0x2d0dd8: 0xc06da08  jal         func_1B6820
    ctx->pc = 0x2D0DD8u;
    SET_GPR_U32(ctx, 31, 0x2D0DE0u);
    ctx->pc = 0x2D0DDCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D0DD8u;
            // 0x2d0ddc: 0x24840080  addiu       $a0, $a0, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B6820u;
    if (runtime->hasFunction(0x1B6820u)) {
        auto targetFn = runtime->lookupFunction(0x1B6820u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D0DE0u; }
        if (ctx->pc != 0x2D0DE0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Get__18CRocketLauncherManFv_0x1b6820(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D0DE0u; }
        if (ctx->pc != 0x2D0DE0u) { return; }
    }
    ctx->pc = 0x2D0DE0u;
label_2d0de0:
    // 0x2d0de0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2d0de0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d0de4: 0x1200002e  beqz        $s0, . + 4 + (0x2E << 2)
    ctx->pc = 0x2D0DE4u;
    {
        const bool branch_taken_0x2d0de4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D0DE8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D0DE4u;
            // 0x2d0de8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d0de4) {
            ctx->pc = 0x2D0EA0u;
            goto label_2d0ea0;
        }
    }
    ctx->pc = 0x2D0DECu;
    // 0x2d0dec: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x2d0decu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x2d0df0: 0x27a600a0  addiu       $a2, $sp, 0xA0
    ctx->pc = 0x2d0df0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x2d0df4: 0xc06d7f4  jal         func_1B5FD0
    ctx->pc = 0x2D0DF4u;
    SET_GPR_U32(ctx, 31, 0x2D0DFCu);
    ctx->pc = 0x2D0DF8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D0DF4u;
            // 0x2d0df8: 0x27a70070  addiu       $a3, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B5FD0u;
    if (runtime->hasFunction(0x1B5FD0u)) {
        auto targetFn = runtime->lookupFunction(0x1B5FD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D0DFCu; }
        if (ctx->pc != 0x2D0DFCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetPos__15CRocketLauncherFPfPfPf_0x1b5fd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D0DFCu; }
        if (ctx->pc != 0x2D0DFCu) { return; }
    }
    ctx->pc = 0x2D0DFCu;
label_2d0dfc:
    // 0x2d0dfc: 0x3c0101f1  lui         $at, 0x1F1
    ctx->pc = 0x2d0dfcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)497 << 16));
    // 0x2d0e00: 0x3c0401ea  lui         $a0, 0x1EA
    ctx->pc = 0x2d0e00u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)490 << 16));
    // 0x2d0e04: 0x8c26d430  lw          $a2, -0x2BD0($at)
    ctx->pc = 0x2d0e04u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294956080)));
    // 0x2d0e08: 0x3c0541a0  lui         $a1, 0x41A0
    ctx->pc = 0x2d0e08u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16800 << 16));
    // 0x2d0e0c: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x2d0e0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2d0e10: 0x2402001e  addiu       $v0, $zero, 0x1E
    ctx->pc = 0x2d0e10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x2d0e14: 0x24840710  addiu       $a0, $a0, 0x710
    ctx->pc = 0x2d0e14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1808));
    // 0x2d0e18: 0x84c60770  lh          $a2, 0x770($a2)
    ctx->pc = 0x2d0e18u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 1904)));
    // 0x2d0e1c: 0xae060000  sw          $a2, 0x0($s0)
    ctx->pc = 0x2d0e1cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 6));
    // 0x2d0e20: 0xae05015c  sw          $a1, 0x15C($s0)
    ctx->pc = 0x2d0e20u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 348), GPR_U32(ctx, 5));
    // 0x2d0e24: 0xae030168  sw          $v1, 0x168($s0)
    ctx->pc = 0x2d0e24u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 360), GPR_U32(ctx, 3));
    // 0x2d0e28: 0xc06e9c0  jal         func_1BA700
    ctx->pc = 0x2D0E28u;
    SET_GPR_U32(ctx, 31, 0x2D0E30u);
    ctx->pc = 0x2D0E2Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D0E28u;
            // 0x2d0e2c: 0xae02016c  sw          $v0, 0x16C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 364), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1BA700u;
    if (runtime->hasFunction(0x1BA700u)) {
        auto targetFn = runtime->lookupFunction(0x1BA700u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D0E30u; }
        if (ctx->pc != 0x2D0E30u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPrim__11CColPrimManFv_0x1ba700(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D0E30u; }
        if (ctx->pc != 0x2D0E30u) { return; }
    }
    ctx->pc = 0x2D0E30u;
label_2d0e30:
    // 0x2d0e30: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x2d0e30u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d0e34: 0x12600019  beqz        $s3, . + 4 + (0x19 << 2)
    ctx->pc = 0x2D0E34u;
    {
        const bool branch_taken_0x2d0e34 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D0E38u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D0E34u;
            // 0x2d0e38: 0x2411ffff  addiu       $s1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d0e34) {
            ctx->pc = 0x2D0E9Cu;
            goto label_2d0e9c;
        }
    }
    ctx->pc = 0x2D0E3Cu;
    // 0x2d0e3c: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x2d0e3cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x2d0e40: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2d0e40u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d0e44: 0x24a503e8  addiu       $a1, $a1, 0x3E8
    ctx->pc = 0x2d0e44u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1000));
    // 0x2d0e48: 0xc06e718  jal         func_1B9C60
    ctx->pc = 0x2D0E48u;
    SET_GPR_U32(ctx, 31, 0x2D0E50u);
    ctx->pc = 0x2D0E4Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D0E48u;
            // 0x2d0e4c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B9C60u;
    if (runtime->hasFunction(0x1B9C60u)) {
        auto targetFn = runtime->lookupFunction(0x1B9C60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D0E50u; }
        if (ctx->pc != 0x2D0E50u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetDamage__8CColPrimFPci_0x1b9c60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D0E50u; }
        if (ctx->pc != 0x2D0E50u) { return; }
    }
    ctx->pc = 0x2D0E50u;
label_2d0e50:
    // 0x2d0e50: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x2d0e50u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
    // 0x2d0e54: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2d0e54u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d0e58: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x2d0e58u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2d0e5c: 0xc06e760  jal         func_1B9D80
    ctx->pc = 0x2D0E5Cu;
    SET_GPR_U32(ctx, 31, 0x2D0E64u);
    ctx->pc = 0x2D0E60u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D0E5Cu;
            // 0x2d0e60: 0x27a50050  addiu       $a1, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B9D80u;
    if (runtime->hasFunction(0x1B9D80u)) {
        auto targetFn = runtime->lookupFunction(0x1B9D80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D0E64u; }
        if (ctx->pc != 0x2D0E64u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetCoord__8CColPrimFPff_0x1b9d80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D0E64u; }
        if (ctx->pc != 0x2D0E64u) { return; }
    }
    ctx->pc = 0x2D0E64u;
label_2d0e64:
    // 0x2d0e64: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2d0e64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d0e68: 0xc07a260  jal         func_1E8980
    ctx->pc = 0x2D0E68u;
    SET_GPR_U32(ctx, 31, 0x2D0E70u);
    ctx->pc = 0x2D0E6Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D0E68u;
            // 0x2d0e6c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E8980u;
    if (runtime->hasFunction(0x1E8980u)) {
        auto targetFn = runtime->lookupFunction(0x1E8980u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D0E70u; }
        if (ctx->pc != 0x2D0E70u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetDamageParam__FP8CColPrimi_0x1e8980(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D0E70u; }
        if (ctx->pc != 0x2D0E70u) { return; }
    }
    ctx->pc = 0x2D0E70u;
label_2d0e70:
    // 0x2d0e70: 0x8e620008  lw          $v0, 0x8($s3)
    ctx->pc = 0x2d0e70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
    // 0x2d0e74: 0x8e710000  lw          $s1, 0x0($s3)
    ctx->pc = 0x2d0e74u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x2d0e78: 0x84450046  lh          $a1, 0x46($v0)
    ctx->pc = 0x2d0e78u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 70)));
    // 0x2d0e7c: 0xc07a1f8  jal         func_1E87E0
    ctx->pc = 0x2D0E7Cu;
    SET_GPR_U32(ctx, 31, 0x2D0E84u);
    ctx->pc = 0x2D0E80u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D0E7Cu;
            // 0x2d0e80: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E87E0u;
    if (runtime->hasFunction(0x1E87E0u)) {
        auto targetFn = runtime->lookupFunction(0x1E87E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D0E84u; }
        if (ctx->pc != 0x2D0E84u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        calcWeaponParam2__Fii_0x1e87e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D0E84u; }
        if (ctx->pc != 0x2D0E84u) { return; }
    }
    ctx->pc = 0x2D0E84u;
label_2d0e84:
    // 0x2d0e84: 0x3c0101f1  lui         $at, 0x1F1
    ctx->pc = 0x2d0e84u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)497 << 16));
    // 0x2d0e88: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x2d0e88u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x2d0e8c: 0x8c22d430  lw          $v0, -0x2BD0($at)
    ctx->pc = 0x2d0e8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294956080)));
    // 0x2d0e90: 0x8c440588  lw          $a0, 0x588($v0)
    ctx->pc = 0x2d0e90u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1416)));
    // 0x2d0e94: 0xc063818  jal         func_18E060
    ctx->pc = 0x2D0E94u;
    SET_GPR_U32(ctx, 31, 0x2D0E9Cu);
    ctx->pc = 0x2D0E98u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D0E94u;
            // 0x2d0e98: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18E060u;
    if (runtime->hasFunction(0x18E060u)) {
        auto targetFn = runtime->lookupFunction(0x18E060u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D0E9Cu; }
        if (ctx->pc != 0x2D0E9Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sndSePlay__FUiii_0x18e060(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D0E9Cu; }
        if (ctx->pc != 0x2D0E9Cu) { return; }
    }
    ctx->pc = 0x2D0E9Cu;
label_2d0e9c:
    // 0x2d0e9c: 0xae110160  sw          $s1, 0x160($s0)
    ctx->pc = 0x2d0e9cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 352), GPR_U32(ctx, 17));
label_2d0ea0:
    // 0x2d0ea0: 0x2402001e  addiu       $v0, $zero, 0x1E
    ctx->pc = 0x2d0ea0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
label_2d0ea4:
    // 0x2d0ea4: 0x1642001f  bne         $s2, $v0, . + 4 + (0x1F << 2)
    ctx->pc = 0x2D0EA4u;
    {
        const bool branch_taken_0x2d0ea4 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 2));
        ctx->pc = 0x2D0EA8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D0EA4u;
            // 0x2d0ea8: 0x24020046  addiu       $v0, $zero, 0x46 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 70));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d0ea4) {
            ctx->pc = 0x2D0F24u;
            goto label_2d0f24;
        }
    }
    ctx->pc = 0x2D0EACu;
    // 0x2d0eac: 0x3c0243fa  lui         $v0, 0x43FA
    ctx->pc = 0x2d0eacu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17402 << 16));
    // 0x2d0eb0: 0x3c060037  lui         $a2, 0x37
    ctx->pc = 0x2d0eb0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)55 << 16));
    // 0x2d0eb4: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x2d0eb4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2d0eb8: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x2d0eb8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x2d0ebc: 0x27a50070  addiu       $a1, $sp, 0x70
    ctx->pc = 0x2d0ebcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x2d0ec0: 0xc0b4038  jal         func_2D00E0
    ctx->pc = 0x2D0EC0u;
    SET_GPR_U32(ctx, 31, 0x2D0EC8u);
    ctx->pc = 0x2D0EC4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D0EC0u;
            // 0x2d0ec4: 0x24c603f8  addiu       $a2, $a2, 0x3F8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1016));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D00E0u;
    if (runtime->hasFunction(0x2D00E0u)) {
        auto targetFn = runtime->lookupFunction(0x2D00E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D0EC8u; }
        if (ctx->pc != 0x2D0EC8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ShotMachineGun__FPfPfPcf_0x2d00e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D0EC8u; }
        if (ctx->pc != 0x2D0EC8u) { return; }
    }
    ctx->pc = 0x2D0EC8u;
label_2d0ec8:
    // 0x2d0ec8: 0x83829dc0  lb          $v0, -0x6240($gp)
    ctx->pc = 0x2d0ec8u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294942144)));
    // 0x2d0ecc: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2D0ECCu;
    {
        const bool branch_taken_0x2d0ecc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2D0ED0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D0ECCu;
            // 0x2d0ed0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d0ecc) {
            ctx->pc = 0x2D0EDCu;
            goto label_2d0edc;
        }
    }
    ctx->pc = 0x2D0ED4u;
    // 0x2d0ed4: 0xaf809dbc  sw          $zero, -0x6244($gp)
    ctx->pc = 0x2d0ed4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294942140), GPR_U32(ctx, 0));
    // 0x2d0ed8: 0xa3829dc0  sb          $v0, -0x6240($gp)
    ctx->pc = 0x2d0ed8u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294942144), (uint8_t)GPR_U32(ctx, 2));
label_2d0edc:
    // 0x2d0edc: 0x8f829dbc  lw          $v0, -0x6244($gp)
    ctx->pc = 0x2d0edcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942140)));
    // 0x2d0ee0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2d0ee0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2d0ee4: 0xaf829dbc  sw          $v0, -0x6244($gp)
    ctx->pc = 0x2d0ee4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294942140), GPR_U32(ctx, 2));
    // 0x2d0ee8: 0x8f829dbc  lw          $v0, -0x6244($gp)
    ctx->pc = 0x2d0ee8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942140)));
    // 0x2d0eec: 0x28410003  slti        $at, $v0, 0x3
    ctx->pc = 0x2d0eecu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x2d0ef0: 0x1420000b  bnez        $at, . + 4 + (0xB << 2)
    ctx->pc = 0x2D0EF0u;
    {
        const bool branch_taken_0x2d0ef0 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x2D0EF4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D0EF0u;
            // 0x2d0ef4: 0x3c0101f1  lui         $at, 0x1F1 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)497 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d0ef0) {
            ctx->pc = 0x2D0F20u;
            goto label_2d0f20;
        }
    }
    ctx->pc = 0x2D0EF8u;
    // 0x2d0ef8: 0xaf809dbc  sw          $zero, -0x6244($gp)
    ctx->pc = 0x2d0ef8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294942140), GPR_U32(ctx, 0));
    // 0x2d0efc: 0x8c22d430  lw          $v0, -0x2BD0($at)
    ctx->pc = 0x2d0efcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294956080)));
    // 0x2d0f00: 0x8c4405a0  lw          $a0, 0x5A0($v0)
    ctx->pc = 0x2d0f00u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1440)));
    // 0x2d0f04: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2D0F04u;
    {
        const bool branch_taken_0x2d0f04 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d0f04) {
            ctx->pc = 0x2D0F20u;
            goto label_2d0f20;
        }
    }
    ctx->pc = 0x2D0F0Cu;
    // 0x2d0f0c: 0x8c450588  lw          $a1, 0x588($v0)
    ctx->pc = 0x2d0f0cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1416)));
    // 0x2d0f10: 0x24060006  addiu       $a2, $zero, 0x6
    ctx->pc = 0x2d0f10u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x2d0f14: 0x2407000a  addiu       $a3, $zero, 0xA
    ctx->pc = 0x2d0f14u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x2d0f18: 0xc0631a8  jal         func_18C6A0
    ctx->pc = 0x2D0F18u;
    SET_GPR_U32(ctx, 31, 0x2D0F20u);
    ctx->pc = 0x2D0F1Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D0F18u;
            // 0x2d0f1c: 0x2408000d  addiu       $t0, $zero, 0xD (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18C6A0u;
    if (runtime->hasFunction(0x18C6A0u)) {
        auto targetFn = runtime->lookupFunction(0x18C6A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D0F20u; }
        if (ctx->pc != 0x2D0F20u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SeLoopPlayStop__11CLoopSeMngrFUiiii_0x18c6a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D0F20u; }
        if (ctx->pc != 0x2D0F20u) { return; }
    }
    ctx->pc = 0x2D0F20u;
label_2d0f20:
    // 0x2d0f20: 0x24020046  addiu       $v0, $zero, 0x46
    ctx->pc = 0x2d0f20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 70));
label_2d0f24:
    // 0x2d0f24: 0x16420056  bne         $s2, $v0, . + 4 + (0x56 << 2)
    ctx->pc = 0x2D0F24u;
    {
        const bool branch_taken_0x2d0f24 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 2));
        ctx->pc = 0x2D0F28u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D0F24u;
            // 0x2d0f28: 0x24020028  addiu       $v0, $zero, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d0f24) {
            ctx->pc = 0x2D1080u;
            goto label_2d1080;
        }
    }
    ctx->pc = 0x2D0F2Cu;
    // 0x2d0f2c: 0x3c0243fa  lui         $v0, 0x43FA
    ctx->pc = 0x2d0f2cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17402 << 16));
    // 0x2d0f30: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x2d0f30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x2d0f34: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x2d0f34u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2d0f38: 0xc041c4a  jal         func_107128
    ctx->pc = 0x2D0F38u;
    SET_GPR_U32(ctx, 31, 0x2D0F40u);
    ctx->pc = 0x2D0F3Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D0F38u;
            // 0x2d0f3c: 0x27a50070  addiu       $a1, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
    ctx->pc = 0x107128u;
    if (runtime->hasFunction(0x107128u)) {
        auto targetFn = runtime->lookupFunction(0x107128u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D0F40u; }
        if (ctx->pc != 0x2D0F40u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0ScaleVector_0x107128(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D0F40u; }
        if (ctx->pc != 0x2D0F40u) { return; }
    }
    ctx->pc = 0x2D0F40u;
label_2d0f40:
    // 0x2d0f40: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x2d0f40u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x2d0f44: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x2d0f44u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x2d0f48: 0xc041c38  jal         func_1070E0
    ctx->pc = 0x2D0F48u;
    SET_GPR_U32(ctx, 31, 0x2D0F50u);
    ctx->pc = 0x2D0F4Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D0F48u;
            // 0x2d0f4c: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1070E0u;
    if (runtime->hasFunction(0x1070E0u)) {
        auto targetFn = runtime->lookupFunction(0x1070E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D0F50u; }
        if (ctx->pc != 0x2D0F50u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0AddVector_0x1070e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D0F50u; }
        if (ctx->pc != 0x2D0F50u) { return; }
    }
    ctx->pc = 0x2D0F50u;
label_2d0f50:
    // 0x2d0f50: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x2d0f50u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x2d0f54: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x2d0f54u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2d0f58: 0xc0724bc  jal         func_1C92F0
    ctx->pc = 0x2D0F58u;
    SET_GPR_U32(ctx, 31, 0x2D0F60u);
    ctx->pc = 0x1C92F0u;
    if (runtime->hasFunction(0x1C92F0u)) {
        auto targetFn = runtime->lookupFunction(0x1C92F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D0F60u; }
        if (ctx->pc != 0x2D0F60u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fRand__Ff_0x1c92f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D0F60u; }
        if (ctx->pc != 0x2D0F60u) { return; }
    }
    ctx->pc = 0x2D0F60u;
label_2d0f60:
    // 0x2d0f60: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x2d0f60u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x2d0f64: 0x27b00078  addiu       $s0, $sp, 0x78
    ctx->pc = 0x2d0f64u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 120));
    // 0x2d0f68: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x2d0f68u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x2d0f6c: 0xc6020000  lwc1        $f2, 0x0($s0)
    ctx->pc = 0x2d0f6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2d0f70: 0x46030001  sub.s       $f0, $f0, $f3
    ctx->pc = 0x2d0f70u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[3]);
    // 0x2d0f74: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x2d0f74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x2d0f78: 0xc7a10070  lwc1        $f1, 0x70($sp)
    ctx->pc = 0x2d0f78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2d0f7c: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x2d0f7cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x2d0f80: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x2d0f80u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2d0f84: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x2d0f84u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2d0f88: 0xc0724bc  jal         func_1C92F0
    ctx->pc = 0x2D0F88u;
    SET_GPR_U32(ctx, 31, 0x2D0F90u);
    ctx->pc = 0x2D0F8Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D0F88u;
            // 0x2d0f8c: 0xe7a00070  swc1        $f0, 0x70($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C92F0u;
    if (runtime->hasFunction(0x1C92F0u)) {
        auto targetFn = runtime->lookupFunction(0x1C92F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D0F90u; }
        if (ctx->pc != 0x2D0F90u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fRand__Ff_0x1c92f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D0F90u; }
        if (ctx->pc != 0x2D0F90u) { return; }
    }
    ctx->pc = 0x2D0F90u;
label_2d0f90:
    // 0x2d0f90: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x2d0f90u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x2d0f94: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x2d0f94u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x2d0f98: 0xc7a20070  lwc1        $f2, 0x70($sp)
    ctx->pc = 0x2d0f98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2d0f9c: 0x46030001  sub.s       $f0, $f0, $f3
    ctx->pc = 0x2d0f9cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[3]);
    // 0x2d0fa0: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x2d0fa0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x2d0fa4: 0xc6010000  lwc1        $f1, 0x0($s0)
    ctx->pc = 0x2d0fa4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2d0fa8: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x2d0fa8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x2d0fac: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x2d0facu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2d0fb0: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x2d0fb0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2d0fb4: 0xc0724bc  jal         func_1C92F0
    ctx->pc = 0x2D0FB4u;
    SET_GPR_U32(ctx, 31, 0x2D0FBCu);
    ctx->pc = 0x2D0FB8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D0FB4u;
            // 0x2d0fb8: 0xe6000000  swc1        $f0, 0x0($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C92F0u;
    if (runtime->hasFunction(0x1C92F0u)) {
        auto targetFn = runtime->lookupFunction(0x1C92F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D0FBCu; }
        if (ctx->pc != 0x2D0FBCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fRand__Ff_0x1c92f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D0FBCu; }
        if (ctx->pc != 0x2D0FBCu) { return; }
    }
    ctx->pc = 0x2D0FBCu;
label_2d0fbc:
    // 0x2d0fbc: 0xc7a10074  lwc1        $f1, 0x74($sp)
    ctx->pc = 0x2d0fbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2d0fc0: 0x3c0401eb  lui         $a0, 0x1EB
    ctx->pc = 0x2d0fc0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)491 << 16));
    // 0x2d0fc4: 0x24840080  addiu       $a0, $a0, 0x80
    ctx->pc = 0x2d0fc4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 128));
    // 0x2d0fc8: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x2d0fc8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2d0fcc: 0xc06da08  jal         func_1B6820
    ctx->pc = 0x2D0FCCu;
    SET_GPR_U32(ctx, 31, 0x2D0FD4u);
    ctx->pc = 0x2D0FD0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D0FCCu;
            // 0x2d0fd0: 0xe7a00074  swc1        $f0, 0x74($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 116), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B6820u;
    if (runtime->hasFunction(0x1B6820u)) {
        auto targetFn = runtime->lookupFunction(0x1B6820u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D0FD4u; }
        if (ctx->pc != 0x2D0FD4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Get__18CRocketLauncherManFv_0x1b6820(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D0FD4u; }
        if (ctx->pc != 0x2D0FD4u) { return; }
    }
    ctx->pc = 0x2D0FD4u;
label_2d0fd4:
    // 0x2d0fd4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2d0fd4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d0fd8: 0x12000028  beqz        $s0, . + 4 + (0x28 << 2)
    ctx->pc = 0x2D0FD8u;
    {
        const bool branch_taken_0x2d0fd8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D0FDCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D0FD8u;
            // 0x2d0fdc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d0fd8) {
            ctx->pc = 0x2D107Cu;
            goto label_2d107c;
        }
    }
    ctx->pc = 0x2D0FE0u;
    // 0x2d0fe0: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x2d0fe0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x2d0fe4: 0x27a600b0  addiu       $a2, $sp, 0xB0
    ctx->pc = 0x2d0fe4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x2d0fe8: 0xc06d7f4  jal         func_1B5FD0
    ctx->pc = 0x2D0FE8u;
    SET_GPR_U32(ctx, 31, 0x2D0FF0u);
    ctx->pc = 0x2D0FECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D0FE8u;
            // 0x2d0fec: 0x27a70070  addiu       $a3, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B5FD0u;
    if (runtime->hasFunction(0x1B5FD0u)) {
        auto targetFn = runtime->lookupFunction(0x1B5FD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D0FF0u; }
        if (ctx->pc != 0x2D0FF0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetPos__15CRocketLauncherFPfPfPf_0x1b5fd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D0FF0u; }
        if (ctx->pc != 0x2D0FF0u) { return; }
    }
    ctx->pc = 0x2D0FF0u;
label_2d0ff0:
    // 0x2d0ff0: 0x3c0101f1  lui         $at, 0x1F1
    ctx->pc = 0x2d0ff0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)497 << 16));
    // 0x2d0ff4: 0x3c0401ea  lui         $a0, 0x1EA
    ctx->pc = 0x2d0ff4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)490 << 16));
    // 0x2d0ff8: 0x8c22d430  lw          $v0, -0x2BD0($at)
    ctx->pc = 0x2d0ff8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294956080)));
    // 0x2d0ffc: 0x24840710  addiu       $a0, $a0, 0x710
    ctx->pc = 0x2d0ffcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1808));
    // 0x2d1000: 0x84420770  lh          $v0, 0x770($v0)
    ctx->pc = 0x2d1000u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 1904)));
    // 0x2d1004: 0xc06e9c0  jal         func_1BA700
    ctx->pc = 0x2D1004u;
    SET_GPR_U32(ctx, 31, 0x2D100Cu);
    ctx->pc = 0x2D1008u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D1004u;
            // 0x2d1008: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1BA700u;
    if (runtime->hasFunction(0x1BA700u)) {
        auto targetFn = runtime->lookupFunction(0x1BA700u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D100Cu; }
        if (ctx->pc != 0x2D100Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPrim__11CColPrimManFv_0x1ba700(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D100Cu; }
        if (ctx->pc != 0x2D100Cu) { return; }
    }
    ctx->pc = 0x2D100Cu;
label_2d100c:
    // 0x2d100c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2d100cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d1010: 0x12200019  beqz        $s1, . + 4 + (0x19 << 2)
    ctx->pc = 0x2D1010u;
    {
        const bool branch_taken_0x2d1010 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D1014u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D1010u;
            // 0x2d1014: 0x2413ffff  addiu       $s3, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d1010) {
            ctx->pc = 0x2D1078u;
            goto label_2d1078;
        }
    }
    ctx->pc = 0x2D1018u;
    // 0x2d1018: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x2d1018u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x2d101c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2d101cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d1020: 0x24a50408  addiu       $a1, $a1, 0x408
    ctx->pc = 0x2d1020u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1032));
    // 0x2d1024: 0xc06e718  jal         func_1B9C60
    ctx->pc = 0x2D1024u;
    SET_GPR_U32(ctx, 31, 0x2D102Cu);
    ctx->pc = 0x2D1028u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D1024u;
            // 0x2d1028: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B9C60u;
    if (runtime->hasFunction(0x1B9C60u)) {
        auto targetFn = runtime->lookupFunction(0x1B9C60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D102Cu; }
        if (ctx->pc != 0x2D102Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetDamage__8CColPrimFPci_0x1b9c60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D102Cu; }
        if (ctx->pc != 0x2D102Cu) { return; }
    }
    ctx->pc = 0x2D102Cu;
label_2d102c:
    // 0x2d102c: 0x3c0240a0  lui         $v0, 0x40A0
    ctx->pc = 0x2d102cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16544 << 16));
    // 0x2d1030: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2d1030u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d1034: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x2d1034u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2d1038: 0xc06e760  jal         func_1B9D80
    ctx->pc = 0x2D1038u;
    SET_GPR_U32(ctx, 31, 0x2D1040u);
    ctx->pc = 0x2D103Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D1038u;
            // 0x2d103c: 0x27a50050  addiu       $a1, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B9D80u;
    if (runtime->hasFunction(0x1B9D80u)) {
        auto targetFn = runtime->lookupFunction(0x1B9D80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D1040u; }
        if (ctx->pc != 0x2D1040u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetCoord__8CColPrimFPff_0x1b9d80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D1040u; }
        if (ctx->pc != 0x2D1040u) { return; }
    }
    ctx->pc = 0x2D1040u;
label_2d1040:
    // 0x2d1040: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2d1040u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d1044: 0xc07a260  jal         func_1E8980
    ctx->pc = 0x2D1044u;
    SET_GPR_U32(ctx, 31, 0x2D104Cu);
    ctx->pc = 0x2D1048u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D1044u;
            // 0x2d1048: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E8980u;
    if (runtime->hasFunction(0x1E8980u)) {
        auto targetFn = runtime->lookupFunction(0x1E8980u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D104Cu; }
        if (ctx->pc != 0x2D104Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetDamageParam__FP8CColPrimi_0x1e8980(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D104Cu; }
        if (ctx->pc != 0x2D104Cu) { return; }
    }
    ctx->pc = 0x2D104Cu;
label_2d104c:
    // 0x2d104c: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x2d104cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x2d1050: 0x8e330000  lw          $s3, 0x0($s1)
    ctx->pc = 0x2d1050u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2d1054: 0x84450046  lh          $a1, 0x46($v0)
    ctx->pc = 0x2d1054u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 70)));
    // 0x2d1058: 0xc07a1f8  jal         func_1E87E0
    ctx->pc = 0x2D1058u;
    SET_GPR_U32(ctx, 31, 0x2D1060u);
    ctx->pc = 0x2D105Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D1058u;
            // 0x2d105c: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E87E0u;
    if (runtime->hasFunction(0x1E87E0u)) {
        auto targetFn = runtime->lookupFunction(0x1E87E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D1060u; }
        if (ctx->pc != 0x2D1060u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        calcWeaponParam2__Fii_0x1e87e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D1060u; }
        if (ctx->pc != 0x2D1060u) { return; }
    }
    ctx->pc = 0x2D1060u;
label_2d1060:
    // 0x2d1060: 0x3c0101f1  lui         $at, 0x1F1
    ctx->pc = 0x2d1060u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)497 << 16));
    // 0x2d1064: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x2d1064u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x2d1068: 0x8c22d430  lw          $v0, -0x2BD0($at)
    ctx->pc = 0x2d1068u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294956080)));
    // 0x2d106c: 0x8c440588  lw          $a0, 0x588($v0)
    ctx->pc = 0x2d106cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1416)));
    // 0x2d1070: 0xc063818  jal         func_18E060
    ctx->pc = 0x2D1070u;
    SET_GPR_U32(ctx, 31, 0x2D1078u);
    ctx->pc = 0x2D1074u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D1070u;
            // 0x2d1074: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18E060u;
    if (runtime->hasFunction(0x18E060u)) {
        auto targetFn = runtime->lookupFunction(0x18E060u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D1078u; }
        if (ctx->pc != 0x2D1078u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sndSePlay__FUiii_0x18e060(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D1078u; }
        if (ctx->pc != 0x2D1078u) { return; }
    }
    ctx->pc = 0x2D1078u;
label_2d1078:
    // 0x2d1078: 0xae130160  sw          $s3, 0x160($s0)
    ctx->pc = 0x2d1078u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 352), GPR_U32(ctx, 19));
label_2d107c:
    // 0x2d107c: 0x24020028  addiu       $v0, $zero, 0x28
    ctx->pc = 0x2d107cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
label_2d1080:
    // 0x2d1080: 0x16420080  bne         $s2, $v0, . + 4 + (0x80 << 2)
    ctx->pc = 0x2D1080u;
    {
        const bool branch_taken_0x2d1080 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 2));
        ctx->pc = 0x2D1084u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D1080u;
            // 0x2d1084: 0x2402005a  addiu       $v0, $zero, 0x5A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 90));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d1080) {
            ctx->pc = 0x2D1284u;
            goto label_2d1284;
        }
    }
    ctx->pc = 0x2D1088u;
    // 0x2d1088: 0x3c0243fa  lui         $v0, 0x43FA
    ctx->pc = 0x2d1088u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17402 << 16));
    // 0x2d108c: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x2d108cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x2d1090: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x2d1090u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2d1094: 0xc041c4a  jal         func_107128
    ctx->pc = 0x2D1094u;
    SET_GPR_U32(ctx, 31, 0x2D109Cu);
    ctx->pc = 0x2D1098u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D1094u;
            // 0x2d1098: 0x27a50070  addiu       $a1, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
    ctx->pc = 0x107128u;
    if (runtime->hasFunction(0x107128u)) {
        auto targetFn = runtime->lookupFunction(0x107128u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D109Cu; }
        if (ctx->pc != 0x2D109Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0ScaleVector_0x107128(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D109Cu; }
        if (ctx->pc != 0x2D109Cu) { return; }
    }
    ctx->pc = 0x2D109Cu;
label_2d109c:
    // 0x2d109c: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x2d109cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x2d10a0: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x2d10a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x2d10a4: 0xc041c38  jal         func_1070E0
    ctx->pc = 0x2D10A4u;
    SET_GPR_U32(ctx, 31, 0x2D10ACu);
    ctx->pc = 0x2D10A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D10A4u;
            // 0x2d10a8: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1070E0u;
    if (runtime->hasFunction(0x1070E0u)) {
        auto targetFn = runtime->lookupFunction(0x1070E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D10ACu; }
        if (ctx->pc != 0x2D10ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0AddVector_0x1070e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D10ACu; }
        if (ctx->pc != 0x2D10ACu) { return; }
    }
    ctx->pc = 0x2D10ACu;
label_2d10ac:
    // 0x2d10ac: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x2d10acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x2d10b0: 0x27a50060  addiu       $a1, $sp, 0x60
    ctx->pc = 0x2d10b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x2d10b4: 0xc041c3e  jal         func_1070F8
    ctx->pc = 0x2D10B4u;
    SET_GPR_U32(ctx, 31, 0x2D10BCu);
    ctx->pc = 0x2D10B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D10B4u;
            // 0x2d10b8: 0x27a60050  addiu       $a2, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1070F8u;
    if (runtime->hasFunction(0x1070F8u)) {
        auto targetFn = runtime->lookupFunction(0x1070F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D10BCu; }
        if (ctx->pc != 0x2D10BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0SubVector_0x1070f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D10BCu; }
        if (ctx->pc != 0x2D10BCu) { return; }
    }
    ctx->pc = 0x2D10BCu;
label_2d10bc:
    // 0x2d10bc: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x2d10bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x2d10c0: 0xc041be0  jal         func_106F80
    ctx->pc = 0x2D10C0u;
    SET_GPR_U32(ctx, 31, 0x2D10C8u);
    ctx->pc = 0x2D10C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D10C0u;
            // 0x2d10c4: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x106F80u;
    if (runtime->hasFunction(0x106F80u)) {
        auto targetFn = runtime->lookupFunction(0x106F80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D10C8u; }
        if (ctx->pc != 0x2D10C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0Normalize_0x106f80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D10C8u; }
        if (ctx->pc != 0x2D10C8u) { return; }
    }
    ctx->pc = 0x2D10C8u;
label_2d10c8:
    // 0x2d10c8: 0x3c0401eb  lui         $a0, 0x1EB
    ctx->pc = 0x2d10c8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)491 << 16));
    // 0x2d10cc: 0xc06df50  jal         func_1B7D40
    ctx->pc = 0x2D10CCu;
    SET_GPR_U32(ctx, 31, 0x2D10D4u);
    ctx->pc = 0x2D10D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D10CCu;
            // 0x2d10d0: 0x24842990  addiu       $a0, $a0, 0x2990 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 10640));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B7D40u;
    if (runtime->hasFunction(0x1B7D40u)) {
        auto targetFn = runtime->lookupFunction(0x1B7D40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D10D4u; }
        if (ctx->pc != 0x2D10D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Get__12CLaserGunManFv_0x1b7d40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D10D4u; }
        if (ctx->pc != 0x2D10D4u) { return; }
    }
    ctx->pc = 0x2D10D4u;
label_2d10d4:
    // 0x2d10d4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2d10d4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d10d8: 0x12000069  beqz        $s0, . + 4 + (0x69 << 2)
    ctx->pc = 0x2D10D8u;
    {
        const bool branch_taken_0x2d10d8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D10DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D10D8u;
            // 0x2d10dc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d10d8) {
            ctx->pc = 0x2D1280u;
            goto label_2d1280;
        }
    }
    ctx->pc = 0x2D10E0u;
    // 0x2d10e0: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x2d10e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x2d10e4: 0x27a600c0  addiu       $a2, $sp, 0xC0
    ctx->pc = 0x2d10e4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x2d10e8: 0xc06db94  jal         func_1B6E50
    ctx->pc = 0x2D10E8u;
    SET_GPR_U32(ctx, 31, 0x2D10F0u);
    ctx->pc = 0x2D10ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D10E8u;
            // 0x2d10ec: 0x27a70070  addiu       $a3, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B6E50u;
    if (runtime->hasFunction(0x1B6E50u)) {
        auto targetFn = runtime->lookupFunction(0x1B6E50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D10F0u; }
        if (ctx->pc != 0x2D10F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetPos__9CLaserGunFPfPfPf_0x1b6e50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D10F0u; }
        if (ctx->pc != 0x2D10F0u) { return; }
    }
    ctx->pc = 0x2D10F0u;
label_2d10f0:
    // 0x2d10f0: 0x3c0101f1  lui         $at, 0x1F1
    ctx->pc = 0x2d10f0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)497 << 16));
    // 0x2d10f4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2d10f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d10f8: 0x8c22d430  lw          $v0, -0x2BD0($at)
    ctx->pc = 0x2d10f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294956080)));
    // 0x2d10fc: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x2d10fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2d1100: 0x84420770  lh          $v0, 0x770($v0)
    ctx->pc = 0x2d1100u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 1904)));
    // 0x2d1104: 0xc06dbd8  jal         func_1B6F60
    ctx->pc = 0x2D1104u;
    SET_GPR_U32(ctx, 31, 0x2D110Cu);
    ctx->pc = 0x2D1108u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D1104u;
            // 0x2d1108: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B6F60u;
    if (runtime->hasFunction(0x1B6F60u)) {
        auto targetFn = runtime->lookupFunction(0x1B6F60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D110Cu; }
        if (ctx->pc != 0x2D110Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetVisualCode__9CLaserGunFi_0x1b6f60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D110Cu; }
        if (ctx->pc != 0x2D110Cu) { return; }
    }
    ctx->pc = 0x2D110Cu;
label_2d110c:
    // 0x2d110c: 0x3c0401ea  lui         $a0, 0x1EA
    ctx->pc = 0x2d110cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)490 << 16));
    // 0x2d1110: 0xc06e9c0  jal         func_1BA700
    ctx->pc = 0x2D1110u;
    SET_GPR_U32(ctx, 31, 0x2D1118u);
    ctx->pc = 0x2D1114u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D1110u;
            // 0x2d1114: 0x24840710  addiu       $a0, $a0, 0x710 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1808));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1BA700u;
    if (runtime->hasFunction(0x1BA700u)) {
        auto targetFn = runtime->lookupFunction(0x1BA700u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D1118u; }
        if (ctx->pc != 0x2D1118u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPrim__11CColPrimManFv_0x1ba700(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D1118u; }
        if (ctx->pc != 0x2D1118u) { return; }
    }
    ctx->pc = 0x2D1118u;
label_2d1118:
    // 0x2d1118: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2d1118u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d111c: 0x12200019  beqz        $s1, . + 4 + (0x19 << 2)
    ctx->pc = 0x2D111Cu;
    {
        const bool branch_taken_0x2d111c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D1120u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D111Cu;
            // 0x2d1120: 0x2413ffff  addiu       $s3, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d111c) {
            ctx->pc = 0x2D1184u;
            goto label_2d1184;
        }
    }
    ctx->pc = 0x2D1124u;
    // 0x2d1124: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x2d1124u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x2d1128: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2d1128u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d112c: 0x24a50418  addiu       $a1, $a1, 0x418
    ctx->pc = 0x2d112cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1048));
    // 0x2d1130: 0xc06e718  jal         func_1B9C60
    ctx->pc = 0x2D1130u;
    SET_GPR_U32(ctx, 31, 0x2D1138u);
    ctx->pc = 0x2D1134u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D1130u;
            // 0x2d1134: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B9C60u;
    if (runtime->hasFunction(0x1B9C60u)) {
        auto targetFn = runtime->lookupFunction(0x1B9C60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D1138u; }
        if (ctx->pc != 0x2D1138u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetDamage__8CColPrimFPci_0x1b9c60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D1138u; }
        if (ctx->pc != 0x2D1138u) { return; }
    }
    ctx->pc = 0x2D1138u;
label_2d1138:
    // 0x2d1138: 0x3c0240a0  lui         $v0, 0x40A0
    ctx->pc = 0x2d1138u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16544 << 16));
    // 0x2d113c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2d113cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d1140: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x2d1140u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2d1144: 0xc06e760  jal         func_1B9D80
    ctx->pc = 0x2D1144u;
    SET_GPR_U32(ctx, 31, 0x2D114Cu);
    ctx->pc = 0x2D1148u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D1144u;
            // 0x2d1148: 0x27a50050  addiu       $a1, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B9D80u;
    if (runtime->hasFunction(0x1B9D80u)) {
        auto targetFn = runtime->lookupFunction(0x1B9D80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D114Cu; }
        if (ctx->pc != 0x2D114Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetCoord__8CColPrimFPff_0x1b9d80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D114Cu; }
        if (ctx->pc != 0x2D114Cu) { return; }
    }
    ctx->pc = 0x2D114Cu;
label_2d114c:
    // 0x2d114c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2d114cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d1150: 0xc07a260  jal         func_1E8980
    ctx->pc = 0x2D1150u;
    SET_GPR_U32(ctx, 31, 0x2D1158u);
    ctx->pc = 0x2D1154u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D1150u;
            // 0x2d1154: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E8980u;
    if (runtime->hasFunction(0x1E8980u)) {
        auto targetFn = runtime->lookupFunction(0x1E8980u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D1158u; }
        if (ctx->pc != 0x2D1158u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetDamageParam__FP8CColPrimi_0x1e8980(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D1158u; }
        if (ctx->pc != 0x2D1158u) { return; }
    }
    ctx->pc = 0x2D1158u;
label_2d1158:
    // 0x2d1158: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x2d1158u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x2d115c: 0x8e330000  lw          $s3, 0x0($s1)
    ctx->pc = 0x2d115cu;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2d1160: 0x84450046  lh          $a1, 0x46($v0)
    ctx->pc = 0x2d1160u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 70)));
    // 0x2d1164: 0xc07a1f8  jal         func_1E87E0
    ctx->pc = 0x2D1164u;
    SET_GPR_U32(ctx, 31, 0x2D116Cu);
    ctx->pc = 0x2D1168u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D1164u;
            // 0x2d1168: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E87E0u;
    if (runtime->hasFunction(0x1E87E0u)) {
        auto targetFn = runtime->lookupFunction(0x1E87E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D116Cu; }
        if (ctx->pc != 0x2D116Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        calcWeaponParam2__Fii_0x1e87e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D116Cu; }
        if (ctx->pc != 0x2D116Cu) { return; }
    }
    ctx->pc = 0x2D116Cu;
label_2d116c:
    // 0x2d116c: 0x3c0101f1  lui         $at, 0x1F1
    ctx->pc = 0x2d116cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)497 << 16));
    // 0x2d1170: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x2d1170u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x2d1174: 0x8c22d430  lw          $v0, -0x2BD0($at)
    ctx->pc = 0x2d1174u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294956080)));
    // 0x2d1178: 0x8c440588  lw          $a0, 0x588($v0)
    ctx->pc = 0x2d1178u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1416)));
    // 0x2d117c: 0xc063818  jal         func_18E060
    ctx->pc = 0x2D117Cu;
    SET_GPR_U32(ctx, 31, 0x2D1184u);
    ctx->pc = 0x2D1180u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D117Cu;
            // 0x2d1180: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18E060u;
    if (runtime->hasFunction(0x18E060u)) {
        auto targetFn = runtime->lookupFunction(0x18E060u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D1184u; }
        if (ctx->pc != 0x2D1184u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sndSePlay__FUiii_0x18e060(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D1184u; }
        if (ctx->pc != 0x2D1184u) { return; }
    }
    ctx->pc = 0x2D1184u;
label_2d1184:
    // 0x2d1184: 0xae1300e8  sw          $s3, 0xE8($s0)
    ctx->pc = 0x2d1184u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 232), GPR_U32(ctx, 19));
    // 0x2d1188: 0x3c0101f1  lui         $at, 0x1F1
    ctx->pc = 0x2d1188u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)497 << 16));
    // 0x2d118c: 0x8c22d430  lw          $v0, -0x2BD0($at)
    ctx->pc = 0x2d118cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294956080)));
    // 0x2d1190: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x2d1190u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x2d1194: 0x24a502c0  addiu       $a1, $a1, 0x2C0
    ctx->pc = 0x2d1194u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 704));
    // 0x2d1198: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2d1198u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d119c: 0x8c4407dc  lw          $a0, 0x7DC($v0)
    ctx->pc = 0x2d119cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2012)));
    // 0x2d11a0: 0xc0b8498  jal         func_2E1260
    ctx->pc = 0x2D11A0u;
    SET_GPR_U32(ctx, 31, 0x2D11A8u);
    ctx->pc = 0x2D11A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D11A0u;
            // 0x2d11a4: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E1260u;
    if (runtime->hasFunction(0x2E1260u)) {
        auto targetFn = runtime->lookupFunction(0x2E1260u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D11A8u; }
        if (ctx->pc != 0x2D11A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEffSpt__16CEffectScriptManFPcii_0x2e1260(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D11A8u; }
        if (ctx->pc != 0x2D11A8u) { return; }
    }
    ctx->pc = 0x2D11A8u;
label_2d11a8:
    // 0x2d11a8: 0x3c0101f1  lui         $at, 0x1F1
    ctx->pc = 0x2d11a8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)497 << 16));
    // 0x2d11ac: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x2d11acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x2d11b0: 0x8c22d430  lw          $v0, -0x2BD0($at)
    ctx->pc = 0x2d11b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294956080)));
    // 0x2d11b4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2d11b4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d11b8: 0x8c4407dc  lw          $a0, 0x7DC($v0)
    ctx->pc = 0x2d11b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2012)));
    // 0x2d11bc: 0xc0b8894  jal         func_2E2250
    ctx->pc = 0x2D11BCu;
    SET_GPR_U32(ctx, 31, 0x2D11C4u);
    ctx->pc = 0x2D11C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D11BCu;
            // 0x2d11c0: 0x2407ffff  addiu       $a3, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E2250u;
    if (runtime->hasFunction(0x2E2250u)) {
        auto targetFn = runtime->lookupFunction(0x2E2250u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D11C4u; }
        if (ctx->pc != 0x2D11C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetScriptVect1__16CEffectScriptManFPfii_0x2e2250(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D11C4u; }
        if (ctx->pc != 0x2D11C4u) { return; }
    }
    ctx->pc = 0x2D11C4u;
label_2d11c4:
    // 0x2d11c4: 0x3c0101f1  lui         $at, 0x1F1
    ctx->pc = 0x2d11c4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)497 << 16));
    // 0x2d11c8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2d11c8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d11cc: 0x8c22d430  lw          $v0, -0x2BD0($at)
    ctx->pc = 0x2d11ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294956080)));
    // 0x2d11d0: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x2d11d0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d11d4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2d11d4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d11d8: 0x8c4407dc  lw          $a0, 0x7DC($v0)
    ctx->pc = 0x2d11d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2012)));
    // 0x2d11dc: 0xc0b89c4  jal         func_2E2710
    ctx->pc = 0x2D11DCu;
    SET_GPR_U32(ctx, 31, 0x2D11E4u);
    ctx->pc = 0x2D11E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D11DCu;
            // 0x2d11e0: 0x2408ffff  addiu       $t0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E2710u;
    if (runtime->hasFunction(0x2E2710u)) {
        auto targetFn = runtime->lookupFunction(0x2E2710u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D11E4u; }
        if (ctx->pc != 0x2D11E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetValue__16CEffectScriptManFiiii_0x2e2710(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D11E4u; }
        if (ctx->pc != 0x2D11E4u) { return; }
    }
    ctx->pc = 0x2D11E4u;
label_2d11e4:
    // 0x2d11e4: 0x3c0101f1  lui         $at, 0x1F1
    ctx->pc = 0x2d11e4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)497 << 16));
    // 0x2d11e8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2d11e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d11ec: 0x8c22d430  lw          $v0, -0x2BD0($at)
    ctx->pc = 0x2d11ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294956080)));
    // 0x2d11f0: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x2d11f0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2d11f4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2d11f4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d11f8: 0x8c4407dc  lw          $a0, 0x7DC($v0)
    ctx->pc = 0x2d11f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2012)));
    // 0x2d11fc: 0xc0b89f0  jal         func_2E27C0
    ctx->pc = 0x2D11FCu;
    SET_GPR_U32(ctx, 31, 0x2D1204u);
    ctx->pc = 0x2D1200u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D11FCu;
            // 0x2d1200: 0x2407ffff  addiu       $a3, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E27C0u;
    if (runtime->hasFunction(0x2E27C0u)) {
        auto targetFn = runtime->lookupFunction(0x2E27C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D1204u; }
        if (ctx->pc != 0x2D1204u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetValue__16CEffectScriptManFifii_0x2e27c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D1204u; }
        if (ctx->pc != 0x2D1204u) { return; }
    }
    ctx->pc = 0x2D1204u;
label_2d1204:
    // 0x2d1204: 0x3c0101f1  lui         $at, 0x1F1
    ctx->pc = 0x2d1204u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)497 << 16));
    // 0x2d1208: 0x3c024300  lui         $v0, 0x4300
    ctx->pc = 0x2d1208u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17152 << 16));
    // 0x2d120c: 0x8c23d430  lw          $v1, -0x2BD0($at)
    ctx->pc = 0x2d120cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294956080)));
    // 0x2d1210: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x2d1210u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2d1214: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x2d1214u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2d1218: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2d1218u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d121c: 0x8c6407dc  lw          $a0, 0x7DC($v1)
    ctx->pc = 0x2d121cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 2012)));
    // 0x2d1220: 0xc0b89f0  jal         func_2E27C0
    ctx->pc = 0x2D1220u;
    SET_GPR_U32(ctx, 31, 0x2D1228u);
    ctx->pc = 0x2D1224u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D1220u;
            // 0x2d1224: 0x2407ffff  addiu       $a3, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E27C0u;
    if (runtime->hasFunction(0x2E27C0u)) {
        auto targetFn = runtime->lookupFunction(0x2E27C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D1228u; }
        if (ctx->pc != 0x2D1228u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetValue__16CEffectScriptManFifii_0x2e27c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D1228u; }
        if (ctx->pc != 0x2D1228u) { return; }
    }
    ctx->pc = 0x2D1228u;
label_2d1228:
    // 0x2d1228: 0x3c0101f1  lui         $at, 0x1F1
    ctx->pc = 0x2d1228u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)497 << 16));
    // 0x2d122c: 0x3c024300  lui         $v0, 0x4300
    ctx->pc = 0x2d122cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17152 << 16));
    // 0x2d1230: 0x8c23d430  lw          $v1, -0x2BD0($at)
    ctx->pc = 0x2d1230u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294956080)));
    // 0x2d1234: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x2d1234u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2d1238: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x2d1238u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2d123c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2d123cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d1240: 0x8c6407dc  lw          $a0, 0x7DC($v1)
    ctx->pc = 0x2d1240u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 2012)));
    // 0x2d1244: 0xc0b89f0  jal         func_2E27C0
    ctx->pc = 0x2D1244u;
    SET_GPR_U32(ctx, 31, 0x2D124Cu);
    ctx->pc = 0x2D1248u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D1244u;
            // 0x2d1248: 0x2407ffff  addiu       $a3, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E27C0u;
    if (runtime->hasFunction(0x2E27C0u)) {
        auto targetFn = runtime->lookupFunction(0x2E27C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D124Cu; }
        if (ctx->pc != 0x2D124Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetValue__16CEffectScriptManFifii_0x2e27c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D124Cu; }
        if (ctx->pc != 0x2D124Cu) { return; }
    }
    ctx->pc = 0x2D124Cu;
label_2d124c:
    // 0x2d124c: 0x3c0101f1  lui         $at, 0x1F1
    ctx->pc = 0x2d124cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)497 << 16));
    // 0x2d1250: 0x3c024320  lui         $v0, 0x4320
    ctx->pc = 0x2d1250u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17184 << 16));
    // 0x2d1254: 0x8c23d430  lw          $v1, -0x2BD0($at)
    ctx->pc = 0x2d1254u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294956080)));
    // 0x2d1258: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x2d1258u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2d125c: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x2d125cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2d1260: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2d1260u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d1264: 0x8c6407dc  lw          $a0, 0x7DC($v1)
    ctx->pc = 0x2d1264u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 2012)));
    // 0x2d1268: 0xc0b89f0  jal         func_2E27C0
    ctx->pc = 0x2D1268u;
    SET_GPR_U32(ctx, 31, 0x2D1270u);
    ctx->pc = 0x2D126Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D1268u;
            // 0x2d126c: 0x2407ffff  addiu       $a3, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E27C0u;
    if (runtime->hasFunction(0x2E27C0u)) {
        auto targetFn = runtime->lookupFunction(0x2E27C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D1270u; }
        if (ctx->pc != 0x2D1270u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetValue__16CEffectScriptManFifii_0x2e27c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D1270u; }
        if (ctx->pc != 0x2D1270u) { return; }
    }
    ctx->pc = 0x2D1270u;
label_2d1270:
    // 0x2d1270: 0x3c0101f1  lui         $at, 0x1F1
    ctx->pc = 0x2d1270u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)497 << 16));
    // 0x2d1274: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x2d1274u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2d1278: 0x8c22d430  lw          $v0, -0x2BD0($at)
    ctx->pc = 0x2d1278u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294956080)));
    // 0x2d127c: 0xa4430764  sh          $v1, 0x764($v0)
    ctx->pc = 0x2d127cu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 1892), (uint16_t)GPR_U32(ctx, 3));
label_2d1280:
    // 0x2d1280: 0x2402005a  addiu       $v0, $zero, 0x5A
    ctx->pc = 0x2d1280u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 90));
label_2d1284:
    // 0x2d1284: 0x1642007a  bne         $s2, $v0, . + 4 + (0x7A << 2)
    ctx->pc = 0x2D1284u;
    {
        const bool branch_taken_0x2d1284 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 2));
        ctx->pc = 0x2D1288u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D1284u;
            // 0x2d1288: 0x3c0243fa  lui         $v0, 0x43FA (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17402 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d1284) {
            ctx->pc = 0x2D1470u;
            goto label_2d1470;
        }
    }
    ctx->pc = 0x2D128Cu;
    // 0x2d128c: 0x27a400d0  addiu       $a0, $sp, 0xD0
    ctx->pc = 0x2d128cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x2d1290: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x2d1290u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2d1294: 0xc041c4a  jal         func_107128
    ctx->pc = 0x2D1294u;
    SET_GPR_U32(ctx, 31, 0x2D129Cu);
    ctx->pc = 0x2D1298u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D1294u;
            // 0x2d1298: 0x27a50070  addiu       $a1, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
    ctx->pc = 0x107128u;
    if (runtime->hasFunction(0x107128u)) {
        auto targetFn = runtime->lookupFunction(0x107128u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D129Cu; }
        if (ctx->pc != 0x2D129Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0ScaleVector_0x107128(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D129Cu; }
        if (ctx->pc != 0x2D129Cu) { return; }
    }
    ctx->pc = 0x2D129Cu;
label_2d129c:
    // 0x2d129c: 0x27a400d0  addiu       $a0, $sp, 0xD0
    ctx->pc = 0x2d129cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x2d12a0: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x2d12a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x2d12a4: 0xc041c38  jal         func_1070E0
    ctx->pc = 0x2D12A4u;
    SET_GPR_U32(ctx, 31, 0x2D12ACu);
    ctx->pc = 0x2D12A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D12A4u;
            // 0x2d12a8: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1070E0u;
    if (runtime->hasFunction(0x1070E0u)) {
        auto targetFn = runtime->lookupFunction(0x1070E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D12ACu; }
        if (ctx->pc != 0x2D12ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0AddVector_0x1070e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D12ACu; }
        if (ctx->pc != 0x2D12ACu) { return; }
    }
    ctx->pc = 0x2D12ACu;
label_2d12ac:
    // 0x2d12ac: 0x3c0241a0  lui         $v0, 0x41A0
    ctx->pc = 0x2d12acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16800 << 16));
    // 0x2d12b0: 0x27a400e0  addiu       $a0, $sp, 0xE0
    ctx->pc = 0x2d12b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x2d12b4: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x2d12b4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2d12b8: 0xc041c4a  jal         func_107128
    ctx->pc = 0x2D12B8u;
    SET_GPR_U32(ctx, 31, 0x2D12C0u);
    ctx->pc = 0x2D12BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D12B8u;
            // 0x2d12bc: 0x27a50070  addiu       $a1, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
    ctx->pc = 0x107128u;
    if (runtime->hasFunction(0x107128u)) {
        auto targetFn = runtime->lookupFunction(0x107128u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D12C0u; }
        if (ctx->pc != 0x2D12C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0ScaleVector_0x107128(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D12C0u; }
        if (ctx->pc != 0x2D12C0u) { return; }
    }
    ctx->pc = 0x2D12C0u;
label_2d12c0:
    // 0x2d12c0: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x2d12c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x2d12c4: 0x27a600e0  addiu       $a2, $sp, 0xE0
    ctx->pc = 0x2d12c4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x2d12c8: 0xc041c38  jal         func_1070E0
    ctx->pc = 0x2D12C8u;
    SET_GPR_U32(ctx, 31, 0x2D12D0u);
    ctx->pc = 0x2D12CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D12C8u;
            // 0x2d12cc: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1070E0u;
    if (runtime->hasFunction(0x1070E0u)) {
        auto targetFn = runtime->lookupFunction(0x1070E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D12D0u; }
        if (ctx->pc != 0x2D12D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0AddVector_0x1070e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D12D0u; }
        if (ctx->pc != 0x2D12D0u) { return; }
    }
    ctx->pc = 0x2D12D0u;
label_2d12d0:
    // 0x2d12d0: 0x3c0401eb  lui         $a0, 0x1EB
    ctx->pc = 0x2d12d0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)491 << 16));
    // 0x2d12d4: 0xc06df50  jal         func_1B7D40
    ctx->pc = 0x2D12D4u;
    SET_GPR_U32(ctx, 31, 0x2D12DCu);
    ctx->pc = 0x2D12D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D12D4u;
            // 0x2d12d8: 0x24842990  addiu       $a0, $a0, 0x2990 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 10640));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B7D40u;
    if (runtime->hasFunction(0x1B7D40u)) {
        auto targetFn = runtime->lookupFunction(0x1B7D40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D12DCu; }
        if (ctx->pc != 0x2D12DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Get__12CLaserGunManFv_0x1b7d40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D12DCu; }
        if (ctx->pc != 0x2D12DCu) { return; }
    }
    ctx->pc = 0x2D12DCu;
label_2d12dc:
    // 0x2d12dc: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2d12dcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d12e0: 0x12000063  beqz        $s0, . + 4 + (0x63 << 2)
    ctx->pc = 0x2D12E0u;
    {
        const bool branch_taken_0x2d12e0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D12E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D12E0u;
            // 0x2d12e4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d12e0) {
            ctx->pc = 0x2D1470u;
            goto label_2d1470;
        }
    }
    ctx->pc = 0x2D12E8u;
    // 0x2d12e8: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x2d12e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x2d12ec: 0x27a600d0  addiu       $a2, $sp, 0xD0
    ctx->pc = 0x2d12ecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x2d12f0: 0xc06db94  jal         func_1B6E50
    ctx->pc = 0x2D12F0u;
    SET_GPR_U32(ctx, 31, 0x2D12F8u);
    ctx->pc = 0x2D12F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D12F0u;
            // 0x2d12f4: 0x27a70070  addiu       $a3, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B6E50u;
    if (runtime->hasFunction(0x1B6E50u)) {
        auto targetFn = runtime->lookupFunction(0x1B6E50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D12F8u; }
        if (ctx->pc != 0x2D12F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetPos__9CLaserGunFPfPfPf_0x1b6e50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D12F8u; }
        if (ctx->pc != 0x2D12F8u) { return; }
    }
    ctx->pc = 0x2D12F8u;
label_2d12f8:
    // 0x2d12f8: 0x3c0101f1  lui         $at, 0x1F1
    ctx->pc = 0x2d12f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)497 << 16));
    // 0x2d12fc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2d12fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d1300: 0x8c22d430  lw          $v0, -0x2BD0($at)
    ctx->pc = 0x2d1300u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294956080)));
    // 0x2d1304: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x2d1304u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2d1308: 0x84420770  lh          $v0, 0x770($v0)
    ctx->pc = 0x2d1308u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 1904)));
    // 0x2d130c: 0xc06dbd8  jal         func_1B6F60
    ctx->pc = 0x2D130Cu;
    SET_GPR_U32(ctx, 31, 0x2D1314u);
    ctx->pc = 0x2D1310u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D130Cu;
            // 0x2d1310: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B6F60u;
    if (runtime->hasFunction(0x1B6F60u)) {
        auto targetFn = runtime->lookupFunction(0x1B6F60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D1314u; }
        if (ctx->pc != 0x2D1314u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetVisualCode__9CLaserGunFi_0x1b6f60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D1314u; }
        if (ctx->pc != 0x2D1314u) { return; }
    }
    ctx->pc = 0x2D1314u;
label_2d1314:
    // 0x2d1314: 0x3c0401ea  lui         $a0, 0x1EA
    ctx->pc = 0x2d1314u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)490 << 16));
    // 0x2d1318: 0xc06e9c0  jal         func_1BA700
    ctx->pc = 0x2D1318u;
    SET_GPR_U32(ctx, 31, 0x2D1320u);
    ctx->pc = 0x2D131Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D1318u;
            // 0x2d131c: 0x24840710  addiu       $a0, $a0, 0x710 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1808));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1BA700u;
    if (runtime->hasFunction(0x1BA700u)) {
        auto targetFn = runtime->lookupFunction(0x1BA700u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D1320u; }
        if (ctx->pc != 0x2D1320u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPrim__11CColPrimManFv_0x1ba700(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D1320u; }
        if (ctx->pc != 0x2D1320u) { return; }
    }
    ctx->pc = 0x2D1320u;
label_2d1320:
    // 0x2d1320: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2d1320u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d1324: 0x12200013  beqz        $s1, . + 4 + (0x13 << 2)
    ctx->pc = 0x2D1324u;
    {
        const bool branch_taken_0x2d1324 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D1328u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D1324u;
            // 0x2d1328: 0x2412ffff  addiu       $s2, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d1324) {
            ctx->pc = 0x2D1374u;
            goto label_2d1374;
        }
    }
    ctx->pc = 0x2D132Cu;
    // 0x2d132c: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x2d132cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x2d1330: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2d1330u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d1334: 0x24a50418  addiu       $a1, $a1, 0x418
    ctx->pc = 0x2d1334u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1048));
    // 0x2d1338: 0xc06e718  jal         func_1B9C60
    ctx->pc = 0x2D1338u;
    SET_GPR_U32(ctx, 31, 0x2D1340u);
    ctx->pc = 0x2D133Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D1338u;
            // 0x2d133c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B9C60u;
    if (runtime->hasFunction(0x1B9C60u)) {
        auto targetFn = runtime->lookupFunction(0x1B9C60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D1340u; }
        if (ctx->pc != 0x2D1340u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetDamage__8CColPrimFPci_0x1b9c60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D1340u; }
        if (ctx->pc != 0x2D1340u) { return; }
    }
    ctx->pc = 0x2D1340u;
label_2d1340:
    // 0x2d1340: 0x3c0240a0  lui         $v0, 0x40A0
    ctx->pc = 0x2d1340u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16544 << 16));
    // 0x2d1344: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2d1344u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d1348: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x2d1348u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2d134c: 0xc06e760  jal         func_1B9D80
    ctx->pc = 0x2D134Cu;
    SET_GPR_U32(ctx, 31, 0x2D1354u);
    ctx->pc = 0x2D1350u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D134Cu;
            // 0x2d1350: 0x27a50050  addiu       $a1, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B9D80u;
    if (runtime->hasFunction(0x1B9D80u)) {
        auto targetFn = runtime->lookupFunction(0x1B9D80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D1354u; }
        if (ctx->pc != 0x2D1354u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetCoord__8CColPrimFPff_0x1b9d80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D1354u; }
        if (ctx->pc != 0x2D1354u) { return; }
    }
    ctx->pc = 0x2D1354u;
label_2d1354:
    // 0x2d1354: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2d1354u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d1358: 0xc07a260  jal         func_1E8980
    ctx->pc = 0x2D1358u;
    SET_GPR_U32(ctx, 31, 0x2D1360u);
    ctx->pc = 0x2D135Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D1358u;
            // 0x2d135c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E8980u;
    if (runtime->hasFunction(0x1E8980u)) {
        auto targetFn = runtime->lookupFunction(0x1E8980u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D1360u; }
        if (ctx->pc != 0x2D1360u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetDamageParam__FP8CColPrimi_0x1e8980(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D1360u; }
        if (ctx->pc != 0x2D1360u) { return; }
    }
    ctx->pc = 0x2D1360u;
label_2d1360:
    // 0x2d1360: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x2d1360u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x2d1364: 0x8e320000  lw          $s2, 0x0($s1)
    ctx->pc = 0x2d1364u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2d1368: 0x84450046  lh          $a1, 0x46($v0)
    ctx->pc = 0x2d1368u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 70)));
    // 0x2d136c: 0xc07a1f8  jal         func_1E87E0
    ctx->pc = 0x2D136Cu;
    SET_GPR_U32(ctx, 31, 0x2D1374u);
    ctx->pc = 0x2D1370u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D136Cu;
            // 0x2d1370: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E87E0u;
    if (runtime->hasFunction(0x1E87E0u)) {
        auto targetFn = runtime->lookupFunction(0x1E87E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D1374u; }
        if (ctx->pc != 0x2D1374u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        calcWeaponParam2__Fii_0x1e87e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D1374u; }
        if (ctx->pc != 0x2D1374u) { return; }
    }
    ctx->pc = 0x2D1374u;
label_2d1374:
    // 0x2d1374: 0xae1200e8  sw          $s2, 0xE8($s0)
    ctx->pc = 0x2d1374u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 232), GPR_U32(ctx, 18));
    // 0x2d1378: 0x3c0101f1  lui         $at, 0x1F1
    ctx->pc = 0x2d1378u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)497 << 16));
    // 0x2d137c: 0x8c22d430  lw          $v0, -0x2BD0($at)
    ctx->pc = 0x2d137cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294956080)));
    // 0x2d1380: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x2d1380u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x2d1384: 0x24a502c0  addiu       $a1, $a1, 0x2C0
    ctx->pc = 0x2d1384u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 704));
    // 0x2d1388: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2d1388u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d138c: 0x8c4407dc  lw          $a0, 0x7DC($v0)
    ctx->pc = 0x2d138cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2012)));
    // 0x2d1390: 0xc0b8498  jal         func_2E1260
    ctx->pc = 0x2D1390u;
    SET_GPR_U32(ctx, 31, 0x2D1398u);
    ctx->pc = 0x2D1394u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D1390u;
            // 0x2d1394: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E1260u;
    if (runtime->hasFunction(0x2E1260u)) {
        auto targetFn = runtime->lookupFunction(0x2E1260u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D1398u; }
        if (ctx->pc != 0x2D1398u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEffSpt__16CEffectScriptManFPcii_0x2e1260(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D1398u; }
        if (ctx->pc != 0x2D1398u) { return; }
    }
    ctx->pc = 0x2D1398u;
label_2d1398:
    // 0x2d1398: 0x3c0101f1  lui         $at, 0x1F1
    ctx->pc = 0x2d1398u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)497 << 16));
    // 0x2d139c: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x2d139cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x2d13a0: 0x8c22d430  lw          $v0, -0x2BD0($at)
    ctx->pc = 0x2d13a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294956080)));
    // 0x2d13a4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2d13a4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d13a8: 0x8c4407dc  lw          $a0, 0x7DC($v0)
    ctx->pc = 0x2d13a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2012)));
    // 0x2d13ac: 0xc0b8894  jal         func_2E2250
    ctx->pc = 0x2D13ACu;
    SET_GPR_U32(ctx, 31, 0x2D13B4u);
    ctx->pc = 0x2D13B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D13ACu;
            // 0x2d13b0: 0x2407ffff  addiu       $a3, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E2250u;
    if (runtime->hasFunction(0x2E2250u)) {
        auto targetFn = runtime->lookupFunction(0x2E2250u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D13B4u; }
        if (ctx->pc != 0x2D13B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetScriptVect1__16CEffectScriptManFPfii_0x2e2250(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D13B4u; }
        if (ctx->pc != 0x2D13B4u) { return; }
    }
    ctx->pc = 0x2D13B4u;
label_2d13b4:
    // 0x2d13b4: 0x3c0101f1  lui         $at, 0x1F1
    ctx->pc = 0x2d13b4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)497 << 16));
    // 0x2d13b8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2d13b8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d13bc: 0x8c22d430  lw          $v0, -0x2BD0($at)
    ctx->pc = 0x2d13bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294956080)));
    // 0x2d13c0: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x2d13c0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d13c4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2d13c4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d13c8: 0x8c4407dc  lw          $a0, 0x7DC($v0)
    ctx->pc = 0x2d13c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2012)));
    // 0x2d13cc: 0xc0b89c4  jal         func_2E2710
    ctx->pc = 0x2D13CCu;
    SET_GPR_U32(ctx, 31, 0x2D13D4u);
    ctx->pc = 0x2D13D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D13CCu;
            // 0x2d13d0: 0x2408ffff  addiu       $t0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E2710u;
    if (runtime->hasFunction(0x2E2710u)) {
        auto targetFn = runtime->lookupFunction(0x2E2710u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D13D4u; }
        if (ctx->pc != 0x2D13D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetValue__16CEffectScriptManFiiii_0x2e2710(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D13D4u; }
        if (ctx->pc != 0x2D13D4u) { return; }
    }
    ctx->pc = 0x2D13D4u;
label_2d13d4:
    // 0x2d13d4: 0x3c0101f1  lui         $at, 0x1F1
    ctx->pc = 0x2d13d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)497 << 16));
    // 0x2d13d8: 0x3c024300  lui         $v0, 0x4300
    ctx->pc = 0x2d13d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17152 << 16));
    // 0x2d13dc: 0x8c23d430  lw          $v1, -0x2BD0($at)
    ctx->pc = 0x2d13dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294956080)));
    // 0x2d13e0: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x2d13e0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2d13e4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2d13e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d13e8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2d13e8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d13ec: 0x8c6407dc  lw          $a0, 0x7DC($v1)
    ctx->pc = 0x2d13ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 2012)));
    // 0x2d13f0: 0xc0b89f0  jal         func_2E27C0
    ctx->pc = 0x2D13F0u;
    SET_GPR_U32(ctx, 31, 0x2D13F8u);
    ctx->pc = 0x2D13F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D13F0u;
            // 0x2d13f4: 0x2407ffff  addiu       $a3, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E27C0u;
    if (runtime->hasFunction(0x2E27C0u)) {
        auto targetFn = runtime->lookupFunction(0x2E27C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D13F8u; }
        if (ctx->pc != 0x2D13F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetValue__16CEffectScriptManFifii_0x2e27c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D13F8u; }
        if (ctx->pc != 0x2D13F8u) { return; }
    }
    ctx->pc = 0x2D13F8u;
label_2d13f8:
    // 0x2d13f8: 0x3c0101f1  lui         $at, 0x1F1
    ctx->pc = 0x2d13f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)497 << 16));
    // 0x2d13fc: 0x3c024280  lui         $v0, 0x4280
    ctx->pc = 0x2d13fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17024 << 16));
    // 0x2d1400: 0x8c23d430  lw          $v1, -0x2BD0($at)
    ctx->pc = 0x2d1400u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294956080)));
    // 0x2d1404: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x2d1404u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2d1408: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x2d1408u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2d140c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2d140cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d1410: 0x8c6407dc  lw          $a0, 0x7DC($v1)
    ctx->pc = 0x2d1410u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 2012)));
    // 0x2d1414: 0xc0b89f0  jal         func_2E27C0
    ctx->pc = 0x2D1414u;
    SET_GPR_U32(ctx, 31, 0x2D141Cu);
    ctx->pc = 0x2D1418u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D1414u;
            // 0x2d1418: 0x2407ffff  addiu       $a3, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E27C0u;
    if (runtime->hasFunction(0x2E27C0u)) {
        auto targetFn = runtime->lookupFunction(0x2E27C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D141Cu; }
        if (ctx->pc != 0x2D141Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetValue__16CEffectScriptManFifii_0x2e27c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D141Cu; }
        if (ctx->pc != 0x2D141Cu) { return; }
    }
    ctx->pc = 0x2D141Cu;
label_2d141c:
    // 0x2d141c: 0x3c0101f1  lui         $at, 0x1F1
    ctx->pc = 0x2d141cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)497 << 16));
    // 0x2d1420: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x2d1420u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2d1424: 0x8c22d430  lw          $v0, -0x2BD0($at)
    ctx->pc = 0x2d1424u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294956080)));
    // 0x2d1428: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x2d1428u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2d142c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2d142cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d1430: 0x8c4407dc  lw          $a0, 0x7DC($v0)
    ctx->pc = 0x2d1430u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2012)));
    // 0x2d1434: 0xc0b89f0  jal         func_2E27C0
    ctx->pc = 0x2D1434u;
    SET_GPR_U32(ctx, 31, 0x2D143Cu);
    ctx->pc = 0x2D1438u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D1434u;
            // 0x2d1438: 0x2407ffff  addiu       $a3, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E27C0u;
    if (runtime->hasFunction(0x2E27C0u)) {
        auto targetFn = runtime->lookupFunction(0x2E27C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D143Cu; }
        if (ctx->pc != 0x2D143Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetValue__16CEffectScriptManFifii_0x2e27c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D143Cu; }
        if (ctx->pc != 0x2D143Cu) { return; }
    }
    ctx->pc = 0x2D143Cu;
label_2d143c:
    // 0x2d143c: 0x3c0101f1  lui         $at, 0x1F1
    ctx->pc = 0x2d143cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)497 << 16));
    // 0x2d1440: 0x3c034320  lui         $v1, 0x4320
    ctx->pc = 0x2d1440u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17184 << 16));
    // 0x2d1444: 0x8c22d430  lw          $v0, -0x2BD0($at)
    ctx->pc = 0x2d1444u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294956080)));
    // 0x2d1448: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x2d1448u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2d144c: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x2d144cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2d1450: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2d1450u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d1454: 0x8c4407dc  lw          $a0, 0x7DC($v0)
    ctx->pc = 0x2d1454u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2012)));
    // 0x2d1458: 0xc0b89f0  jal         func_2E27C0
    ctx->pc = 0x2D1458u;
    SET_GPR_U32(ctx, 31, 0x2D1460u);
    ctx->pc = 0x2D145Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D1458u;
            // 0x2d145c: 0x2407ffff  addiu       $a3, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E27C0u;
    if (runtime->hasFunction(0x2E27C0u)) {
        auto targetFn = runtime->lookupFunction(0x2E27C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D1460u; }
        if (ctx->pc != 0x2D1460u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetValue__16CEffectScriptManFifii_0x2e27c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D1460u; }
        if (ctx->pc != 0x2D1460u) { return; }
    }
    ctx->pc = 0x2D1460u;
label_2d1460:
    // 0x2d1460: 0x3c0101f1  lui         $at, 0x1F1
    ctx->pc = 0x2d1460u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)497 << 16));
    // 0x2d1464: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x2d1464u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2d1468: 0x8c22d430  lw          $v0, -0x2BD0($at)
    ctx->pc = 0x2d1468u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294956080)));
    // 0x2d146c: 0xa4430764  sh          $v1, 0x764($v0)
    ctx->pc = 0x2d146cu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 1892), (uint16_t)GPR_U32(ctx, 3));
label_2d1470:
    // 0x2d1470: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2d1470u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2d1474:
    // 0x2d1474: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x2d1474u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_2d1478:
    // 0x2d1478: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2d1478u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2d147c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2d147cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2d1480: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2d1480u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2d1484: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2d1484u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2d1488: 0x3e00008  jr          $ra
    ctx->pc = 0x2D1488u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D148Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D1488u;
            // 0x2d148c: 0x27bd0100  addiu       $sp, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2D1490u;
}
