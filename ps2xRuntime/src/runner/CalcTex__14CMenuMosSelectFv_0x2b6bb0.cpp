#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: CalcTex__14CMenuMosSelectFv
// Address: 0x2b6bb0 - 0x2b6e0c
void CalcTex__14CMenuMosSelectFv_0x2b6bb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("CalcTex__14CMenuMosSelectFv_0x2b6bb0");
#endif

    switch (ctx->pc) {
        case 0x2b6bf4u: goto label_2b6bf4;
        case 0x2b6c10u: goto label_2b6c10;
        case 0x2b6c28u: goto label_2b6c28;
        case 0x2b6c40u: goto label_2b6c40;
        case 0x2b6c58u: goto label_2b6c58;
        case 0x2b6c70u: goto label_2b6c70;
        case 0x2b6c7cu: goto label_2b6c7c;
        case 0x2b6c98u: goto label_2b6c98;
        case 0x2b6cb8u: goto label_2b6cb8;
        case 0x2b6cd4u: goto label_2b6cd4;
        case 0x2b6d18u: goto label_2b6d18;
        default: break;
    }

    ctx->pc = 0x2b6bb0u;

    // 0x2b6bb0: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x2b6bb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
    // 0x2b6bb4: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x2b6bb4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x2b6bb8: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x2b6bb8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x2b6bbc: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2b6bbcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2b6bc0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2b6bc0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2b6bc4: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x2b6bc4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b6bc8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2b6bc8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2b6bcc: 0x8c844674  lw          $a0, 0x4674($a0)
    ctx->pc = 0x2b6bccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 18036)));
    // 0x2b6bd0: 0x10800044  beqz        $a0, . + 4 + (0x44 << 2)
    ctx->pc = 0x2B6BD0u;
    {
        const bool branch_taken_0x2b6bd0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B6BD4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B6BD0u;
            // 0x2b6bd4: 0x8c30ca5c  lw          $s0, -0x35A4($at) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294953564)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b6bd0) {
            ctx->pc = 0x2B6CE4u;
            goto label_2b6ce4;
        }
    }
    ctx->pc = 0x2B6BD8u;
    // 0x2b6bd8: 0x12000042  beqz        $s0, . + 4 + (0x42 << 2)
    ctx->pc = 0x2B6BD8u;
    {
        const bool branch_taken_0x2b6bd8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b6bd8) {
            ctx->pc = 0x2B6CE4u;
            goto label_2b6ce4;
        }
    }
    ctx->pc = 0x2B6BE0u;
    // 0x2b6be0: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x2b6be0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x2b6be4: 0x27a60040  addiu       $a2, $sp, 0x40
    ctx->pc = 0x2b6be4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x2b6be8: 0x24a5efb8  addiu       $a1, $a1, -0x1048
    ctx->pc = 0x2b6be8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294963128));
    // 0x2b6bec: 0xc08974c  jal         func_225D30
    ctx->pc = 0x2B6BECu;
    SET_GPR_U32(ctx, 31, 0x2B6BF4u);
    ctx->pc = 0x2B6BF0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B6BECu;
            // 0x2b6bf0: 0x27a70044  addiu       $a3, $sp, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 68));
        ctx->in_delay_slot = false;
    ctx->pc = 0x225D30u;
    if (runtime->hasFunction(0x225D30u)) {
        auto targetFn = runtime->lookupFunction(0x225D30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B6BF4u; }
        if (ctx->pc != 0x2B6BF4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPutPosXY__16CMenuPosDataFormFPcRiRi_0x225d30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B6BF4u; }
        if (ctx->pc != 0x2B6BF4u) { return; }
    }
    ctx->pc = 0x2B6BF4u;
label_2b6bf4:
    // 0x2b6bf4: 0x8e444674  lw          $a0, 0x4674($s2)
    ctx->pc = 0x2b6bf4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 18036)));
    // 0x2b6bf8: 0x27b10048  addiu       $s1, $sp, 0x48
    ctx->pc = 0x2b6bf8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 72));
    // 0x2b6bfc: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x2b6bfcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x2b6c00: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x2b6c00u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b6c04: 0x24a5efc0  addiu       $a1, $a1, -0x1040
    ctx->pc = 0x2b6c04u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294963136));
    // 0x2b6c08: 0xc08974c  jal         func_225D30
    ctx->pc = 0x2B6C08u;
    SET_GPR_U32(ctx, 31, 0x2B6C10u);
    ctx->pc = 0x2B6C0Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B6C08u;
            // 0x2b6c0c: 0x26270004  addiu       $a3, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x225D30u;
    if (runtime->hasFunction(0x225D30u)) {
        auto targetFn = runtime->lookupFunction(0x225D30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B6C10u; }
        if (ctx->pc != 0x2B6C10u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPutPosXY__16CMenuPosDataFormFPcRiRi_0x225d30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B6C10u; }
        if (ctx->pc != 0x2B6C10u) { return; }
    }
    ctx->pc = 0x2B6C10u;
label_2b6c10:
    // 0x2b6c10: 0x8e444674  lw          $a0, 0x4674($s2)
    ctx->pc = 0x2b6c10u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 18036)));
    // 0x2b6c14: 0x27a60050  addiu       $a2, $sp, 0x50
    ctx->pc = 0x2b6c14u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x2b6c18: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x2b6c18u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x2b6c1c: 0x24c70004  addiu       $a3, $a2, 0x4
    ctx->pc = 0x2b6c1cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
    // 0x2b6c20: 0xc08974c  jal         func_225D30
    ctx->pc = 0x2B6C20u;
    SET_GPR_U32(ctx, 31, 0x2B6C28u);
    ctx->pc = 0x2B6C24u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B6C20u;
            // 0x2b6c24: 0x24a5eef0  addiu       $a1, $a1, -0x1110 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294962928));
        ctx->in_delay_slot = false;
    ctx->pc = 0x225D30u;
    if (runtime->hasFunction(0x225D30u)) {
        auto targetFn = runtime->lookupFunction(0x225D30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B6C28u; }
        if (ctx->pc != 0x2B6C28u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPutPosXY__16CMenuPosDataFormFPcRiRi_0x225d30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B6C28u; }
        if (ctx->pc != 0x2B6C28u) { return; }
    }
    ctx->pc = 0x2B6C28u;
label_2b6c28:
    // 0x2b6c28: 0x8e444674  lw          $a0, 0x4674($s2)
    ctx->pc = 0x2b6c28u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 18036)));
    // 0x2b6c2c: 0x27a60058  addiu       $a2, $sp, 0x58
    ctx->pc = 0x2b6c2cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 88));
    // 0x2b6c30: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x2b6c30u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x2b6c34: 0x24c70004  addiu       $a3, $a2, 0x4
    ctx->pc = 0x2b6c34u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
    // 0x2b6c38: 0xc08974c  jal         func_225D30
    ctx->pc = 0x2B6C38u;
    SET_GPR_U32(ctx, 31, 0x2B6C40u);
    ctx->pc = 0x2B6C3Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B6C38u;
            // 0x2b6c3c: 0x24a5efc8  addiu       $a1, $a1, -0x1038 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294963144));
        ctx->in_delay_slot = false;
    ctx->pc = 0x225D30u;
    if (runtime->hasFunction(0x225D30u)) {
        auto targetFn = runtime->lookupFunction(0x225D30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B6C40u; }
        if (ctx->pc != 0x2B6C40u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPutPosXY__16CMenuPosDataFormFPcRiRi_0x225d30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B6C40u; }
        if (ctx->pc != 0x2B6C40u) { return; }
    }
    ctx->pc = 0x2B6C40u;
label_2b6c40:
    // 0x2b6c40: 0x8e444674  lw          $a0, 0x4674($s2)
    ctx->pc = 0x2b6c40u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 18036)));
    // 0x2b6c44: 0x27a60060  addiu       $a2, $sp, 0x60
    ctx->pc = 0x2b6c44u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x2b6c48: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x2b6c48u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x2b6c4c: 0x24c70004  addiu       $a3, $a2, 0x4
    ctx->pc = 0x2b6c4cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
    // 0x2b6c50: 0xc08974c  jal         func_225D30
    ctx->pc = 0x2B6C50u;
    SET_GPR_U32(ctx, 31, 0x2B6C58u);
    ctx->pc = 0x2B6C54u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B6C50u;
            // 0x2b6c54: 0x24a5efd0  addiu       $a1, $a1, -0x1030 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294963152));
        ctx->in_delay_slot = false;
    ctx->pc = 0x225D30u;
    if (runtime->hasFunction(0x225D30u)) {
        auto targetFn = runtime->lookupFunction(0x225D30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B6C58u; }
        if (ctx->pc != 0x2B6C58u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPutPosXY__16CMenuPosDataFormFPcRiRi_0x225d30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B6C58u; }
        if (ctx->pc != 0x2B6C58u) { return; }
    }
    ctx->pc = 0x2B6C58u;
label_2b6c58:
    // 0x2b6c58: 0x8e444674  lw          $a0, 0x4674($s2)
    ctx->pc = 0x2b6c58u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 18036)));
    // 0x2b6c5c: 0x27a60068  addiu       $a2, $sp, 0x68
    ctx->pc = 0x2b6c5cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 104));
    // 0x2b6c60: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x2b6c60u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x2b6c64: 0x24c70004  addiu       $a3, $a2, 0x4
    ctx->pc = 0x2b6c64u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
    // 0x2b6c68: 0xc08974c  jal         func_225D30
    ctx->pc = 0x2B6C68u;
    SET_GPR_U32(ctx, 31, 0x2B6C70u);
    ctx->pc = 0x2B6C6Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B6C68u;
            // 0x2b6c6c: 0x24a5efd8  addiu       $a1, $a1, -0x1028 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294963160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x225D30u;
    if (runtime->hasFunction(0x225D30u)) {
        auto targetFn = runtime->lookupFunction(0x225D30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B6C70u; }
        if (ctx->pc != 0x2B6C70u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPutPosXY__16CMenuPosDataFormFPcRiRi_0x225d30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B6C70u; }
        if (ctx->pc != 0x2B6C70u) { return; }
    }
    ctx->pc = 0x2B6C70u;
label_2b6c70:
    // 0x2b6c70: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2b6c70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b6c74: 0xc0548b0  jal         func_1522C0
    ctx->pc = 0x2B6C74u;
    SET_GPR_U32(ctx, 31, 0x2B6C7Cu);
    ctx->pc = 0x2B6C78u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B6C74u;
            // 0x2b6c78: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1522C0u;
    if (runtime->hasFunction(0x1522C0u)) {
        auto targetFn = runtime->lookupFunction(0x1522C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B6C7Cu; }
        if (ctx->pc != 0x2B6C7Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStrWidth__6ClsMesFi_0x1522c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B6C7Cu; }
        if (ctx->pc != 0x2B6C7Cu) { return; }
    }
    ctx->pc = 0x2B6C7Cu;
label_2b6c7c:
    // 0x2b6c7c: 0x21843  sra         $v1, $v0, 1
    ctx->pc = 0x2b6c7cu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 2), 1));
    // 0x2b6c80: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x2b6c80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2b6c84: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x2b6c84u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2b6c88: 0xafa20040  sw          $v0, 0x40($sp)
    ctx->pc = 0x2b6c88u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 2));
    // 0x2b6c8c: 0x8e051a08  lw          $a1, 0x1A08($s0)
    ctx->pc = 0x2b6c8cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 6664)));
    // 0x2b6c90: 0xc05571c  jal         func_155C70
    ctx->pc = 0x2B6C90u;
    SET_GPR_U32(ctx, 31, 0x2B6C98u);
    ctx->pc = 0x2B6C94u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B6C90u;
            // 0x2b6c94: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x155C70u;
    if (runtime->hasFunction(0x155C70u)) {
        auto targetFn = runtime->lookupFunction(0x155C70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B6C98u; }
        if (ctx->pc != 0x2B6C98u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetMesWidth_system__6ClsMesFi_0x155c70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B6C98u; }
        if (ctx->pc != 0x2B6C98u) { return; }
    }
    ctx->pc = 0x2B6C98u;
label_2b6c98:
    // 0x2b6c98: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x2b6c98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2b6c9c: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x2b6c9cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
    // 0x2b6ca0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2b6ca0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b6ca4: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x2b6ca4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x2b6ca8: 0x24060006  addiu       $a2, $zero, 0x6
    ctx->pc = 0x2b6ca8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x2b6cac: 0x621023  subu        $v0, $v1, $v0
    ctx->pc = 0x2b6cacu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2b6cb0: 0xc0877c4  jal         func_21DF10
    ctx->pc = 0x2B6CB0u;
    SET_GPR_U32(ctx, 31, 0x2B6CB8u);
    ctx->pc = 0x2B6CB4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B6CB0u;
            // 0x2b6cb4: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21DF10u;
    if (runtime->hasFunction(0x21DF10u)) {
        auto targetFn = runtime->lookupFunction(0x21DF10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B6CB8u; }
        if (ctx->pc != 0x2B6CB8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetMsgItemPos__7CDC2MesFPii_0x21df10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B6CB8u; }
        if (ctx->pc != 0x2B6CB8u) { return; }
    }
    ctx->pc = 0x2B6CB8u;
label_2b6cb8:
    // 0x2b6cb8: 0x8e444674  lw          $a0, 0x4674($s2)
    ctx->pc = 0x2b6cb8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 18036)));
    // 0x2b6cbc: 0x27b000c4  addiu       $s0, $sp, 0xC4
    ctx->pc = 0x2b6cbcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 196));
    // 0x2b6cc0: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x2b6cc0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x2b6cc4: 0x27a600c0  addiu       $a2, $sp, 0xC0
    ctx->pc = 0x2b6cc4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x2b6cc8: 0x24a5efe0  addiu       $a1, $a1, -0x1020
    ctx->pc = 0x2b6cc8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294963168));
    // 0x2b6ccc: 0xc08974c  jal         func_225D30
    ctx->pc = 0x2B6CCCu;
    SET_GPR_U32(ctx, 31, 0x2B6CD4u);
    ctx->pc = 0x2B6CD0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B6CCCu;
            // 0x2b6cd0: 0x200382d  daddu       $a3, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x225D30u;
    if (runtime->hasFunction(0x225D30u)) {
        auto targetFn = runtime->lookupFunction(0x225D30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B6CD4u; }
        if (ctx->pc != 0x2B6CD4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPutPosXY__16CMenuPosDataFormFPcRiRi_0x225d30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B6CD4u; }
        if (ctx->pc != 0x2B6CD4u) { return; }
    }
    ctx->pc = 0x2B6CD4u;
label_2b6cd4:
    // 0x2b6cd4: 0x8fa300c0  lw          $v1, 0xC0($sp)
    ctx->pc = 0x2b6cd4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x2b6cd8: 0xae4325b8  sw          $v1, 0x25B8($s2)
    ctx->pc = 0x2b6cd8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 9656), GPR_U32(ctx, 3));
    // 0x2b6cdc: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x2b6cdcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2b6ce0: 0xae4325bc  sw          $v1, 0x25BC($s2)
    ctx->pc = 0x2b6ce0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 9660), GPR_U32(ctx, 3));
label_2b6ce4:
    // 0x2b6ce4: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x2b6ce4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x2b6ce8: 0x8c30cb44  lw          $s0, -0x34BC($at)
    ctx->pc = 0x2b6ce8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294953796)));
    // 0x2b6cec: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x2b6cecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x2b6cf0: 0x8c31ca54  lw          $s1, -0x35AC($at)
    ctx->pc = 0x2b6cf0u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294953556)));
    // 0x2b6cf4: 0x1220002b  beqz        $s1, . + 4 + (0x2B << 2)
    ctx->pc = 0x2B6CF4u;
    {
        const bool branch_taken_0x2b6cf4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b6cf4) {
            ctx->pc = 0x2B6DA4u;
            goto label_2b6da4;
        }
    }
    ctx->pc = 0x2B6CFCu;
    // 0x2b6cfc: 0x12000029  beqz        $s0, . + 4 + (0x29 << 2)
    ctx->pc = 0x2B6CFCu;
    {
        const bool branch_taken_0x2b6cfc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b6cfc) {
            ctx->pc = 0x2B6DA4u;
            goto label_2b6da4;
        }
    }
    ctx->pc = 0x2B6D04u;
    // 0x2b6d04: 0x8e444670  lw          $a0, 0x4670($s2)
    ctx->pc = 0x2b6d04u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 18032)));
    // 0x2b6d08: 0x8e450138  lw          $a1, 0x138($s2)
    ctx->pc = 0x2b6d08u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 312)));
    // 0x2b6d0c: 0x8e46013c  lw          $a2, 0x13C($s2)
    ctx->pc = 0x2b6d0cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 316)));
    // 0x2b6d10: 0xc0adaa0  jal         func_2B6A80
    ctx->pc = 0x2B6D10u;
    SET_GPR_U32(ctx, 31, 0x2B6D18u);
    ctx->pc = 0x2B6D14u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B6D10u;
            // 0x2b6d14: 0x27a700c8  addiu       $a3, $sp, 0xC8 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 200));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2B6A80u;
    if (runtime->hasFunction(0x2B6A80u)) {
        auto targetFn = runtime->lookupFunction(0x2B6A80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B6D18u; }
        if (ctx->pc != 0x2B6D18u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetBajjiPosition__FP16CMenuPosDataFormiiPi_0x2b6a80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B6D18u; }
        if (ctx->pc != 0x2B6D18u) { return; }
    }
    ctx->pc = 0x2B6D18u;
label_2b6d18:
    // 0x2b6d18: 0x8e450138  lw          $a1, 0x138($s2)
    ctx->pc = 0x2b6d18u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 312)));
    // 0x2b6d1c: 0x3c045555  lui         $a0, 0x5555
    ctx->pc = 0x2b6d1cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)21845 << 16));
    // 0x2b6d20: 0x34845556  ori         $a0, $a0, 0x5556
    ctx->pc = 0x2b6d20u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)21846);
    // 0x2b6d24: 0x8e43013c  lw          $v1, 0x13C($s2)
    ctx->pc = 0x2b6d24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 316)));
    // 0x2b6d28: 0x24060003  addiu       $a2, $zero, 0x3
    ctx->pc = 0x2b6d28u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2b6d2c: 0x850018  mult        $zero, $a0, $a1
    ctx->pc = 0x2b6d2cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x2b6d30: 0x0  nop
    ctx->pc = 0x2b6d30u;
    // NOP
    // 0x2b6d34: 0x0  nop
    ctx->pc = 0x2b6d34u;
    // NOP
    // 0x2b6d38: 0x2010  mfhi        $a0
    ctx->pc = 0x2b6d38u;
    SET_GPR_U64(ctx, 4, ctx->hi);
    // 0x2b6d3c: 0x52fc2  srl         $a1, $a1, 31
    ctx->pc = 0x2b6d3cu;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 5), 31));
    // 0x2b6d40: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x2b6d40u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x2b6d44: 0x831823  subu        $v1, $a0, $v1
    ctx->pc = 0x2b6d44u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x2b6d48: 0x14660009  bne         $v1, $a2, . + 4 + (0x9 << 2)
    ctx->pc = 0x2B6D48u;
    {
        const bool branch_taken_0x2b6d48 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 6));
        if (branch_taken_0x2b6d48) {
            ctx->pc = 0x2B6D70u;
            goto label_2b6d70;
        }
    }
    ctx->pc = 0x2B6D50u;
    // 0x2b6d50: 0x8fa500cc  lw          $a1, 0xCC($sp)
    ctx->pc = 0x2b6d50u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 204)));
    // 0x2b6d54: 0x24040010  addiu       $a0, $zero, 0x10
    ctx->pc = 0x2b6d54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x2b6d58: 0x24030064  addiu       $v1, $zero, 0x64
    ctx->pc = 0x2b6d58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x2b6d5c: 0x24a5ffb4  addiu       $a1, $a1, -0x4C
    ctx->pc = 0x2b6d5cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967220));
    // 0x2b6d60: 0xafa500cc  sw          $a1, 0xCC($sp)
    ctx->pc = 0x2b6d60u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 204), GPR_U32(ctx, 5));
    // 0x2b6d64: 0xae2401a8  sw          $a0, 0x1A8($s1)
    ctx->pc = 0x2b6d64u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 424), GPR_U32(ctx, 4));
    // 0x2b6d68: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2B6D68u;
    {
        const bool branch_taken_0x2b6d68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B6D6Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B6D68u;
            // 0x2b6d6c: 0xae2301ac  sw          $v1, 0x1AC($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 428), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b6d68) {
            ctx->pc = 0x2B6D8Cu;
            goto label_2b6d8c;
        }
    }
    ctx->pc = 0x2B6D70u;
label_2b6d70:
    // 0x2b6d70: 0x8fa500cc  lw          $a1, 0xCC($sp)
    ctx->pc = 0x2b6d70u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 204)));
    // 0x2b6d74: 0x24040010  addiu       $a0, $zero, 0x10
    ctx->pc = 0x2b6d74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x2b6d78: 0x2403ffec  addiu       $v1, $zero, -0x14
    ctx->pc = 0x2b6d78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967276));
    // 0x2b6d7c: 0x24a5004c  addiu       $a1, $a1, 0x4C
    ctx->pc = 0x2b6d7cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 76));
    // 0x2b6d80: 0xafa500cc  sw          $a1, 0xCC($sp)
    ctx->pc = 0x2b6d80u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 204), GPR_U32(ctx, 5));
    // 0x2b6d84: 0xae2401a8  sw          $a0, 0x1A8($s1)
    ctx->pc = 0x2b6d84u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 424), GPR_U32(ctx, 4));
    // 0x2b6d88: 0xae2301ac  sw          $v1, 0x1AC($s1)
    ctx->pc = 0x2b6d88u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 428), GPR_U32(ctx, 3));
label_2b6d8c:
    // 0x2b6d8c: 0xc7a000c8  lwc1        $f0, 0xC8($sp)
    ctx->pc = 0x2b6d8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2b6d90: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2b6d90u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2b6d94: 0xe600000c  swc1        $f0, 0xC($s0)
    ctx->pc = 0x2b6d94u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 12), bits); }
    // 0x2b6d98: 0xc7a000cc  lwc1        $f0, 0xCC($sp)
    ctx->pc = 0x2b6d98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 204)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2b6d9c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2b6d9cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2b6da0: 0xe6000010  swc1        $f0, 0x10($s0)
    ctx->pc = 0x2b6da0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 16), bits); }
label_2b6da4:
    // 0x2b6da4: 0x86430002  lh          $v1, 0x2($s2)
    ctx->pc = 0x2b6da4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 2)));
    // 0x2b6da8: 0x24050014  addiu       $a1, $zero, 0x14
    ctx->pc = 0x2b6da8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x2b6dac: 0x14650011  bne         $v1, $a1, . + 4 + (0x11 << 2)
    ctx->pc = 0x2B6DACu;
    {
        const bool branch_taken_0x2b6dac = (GPR_U64(ctx, 3) != GPR_U64(ctx, 5));
        if (branch_taken_0x2b6dac) {
            ctx->pc = 0x2B6DF4u;
            goto label_2b6df4;
        }
    }
    ctx->pc = 0x2B6DB4u;
    // 0x2b6db4: 0x8fa400c8  lw          $a0, 0xC8($sp)
    ctx->pc = 0x2b6db4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x2b6db8: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x2b6db8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x2b6dbc: 0x8c26ca58  lw          $a2, -0x35A8($at)
    ctx->pc = 0x2b6dbcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294953560)));
    // 0x2b6dc0: 0x2403ffd8  addiu       $v1, $zero, -0x28
    ctx->pc = 0x2b6dc0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967256));
    // 0x2b6dc4: 0x2484006e  addiu       $a0, $a0, 0x6E
    ctx->pc = 0x2b6dc4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 110));
    // 0x2b6dc8: 0xafa400c8  sw          $a0, 0xC8($sp)
    ctx->pc = 0x2b6dc8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 200), GPR_U32(ctx, 4));
    // 0x2b6dcc: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x2b6dccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x2b6dd0: 0xacc301a8  sw          $v1, 0x1A8($a2)
    ctx->pc = 0x2b6dd0u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 424), GPR_U32(ctx, 3));
    // 0x2b6dd4: 0xacc501ac  sw          $a1, 0x1AC($a2)
    ctx->pc = 0x2b6dd4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 428), GPR_U32(ctx, 5));
    // 0x2b6dd8: 0xc7a000c8  lwc1        $f0, 0xC8($sp)
    ctx->pc = 0x2b6dd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2b6ddc: 0x8c23cb48  lw          $v1, -0x34B8($at)
    ctx->pc = 0x2b6ddcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294953800)));
    // 0x2b6de0: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2b6de0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2b6de4: 0xe460000c  swc1        $f0, 0xC($v1)
    ctx->pc = 0x2b6de4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 12), bits); }
    // 0x2b6de8: 0xc7a000cc  lwc1        $f0, 0xCC($sp)
    ctx->pc = 0x2b6de8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 204)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2b6dec: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2b6decu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2b6df0: 0xe4600010  swc1        $f0, 0x10($v1)
    ctx->pc = 0x2b6df0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 16), bits); }
label_2b6df4:
    // 0x2b6df4: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x2b6df4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2b6df8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2b6df8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2b6dfc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2b6dfcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2b6e00: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2b6e00u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2b6e04: 0x3e00008  jr          $ra
    ctx->pc = 0x2B6E04u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B6E08u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B6E04u;
            // 0x2b6e08: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2B6E0Cu;
}
