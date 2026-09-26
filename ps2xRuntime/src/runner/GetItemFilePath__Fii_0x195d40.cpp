#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: GetItemFilePath__Fii
// Address: 0x195d40 - 0x195ec0
void GetItemFilePath__Fii_0x195d40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetItemFilePath__Fii_0x195d40");
#endif

    switch (ctx->pc) {
        case 0x195d74u: goto label_195d74;
        case 0x195d88u: goto label_195d88;
        case 0x195d98u: goto label_195d98;
        case 0x195da8u: goto label_195da8;
        case 0x195de4u: goto label_195de4;
        case 0x195dfcu: goto label_195dfc;
        case 0x195e14u: goto label_195e14;
        case 0x195e24u: goto label_195e24;
        case 0x195e38u: goto label_195e38;
        case 0x195e64u: goto label_195e64;
        case 0x195ea0u: goto label_195ea0;
        default: break;
    }

    ctx->pc = 0x195d40u;

    // 0x195d40: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x195d40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x195d44: 0x3c0101e7  lui         $at, 0x1E7
    ctx->pc = 0x195d44u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)487 << 16));
    // 0x195d48: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x195d48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x195d4c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x195d4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x195d50: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x195d50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x195d54: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x195d54u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x195d58: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x195d58u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x195d5c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x195d5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x195d60: 0x3c0401e7  lui         $a0, 0x1E7
    ctx->pc = 0x195d60u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)487 << 16));
    // 0x195d64: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x195d64u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x195d68: 0x24849570  addiu       $a0, $a0, -0x6A90
    ctx->pc = 0x195d68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294940016));
    // 0x195d6c: 0xc0655dc  jal         func_195770
    ctx->pc = 0x195D6Cu;
    SET_GPR_U32(ctx, 31, 0x195D74u);
    ctx->pc = 0x195D70u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x195D6Cu;
            // 0x195d70: 0xa0204190  sb          $zero, 0x4190($at) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 1), 16784), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195770u;
    if (runtime->hasFunction(0x195770u)) {
        auto targetFn = runtime->lookupFunction(0x195770u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x195D74u; }
        if (ctx->pc != 0x195D74u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetCommonData__9CGameDataFi_0x195770(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x195D74u; }
        if (ctx->pc != 0x195D74u) { return; }
    }
    ctx->pc = 0x195D74u;
label_195d74:
    // 0x195d74: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x195d74u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x195d78: 0x12000049  beqz        $s0, . + 4 + (0x49 << 2)
    ctx->pc = 0x195D78u;
    {
        const bool branch_taken_0x195d78 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x195d78) {
            ctx->pc = 0x195EA0u;
            goto label_195ea0;
        }
    }
    ctx->pc = 0x195D80u;
    // 0x195d80: 0xc0657c4  jal         func_195F10
    ctx->pc = 0x195D80u;
    SET_GPR_U32(ctx, 31, 0x195D88u);
    ctx->pc = 0x195D84u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x195D80u;
            // 0x195d84: 0x92040000  lbu         $a0, 0x0($s0) (Delay Slot)
        SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195F10u;
    if (runtime->hasFunction(0x195F10u)) {
        auto targetFn = runtime->lookupFunction(0x195F10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x195D88u; }
        if (ctx->pc != 0x195D88u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ConvertUsedItemType__Fi_0x195f10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x195D88u; }
        if (ctx->pc != 0x195D88u) { return; }
    }
    ctx->pc = 0x195D88u;
label_195d88:
    // 0x195d88: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x195d88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x195d8c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x195d8cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x195d90: 0xc06571c  jal         func_195C70
    ctx->pc = 0x195D90u;
    SET_GPR_U32(ctx, 31, 0x195D98u);
    ctx->pc = 0x195D94u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x195D90u;
            // 0x195d94: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195C70u;
    if (runtime->hasFunction(0x195C70u)) {
        auto targetFn = runtime->lookupFunction(0x195C70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x195D98u; }
        if (ctx->pc != 0x195D98u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetItemFileName__Fii_0x195c70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x195D98u; }
        if (ctx->pc != 0x195D98u) { return; }
    }
    ctx->pc = 0x195D98u;
label_195d98:
    // 0x195d98: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x195D98u;
    {
        const bool branch_taken_0x195d98 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x195D9Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x195D98u;
            // 0x195d9c: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x195d98) {
            ctx->pc = 0x195DA8u;
            goto label_195da8;
        }
    }
    ctx->pc = 0x195DA0u;
    // 0x195da0: 0xc04a3dc  jal         func_128F70
    ctx->pc = 0x195DA0u;
    SET_GPR_U32(ctx, 31, 0x195DA8u);
    ctx->pc = 0x195DA4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x195DA0u;
            // 0x195da4: 0x27a40040  addiu       $a0, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128F70u;
    if (runtime->hasFunction(0x128F70u)) {
        auto targetFn = runtime->lookupFunction(0x128F70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x195DA8u; }
        if (ctx->pc != 0x195DA8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcpy_0x128f70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x195DA8u; }
        if (ctx->pc != 0x195DA8u) { return; }
    }
    ctx->pc = 0x195DA8u;
label_195da8:
    // 0x195da8: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x195da8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x195dac: 0x1222000f  beq         $s1, $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x195DACu;
    {
        const bool branch_taken_0x195dac = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        ctx->pc = 0x195DB0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x195DACu;
            // 0x195db0: 0x3c0401e7  lui         $a0, 0x1E7 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)487 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x195dac) {
            ctx->pc = 0x195DECu;
            goto label_195dec;
        }
    }
    ctx->pc = 0x195DB4u;
    // 0x195db4: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x195db4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x195db8: 0x12220006  beq         $s1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x195DB8u;
    {
        const bool branch_taken_0x195db8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        ctx->pc = 0x195DBCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x195DB8u;
            // 0x195dbc: 0x3c0401e7  lui         $a0, 0x1E7 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)487 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x195db8) {
            ctx->pc = 0x195DD4u;
            goto label_195dd4;
        }
    }
    ctx->pc = 0x195DC0u;
    // 0x195dc0: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x195dc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x195dc4: 0x12220003  beq         $s1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x195DC4u;
    {
        const bool branch_taken_0x195dc4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        if (branch_taken_0x195dc4) {
            ctx->pc = 0x195DD4u;
            goto label_195dd4;
        }
    }
    ctx->pc = 0x195DCCu;
    // 0x195dcc: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x195DCCu;
    {
        const bool branch_taken_0x195dcc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x195DD0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x195DCCu;
            // 0x195dd0: 0x3c0401e7  lui         $a0, 0x1E7 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)487 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x195dcc) {
            ctx->pc = 0x195E04u;
            goto label_195e04;
        }
    }
    ctx->pc = 0x195DD4u;
label_195dd4:
    // 0x195dd4: 0x3c050036  lui         $a1, 0x36
    ctx->pc = 0x195dd4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)54 << 16));
    // 0x195dd8: 0x24844190  addiu       $a0, $a0, 0x4190
    ctx->pc = 0x195dd8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16784));
    // 0x195ddc: 0xc04a3dc  jal         func_128F70
    ctx->pc = 0x195DDCu;
    SET_GPR_U32(ctx, 31, 0x195DE4u);
    ctx->pc = 0x195DE0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x195DDCu;
            // 0x195de0: 0x24a55470  addiu       $a1, $a1, 0x5470 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 21616));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128F70u;
    if (runtime->hasFunction(0x128F70u)) {
        auto targetFn = runtime->lookupFunction(0x128F70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x195DE4u; }
        if (ctx->pc != 0x195DE4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcpy_0x128f70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x195DE4u; }
        if (ctx->pc != 0x195DE4u) { return; }
    }
    ctx->pc = 0x195DE4u;
label_195de4:
    // 0x195de4: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x195DE4u;
    {
        const bool branch_taken_0x195de4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x195de4) {
            ctx->pc = 0x195E14u;
            goto label_195e14;
        }
    }
    ctx->pc = 0x195DECu;
label_195dec:
    // 0x195dec: 0x3c050036  lui         $a1, 0x36
    ctx->pc = 0x195decu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)54 << 16));
    // 0x195df0: 0x24844190  addiu       $a0, $a0, 0x4190
    ctx->pc = 0x195df0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16784));
    // 0x195df4: 0xc04a3dc  jal         func_128F70
    ctx->pc = 0x195DF4u;
    SET_GPR_U32(ctx, 31, 0x195DFCu);
    ctx->pc = 0x195DF8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x195DF4u;
            // 0x195df8: 0x24a55480  addiu       $a1, $a1, 0x5480 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 21632));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128F70u;
    if (runtime->hasFunction(0x128F70u)) {
        auto targetFn = runtime->lookupFunction(0x128F70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x195DFCu; }
        if (ctx->pc != 0x195DFCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcpy_0x128f70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x195DFCu; }
        if (ctx->pc != 0x195DFCu) { return; }
    }
    ctx->pc = 0x195DFCu;
label_195dfc:
    // 0x195dfc: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x195DFCu;
    {
        const bool branch_taken_0x195dfc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x195dfc) {
            ctx->pc = 0x195E14u;
            goto label_195e14;
        }
    }
    ctx->pc = 0x195E04u;
label_195e04:
    // 0x195e04: 0x3c050036  lui         $a1, 0x36
    ctx->pc = 0x195e04u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)54 << 16));
    // 0x195e08: 0x24844190  addiu       $a0, $a0, 0x4190
    ctx->pc = 0x195e08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16784));
    // 0x195e0c: 0xc04a3dc  jal         func_128F70
    ctx->pc = 0x195E0Cu;
    SET_GPR_U32(ctx, 31, 0x195E14u);
    ctx->pc = 0x195E10u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x195E0Cu;
            // 0x195e10: 0x24a55490  addiu       $a1, $a1, 0x5490 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 21648));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128F70u;
    if (runtime->hasFunction(0x128F70u)) {
        auto targetFn = runtime->lookupFunction(0x128F70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x195E14u; }
        if (ctx->pc != 0x195E14u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcpy_0x128f70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x195E14u; }
        if (ctx->pc != 0x195E14u) { return; }
    }
    ctx->pc = 0x195E14u;
label_195e14:
    // 0x195e14: 0x3c0401e7  lui         $a0, 0x1E7
    ctx->pc = 0x195e14u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)487 << 16));
    // 0x195e18: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x195e18u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x195e1c: 0xc04a2da  jal         func_128B68
    ctx->pc = 0x195E1Cu;
    SET_GPR_U32(ctx, 31, 0x195E24u);
    ctx->pc = 0x195E20u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x195E1Cu;
            // 0x195e20: 0x24844190  addiu       $a0, $a0, 0x4190 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16784));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128B68u;
    if (runtime->hasFunction(0x128B68u)) {
        auto targetFn = runtime->lookupFunction(0x128B68u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x195E24u; }
        if (ctx->pc != 0x195E24u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcat_0x128b68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x195E24u; }
        if (ctx->pc != 0x195E24u) { return; }
    }
    ctx->pc = 0x195E24u;
label_195e24:
    // 0x195e24: 0x3c0401e7  lui         $a0, 0x1E7
    ctx->pc = 0x195e24u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)487 << 16));
    // 0x195e28: 0x3c050036  lui         $a1, 0x36
    ctx->pc = 0x195e28u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)54 << 16));
    // 0x195e2c: 0x24844190  addiu       $a0, $a0, 0x4190
    ctx->pc = 0x195e2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16784));
    // 0x195e30: 0xc04a2da  jal         func_128B68
    ctx->pc = 0x195E30u;
    SET_GPR_U32(ctx, 31, 0x195E38u);
    ctx->pc = 0x195E34u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x195E30u;
            // 0x195e34: 0x24a55468  addiu       $a1, $a1, 0x5468 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 21608));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128B68u;
    if (runtime->hasFunction(0x128B68u)) {
        auto targetFn = runtime->lookupFunction(0x128B68u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x195E38u; }
        if (ctx->pc != 0x195E38u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcat_0x128b68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x195E38u; }
        if (ctx->pc != 0x195E38u) { return; }
    }
    ctx->pc = 0x195E38u;
label_195e38:
    // 0x195e38: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x195e38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x195e3c: 0x1642000a  bne         $s2, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x195E3Cu;
    {
        const bool branch_taken_0x195e3c = (GPR_U64(ctx, 18) != GPR_U64(ctx, 2));
        ctx->pc = 0x195E40u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x195E3Cu;
            // 0x195e40: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x195e3c) {
            ctx->pc = 0x195E68u;
            goto label_195e68;
        }
    }
    ctx->pc = 0x195E44u;
    // 0x195e44: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x195e44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x195e48: 0x16220006  bne         $s1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x195E48u;
    {
        const bool branch_taken_0x195e48 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        ctx->pc = 0x195E4Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x195E48u;
            // 0x195e4c: 0x3c0401e7  lui         $a0, 0x1E7 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)487 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x195e48) {
            ctx->pc = 0x195E64u;
            goto label_195e64;
        }
    }
    ctx->pc = 0x195E50u;
    // 0x195e50: 0x3c050036  lui         $a1, 0x36
    ctx->pc = 0x195e50u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)54 << 16));
    // 0x195e54: 0x24844190  addiu       $a0, $a0, 0x4190
    ctx->pc = 0x195e54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16784));
    // 0x195e58: 0x24a554a0  addiu       $a1, $a1, 0x54A0
    ctx->pc = 0x195e58u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 21664));
    // 0x195e5c: 0xc04a234  jal         func_1288D0
    ctx->pc = 0x195E5Cu;
    SET_GPR_U32(ctx, 31, 0x195E64u);
    ctx->pc = 0x195E60u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x195E5Cu;
            // 0x195e60: 0x27a60040  addiu       $a2, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1288D0u;
    if (runtime->hasFunction(0x1288D0u)) {
        auto targetFn = runtime->lookupFunction(0x1288D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x195E64u; }
        if (ctx->pc != 0x195E64u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sprintf_0x1288d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x195E64u; }
        if (ctx->pc != 0x195E64u) { return; }
    }
    ctx->pc = 0x195E64u;
label_195e64:
    // 0x195e64: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x195e64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_195e68:
    // 0x195e68: 0x1642000d  bne         $s2, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x195E68u;
    {
        const bool branch_taken_0x195e68 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 2));
        if (branch_taken_0x195e68) {
            ctx->pc = 0x195EA0u;
            goto label_195ea0;
        }
    }
    ctx->pc = 0x195E70u;
    // 0x195e70: 0x92030000  lbu         $v1, 0x0($s0)
    ctx->pc = 0x195e70u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x195e74: 0x2402000d  addiu       $v0, $zero, 0xD
    ctx->pc = 0x195e74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x195e78: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x195E78u;
    {
        const bool branch_taken_0x195e78 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x195E7Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x195E78u;
            // 0x195e7c: 0x3c0401e7  lui         $a0, 0x1E7 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)487 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x195e78) {
            ctx->pc = 0x195E8Cu;
            goto label_195e8c;
        }
    }
    ctx->pc = 0x195E80u;
    // 0x195e80: 0x2402000e  addiu       $v0, $zero, 0xE
    ctx->pc = 0x195e80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x195e84: 0x14620006  bne         $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x195E84u;
    {
        const bool branch_taken_0x195e84 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x195e84) {
            ctx->pc = 0x195EA0u;
            goto label_195ea0;
        }
    }
    ctx->pc = 0x195E8Cu;
label_195e8c:
    // 0x195e8c: 0x3c050036  lui         $a1, 0x36
    ctx->pc = 0x195e8cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)54 << 16));
    // 0x195e90: 0x24844190  addiu       $a0, $a0, 0x4190
    ctx->pc = 0x195e90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16784));
    // 0x195e94: 0x24a554b8  addiu       $a1, $a1, 0x54B8
    ctx->pc = 0x195e94u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 21688));
    // 0x195e98: 0xc04a234  jal         func_1288D0
    ctx->pc = 0x195E98u;
    SET_GPR_U32(ctx, 31, 0x195EA0u);
    ctx->pc = 0x195E9Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x195E98u;
            // 0x195e9c: 0x27a60040  addiu       $a2, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1288D0u;
    if (runtime->hasFunction(0x1288D0u)) {
        auto targetFn = runtime->lookupFunction(0x1288D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x195EA0u; }
        if (ctx->pc != 0x195EA0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sprintf_0x1288d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x195EA0u; }
        if (ctx->pc != 0x195EA0u) { return; }
    }
    ctx->pc = 0x195EA0u;
label_195ea0:
    // 0x195ea0: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x195ea0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x195ea4: 0x3c0201e7  lui         $v0, 0x1E7
    ctx->pc = 0x195ea4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)487 << 16));
    // 0x195ea8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x195ea8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x195eac: 0x24424190  addiu       $v0, $v0, 0x4190
    ctx->pc = 0x195eacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16784));
    // 0x195eb0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x195eb0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x195eb4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x195eb4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x195eb8: 0x3e00008  jr          $ra
    ctx->pc = 0x195EB8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x195EBCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x195EB8u;
            // 0x195ebc: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x195EC0u;
}
