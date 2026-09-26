#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _TRG_PAKU_MOTION__FP12RS_STACKDATAi
// Address: 0x265ba0 - 0x265d0c
void ps2__TRG_PAKU_MOTION__FP12RS_STACKDATAi_0x265ba0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__TRG_PAKU_MOTION__FP12RS_STACKDATAi_0x265ba0");
#endif

    switch (ctx->pc) {
        case 0x265bb0u: goto label_265bb0;
        case 0x265be0u: goto label_265be0;
        case 0x265bf8u: goto label_265bf8;
        case 0x265c20u: goto label_265c20;
        case 0x265c30u: goto label_265c30;
        case 0x265c48u: goto label_265c48;
        case 0x265c60u: goto label_265c60;
        case 0x265c90u: goto label_265c90;
        case 0x265cc4u: goto label_265cc4;
        case 0x265cf8u: goto label_265cf8;
        default: break;
    }

    ctx->pc = 0x265ba0u;

    // 0x265ba0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x265ba0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x265ba4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x265ba4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x265ba8: 0xc097e18  jal         func_25F860
    ctx->pc = 0x265BA8u;
    SET_GPR_U32(ctx, 31, 0x265BB0u);
    ctx->pc = 0x265BACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x265BA8u;
            // 0x265bac: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F860u;
    if (runtime->hasFunction(0x25F860u)) {
        auto targetFn = runtime->lookupFunction(0x25F860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x265BB0u; }
        if (ctx->pc != 0x265BB0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x25f860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x265BB0u; }
        if (ctx->pc != 0x265BB0u) { return; }
    }
    ctx->pc = 0x265BB0u;
label_265bb0:
    // 0x265bb0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x265bb0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x265bb4: 0x1600000c  bnez        $s0, . + 4 + (0xC << 2)
    ctx->pc = 0x265BB4u;
    {
        const bool branch_taken_0x265bb4 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x265BB8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x265BB4u;
            // 0x265bb8: 0x3c0401ee  lui         $a0, 0x1EE (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)494 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x265bb4) {
            ctx->pc = 0x265BE8u;
            goto label_265be8;
        }
    }
    ctx->pc = 0x265BBCu;
    // 0x265bbc: 0x8f8597fc  lw          $a1, -0x6804($gp)
    ctx->pc = 0x265bbcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940668)));
    // 0x265bc0: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x265bc0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
    // 0x265bc4: 0x8f879800  lw          $a3, -0x6800($gp)
    ctx->pc = 0x265bc4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940672)));
    // 0x265bc8: 0x3c0401ed  lui         $a0, 0x1ED
    ctx->pc = 0x265bc8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)493 << 16));
    // 0x265bcc: 0x3c0601ee  lui         $a2, 0x1EE
    ctx->pc = 0x265bccu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)494 << 16));
    // 0x265bd0: 0x2484e880  addiu       $a0, $a0, -0x1780
    ctx->pc = 0x265bd0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961280));
    // 0x265bd4: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x265bd4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x265bd8: 0xc0978e8  jal         func_25E3A0
    ctx->pc = 0x265BD8u;
    SET_GPR_U32(ctx, 31, 0x265BE0u);
    ctx->pc = 0x265BDCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x265BD8u;
            // 0x265bdc: 0x24c60310  addiu       $a2, $a2, 0x310 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 784));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25E3A0u;
    if (runtime->hasFunction(0x25E3A0u)) {
        auto targetFn = runtime->lookupFunction(0x25E3A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x265BE0u; }
        if (ctx->pc != 0x265BE0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetMotion__10CEohMotherFiPcif_0x25e3a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x265BE0u; }
        if (ctx->pc != 0x265BE0u) { return; }
    }
    ctx->pc = 0x265BE0u;
label_265be0:
    // 0x265be0: 0x10000046  b           . + 4 + (0x46 << 2)
    ctx->pc = 0x265BE0u;
    {
        const bool branch_taken_0x265be0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x265BE4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x265BE0u;
            // 0x265be4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x265be0) {
            ctx->pc = 0x265CFCu;
            goto label_265cfc;
        }
    }
    ctx->pc = 0x265BE8u;
label_265be8:
    // 0x265be8: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x265be8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x265bec: 0x24840350  addiu       $a0, $a0, 0x350
    ctx->pc = 0x265becu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 848));
    // 0x265bf0: 0xc04a38a  jal         func_128E28
    ctx->pc = 0x265BF0u;
    SET_GPR_U32(ctx, 31, 0x265BF8u);
    ctx->pc = 0x265BF4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x265BF0u;
            // 0x265bf4: 0x24a5c708  addiu       $a1, $a1, -0x38F8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294952712));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128E28u;
    if (runtime->hasFunction(0x128E28u)) {
        auto targetFn = runtime->lookupFunction(0x128E28u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x265BF8u; }
        if (ctx->pc != 0x265BF8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcmp_0x128e28(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x265BF8u; }
        if (ctx->pc != 0x265BF8u) { return; }
    }
    ctx->pc = 0x265BF8u;
label_265bf8:
    // 0x265bf8: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x265BF8u;
    {
        const bool branch_taken_0x265bf8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x265BFCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x265BF8u;
            // 0x265bfc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x265bf8) {
            ctx->pc = 0x265C08u;
            goto label_265c08;
        }
    }
    ctx->pc = 0x265C00u;
    // 0x265c00: 0x1000003e  b           . + 4 + (0x3E << 2)
    ctx->pc = 0x265C00u;
    {
        const bool branch_taken_0x265c00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x265C04u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x265C00u;
            // 0x265c04: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x265c00) {
            ctx->pc = 0x265CFCu;
            goto label_265cfc;
        }
    }
    ctx->pc = 0x265C08u;
label_265c08:
    // 0x265c08: 0x16020030  bne         $s0, $v0, . + 4 + (0x30 << 2)
    ctx->pc = 0x265C08u;
    {
        const bool branch_taken_0x265c08 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x265C0Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x265C08u;
            // 0x265c0c: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x265c08) {
            ctx->pc = 0x265CCCu;
            goto label_265ccc;
        }
    }
    ctx->pc = 0x265C10u;
    // 0x265c10: 0x8f8597fc  lw          $a1, -0x6804($gp)
    ctx->pc = 0x265c10u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940668)));
    // 0x265c14: 0x3c0401ed  lui         $a0, 0x1ED
    ctx->pc = 0x265c14u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)493 << 16));
    // 0x265c18: 0xc097c20  jal         func_25F080
    ctx->pc = 0x265C18u;
    SET_GPR_U32(ctx, 31, 0x265C20u);
    ctx->pc = 0x265C1Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x265C18u;
            // 0x265c1c: 0x2484e880  addiu       $a0, $a0, -0x1780 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961280));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F080u;
    if (runtime->hasFunction(0x25F080u)) {
        auto targetFn = runtime->lookupFunction(0x25F080u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x265C20u; }
        if (ctx->pc != 0x265C20u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetNowMotionName__10CEohMotherFi_0x25f080(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x265C20u; }
        if (ctx->pc != 0x265C20u) { return; }
    }
    ctx->pc = 0x265C20u;
label_265c20:
    // 0x265c20: 0x3c0401ee  lui         $a0, 0x1EE
    ctx->pc = 0x265c20u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)494 << 16));
    // 0x265c24: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x265c24u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x265c28: 0xc04a38a  jal         func_128E28
    ctx->pc = 0x265C28u;
    SET_GPR_U32(ctx, 31, 0x265C30u);
    ctx->pc = 0x265C2Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x265C28u;
            // 0x265c2c: 0x24840310  addiu       $a0, $a0, 0x310 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 784));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128E28u;
    if (runtime->hasFunction(0x128E28u)) {
        auto targetFn = runtime->lookupFunction(0x128E28u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x265C30u; }
        if (ctx->pc != 0x265C30u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcmp_0x128e28(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x265C30u; }
        if (ctx->pc != 0x265C30u) { return; }
    }
    ctx->pc = 0x265C30u;
label_265c30:
    // 0x265c30: 0x1440001b  bnez        $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x265C30u;
    {
        const bool branch_taken_0x265c30 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x265c30) {
            ctx->pc = 0x265CA0u;
            goto label_265ca0;
        }
    }
    ctx->pc = 0x265C38u;
    // 0x265c38: 0x8f8597fc  lw          $a1, -0x6804($gp)
    ctx->pc = 0x265c38u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940668)));
    // 0x265c3c: 0x3c0401ed  lui         $a0, 0x1ED
    ctx->pc = 0x265c3cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)493 << 16));
    // 0x265c40: 0xc097c38  jal         func_25F0E0
    ctx->pc = 0x265C40u;
    SET_GPR_U32(ctx, 31, 0x265C48u);
    ctx->pc = 0x265C44u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x265C40u;
            // 0x265c44: 0x2484e880  addiu       $a0, $a0, -0x1780 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961280));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F0E0u;
    if (runtime->hasFunction(0x25F0E0u)) {
        auto targetFn = runtime->lookupFunction(0x25F0E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x265C48u; }
        if (ctx->pc != 0x265C48u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetNowMotionStatus__10CEohMotherFi_0x25f0e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x265C48u; }
        if (ctx->pc != 0x265C48u) { return; }
    }
    ctx->pc = 0x265C48u;
label_265c48:
    // 0x265c48: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x265C48u;
    {
        const bool branch_taken_0x265c48 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x265c48) {
            ctx->pc = 0x265C6Cu;
            goto label_265c6c;
        }
    }
    ctx->pc = 0x265C50u;
    // 0x265c50: 0x8f8597fc  lw          $a1, -0x6804($gp)
    ctx->pc = 0x265c50u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940668)));
    // 0x265c54: 0x3c0401ed  lui         $a0, 0x1ED
    ctx->pc = 0x265c54u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)493 << 16));
    // 0x265c58: 0xc097c38  jal         func_25F0E0
    ctx->pc = 0x265C58u;
    SET_GPR_U32(ctx, 31, 0x265C60u);
    ctx->pc = 0x265C5Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x265C58u;
            // 0x265c5c: 0x2484e880  addiu       $a0, $a0, -0x1780 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961280));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F0E0u;
    if (runtime->hasFunction(0x25F0E0u)) {
        auto targetFn = runtime->lookupFunction(0x25F0E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x265C60u; }
        if (ctx->pc != 0x265C60u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetNowMotionStatus__10CEohMotherFi_0x25f0e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x265C60u; }
        if (ctx->pc != 0x265C60u) { return; }
    }
    ctx->pc = 0x265C60u;
label_265c60:
    // 0x265c60: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x265c60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x265c64: 0x1443000c  bne         $v0, $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x265C64u;
    {
        const bool branch_taken_0x265c64 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x265C68u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x265C64u;
            // 0x265c68: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x265c64) {
            ctx->pc = 0x265C98u;
            goto label_265c98;
        }
    }
    ctx->pc = 0x265C6Cu;
label_265c6c:
    // 0x265c6c: 0x8f8597fc  lw          $a1, -0x6804($gp)
    ctx->pc = 0x265c6cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940668)));
    // 0x265c70: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x265c70u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
    // 0x265c74: 0x8f879804  lw          $a3, -0x67FC($gp)
    ctx->pc = 0x265c74u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940676)));
    // 0x265c78: 0x3c0401ed  lui         $a0, 0x1ED
    ctx->pc = 0x265c78u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)493 << 16));
    // 0x265c7c: 0x3c0601ee  lui         $a2, 0x1EE
    ctx->pc = 0x265c7cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)494 << 16));
    // 0x265c80: 0x2484e880  addiu       $a0, $a0, -0x1780
    ctx->pc = 0x265c80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961280));
    // 0x265c84: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x265c84u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x265c88: 0xc0978e8  jal         func_25E3A0
    ctx->pc = 0x265C88u;
    SET_GPR_U32(ctx, 31, 0x265C90u);
    ctx->pc = 0x265C8Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x265C88u;
            // 0x265c8c: 0x24c60350  addiu       $a2, $a2, 0x350 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 848));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25E3A0u;
    if (runtime->hasFunction(0x25E3A0u)) {
        auto targetFn = runtime->lookupFunction(0x25E3A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x265C90u; }
        if (ctx->pc != 0x265C90u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetMotion__10CEohMotherFiPcif_0x25e3a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x265C90u; }
        if (ctx->pc != 0x265C90u) { return; }
    }
    ctx->pc = 0x265C90u;
label_265c90:
    // 0x265c90: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x265C90u;
    {
        const bool branch_taken_0x265c90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x265C94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x265C90u;
            // 0x265c94: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x265c90) {
            ctx->pc = 0x265CFCu;
            goto label_265cfc;
        }
    }
    ctx->pc = 0x265C98u;
label_265c98:
    // 0x265c98: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x265C98u;
    {
        const bool branch_taken_0x265c98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x265C9Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x265C98u;
            // 0x265c9c: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x265c98) {
            ctx->pc = 0x265D00u;
            goto label_265d00;
        }
    }
    ctx->pc = 0x265CA0u;
label_265ca0:
    // 0x265ca0: 0x8f8597fc  lw          $a1, -0x6804($gp)
    ctx->pc = 0x265ca0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940668)));
    // 0x265ca4: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x265ca4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
    // 0x265ca8: 0x8f879804  lw          $a3, -0x67FC($gp)
    ctx->pc = 0x265ca8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940676)));
    // 0x265cac: 0x3c0401ed  lui         $a0, 0x1ED
    ctx->pc = 0x265cacu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)493 << 16));
    // 0x265cb0: 0x3c0601ee  lui         $a2, 0x1EE
    ctx->pc = 0x265cb0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)494 << 16));
    // 0x265cb4: 0x2484e880  addiu       $a0, $a0, -0x1780
    ctx->pc = 0x265cb4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961280));
    // 0x265cb8: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x265cb8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x265cbc: 0xc0978e8  jal         func_25E3A0
    ctx->pc = 0x265CBCu;
    SET_GPR_U32(ctx, 31, 0x265CC4u);
    ctx->pc = 0x265CC0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x265CBCu;
            // 0x265cc0: 0x24c60350  addiu       $a2, $a2, 0x350 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 848));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25E3A0u;
    if (runtime->hasFunction(0x25E3A0u)) {
        auto targetFn = runtime->lookupFunction(0x25E3A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x265CC4u; }
        if (ctx->pc != 0x265CC4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetMotion__10CEohMotherFiPcif_0x25e3a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x265CC4u; }
        if (ctx->pc != 0x265CC4u) { return; }
    }
    ctx->pc = 0x265CC4u;
label_265cc4:
    // 0x265cc4: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x265CC4u;
    {
        const bool branch_taken_0x265cc4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x265CC8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x265CC4u;
            // 0x265cc8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x265cc4) {
            ctx->pc = 0x265CFCu;
            goto label_265cfc;
        }
    }
    ctx->pc = 0x265CCCu;
label_265ccc:
    // 0x265ccc: 0x1602000b  bne         $s0, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x265CCCu;
    {
        const bool branch_taken_0x265ccc = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x265CD0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x265CCCu;
            // 0x265cd0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x265ccc) {
            ctx->pc = 0x265CFCu;
            goto label_265cfc;
        }
    }
    ctx->pc = 0x265CD4u;
    // 0x265cd4: 0x8f8597fc  lw          $a1, -0x6804($gp)
    ctx->pc = 0x265cd4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940668)));
    // 0x265cd8: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x265cd8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
    // 0x265cdc: 0x8f879804  lw          $a3, -0x67FC($gp)
    ctx->pc = 0x265cdcu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940676)));
    // 0x265ce0: 0x3c0401ed  lui         $a0, 0x1ED
    ctx->pc = 0x265ce0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)493 << 16));
    // 0x265ce4: 0x3c0601ee  lui         $a2, 0x1EE
    ctx->pc = 0x265ce4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)494 << 16));
    // 0x265ce8: 0x2484e880  addiu       $a0, $a0, -0x1780
    ctx->pc = 0x265ce8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961280));
    // 0x265cec: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x265cecu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x265cf0: 0xc0978e8  jal         func_25E3A0
    ctx->pc = 0x265CF0u;
    SET_GPR_U32(ctx, 31, 0x265CF8u);
    ctx->pc = 0x265CF4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x265CF0u;
            // 0x265cf4: 0x24c60350  addiu       $a2, $a2, 0x350 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 848));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25E3A0u;
    if (runtime->hasFunction(0x25E3A0u)) {
        auto targetFn = runtime->lookupFunction(0x25E3A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x265CF8u; }
        if (ctx->pc != 0x265CF8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetMotion__10CEohMotherFiPcif_0x25e3a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x265CF8u; }
        if (ctx->pc != 0x265CF8u) { return; }
    }
    ctx->pc = 0x265CF8u;
label_265cf8:
    // 0x265cf8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x265cf8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_265cfc:
    // 0x265cfc: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x265cfcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_265d00:
    // 0x265d00: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x265d00u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x265d04: 0x3e00008  jr          $ra
    ctx->pc = 0x265D04u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x265D08u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x265D04u;
            // 0x265d08: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x265D0Cu;
}
