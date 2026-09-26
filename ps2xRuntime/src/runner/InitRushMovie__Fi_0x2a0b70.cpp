#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: InitRushMovie__Fi
// Address: 0x2a0b70 - 0x2a0c8c
void InitRushMovie__Fi_0x2a0b70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("InitRushMovie__Fi_0x2a0b70");
#endif

    switch (ctx->pc) {
        case 0x2a0b88u: goto label_2a0b88;
        case 0x2a0bacu: goto label_2a0bac;
        case 0x2a0bb4u: goto label_2a0bb4;
        case 0x2a0be0u: goto label_2a0be0;
        case 0x2a0c04u: goto label_2a0c04;
        case 0x2a0c14u: goto label_2a0c14;
        case 0x2a0c1cu: goto label_2a0c1c;
        case 0x2a0c24u: goto label_2a0c24;
        case 0x2a0c2cu: goto label_2a0c2c;
        case 0x2a0c38u: goto label_2a0c38;
        case 0x2a0c6cu: goto label_2a0c6c;
        default: break;
    }

    ctx->pc = 0x2a0b70u;

    // 0x2a0b70: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2a0b70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2a0b74: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2a0b74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2a0b78: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2a0b78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2a0b7c: 0x8f8499ec  lw          $a0, -0x6614($gp)
    ctx->pc = 0x2a0b7cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941164)));
    // 0x2a0b80: 0xc0a99f0  jal         func_2A67C0
    ctx->pc = 0x2A0B80u;
    SET_GPR_U32(ctx, 31, 0x2A0B88u);
    ctx->pc = 0x2A0B84u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A0B80u;
            // 0x2a0b84: 0xaf828760  sw          $v0, -0x78A0($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294936416), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A67C0u;
    if (runtime->hasFunction(0x2A67C0u)) {
        auto targetFn = runtime->lookupFunction(0x2A67C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A0B88u; }
        if (ctx->pc != 0x2A0B88u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        StopEnvBGM__6CSceneFv_0x2a67c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A0B88u; }
        if (ctx->pc != 0x2A0B88u) { return; }
    }
    ctx->pc = 0x2A0B88u;
label_2a0b88:
    // 0x2a0b88: 0x3c0101f0  lui         $at, 0x1F0
    ctx->pc = 0x2a0b88u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)496 << 16));
    // 0x2a0b8c: 0x3c040038  lui         $a0, 0x38
    ctx->pc = 0x2a0b8cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)56 << 16));
    // 0x2a0b90: 0xac206124  sw          $zero, 0x6124($at)
    ctx->pc = 0x2a0b90u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 24868), GPR_U32(ctx, 0));
    // 0x2a0b94: 0x24841ef0  addiu       $a0, $a0, 0x1EF0
    ctx->pc = 0x2a0b94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 7920));
    // 0x2a0b98: 0x3c0101f0  lui         $at, 0x1F0
    ctx->pc = 0x2a0b98u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)496 << 16));
    // 0x2a0b9c: 0x24050043  addiu       $a1, $zero, 0x43
    ctx->pc = 0x2a0b9cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 67));
    // 0x2a0ba0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2a0ba0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a0ba4: 0xc04ba14  jal         func_12E850
    ctx->pc = 0x2A0BA4u;
    SET_GPR_U32(ctx, 31, 0x2A0BACu);
    ctx->pc = 0x2A0BA8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A0BA4u;
            // 0x2a0ba8: 0xac20611c  sw          $zero, 0x611C($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 24860), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12E850u;
    if (runtime->hasFunction(0x12E850u)) {
        auto targetFn = runtime->lookupFunction(0x12E850u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A0BACu; }
        if (ctx->pc != 0x2A0BACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ReloadTexture__17mgCTextureManagerFiP13sceVif1Packet_0x12e850(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A0BACu; }
        if (ctx->pc != 0x2A0BACu) { return; }
    }
    ctx->pc = 0x2A0BACu;
label_2a0bac:
    // 0x2a0bac: 0xc04e640  jal         func_139900
    ctx->pc = 0x2A0BACu;
    SET_GPR_U32(ctx, 31, 0x2A0BB4u);
    ctx->pc = 0x2A0BB0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A0BACu;
            // 0x2a0bb0: 0x27a40010  addiu       $a0, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139900u;
    if (runtime->hasFunction(0x139900u)) {
        auto targetFn = runtime->lookupFunction(0x139900u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A0BB4u; }
        if (ctx->pc != 0x2A0BB4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Init__9mgCMemoryFv_0x139900(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A0BB4u; }
        if (ctx->pc != 0x2A0BB4u) { return; }
    }
    ctx->pc = 0x2A0BB4u;
label_2a0bb4:
    // 0x2a0bb4: 0x3c0101f0  lui         $at, 0x1F0
    ctx->pc = 0x2a0bb4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)496 << 16));
    // 0x2a0bb8: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x2a0bb8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2a0bbc: 0x8c236128  lw          $v1, 0x6128($at)
    ctx->pc = 0x2a0bbcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 24872)));
    // 0x2a0bc0: 0x3c0101f0  lui         $at, 0x1F0
    ctx->pc = 0x2a0bc0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)496 << 16));
    // 0x2a0bc4: 0x8c256124  lw          $a1, 0x6124($at)
    ctx->pc = 0x2a0bc4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 24868)));
    // 0x2a0bc8: 0x3c0101f0  lui         $at, 0x1F0
    ctx->pc = 0x2a0bc8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)496 << 16));
    // 0x2a0bcc: 0x653023  subu        $a2, $v1, $a1
    ctx->pc = 0x2a0bccu;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x2a0bd0: 0x8c226120  lw          $v0, 0x6120($at)
    ctx->pc = 0x2a0bd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 24864)));
    // 0x2a0bd4: 0x51900  sll         $v1, $a1, 4
    ctx->pc = 0x2a0bd4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x2a0bd8: 0xc04e79c  jal         func_139E70
    ctx->pc = 0x2A0BD8u;
    SET_GPR_U32(ctx, 31, 0x2A0BE0u);
    ctx->pc = 0x2A0BDCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A0BD8u;
            // 0x2a0bdc: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139E70u;
    if (runtime->hasFunction(0x139E70u)) {
        auto targetFn = runtime->lookupFunction(0x139E70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A0BE0u; }
        if (ctx->pc != 0x2A0BE0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        stSetBuffer__9mgCMemoryFP1i_0x139e70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A0BE0u; }
        if (ctx->pc != 0x2A0BE0u) { return; }
    }
    ctx->pc = 0x2A0BE0u;
label_2a0be0:
    // 0x2a0be0: 0x8f8499e0  lw          $a0, -0x6620($gp)
    ctx->pc = 0x2a0be0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941152)));
    // 0x2a0be4: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x2a0be4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x2a0be8: 0x24a5e1a0  addiu       $a1, $a1, -0x1E60
    ctx->pc = 0x2a0be8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294959520));
    // 0x2a0bec: 0x27a60010  addiu       $a2, $sp, 0x10
    ctx->pc = 0x2a0becu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2a0bf0: 0x24070200  addiu       $a3, $zero, 0x200
    ctx->pc = 0x2a0bf0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    // 0x2a0bf4: 0x240801a0  addiu       $t0, $zero, 0x1A0
    ctx->pc = 0x2a0bf4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 416));
    // 0x2a0bf8: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x2a0bf8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2a0bfc: 0xc0a62b4  jal         func_298AD0
    ctx->pc = 0x2A0BFCu;
    SET_GPR_U32(ctx, 31, 0x2A0C04u);
    ctx->pc = 0x2A0C00u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A0BFCu;
            // 0x2a0c00: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x298AD0u;
    if (runtime->hasFunction(0x298AD0u)) {
        auto targetFn = runtime->lookupFunction(0x298AD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A0C04u; }
        if (ctx->pc != 0x2A0C04u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Load__6CMovieFPcP9mgCMemoryiibb_0x298ad0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A0C04u; }
        if (ctx->pc != 0x2A0C04u) { return; }
    }
    ctx->pc = 0x2A0C04u;
label_2a0c04:
    // 0x2a0c04: 0x8f8499e0  lw          $a0, -0x6620($gp)
    ctx->pc = 0x2a0c04u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941152)));
    // 0x2a0c08: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x2a0c08u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x2a0c0c: 0xc0a62e0  jal         func_298B80
    ctx->pc = 0x2A0C0Cu;
    SET_GPR_U32(ctx, 31, 0x2A0C14u);
    ctx->pc = 0x2A0C10u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A0C0Cu;
            // 0x2a0c10: 0x24a5e0a8  addiu       $a1, $a1, -0x1F58 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294959272));
        ctx->in_delay_slot = false;
    ctx->pc = 0x298B80u;
    if (runtime->hasFunction(0x298B80u)) {
        auto targetFn = runtime->lookupFunction(0x298B80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A0C14u; }
        if (ctx->pc != 0x2A0C14u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Play__6CMovieFPc_0x298b80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A0C14u; }
        if (ctx->pc != 0x2A0C14u) { return; }
    }
    ctx->pc = 0x2A0C14u;
label_2a0c14:
    // 0x2a0c14: 0xc0a6360  jal         func_298D80
    ctx->pc = 0x2A0C14u;
    SET_GPR_U32(ctx, 31, 0x2A0C1Cu);
    ctx->pc = 0x2A0C18u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A0C14u;
            // 0x2a0c18: 0x8f8499e0  lw          $a0, -0x6620($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941152)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x298D80u;
    if (runtime->hasFunction(0x298D80u)) {
        auto targetFn = runtime->lookupFunction(0x298D80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A0C1Cu; }
        if (ctx->pc != 0x2A0C1Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SwitchThread__6CMovieFv_0x298d80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A0C1Cu; }
        if (ctx->pc != 0x2A0C1Cu) { return; }
    }
    ctx->pc = 0x2A0C1Cu;
label_2a0c1c:
    // 0x2a0c1c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2A0C1Cu;
    {
        const bool branch_taken_0x2a0c1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a0c1c) {
            ctx->pc = 0x2A0C2Cu;
            goto label_2a0c2c;
        }
    }
    ctx->pc = 0x2A0C24u;
label_2a0c24:
    // 0x2a0c24: 0xc0a6360  jal         func_298D80
    ctx->pc = 0x2A0C24u;
    SET_GPR_U32(ctx, 31, 0x2A0C2Cu);
    ctx->pc = 0x2A0C28u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A0C24u;
            // 0x2a0c28: 0x8f8499e0  lw          $a0, -0x6620($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941152)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x298D80u;
    if (runtime->hasFunction(0x298D80u)) {
        auto targetFn = runtime->lookupFunction(0x298D80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A0C2Cu; }
        if (ctx->pc != 0x2A0C2Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SwitchThread__6CMovieFv_0x298d80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A0C2Cu; }
        if (ctx->pc != 0x2A0C2Cu) { return; }
    }
    ctx->pc = 0x2A0C2Cu;
label_2a0c2c:
    // 0x2a0c2c: 0x0  nop
    ctx->pc = 0x2a0c2cu;
    // NOP
    // 0x2a0c30: 0xc0a63dc  jal         func_298F70
    ctx->pc = 0x2A0C30u;
    SET_GPR_U32(ctx, 31, 0x2A0C38u);
    ctx->pc = 0x2A0C34u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A0C30u;
            // 0x2a0c34: 0x8f8499e0  lw          $a0, -0x6620($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941152)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x298F70u;
    if (runtime->hasFunction(0x298F70u)) {
        auto targetFn = runtime->lookupFunction(0x298F70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A0C38u; }
        if (ctx->pc != 0x2A0C38u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        IsStarted__6CMovieFv_0x298f70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A0C38u; }
        if (ctx->pc != 0x2A0C38u) { return; }
    }
    ctx->pc = 0x2A0C38u;
label_2a0c38:
    // 0x2a0c38: 0x1040fffa  beqz        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x2A0C38u;
    {
        const bool branch_taken_0x2a0c38 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A0C3Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A0C38u;
            // 0x2a0c3c: 0x3c0101f0  lui         $at, 0x1F0 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)496 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a0c38) {
            ctx->pc = 0x2A0C24u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2a0c24;
        }
    }
    ctx->pc = 0x2A0C40u;
    // 0x2a0c40: 0x24023fff  addiu       $v0, $zero, 0x3FFF
    ctx->pc = 0x2a0c40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16383));
    // 0x2a0c44: 0xa4206254  sh          $zero, 0x6254($at)
    ctx->pc = 0x2a0c44u;
    WRITE16(ADD32(GPR_U32(ctx, 1), 25172), (uint16_t)GPR_U32(ctx, 0));
    // 0x2a0c48: 0x3c0101f0  lui         $at, 0x1F0
    ctx->pc = 0x2a0c48u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)496 << 16));
    // 0x2a0c4c: 0xac226260  sw          $v0, 0x6260($at)
    ctx->pc = 0x2a0c4cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 25184), GPR_U32(ctx, 2));
    // 0x2a0c50: 0x8f8299ec  lw          $v0, -0x6614($gp)
    ctx->pc = 0x2a0c50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941164)));
    // 0x2a0c54: 0x3c0101f0  lui         $at, 0x1F0
    ctx->pc = 0x2a0c54u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)496 << 16));
    // 0x2a0c58: 0xa0206264  sb          $zero, 0x6264($at)
    ctx->pc = 0x2a0c58u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 25188), (uint8_t)GPR_U32(ctx, 0));
    // 0x2a0c5c: 0x3c0101f0  lui         $at, 0x1F0
    ctx->pc = 0x2a0c5cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)496 << 16));
    // 0x2a0c60: 0xac20625c  sw          $zero, 0x625C($at)
    ctx->pc = 0x2a0c60u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 25180), GPR_U32(ctx, 0));
    // 0x2a0c64: 0xc05f5d4  jal         func_17D750
    ctx->pc = 0x2A0C64u;
    SET_GPR_U32(ctx, 31, 0x2A0C6Cu);
    ctx->pc = 0x2A0C68u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A0C64u;
            // 0x2a0c68: 0x24442c70  addiu       $a0, $v0, 0x2C70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 11376));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17D750u;
    if (runtime->hasFunction(0x17D750u)) {
        auto targetFn = runtime->lookupFunction(0x17D750u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A0C6Cu; }
        if (ctx->pc != 0x2A0C6Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Initialize__10CFadeInOutFv_0x17d750(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A0C6Cu; }
        if (ctx->pc != 0x2A0C6Cu) { return; }
    }
    ctx->pc = 0x2A0C6Cu;
label_2a0c6c:
    // 0x2a0c6c: 0x3c0101f0  lui         $at, 0x1F0
    ctx->pc = 0x2a0c6cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)496 << 16));
    // 0x2a0c70: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2a0c70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2a0c74: 0xac206258  sw          $zero, 0x6258($at)
    ctx->pc = 0x2a0c74u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 25176), GPR_U32(ctx, 0));
    // 0x2a0c78: 0xa78399ac  sh          $v1, -0x6654($gp)
    ctx->pc = 0x2a0c78u;
    WRITE16(ADD32(GPR_U32(ctx, 28), 4294941100), (uint16_t)GPR_U32(ctx, 3));
    // 0x2a0c7c: 0xa3809a08  sb          $zero, -0x65F8($gp)
    ctx->pc = 0x2a0c7cu;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294941192), (uint8_t)GPR_U32(ctx, 0));
    // 0x2a0c80: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2a0c80u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2a0c84: 0x3e00008  jr          $ra
    ctx->pc = 0x2A0C84u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A0C88u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A0C84u;
            // 0x2a0c88: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2A0C8Cu;
}
