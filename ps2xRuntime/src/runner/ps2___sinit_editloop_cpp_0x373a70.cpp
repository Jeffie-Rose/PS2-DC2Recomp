#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: __sinit_editloop.cpp
// Address: 0x373a70 - 0x373c90
void ps2___sinit_editloop_cpp_0x373a70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2___sinit_editloop_cpp_0x373a70");
#endif

    switch (ctx->pc) {
        case 0x373a70u: goto label_373a70;
        case 0x373a74u: goto label_373a74;
        case 0x373a78u: goto label_373a78;
        case 0x373a7cu: goto label_373a7c;
        case 0x373a80u: goto label_373a80;
        case 0x373a84u: goto label_373a84;
        case 0x373a88u: goto label_373a88;
        case 0x373a8cu: goto label_373a8c;
        case 0x373a90u: goto label_373a90;
        case 0x373a94u: goto label_373a94;
        case 0x373a98u: goto label_373a98;
        case 0x373a9cu: goto label_373a9c;
        case 0x373aa0u: goto label_373aa0;
        case 0x373aa4u: goto label_373aa4;
        case 0x373aa8u: goto label_373aa8;
        case 0x373aacu: goto label_373aac;
        case 0x373ab0u: goto label_373ab0;
        case 0x373ab4u: goto label_373ab4;
        case 0x373ab8u: goto label_373ab8;
        case 0x373abcu: goto label_373abc;
        case 0x373ac0u: goto label_373ac0;
        case 0x373ac4u: goto label_373ac4;
        case 0x373ac8u: goto label_373ac8;
        case 0x373accu: goto label_373acc;
        case 0x373ad0u: goto label_373ad0;
        case 0x373ad4u: goto label_373ad4;
        case 0x373ad8u: goto label_373ad8;
        case 0x373adcu: goto label_373adc;
        case 0x373ae0u: goto label_373ae0;
        case 0x373ae4u: goto label_373ae4;
        case 0x373ae8u: goto label_373ae8;
        case 0x373aecu: goto label_373aec;
        case 0x373af0u: goto label_373af0;
        case 0x373af4u: goto label_373af4;
        case 0x373af8u: goto label_373af8;
        case 0x373afcu: goto label_373afc;
        case 0x373b00u: goto label_373b00;
        case 0x373b04u: goto label_373b04;
        case 0x373b08u: goto label_373b08;
        case 0x373b0cu: goto label_373b0c;
        case 0x373b10u: goto label_373b10;
        case 0x373b14u: goto label_373b14;
        case 0x373b18u: goto label_373b18;
        case 0x373b1cu: goto label_373b1c;
        case 0x373b20u: goto label_373b20;
        case 0x373b24u: goto label_373b24;
        case 0x373b28u: goto label_373b28;
        case 0x373b2cu: goto label_373b2c;
        case 0x373b30u: goto label_373b30;
        case 0x373b34u: goto label_373b34;
        case 0x373b38u: goto label_373b38;
        case 0x373b3cu: goto label_373b3c;
        case 0x373b40u: goto label_373b40;
        case 0x373b44u: goto label_373b44;
        case 0x373b48u: goto label_373b48;
        case 0x373b4cu: goto label_373b4c;
        case 0x373b50u: goto label_373b50;
        case 0x373b54u: goto label_373b54;
        case 0x373b58u: goto label_373b58;
        case 0x373b5cu: goto label_373b5c;
        case 0x373b60u: goto label_373b60;
        case 0x373b64u: goto label_373b64;
        case 0x373b68u: goto label_373b68;
        case 0x373b6cu: goto label_373b6c;
        case 0x373b70u: goto label_373b70;
        case 0x373b74u: goto label_373b74;
        case 0x373b78u: goto label_373b78;
        case 0x373b7cu: goto label_373b7c;
        case 0x373b80u: goto label_373b80;
        case 0x373b84u: goto label_373b84;
        case 0x373b88u: goto label_373b88;
        case 0x373b8cu: goto label_373b8c;
        case 0x373b90u: goto label_373b90;
        case 0x373b94u: goto label_373b94;
        case 0x373b98u: goto label_373b98;
        case 0x373b9cu: goto label_373b9c;
        case 0x373ba0u: goto label_373ba0;
        case 0x373ba4u: goto label_373ba4;
        case 0x373ba8u: goto label_373ba8;
        case 0x373bacu: goto label_373bac;
        case 0x373bb0u: goto label_373bb0;
        case 0x373bb4u: goto label_373bb4;
        case 0x373bb8u: goto label_373bb8;
        case 0x373bbcu: goto label_373bbc;
        case 0x373bc0u: goto label_373bc0;
        case 0x373bc4u: goto label_373bc4;
        case 0x373bc8u: goto label_373bc8;
        case 0x373bccu: goto label_373bcc;
        case 0x373bd0u: goto label_373bd0;
        case 0x373bd4u: goto label_373bd4;
        case 0x373bd8u: goto label_373bd8;
        case 0x373bdcu: goto label_373bdc;
        case 0x373be0u: goto label_373be0;
        case 0x373be4u: goto label_373be4;
        case 0x373be8u: goto label_373be8;
        case 0x373becu: goto label_373bec;
        case 0x373bf0u: goto label_373bf0;
        case 0x373bf4u: goto label_373bf4;
        case 0x373bf8u: goto label_373bf8;
        case 0x373bfcu: goto label_373bfc;
        case 0x373c00u: goto label_373c00;
        case 0x373c04u: goto label_373c04;
        case 0x373c08u: goto label_373c08;
        case 0x373c0cu: goto label_373c0c;
        case 0x373c10u: goto label_373c10;
        case 0x373c14u: goto label_373c14;
        case 0x373c18u: goto label_373c18;
        case 0x373c1cu: goto label_373c1c;
        case 0x373c20u: goto label_373c20;
        case 0x373c24u: goto label_373c24;
        case 0x373c28u: goto label_373c28;
        case 0x373c2cu: goto label_373c2c;
        case 0x373c30u: goto label_373c30;
        case 0x373c34u: goto label_373c34;
        case 0x373c38u: goto label_373c38;
        case 0x373c3cu: goto label_373c3c;
        case 0x373c40u: goto label_373c40;
        case 0x373c44u: goto label_373c44;
        case 0x373c48u: goto label_373c48;
        case 0x373c4cu: goto label_373c4c;
        case 0x373c50u: goto label_373c50;
        case 0x373c54u: goto label_373c54;
        case 0x373c58u: goto label_373c58;
        case 0x373c5cu: goto label_373c5c;
        case 0x373c60u: goto label_373c60;
        case 0x373c64u: goto label_373c64;
        case 0x373c68u: goto label_373c68;
        case 0x373c6cu: goto label_373c6c;
        case 0x373c70u: goto label_373c70;
        case 0x373c74u: goto label_373c74;
        case 0x373c78u: goto label_373c78;
        case 0x373c7cu: goto label_373c7c;
        case 0x373c80u: goto label_373c80;
        case 0x373c84u: goto label_373c84;
        case 0x373c88u: goto label_373c88;
        case 0x373c8cu: goto label_373c8c;
        default: break;
    }

    ctx->pc = 0x373a70u;

label_373a70:
    // 0x373a70: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x373a70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_373a74:
    // 0x373a74: 0x3c0401ea  lui         $a0, 0x1EA
    ctx->pc = 0x373a74u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)490 << 16));
label_373a78:
    // 0x373a78: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x373a78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_373a7c:
    // 0x373a7c: 0xc068844  jal         func_1A2110
label_373a80:
    if (ctx->pc == 0x373A80u) {
        ctx->pc = 0x373A80u;
            // 0x373a80: 0x2484b440  addiu       $a0, $a0, -0x4BC0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294947904));
        ctx->pc = 0x373A84u;
        goto label_373a84;
    }
    ctx->pc = 0x373A7Cu;
    SET_GPR_U32(ctx, 31, 0x373A84u);
    ctx->pc = 0x373A80u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x373A7Cu;
            // 0x373a80: 0x2484b440  addiu       $a0, $a0, -0x4BC0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294947904));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A2110u;
    if (runtime->hasFunction(0x1A2110u)) {
        auto targetFn = runtime->lookupFunction(0x1A2110u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x373A84u; }
        if (ctx->pc != 0x373A84u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___ct__10CWaveTableFv_0x1a2110(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x373A84u; }
        if (ctx->pc != 0x373A84u) { return; }
    }
    ctx->pc = 0x373A84u;
label_373a84:
    // 0x373a84: 0x3c05001a  lui         $a1, 0x1A
    ctx->pc = 0x373a84u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)26 << 16));
label_373a88:
    // 0x373a88: 0x3c0601ea  lui         $a2, 0x1EA
    ctx->pc = 0x373a88u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)490 << 16));
label_373a8c:
    // 0x373a8c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x373a8cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_373a90:
    // 0x373a90: 0x24a521a0  addiu       $a1, $a1, 0x21A0
    ctx->pc = 0x373a90u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8608));
label_373a94:
    // 0x373a94: 0xc040268  jal         func_1009A0
label_373a98:
    if (ctx->pc == 0x373A98u) {
        ctx->pc = 0x373A98u;
            // 0x373a98: 0x24c6b430  addiu       $a2, $a2, -0x4BD0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294947888));
        ctx->pc = 0x373A9Cu;
        goto label_373a9c;
    }
    ctx->pc = 0x373A94u;
    SET_GPR_U32(ctx, 31, 0x373A9Cu);
    ctx->pc = 0x373A98u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x373A94u;
            // 0x373a98: 0x24c6b430  addiu       $a2, $a2, -0x4BD0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294947888));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1009A0u;
    if (runtime->hasFunction(0x1009A0u)) {
        auto targetFn = runtime->lookupFunction(0x1009A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x373A9Cu; }
        if (ctx->pc != 0x373A9Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___register_global_object_0x1009a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x373A9Cu; }
        if (ctx->pc != 0x373A9Cu) { return; }
    }
    ctx->pc = 0x373A9Cu;
label_373a9c:
    // 0x373a9c: 0x3c0401ea  lui         $a0, 0x1EA
    ctx->pc = 0x373a9cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)490 << 16));
label_373aa0:
    // 0x373aa0: 0xc054aa4  jal         func_152A90
label_373aa4:
    if (ctx->pc == 0x373AA4u) {
        ctx->pc = 0x373AA4u;
            // 0x373aa4: 0x2484c660  addiu       $a0, $a0, -0x39A0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294952544));
        ctx->pc = 0x373AA8u;
        goto label_373aa8;
    }
    ctx->pc = 0x373AA0u;
    SET_GPR_U32(ctx, 31, 0x373AA8u);
    ctx->pc = 0x373AA4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x373AA0u;
            // 0x373aa4: 0x2484c660  addiu       $a0, $a0, -0x39A0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294952544));
        ctx->in_delay_slot = false;
    ctx->pc = 0x152A90u;
    if (runtime->hasFunction(0x152A90u)) {
        auto targetFn = runtime->lookupFunction(0x152A90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x373AA8u; }
        if (ctx->pc != 0x373AA8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___ct__6ClsMesFv_0x152a90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x373AA8u; }
        if (ctx->pc != 0x373AA8u) { return; }
    }
    ctx->pc = 0x373AA8u;
label_373aa8:
    // 0x373aa8: 0x3c0401ea  lui         $a0, 0x1EA
    ctx->pc = 0x373aa8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)490 << 16));
label_373aac:
    // 0x373aac: 0xc04e640  jal         func_139900
label_373ab0:
    if (ctx->pc == 0x373AB0u) {
        ctx->pc = 0x373AB0u;
            // 0x373ab0: 0x2484e840  addiu       $a0, $a0, -0x17C0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961216));
        ctx->pc = 0x373AB4u;
        goto label_373ab4;
    }
    ctx->pc = 0x373AACu;
    SET_GPR_U32(ctx, 31, 0x373AB4u);
    ctx->pc = 0x373AB0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x373AACu;
            // 0x373ab0: 0x2484e840  addiu       $a0, $a0, -0x17C0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961216));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139900u;
    if (runtime->hasFunction(0x139900u)) {
        auto targetFn = runtime->lookupFunction(0x139900u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x373AB4u; }
        if (ctx->pc != 0x373AB4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Init__9mgCMemoryFv_0x139900(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x373AB4u; }
        if (ctx->pc != 0x373AB4u) { return; }
    }
    ctx->pc = 0x373AB4u;
label_373ab4:
    // 0x373ab4: 0x3c0401ea  lui         $a0, 0x1EA
    ctx->pc = 0x373ab4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)490 << 16));
label_373ab8:
    // 0x373ab8: 0xc04e640  jal         func_139900
label_373abc:
    if (ctx->pc == 0x373ABCu) {
        ctx->pc = 0x373ABCu;
            // 0x373abc: 0x2484e870  addiu       $a0, $a0, -0x1790 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961264));
        ctx->pc = 0x373AC0u;
        goto label_373ac0;
    }
    ctx->pc = 0x373AB8u;
    SET_GPR_U32(ctx, 31, 0x373AC0u);
    ctx->pc = 0x373ABCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x373AB8u;
            // 0x373abc: 0x2484e870  addiu       $a0, $a0, -0x1790 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961264));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139900u;
    if (runtime->hasFunction(0x139900u)) {
        auto targetFn = runtime->lookupFunction(0x139900u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x373AC0u; }
        if (ctx->pc != 0x373AC0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Init__9mgCMemoryFv_0x139900(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x373AC0u; }
        if (ctx->pc != 0x373AC0u) { return; }
    }
    ctx->pc = 0x373AC0u;
label_373ac0:
    // 0x373ac0: 0x3c0401ea  lui         $a0, 0x1EA
    ctx->pc = 0x373ac0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)490 << 16));
label_373ac4:
    // 0x373ac4: 0x3c050014  lui         $a1, 0x14
    ctx->pc = 0x373ac4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)20 << 16));
label_373ac8:
    // 0x373ac8: 0x2484e8a0  addiu       $a0, $a0, -0x1760
    ctx->pc = 0x373ac8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961312));
label_373acc:
    // 0x373acc: 0x24a56260  addiu       $a1, $a1, 0x6260
    ctx->pc = 0x373accu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 25184));
label_373ad0:
    // 0x373ad0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x373ad0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_373ad4:
    // 0x373ad4: 0x24070030  addiu       $a3, $zero, 0x30
    ctx->pc = 0x373ad4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
label_373ad8:
    // 0x373ad8: 0xc040070  jal         func_1001C0
label_373adc:
    if (ctx->pc == 0x373ADCu) {
        ctx->pc = 0x373ADCu;
            // 0x373adc: 0x24080002  addiu       $t0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->pc = 0x373AE0u;
        goto label_373ae0;
    }
    ctx->pc = 0x373AD8u;
    SET_GPR_U32(ctx, 31, 0x373AE0u);
    ctx->pc = 0x373ADCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x373AD8u;
            // 0x373adc: 0x24080002  addiu       $t0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1001C0u;
    if (runtime->hasFunction(0x1001C0u)) {
        auto targetFn = runtime->lookupFunction(0x1001C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x373AE0u; }
        if (ctx->pc != 0x373AE0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___construct_array_0x1001c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x373AE0u; }
        if (ctx->pc != 0x373AE0u) { return; }
    }
    ctx->pc = 0x373AE0u;
label_373ae0:
    // 0x373ae0: 0x3c0401ea  lui         $a0, 0x1EA
    ctx->pc = 0x373ae0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)490 << 16));
label_373ae4:
    // 0x373ae4: 0x3c050014  lui         $a1, 0x14
    ctx->pc = 0x373ae4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)20 << 16));
label_373ae8:
    // 0x373ae8: 0x2484e900  addiu       $a0, $a0, -0x1700
    ctx->pc = 0x373ae8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961408));
label_373aec:
    // 0x373aec: 0x24a56260  addiu       $a1, $a1, 0x6260
    ctx->pc = 0x373aecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 25184));
label_373af0:
    // 0x373af0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x373af0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_373af4:
    // 0x373af4: 0x24070030  addiu       $a3, $zero, 0x30
    ctx->pc = 0x373af4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
label_373af8:
    // 0x373af8: 0xc040070  jal         func_1001C0
label_373afc:
    if (ctx->pc == 0x373AFCu) {
        ctx->pc = 0x373AFCu;
            // 0x373afc: 0x24080002  addiu       $t0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->pc = 0x373B00u;
        goto label_373b00;
    }
    ctx->pc = 0x373AF8u;
    SET_GPR_U32(ctx, 31, 0x373B00u);
    ctx->pc = 0x373AFCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x373AF8u;
            // 0x373afc: 0x24080002  addiu       $t0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1001C0u;
    if (runtime->hasFunction(0x1001C0u)) {
        auto targetFn = runtime->lookupFunction(0x1001C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x373B00u; }
        if (ctx->pc != 0x373B00u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___construct_array_0x1001c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x373B00u; }
        if (ctx->pc != 0x373B00u) { return; }
    }
    ctx->pc = 0x373B00u;
label_373b00:
    // 0x373b00: 0x3c0401ea  lui         $a0, 0x1EA
    ctx->pc = 0x373b00u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)490 << 16));
label_373b04:
    // 0x373b04: 0xc04e640  jal         func_139900
label_373b08:
    if (ctx->pc == 0x373B08u) {
        ctx->pc = 0x373B08u;
            // 0x373b08: 0x2484e960  addiu       $a0, $a0, -0x16A0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961504));
        ctx->pc = 0x373B0Cu;
        goto label_373b0c;
    }
    ctx->pc = 0x373B04u;
    SET_GPR_U32(ctx, 31, 0x373B0Cu);
    ctx->pc = 0x373B08u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x373B04u;
            // 0x373b08: 0x2484e960  addiu       $a0, $a0, -0x16A0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961504));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139900u;
    if (runtime->hasFunction(0x139900u)) {
        auto targetFn = runtime->lookupFunction(0x139900u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x373B0Cu; }
        if (ctx->pc != 0x373B0Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Init__9mgCMemoryFv_0x139900(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x373B0Cu; }
        if (ctx->pc != 0x373B0Cu) { return; }
    }
    ctx->pc = 0x373B0Cu;
label_373b0c:
    // 0x373b0c: 0x3c0401ea  lui         $a0, 0x1EA
    ctx->pc = 0x373b0cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)490 << 16));
label_373b10:
    // 0x373b10: 0xc04e640  jal         func_139900
label_373b14:
    if (ctx->pc == 0x373B14u) {
        ctx->pc = 0x373B14u;
            // 0x373b14: 0x2484e990  addiu       $a0, $a0, -0x1670 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961552));
        ctx->pc = 0x373B18u;
        goto label_373b18;
    }
    ctx->pc = 0x373B10u;
    SET_GPR_U32(ctx, 31, 0x373B18u);
    ctx->pc = 0x373B14u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x373B10u;
            // 0x373b14: 0x2484e990  addiu       $a0, $a0, -0x1670 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961552));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139900u;
    if (runtime->hasFunction(0x139900u)) {
        auto targetFn = runtime->lookupFunction(0x139900u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x373B18u; }
        if (ctx->pc != 0x373B18u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Init__9mgCMemoryFv_0x139900(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x373B18u; }
        if (ctx->pc != 0x373B18u) { return; }
    }
    ctx->pc = 0x373B18u;
label_373b18:
    // 0x373b18: 0x3c0401ea  lui         $a0, 0x1EA
    ctx->pc = 0x373b18u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)490 << 16));
label_373b1c:
    // 0x373b1c: 0xc04e640  jal         func_139900
label_373b20:
    if (ctx->pc == 0x373B20u) {
        ctx->pc = 0x373B20u;
            // 0x373b20: 0x2484e9c0  addiu       $a0, $a0, -0x1640 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961600));
        ctx->pc = 0x373B24u;
        goto label_373b24;
    }
    ctx->pc = 0x373B1Cu;
    SET_GPR_U32(ctx, 31, 0x373B24u);
    ctx->pc = 0x373B20u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x373B1Cu;
            // 0x373b20: 0x2484e9c0  addiu       $a0, $a0, -0x1640 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961600));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139900u;
    if (runtime->hasFunction(0x139900u)) {
        auto targetFn = runtime->lookupFunction(0x139900u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x373B24u; }
        if (ctx->pc != 0x373B24u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Init__9mgCMemoryFv_0x139900(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x373B24u; }
        if (ctx->pc != 0x373B24u) { return; }
    }
    ctx->pc = 0x373B24u;
label_373b24:
    // 0x373b24: 0x3c0401ea  lui         $a0, 0x1EA
    ctx->pc = 0x373b24u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)490 << 16));
label_373b28:
    // 0x373b28: 0xc04e640  jal         func_139900
label_373b2c:
    if (ctx->pc == 0x373B2Cu) {
        ctx->pc = 0x373B2Cu;
            // 0x373b2c: 0x2484e9f0  addiu       $a0, $a0, -0x1610 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961648));
        ctx->pc = 0x373B30u;
        goto label_373b30;
    }
    ctx->pc = 0x373B28u;
    SET_GPR_U32(ctx, 31, 0x373B30u);
    ctx->pc = 0x373B2Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x373B28u;
            // 0x373b2c: 0x2484e9f0  addiu       $a0, $a0, -0x1610 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961648));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139900u;
    if (runtime->hasFunction(0x139900u)) {
        auto targetFn = runtime->lookupFunction(0x139900u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x373B30u; }
        if (ctx->pc != 0x373B30u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Init__9mgCMemoryFv_0x139900(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x373B30u; }
        if (ctx->pc != 0x373B30u) { return; }
    }
    ctx->pc = 0x373B30u;
label_373b30:
    // 0x373b30: 0x3c0401ea  lui         $a0, 0x1EA
    ctx->pc = 0x373b30u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)490 << 16));
label_373b34:
    // 0x373b34: 0xc04e640  jal         func_139900
label_373b38:
    if (ctx->pc == 0x373B38u) {
        ctx->pc = 0x373B38u;
            // 0x373b38: 0x2484ea20  addiu       $a0, $a0, -0x15E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961696));
        ctx->pc = 0x373B3Cu;
        goto label_373b3c;
    }
    ctx->pc = 0x373B34u;
    SET_GPR_U32(ctx, 31, 0x373B3Cu);
    ctx->pc = 0x373B38u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x373B34u;
            // 0x373b38: 0x2484ea20  addiu       $a0, $a0, -0x15E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961696));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139900u;
    if (runtime->hasFunction(0x139900u)) {
        auto targetFn = runtime->lookupFunction(0x139900u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x373B3Cu; }
        if (ctx->pc != 0x373B3Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Init__9mgCMemoryFv_0x139900(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x373B3Cu; }
        if (ctx->pc != 0x373B3Cu) { return; }
    }
    ctx->pc = 0x373B3Cu;
label_373b3c:
    // 0x373b3c: 0x3c0401ea  lui         $a0, 0x1EA
    ctx->pc = 0x373b3cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)490 << 16));
label_373b40:
    // 0x373b40: 0xc04e640  jal         func_139900
label_373b44:
    if (ctx->pc == 0x373B44u) {
        ctx->pc = 0x373B44u;
            // 0x373b44: 0x2484ea50  addiu       $a0, $a0, -0x15B0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961744));
        ctx->pc = 0x373B48u;
        goto label_373b48;
    }
    ctx->pc = 0x373B40u;
    SET_GPR_U32(ctx, 31, 0x373B48u);
    ctx->pc = 0x373B44u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x373B40u;
            // 0x373b44: 0x2484ea50  addiu       $a0, $a0, -0x15B0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961744));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139900u;
    if (runtime->hasFunction(0x139900u)) {
        auto targetFn = runtime->lookupFunction(0x139900u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x373B48u; }
        if (ctx->pc != 0x373B48u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Init__9mgCMemoryFv_0x139900(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x373B48u; }
        if (ctx->pc != 0x373B48u) { return; }
    }
    ctx->pc = 0x373B48u;
label_373b48:
    // 0x373b48: 0x3c0401ea  lui         $a0, 0x1EA
    ctx->pc = 0x373b48u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)490 << 16));
label_373b4c:
    // 0x373b4c: 0xc04e640  jal         func_139900
label_373b50:
    if (ctx->pc == 0x373B50u) {
        ctx->pc = 0x373B50u;
            // 0x373b50: 0x2484ea80  addiu       $a0, $a0, -0x1580 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961792));
        ctx->pc = 0x373B54u;
        goto label_373b54;
    }
    ctx->pc = 0x373B4Cu;
    SET_GPR_U32(ctx, 31, 0x373B54u);
    ctx->pc = 0x373B50u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x373B4Cu;
            // 0x373b50: 0x2484ea80  addiu       $a0, $a0, -0x1580 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961792));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139900u;
    if (runtime->hasFunction(0x139900u)) {
        auto targetFn = runtime->lookupFunction(0x139900u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x373B54u; }
        if (ctx->pc != 0x373B54u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Init__9mgCMemoryFv_0x139900(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x373B54u; }
        if (ctx->pc != 0x373B54u) { return; }
    }
    ctx->pc = 0x373B54u;
label_373b54:
    // 0x373b54: 0x3c0401ea  lui         $a0, 0x1EA
    ctx->pc = 0x373b54u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)490 << 16));
label_373b58:
    // 0x373b58: 0xc04e640  jal         func_139900
label_373b5c:
    if (ctx->pc == 0x373B5Cu) {
        ctx->pc = 0x373B5Cu;
            // 0x373b5c: 0x2484eab0  addiu       $a0, $a0, -0x1550 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961840));
        ctx->pc = 0x373B60u;
        goto label_373b60;
    }
    ctx->pc = 0x373B58u;
    SET_GPR_U32(ctx, 31, 0x373B60u);
    ctx->pc = 0x373B5Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x373B58u;
            // 0x373b5c: 0x2484eab0  addiu       $a0, $a0, -0x1550 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961840));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139900u;
    if (runtime->hasFunction(0x139900u)) {
        auto targetFn = runtime->lookupFunction(0x139900u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x373B60u; }
        if (ctx->pc != 0x373B60u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Init__9mgCMemoryFv_0x139900(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x373B60u; }
        if (ctx->pc != 0x373B60u) { return; }
    }
    ctx->pc = 0x373B60u;
label_373b60:
    // 0x373b60: 0x3c0401ea  lui         $a0, 0x1EA
    ctx->pc = 0x373b60u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)490 << 16));
label_373b64:
    // 0x373b64: 0xc04e640  jal         func_139900
label_373b68:
    if (ctx->pc == 0x373B68u) {
        ctx->pc = 0x373B68u;
            // 0x373b68: 0x2484eae0  addiu       $a0, $a0, -0x1520 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961888));
        ctx->pc = 0x373B6Cu;
        goto label_373b6c;
    }
    ctx->pc = 0x373B64u;
    SET_GPR_U32(ctx, 31, 0x373B6Cu);
    ctx->pc = 0x373B68u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x373B64u;
            // 0x373b68: 0x2484eae0  addiu       $a0, $a0, -0x1520 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961888));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139900u;
    if (runtime->hasFunction(0x139900u)) {
        auto targetFn = runtime->lookupFunction(0x139900u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x373B6Cu; }
        if (ctx->pc != 0x373B6Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Init__9mgCMemoryFv_0x139900(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x373B6Cu; }
        if (ctx->pc != 0x373B6Cu) { return; }
    }
    ctx->pc = 0x373B6Cu;
label_373b6c:
    // 0x373b6c: 0x3c0401ea  lui         $a0, 0x1EA
    ctx->pc = 0x373b6cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)490 << 16));
label_373b70:
    // 0x373b70: 0xc04e640  jal         func_139900
label_373b74:
    if (ctx->pc == 0x373B74u) {
        ctx->pc = 0x373B74u;
            // 0x373b74: 0x2484eb10  addiu       $a0, $a0, -0x14F0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961936));
        ctx->pc = 0x373B78u;
        goto label_373b78;
    }
    ctx->pc = 0x373B70u;
    SET_GPR_U32(ctx, 31, 0x373B78u);
    ctx->pc = 0x373B74u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x373B70u;
            // 0x373b74: 0x2484eb10  addiu       $a0, $a0, -0x14F0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961936));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139900u;
    if (runtime->hasFunction(0x139900u)) {
        auto targetFn = runtime->lookupFunction(0x139900u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x373B78u; }
        if (ctx->pc != 0x373B78u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Init__9mgCMemoryFv_0x139900(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x373B78u; }
        if (ctx->pc != 0x373B78u) { return; }
    }
    ctx->pc = 0x373B78u;
label_373b78:
    // 0x373b78: 0x3c0401ea  lui         $a0, 0x1EA
    ctx->pc = 0x373b78u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)490 << 16));
label_373b7c:
    // 0x373b7c: 0x3c050014  lui         $a1, 0x14
    ctx->pc = 0x373b7cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)20 << 16));
label_373b80:
    // 0x373b80: 0x2484eb40  addiu       $a0, $a0, -0x14C0
    ctx->pc = 0x373b80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961984));
label_373b84:
    // 0x373b84: 0x24a56260  addiu       $a1, $a1, 0x6260
    ctx->pc = 0x373b84u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 25184));
label_373b88:
    // 0x373b88: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x373b88u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_373b8c:
    // 0x373b8c: 0x24070030  addiu       $a3, $zero, 0x30
    ctx->pc = 0x373b8cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
label_373b90:
    // 0x373b90: 0xc040070  jal         func_1001C0
label_373b94:
    if (ctx->pc == 0x373B94u) {
        ctx->pc = 0x373B94u;
            // 0x373b94: 0x24080004  addiu       $t0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->pc = 0x373B98u;
        goto label_373b98;
    }
    ctx->pc = 0x373B90u;
    SET_GPR_U32(ctx, 31, 0x373B98u);
    ctx->pc = 0x373B94u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x373B90u;
            // 0x373b94: 0x24080004  addiu       $t0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1001C0u;
    if (runtime->hasFunction(0x1001C0u)) {
        auto targetFn = runtime->lookupFunction(0x1001C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x373B98u; }
        if (ctx->pc != 0x373B98u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___construct_array_0x1001c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x373B98u; }
        if (ctx->pc != 0x373B98u) { return; }
    }
    ctx->pc = 0x373B98u;
label_373b98:
    // 0x373b98: 0x3c0401ea  lui         $a0, 0x1EA
    ctx->pc = 0x373b98u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)490 << 16));
label_373b9c:
    // 0x373b9c: 0x3c050014  lui         $a1, 0x14
    ctx->pc = 0x373b9cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)20 << 16));
label_373ba0:
    // 0x373ba0: 0x2484ec00  addiu       $a0, $a0, -0x1400
    ctx->pc = 0x373ba0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962176));
label_373ba4:
    // 0x373ba4: 0x24a56260  addiu       $a1, $a1, 0x6260
    ctx->pc = 0x373ba4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 25184));
label_373ba8:
    // 0x373ba8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x373ba8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_373bac:
    // 0x373bac: 0x24070030  addiu       $a3, $zero, 0x30
    ctx->pc = 0x373bacu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
label_373bb0:
    // 0x373bb0: 0xc040070  jal         func_1001C0
label_373bb4:
    if (ctx->pc == 0x373BB4u) {
        ctx->pc = 0x373BB4u;
            // 0x373bb4: 0x24080008  addiu       $t0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->pc = 0x373BB8u;
        goto label_373bb8;
    }
    ctx->pc = 0x373BB0u;
    SET_GPR_U32(ctx, 31, 0x373BB8u);
    ctx->pc = 0x373BB4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x373BB0u;
            // 0x373bb4: 0x24080008  addiu       $t0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1001C0u;
    if (runtime->hasFunction(0x1001C0u)) {
        auto targetFn = runtime->lookupFunction(0x1001C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x373BB8u; }
        if (ctx->pc != 0x373BB8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___construct_array_0x1001c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x373BB8u; }
        if (ctx->pc != 0x373BB8u) { return; }
    }
    ctx->pc = 0x373BB8u;
label_373bb8:
    // 0x373bb8: 0x3c0401ea  lui         $a0, 0x1EA
    ctx->pc = 0x373bb8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)490 << 16));
label_373bbc:
    // 0x373bbc: 0xc04e640  jal         func_139900
label_373bc0:
    if (ctx->pc == 0x373BC0u) {
        ctx->pc = 0x373BC0u;
            // 0x373bc0: 0x2484ed80  addiu       $a0, $a0, -0x1280 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962560));
        ctx->pc = 0x373BC4u;
        goto label_373bc4;
    }
    ctx->pc = 0x373BBCu;
    SET_GPR_U32(ctx, 31, 0x373BC4u);
    ctx->pc = 0x373BC0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x373BBCu;
            // 0x373bc0: 0x2484ed80  addiu       $a0, $a0, -0x1280 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962560));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139900u;
    if (runtime->hasFunction(0x139900u)) {
        auto targetFn = runtime->lookupFunction(0x139900u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x373BC4u; }
        if (ctx->pc != 0x373BC4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Init__9mgCMemoryFv_0x139900(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x373BC4u; }
        if (ctx->pc != 0x373BC4u) { return; }
    }
    ctx->pc = 0x373BC4u;
label_373bc4:
    // 0x373bc4: 0x3c0401ea  lui         $a0, 0x1EA
    ctx->pc = 0x373bc4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)490 << 16));
label_373bc8:
    // 0x373bc8: 0xc04e640  jal         func_139900
label_373bcc:
    if (ctx->pc == 0x373BCCu) {
        ctx->pc = 0x373BCCu;
            // 0x373bcc: 0x2484edb0  addiu       $a0, $a0, -0x1250 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962608));
        ctx->pc = 0x373BD0u;
        goto label_373bd0;
    }
    ctx->pc = 0x373BC8u;
    SET_GPR_U32(ctx, 31, 0x373BD0u);
    ctx->pc = 0x373BCCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x373BC8u;
            // 0x373bcc: 0x2484edb0  addiu       $a0, $a0, -0x1250 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962608));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139900u;
    if (runtime->hasFunction(0x139900u)) {
        auto targetFn = runtime->lookupFunction(0x139900u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x373BD0u; }
        if (ctx->pc != 0x373BD0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Init__9mgCMemoryFv_0x139900(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x373BD0u; }
        if (ctx->pc != 0x373BD0u) { return; }
    }
    ctx->pc = 0x373BD0u;
label_373bd0:
    // 0x373bd0: 0x3c0401ea  lui         $a0, 0x1EA
    ctx->pc = 0x373bd0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)490 << 16));
label_373bd4:
    // 0x373bd4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x373bd4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_373bd8:
    // 0x373bd8: 0x2484ee00  addiu       $a0, $a0, -0x1200
    ctx->pc = 0x373bd8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962688));
label_373bdc:
    // 0x373bdc: 0xc049c86  jal         func_127218
label_373be0:
    if (ctx->pc == 0x373BE0u) {
        ctx->pc = 0x373BE0u;
            // 0x373be0: 0x240600d0  addiu       $a2, $zero, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 208));
        ctx->pc = 0x373BE4u;
        goto label_373be4;
    }
    ctx->pc = 0x373BDCu;
    SET_GPR_U32(ctx, 31, 0x373BE4u);
    ctx->pc = 0x373BE0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x373BDCu;
            // 0x373be0: 0x240600d0  addiu       $a2, $zero, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 208));
        ctx->in_delay_slot = false;
    ctx->pc = 0x127218u;
    if (runtime->hasFunction(0x127218u)) {
        auto targetFn = runtime->lookupFunction(0x127218u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x373BE4u; }
        if (ctx->pc != 0x373BE4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        memset_0x127218(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x373BE4u; }
        if (ctx->pc != 0x373BE4u) { return; }
    }
    ctx->pc = 0x373BE4u;
label_373be4:
    // 0x373be4: 0x3c0401ea  lui         $a0, 0x1EA
    ctx->pc = 0x373be4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)490 << 16));
label_373be8:
    // 0x373be8: 0xc0bbe6c  jal         func_2EF9B0
label_373bec:
    if (ctx->pc == 0x373BECu) {
        ctx->pc = 0x373BECu;
            // 0x373bec: 0x2484ede0  addiu       $a0, $a0, -0x1220 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962656));
        ctx->pc = 0x373BF0u;
        goto label_373bf0;
    }
    ctx->pc = 0x373BE8u;
    SET_GPR_U32(ctx, 31, 0x373BF0u);
    ctx->pc = 0x373BECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x373BE8u;
            // 0x373bec: 0x2484ede0  addiu       $a0, $a0, -0x1220 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962656));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2EF9B0u;
    if (runtime->hasFunction(0x2EF9B0u)) {
        auto targetFn = runtime->lookupFunction(0x2EF9B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x373BF0u; }
        if (ctx->pc != 0x373BF0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Reset__10CEditEventFv_0x2ef9b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x373BF0u; }
        if (ctx->pc != 0x373BF0u) { return; }
    }
    ctx->pc = 0x373BF0u;
label_373bf0:
    // 0x373bf0: 0x3c0101ea  lui         $at, 0x1EA
    ctx->pc = 0x373bf0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)490 << 16));
label_373bf4:
    // 0x373bf4: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x373bf4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
label_373bf8:
    // 0x373bf8: 0xac20ef58  sw          $zero, -0x10A8($at)
    ctx->pc = 0x373bf8u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294963032), GPR_U32(ctx, 0));
label_373bfc:
    // 0x373bfc: 0x3c0401ea  lui         $a0, 0x1EA
    ctx->pc = 0x373bfcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)490 << 16));
label_373c00:
    // 0x373c00: 0x24424f10  addiu       $v0, $v0, 0x4F10
    ctx->pc = 0x373c00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 20240));
label_373c04:
    // 0x373c04: 0x3c0101ea  lui         $at, 0x1EA
    ctx->pc = 0x373c04u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)490 << 16));
label_373c08:
    // 0x373c08: 0xac22ef8c  sw          $v0, -0x1074($at)
    ctx->pc = 0x373c08u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294963084), GPR_U32(ctx, 2));
label_373c0c:
    // 0x373c0c: 0x2484ef70  addiu       $a0, $a0, -0x1090
    ctx->pc = 0x373c0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294963056));
label_373c10:
    // 0x373c10: 0x3c0101ea  lui         $at, 0x1EA
    ctx->pc = 0x373c10u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)490 << 16));
label_373c14:
    // 0x373c14: 0xac20ef44  sw          $zero, -0x10BC($at)
    ctx->pc = 0x373c14u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294963012), GPR_U32(ctx, 0));
label_373c18:
    // 0x373c18: 0x3c0101ea  lui         $at, 0x1EA
    ctx->pc = 0x373c18u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)490 << 16));
label_373c1c:
    // 0x373c1c: 0xac20ef30  sw          $zero, -0x10D0($at)
    ctx->pc = 0x373c1cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294962992), GPR_U32(ctx, 0));
label_373c20:
    // 0x373c20: 0x3c0101ea  lui         $at, 0x1EA
    ctx->pc = 0x373c20u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)490 << 16));
label_373c24:
    // 0x373c24: 0xac20ef40  sw          $zero, -0x10C0($at)
    ctx->pc = 0x373c24u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294963008), GPR_U32(ctx, 0));
label_373c28:
    // 0x373c28: 0x3c0101ea  lui         $at, 0x1EA
    ctx->pc = 0x373c28u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)490 << 16));
label_373c2c:
    // 0x373c2c: 0xac20ef5c  sw          $zero, -0x10A4($at)
    ctx->pc = 0x373c2cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294963036), GPR_U32(ctx, 0));
label_373c30:
    // 0x373c30: 0x3c0101ea  lui         $at, 0x1EA
    ctx->pc = 0x373c30u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)490 << 16));
label_373c34:
    // 0x373c34: 0xac20ef48  sw          $zero, -0x10B8($at)
    ctx->pc = 0x373c34u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294963016), GPR_U32(ctx, 0));
label_373c38:
    // 0x373c38: 0x3c0101ea  lui         $at, 0x1EA
    ctx->pc = 0x373c38u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)490 << 16));
label_373c3c:
    // 0x373c3c: 0xac20ef4c  sw          $zero, -0x10B4($at)
    ctx->pc = 0x373c3cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294963020), GPR_U32(ctx, 0));
label_373c40:
    // 0x373c40: 0x8c99001c  lw          $t9, 0x1C($a0)
    ctx->pc = 0x373c40u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 28)));
label_373c44:
    // 0x373c44: 0x8f390030  lw          $t9, 0x30($t9)
    ctx->pc = 0x373c44u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 48)));
label_373c48:
    // 0x373c48: 0x320f809  jalr        $t9
label_373c4c:
    if (ctx->pc == 0x373C4Cu) {
        ctx->pc = 0x373C50u;
        goto label_373c50;
    }
    ctx->pc = 0x373C48u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x373C50u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x373C50u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x373C50u; }
            if (ctx->pc != 0x373C50u) { return; }
        }
        }
    }
    ctx->pc = 0x373C50u;
label_373c50:
    // 0x373c50: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x373c50u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
label_373c54:
    // 0x373c54: 0x3c0401ea  lui         $a0, 0x1EA
    ctx->pc = 0x373c54u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)490 << 16));
label_373c58:
    // 0x373c58: 0x24425190  addiu       $v0, $v0, 0x5190
    ctx->pc = 0x373c58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 20880));
label_373c5c:
    // 0x373c5c: 0x3c0101ea  lui         $at, 0x1EA
    ctx->pc = 0x373c5cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)490 << 16));
label_373c60:
    // 0x373c60: 0x2484ef70  addiu       $a0, $a0, -0x1090
    ctx->pc = 0x373c60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294963056));
label_373c64:
    // 0x373c64: 0xac22ef8c  sw          $v0, -0x1074($at)
    ctx->pc = 0x373c64u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294963084), GPR_U32(ctx, 2));
label_373c68:
    // 0x373c68: 0x8c99001c  lw          $t9, 0x1C($a0)
    ctx->pc = 0x373c68u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 28)));
label_373c6c:
    // 0x373c6c: 0x8f390030  lw          $t9, 0x30($t9)
    ctx->pc = 0x373c6cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 48)));
label_373c70:
    // 0x373c70: 0x320f809  jalr        $t9
label_373c74:
    if (ctx->pc == 0x373C74u) {
        ctx->pc = 0x373C78u;
        goto label_373c78;
    }
    ctx->pc = 0x373C70u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x373C78u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x373C78u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x373C78u; }
            if (ctx->pc != 0x373C78u) { return; }
        }
        }
    }
    ctx->pc = 0x373C78u;
label_373c78:
    // 0x373c78: 0x3c0401ea  lui         $a0, 0x1EA
    ctx->pc = 0x373c78u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)490 << 16));
label_373c7c:
    // 0x373c7c: 0xc04d924  jal         func_136490
label_373c80:
    if (ctx->pc == 0x373C80u) {
        ctx->pc = 0x373C80u;
            // 0x373c80: 0x2484efc0  addiu       $a0, $a0, -0x1040 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294963136));
        ctx->pc = 0x373C84u;
        goto label_373c84;
    }
    ctx->pc = 0x373C7Cu;
    SET_GPR_U32(ctx, 31, 0x373C84u);
    ctx->pc = 0x373C80u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x373C7Cu;
            // 0x373c80: 0x2484efc0  addiu       $a0, $a0, -0x1040 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294963136));
        ctx->in_delay_slot = false;
    ctx->pc = 0x136490u;
    if (runtime->hasFunction(0x136490u)) {
        auto targetFn = runtime->lookupFunction(0x136490u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x373C84u; }
        if (ctx->pc != 0x373C84u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___ct__8mgCFrameFv_0x136490(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x373C84u; }
        if (ctx->pc != 0x373C84u) { return; }
    }
    ctx->pc = 0x373C84u;
label_373c84:
    // 0x373c84: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x373c84u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_373c88:
    // 0x373c88: 0x3e00008  jr          $ra
label_373c8c:
    if (ctx->pc == 0x373C8Cu) {
        ctx->pc = 0x373C8Cu;
            // 0x373c8c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x373C90u;
        goto label_fallthrough_0x373c88;
    }
    ctx->pc = 0x373C88u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x373C8Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x373C88u;
            // 0x373c8c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x373c88:
    ctx->pc = 0x373C90u;
}
