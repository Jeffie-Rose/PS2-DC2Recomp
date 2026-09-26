#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _MODEL__FP9SPI_STACKi
// Address: 0x175d10 - 0x175f64
void ps2__MODEL__FP9SPI_STACKi_0x175d10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__MODEL__FP9SPI_STACKi_0x175d10");
#endif

    switch (ctx->pc) {
        case 0x175d2cu: goto label_175d2c;
        case 0x175d40u: goto label_175d40;
        case 0x175d5cu: goto label_175d5c;
        case 0x175d6cu: goto label_175d6c;
        case 0x175db0u: goto label_175db0;
        case 0x175dc0u: goto label_175dc0;
        case 0x175df0u: goto label_175df0;
        case 0x175e50u: goto label_175e50;
        case 0x175e60u: goto label_175e60;
        case 0x175e78u: goto label_175e78;
        case 0x175ea8u: goto label_175ea8;
        case 0x175ec8u: goto label_175ec8;
        case 0x175ee4u: goto label_175ee4;
        case 0x175f00u: goto label_175f00;
        default: break;
    }

    ctx->pc = 0x175d10u;

    // 0x175d10: 0x3c01fffe  lui         $at, 0xFFFE
    ctx->pc = 0x175d10u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)65534 << 16));
    // 0x175d14: 0x34216e50  ori         $at, $at, 0x6E50
    ctx->pc = 0x175d14u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)28240);
    // 0x175d18: 0x3a1e821  addu        $sp, $sp, $at
    ctx->pc = 0x175d18u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 1)));
    // 0x175d1c: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x175d1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x175d20: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x175d20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x175d24: 0xc05191c  jal         func_146470
    ctx->pc = 0x175D24u;
    SET_GPR_U32(ctx, 31, 0x175D2Cu);
    ctx->pc = 0x175D28u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x175D24u;
            // 0x175d28: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x146470u;
    if (runtime->hasFunction(0x146470u)) {
        auto targetFn = runtime->lookupFunction(0x146470u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x175D2Cu; }
        if (ctx->pc != 0x175D2Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackString__FP9SPI_STACK_0x146470(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x175D2Cu; }
        if (ctx->pc != 0x175D2Cu) { return; }
    }
    ctx->pc = 0x175D2Cu;
label_175d2c:
    // 0x175d2c: 0x8f8489f0  lw          $a0, -0x7610($gp)
    ctx->pc = 0x175d2cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937072)));
    // 0x175d30: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x175d30u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x175d34: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x175d34u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x175d38: 0xc052734  jal         func_149CD0
    ctx->pc = 0x175D38u;
    SET_GPR_U32(ctx, 31, 0x175D40u);
    ctx->pc = 0x175D3Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x175D38u;
            // 0x175d3c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x149CD0u;
    if (runtime->hasFunction(0x149CD0u)) {
        auto targetFn = runtime->lookupFunction(0x149CD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x175D40u; }
        if (ctx->pc != 0x175D40u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPackFile__FPUiPcPi_0x149cd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x175D40u; }
        if (ctx->pc != 0x175D40u) { return; }
    }
    ctx->pc = 0x175D40u;
label_175d40:
    // 0x175d40: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x175d40u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x175d44: 0x16200007  bnez        $s1, . + 4 + (0x7 << 2)
    ctx->pc = 0x175D44u;
    {
        const bool branch_taken_0x175d44 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x175D48u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x175D44u;
            // 0x175d48: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x175d44) {
            ctx->pc = 0x175D64u;
            goto label_175d64;
        }
    }
    ctx->pc = 0x175D4Cu;
    // 0x175d4c: 0x3c040036  lui         $a0, 0x36
    ctx->pc = 0x175d4cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)54 << 16));
    // 0x175d50: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x175d50u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x175d54: 0xc04a0d2  jal         func_128348
    ctx->pc = 0x175D54u;
    SET_GPR_U32(ctx, 31, 0x175D5Cu);
    ctx->pc = 0x175D58u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x175D54u;
            // 0x175d58: 0x24843960  addiu       $a0, $a0, 0x3960 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 14688));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128348u;
    if (runtime->hasFunction(0x128348u)) {
        auto targetFn = runtime->lookupFunction(0x128348u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x175D5Cu; }
        if (ctx->pc != 0x175D5Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        printf_0x128348(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x175D5Cu; }
        if (ctx->pc != 0x175D5Cu) { return; }
    }
    ctx->pc = 0x175D5Cu;
label_175d5c:
    // 0x175d5c: 0x1000007a  b           . + 4 + (0x7A << 2)
    ctx->pc = 0x175D5Cu;
    {
        const bool branch_taken_0x175d5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x175D60u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x175D5Cu;
            // 0x175d60: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x175d5c) {
            ctx->pc = 0x175F48u;
            goto label_175f48;
        }
    }
    ctx->pc = 0x175D64u;
label_175d64:
    // 0x175d64: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x175D64u;
    {
        const bool branch_taken_0x175d64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x175D68u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x175D64u;
            // 0x175d68: 0x2402002e  addiu       $v0, $zero, 0x2E (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 46));
        ctx->in_delay_slot = false;
        if (branch_taken_0x175d64) {
            ctx->pc = 0x175D74u;
            goto label_175d74;
        }
    }
    ctx->pc = 0x175D6Cu;
label_175d6c:
    // 0x175d6c: 0xa0650030  sb          $a1, 0x30($v1)
    ctx->pc = 0x175d6cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 48), (uint8_t)GPR_U32(ctx, 5));
    // 0x175d70: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x175d70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_175d74:
    // 0x175d74: 0x0  nop
    ctx->pc = 0x175d74u;
    // NOP
    // 0x175d78: 0x2041821  addu        $v1, $s0, $a0
    ctx->pc = 0x175d78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
    // 0x175d7c: 0x80650000  lb          $a1, 0x0($v1)
    ctx->pc = 0x175d7cu;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x175d80: 0x10a00004  beqz        $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x175D80u;
    {
        const bool branch_taken_0x175d80 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x175D84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x175D80u;
            // 0x175d84: 0x51e3c  dsll32      $v1, $a1, 24 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) << (32 + 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x175d80) {
            ctx->pc = 0x175D94u;
            goto label_175d94;
        }
    }
    ctx->pc = 0x175D88u;
    // 0x175d88: 0x31e3f  dsra32      $v1, $v1, 24
    ctx->pc = 0x175d88u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 24));
    // 0x175d8c: 0x1462fff7  bne         $v1, $v0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x175D8Cu;
    {
        const bool branch_taken_0x175d8c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x175D90u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x175D8Cu;
            // 0x175d90: 0x9d1821  addu        $v1, $a0, $sp (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 29)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x175d8c) {
            ctx->pc = 0x175D6Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_175d6c;
        }
    }
    ctx->pc = 0x175D94u;
label_175d94:
    // 0x175d94: 0x0  nop
    ctx->pc = 0x175d94u;
    // NOP
    // 0x175d98: 0x9d1021  addu        $v0, $a0, $sp
    ctx->pc = 0x175d98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 29)));
    // 0x175d9c: 0x3c050036  lui         $a1, 0x36
    ctx->pc = 0x175d9cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)54 << 16));
    // 0x175da0: 0xa0400030  sb          $zero, 0x30($v0)
    ctx->pc = 0x175da0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 48), (uint8_t)GPR_U32(ctx, 0));
    // 0x175da4: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x175da4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x175da8: 0xc04a2da  jal         func_128B68
    ctx->pc = 0x175DA8u;
    SET_GPR_U32(ctx, 31, 0x175DB0u);
    ctx->pc = 0x175DACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x175DA8u;
            // 0x175dac: 0x24a53980  addiu       $a1, $a1, 0x3980 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 14720));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128B68u;
    if (runtime->hasFunction(0x128B68u)) {
        auto targetFn = runtime->lookupFunction(0x128B68u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x175DB0u; }
        if (ctx->pc != 0x175DB0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcat_0x128b68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x175DB0u; }
        if (ctx->pc != 0x175DB0u) { return; }
    }
    ctx->pc = 0x175DB0u;
label_175db0:
    // 0x175db0: 0x8f8489f0  lw          $a0, -0x7610($gp)
    ctx->pc = 0x175db0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937072)));
    // 0x175db4: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x175db4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x175db8: 0xc052734  jal         func_149CD0
    ctx->pc = 0x175DB8u;
    SET_GPR_U32(ctx, 31, 0x175DC0u);
    ctx->pc = 0x175DBCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x175DB8u;
            // 0x175dbc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x149CD0u;
    if (runtime->hasFunction(0x149CD0u)) {
        auto targetFn = runtime->lookupFunction(0x149CD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x175DC0u; }
        if (ctx->pc != 0x175DC0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPackFile__FPUiPcPi_0x149cd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x175DC0u; }
        if (ctx->pc != 0x175DC0u) { return; }
    }
    ctx->pc = 0x175DC0u;
label_175dc0:
    // 0x175dc0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x175dc0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x175dc4: 0x8f8289d4  lw          $v0, -0x762C($gp)
    ctx->pc = 0x175dc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937044)));
    // 0x175dc8: 0x1840003a  blez        $v0, . + 4 + (0x3A << 2)
    ctx->pc = 0x175DC8u;
    {
        const bool branch_taken_0x175dc8 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x175DCCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x175DC8u;
            // 0x175dcc: 0x3c060036  lui         $a2, 0x36 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)54 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x175dc8) {
            ctx->pc = 0x175EB4u;
            goto label_175eb4;
        }
    }
    ctx->pc = 0x175DD0u;
    // 0x175dd0: 0x3c03003d  lui         $v1, 0x3D
    ctx->pc = 0x175dd0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)61 << 16));
    // 0x175dd4: 0x24c63988  addiu       $a2, $a2, 0x3988
    ctx->pc = 0x175dd4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 14728));
    // 0x175dd8: 0x27a70070  addiu       $a3, $sp, 0x70
    ctx->pc = 0x175dd8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x175ddc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x175ddcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x175de0: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x175de0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x175de4: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x175de4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x175de8: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x175DE8u;
    {
        const bool branch_taken_0x175de8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x175DECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x175DE8u;
            // 0x175dec: 0x246304e0  addiu       $v1, $v1, 0x4E0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1248));
        ctx->in_delay_slot = false;
        if (branch_taken_0x175de8) {
            ctx->pc = 0x175E24u;
            goto label_175e24;
        }
    }
    ctx->pc = 0x175DF0u;
label_175df0:
    // 0x175df0: 0x8f8289a8  lw          $v0, -0x7658($gp)
    ctx->pc = 0x175df0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937000)));
    // 0x175df4: 0x8c420134  lw          $v0, 0x134($v0)
    ctx->pc = 0x175df4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 308)));
    // 0x175df8: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x175DF8u;
    {
        const bool branch_taken_0x175df8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x175df8) {
            ctx->pc = 0x175E08u;
            goto label_175e08;
        }
    }
    ctx->pc = 0x175E00u;
    // 0x175e00: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x175E00u;
    {
        const bool branch_taken_0x175e00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x175E04u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x175E00u;
            // 0x175e04: 0xace40000  sw          $a0, 0x0($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x175e00) {
            ctx->pc = 0x175E0Cu;
            goto label_175e0c;
        }
    }
    ctx->pc = 0x175E08u;
label_175e08:
    // 0x175e08: 0xace00000  sw          $zero, 0x0($a3)
    ctx->pc = 0x175e08u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 0));
label_175e0c:
    // 0x175e0c: 0x0  nop
    ctx->pc = 0x175e0cu;
    // NOP
    // 0x175e10: 0x681021  addu        $v0, $v1, $t0
    ctx->pc = 0x175e10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
    // 0x175e14: 0xace20004  sw          $v0, 0x4($a3)
    ctx->pc = 0x175e14u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 2));
    // 0x175e18: 0x25080010  addiu       $t0, $t0, 0x10
    ctx->pc = 0x175e18u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 16));
    // 0x175e1c: 0x24e70008  addiu       $a3, $a3, 0x8
    ctx->pc = 0x175e1cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 8));
    // 0x175e20: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x175e20u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_175e24:
    // 0x175e24: 0x0  nop
    ctx->pc = 0x175e24u;
    // NOP
    // 0x175e28: 0x8f8289d4  lw          $v0, -0x762C($gp)
    ctx->pc = 0x175e28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937044)));
    // 0x175e2c: 0xa2102a  slt         $v0, $a1, $v0
    ctx->pc = 0x175e2cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x175e30: 0x1440ffef  bnez        $v0, . + 4 + (-0x11 << 2)
    ctx->pc = 0x175E30u;
    {
        const bool branch_taken_0x175e30 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x175E34u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x175E30u;
            // 0x175e34: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x175e30) {
            ctx->pc = 0x175DF0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_175df0;
        }
    }
    ctx->pc = 0x175E38u;
    // 0x175e38: 0x27a40140  addiu       $a0, $sp, 0x140
    ctx->pc = 0x175e38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
    // 0x175e3c: 0xace20000  sw          $v0, 0x0($a3)
    ctx->pc = 0x175e3cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 2));
    // 0x175e40: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x175e40u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x175e44: 0xace60004  sw          $a2, 0x4($a3)
    ctx->pc = 0x175e44u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 6));
    // 0x175e48: 0xc049c86  jal         func_127218
    ctx->pc = 0x175E48u;
    SET_GPR_U32(ctx, 31, 0x175E50u);
    ctx->pc = 0x175E4Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x175E48u;
            // 0x175e4c: 0x24060040  addiu       $a2, $zero, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
        ctx->in_delay_slot = false;
    ctx->pc = 0x127218u;
    if (runtime->hasFunction(0x127218u)) {
        auto targetFn = runtime->lookupFunction(0x127218u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x175E50u; }
        if (ctx->pc != 0x175E50u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        memset_0x127218(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x175E50u; }
        if (ctx->pc != 0x175E50u) { return; }
    }
    ctx->pc = 0x175E50u;
label_175e50:
    // 0x175e50: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x175e50u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x175e54: 0x34219180  ori         $at, $at, 0x9180
    ctx->pc = 0x175e54u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)37248);
    // 0x175e58: 0xc04e640  jal         func_139900
    ctx->pc = 0x175E58u;
    SET_GPR_U32(ctx, 31, 0x175E60u);
    ctx->pc = 0x175E5Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x175E58u;
            // 0x175e5c: 0x3a12021  addu        $a0, $sp, $at (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 1)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139900u;
    if (runtime->hasFunction(0x139900u)) {
        auto targetFn = runtime->lookupFunction(0x139900u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x175E60u; }
        if (ctx->pc != 0x175E60u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Init__9mgCMemoryFv_0x139900(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x175E60u; }
        if (ctx->pc != 0x175E60u) { return; }
    }
    ctx->pc = 0x175E60u;
label_175e60:
    // 0x175e60: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x175e60u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x175e64: 0x27a50180  addiu       $a1, $sp, 0x180
    ctx->pc = 0x175e64u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
    // 0x175e68: 0x34219180  ori         $at, $at, 0x9180
    ctx->pc = 0x175e68u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)37248);
    // 0x175e6c: 0x24061900  addiu       $a2, $zero, 0x1900
    ctx->pc = 0x175e6cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 6400));
    // 0x175e70: 0xc04e79c  jal         func_139E70
    ctx->pc = 0x175E70u;
    SET_GPR_U32(ctx, 31, 0x175E78u);
    ctx->pc = 0x175E74u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x175E70u;
            // 0x175e74: 0x3a12021  addu        $a0, $sp, $at (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 1)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139E70u;
    if (runtime->hasFunction(0x139E70u)) {
        auto targetFn = runtime->lookupFunction(0x139E70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x175E78u; }
        if (ctx->pc != 0x175E78u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        stSetBuffer__9mgCMemoryFP1i_0x139e70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x175E78u; }
        if (ctx->pc != 0x175E78u) { return; }
    }
    ctx->pc = 0x175E78u;
label_175e78:
    // 0x175e78: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x175e78u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x175e7c: 0x27a40140  addiu       $a0, $sp, 0x140
    ctx->pc = 0x175e7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
    // 0x175e80: 0x34219180  ori         $at, $at, 0x9180
    ctx->pc = 0x175e80u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)37248);
    // 0x175e84: 0xafb10140  sw          $s1, 0x140($sp)
    ctx->pc = 0x175e84u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 320), GPR_U32(ctx, 17));
    // 0x175e88: 0x3a11021  addu        $v0, $sp, $at
    ctx->pc = 0x175e88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 1)));
    // 0x175e8c: 0xafb00154  sw          $s0, 0x154($sp)
    ctx->pc = 0x175e8cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 340), GPR_U32(ctx, 16));
    // 0x175e90: 0xafa20148  sw          $v0, 0x148($sp)
    ctx->pc = 0x175e90u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 328), GPR_U32(ctx, 2));
    // 0x175e94: 0x27a20070  addiu       $v0, $sp, 0x70
    ctx->pc = 0x175e94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x175e98: 0xafa2014c  sw          $v0, 0x14C($sp)
    ctx->pc = 0x175e98u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 332), GPR_U32(ctx, 2));
    // 0x175e9c: 0x8f8289dc  lw          $v0, -0x7624($gp)
    ctx->pc = 0x175e9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937052)));
    // 0x175ea0: 0xc04cb98  jal         func_132E60
    ctx->pc = 0x175EA0u;
    SET_GPR_U32(ctx, 31, 0x175EA8u);
    ctx->pc = 0x175EA4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x175EA0u;
            // 0x175ea4: 0xafa20144  sw          $v0, 0x144($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 324), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x132E60u;
    if (runtime->hasFunction(0x132E60u)) {
        auto targetFn = runtime->lookupFunction(0x132E60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x175EA8u; }
        if (ctx->pc != 0x175EA8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgLoadMDSFile__FP10mgLoadData_0x132e60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x175EA8u; }
        if (ctx->pc != 0x175EA8u) { return; }
    }
    ctx->pc = 0x175EA8u;
label_175ea8:
    // 0x175ea8: 0x8f8389a8  lw          $v1, -0x7658($gp)
    ctx->pc = 0x175ea8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937000)));
    // 0x175eac: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x175EACu;
    {
        const bool branch_taken_0x175eac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x175EB0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x175EACu;
            // 0x175eb0: 0xac620070  sw          $v0, 0x70($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 112), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x175eac) {
            ctx->pc = 0x175ED0u;
            goto label_175ed0;
        }
    }
    ctx->pc = 0x175EB4u;
label_175eb4:
    // 0x175eb4: 0x8f8589dc  lw          $a1, -0x7624($gp)
    ctx->pc = 0x175eb4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937052)));
    // 0x175eb8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x175eb8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x175ebc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x175ebcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x175ec0: 0xc04cb78  jal         func_132DE0
    ctx->pc = 0x175EC0u;
    SET_GPR_U32(ctx, 31, 0x175EC8u);
    ctx->pc = 0x175EC4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x175EC0u;
            // 0x175ec4: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x132DE0u;
    if (runtime->hasFunction(0x132DE0u)) {
        auto targetFn = runtime->lookupFunction(0x132DE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x175EC8u; }
        if (ctx->pc != 0x175EC8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgLoadMDSFile__FP10MDS_HEADERP9mgCMemoryP18mgCreateVisualTypeP17mgCTextureManager_0x132de0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x175EC8u; }
        if (ctx->pc != 0x175EC8u) { return; }
    }
    ctx->pc = 0x175EC8u;
label_175ec8:
    // 0x175ec8: 0x8f8389a8  lw          $v1, -0x7658($gp)
    ctx->pc = 0x175ec8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937000)));
    // 0x175ecc: 0xac620070  sw          $v0, 0x70($v1)
    ctx->pc = 0x175eccu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 112), GPR_U32(ctx, 2));
label_175ed0:
    // 0x175ed0: 0x8f8289a8  lw          $v0, -0x7658($gp)
    ctx->pc = 0x175ed0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937000)));
    // 0x175ed4: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x175ed4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x175ed8: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x175ed8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x175edc: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x175EDCu;
    {
        const bool branch_taken_0x175edc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x175EE0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x175EDCu;
            // 0x175ee0: 0xac400348  sw          $zero, 0x348($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 840), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x175edc) {
            ctx->pc = 0x175F38u;
            goto label_175f38;
        }
    }
    ctx->pc = 0x175EE4u;
label_175ee4:
    // 0x175ee4: 0x8f8289a8  lw          $v0, -0x7658($gp)
    ctx->pc = 0x175ee4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937000)));
    // 0x175ee8: 0x8c440070  lw          $a0, 0x70($v0)
    ctx->pc = 0x175ee8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 112)));
    // 0x175eec: 0x1080000f  beqz        $a0, . + 4 + (0xF << 2)
    ctx->pc = 0x175EECu;
    {
        const bool branch_taken_0x175eec = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x175EF0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x175EECu;
            // 0x175ef0: 0x3c02003d  lui         $v0, 0x3D (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)61 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x175eec) {
            ctx->pc = 0x175F2Cu;
            goto label_175f2c;
        }
    }
    ctx->pc = 0x175EF4u;
    // 0x175ef4: 0x244204e0  addiu       $v0, $v0, 0x4E0
    ctx->pc = 0x175ef4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1248));
    // 0x175ef8: 0xc04ddb4  jal         func_1376D0
    ctx->pc = 0x175EF8u;
    SET_GPR_U32(ctx, 31, 0x175F00u);
    ctx->pc = 0x175EFCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x175EF8u;
            // 0x175efc: 0x512821  addu        $a1, $v0, $s1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1376D0u;
    if (runtime->hasFunction(0x1376D0u)) {
        auto targetFn = runtime->lookupFunction(0x1376D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x175F00u; }
        if (ctx->pc != 0x175F00u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SearchFrame__8mgCFrameFPc_0x1376d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x175F00u; }
        if (ctx->pc != 0x175F00u) { return; }
    }
    ctx->pc = 0x175F00u;
label_175f00:
    // 0x175f00: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x175F00u;
    {
        const bool branch_taken_0x175f00 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x175f00) {
            ctx->pc = 0x175F2Cu;
            goto label_175f2c;
        }
    }
    ctx->pc = 0x175F08u;
    // 0x175f08: 0x8f8489a8  lw          $a0, -0x7658($gp)
    ctx->pc = 0x175f08u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937000)));
    // 0x175f0c: 0x8c830348  lw          $v1, 0x348($a0)
    ctx->pc = 0x175f0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 840)));
    // 0x175f10: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x175f10u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x175f14: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x175f14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x175f18: 0xac6202e8  sw          $v0, 0x2E8($v1)
    ctx->pc = 0x175f18u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 744), GPR_U32(ctx, 2));
    // 0x175f1c: 0x8f8389a8  lw          $v1, -0x7658($gp)
    ctx->pc = 0x175f1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937000)));
    // 0x175f20: 0x8c620348  lw          $v0, 0x348($v1)
    ctx->pc = 0x175f20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 840)));
    // 0x175f24: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x175f24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x175f28: 0xac620348  sw          $v0, 0x348($v1)
    ctx->pc = 0x175f28u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 840), GPR_U32(ctx, 2));
label_175f2c:
    // 0x175f2c: 0x0  nop
    ctx->pc = 0x175f2cu;
    // NOP
    // 0x175f30: 0x26310010  addiu       $s1, $s1, 0x10
    ctx->pc = 0x175f30u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x175f34: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x175f34u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_175f38:
    // 0x175f38: 0x8f8289d4  lw          $v0, -0x762C($gp)
    ctx->pc = 0x175f38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937044)));
    // 0x175f3c: 0x202102a  slt         $v0, $s0, $v0
    ctx->pc = 0x175f3cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x175f40: 0x1440ffe8  bnez        $v0, . + 4 + (-0x18 << 2)
    ctx->pc = 0x175F40u;
    {
        const bool branch_taken_0x175f40 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x175F44u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x175F40u;
            // 0x175f44: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x175f40) {
            ctx->pc = 0x175EE4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_175ee4;
        }
    }
    ctx->pc = 0x175F48u;
label_175f48:
    // 0x175f48: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x175f48u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x175f4c: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x175f4cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x175f50: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x175f50u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x175f54: 0x342191b0  ori         $at, $at, 0x91B0
    ctx->pc = 0x175f54u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)37296);
    // 0x175f58: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x175f58u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x175f5c: 0x3e00008  jr          $ra
    ctx->pc = 0x175F5Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x175F60u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x175F5Cu;
            // 0x175f60: 0x3a1e821  addu        $sp, $sp, $at (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 1)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x175F64u;
}
