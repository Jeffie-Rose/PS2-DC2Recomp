#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: CreateWaterFrame__FiiPfPfP9mgCMemory
// Address: 0x185d40 - 0x185ed8
void CreateWaterFrame__FiiPfPfP9mgCMemory_0x185d40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("CreateWaterFrame__FiiPfPfP9mgCMemory_0x185d40");
#endif

    switch (ctx->pc) {
        case 0x185d40u: goto label_185d40;
        case 0x185d44u: goto label_185d44;
        case 0x185d48u: goto label_185d48;
        case 0x185d4cu: goto label_185d4c;
        case 0x185d50u: goto label_185d50;
        case 0x185d54u: goto label_185d54;
        case 0x185d58u: goto label_185d58;
        case 0x185d5cu: goto label_185d5c;
        case 0x185d60u: goto label_185d60;
        case 0x185d64u: goto label_185d64;
        case 0x185d68u: goto label_185d68;
        case 0x185d6cu: goto label_185d6c;
        case 0x185d70u: goto label_185d70;
        case 0x185d74u: goto label_185d74;
        case 0x185d78u: goto label_185d78;
        case 0x185d7cu: goto label_185d7c;
        case 0x185d80u: goto label_185d80;
        case 0x185d84u: goto label_185d84;
        case 0x185d88u: goto label_185d88;
        case 0x185d8cu: goto label_185d8c;
        case 0x185d90u: goto label_185d90;
        case 0x185d94u: goto label_185d94;
        case 0x185d98u: goto label_185d98;
        case 0x185d9cu: goto label_185d9c;
        case 0x185da0u: goto label_185da0;
        case 0x185da4u: goto label_185da4;
        case 0x185da8u: goto label_185da8;
        case 0x185dacu: goto label_185dac;
        case 0x185db0u: goto label_185db0;
        case 0x185db4u: goto label_185db4;
        case 0x185db8u: goto label_185db8;
        case 0x185dbcu: goto label_185dbc;
        case 0x185dc0u: goto label_185dc0;
        case 0x185dc4u: goto label_185dc4;
        case 0x185dc8u: goto label_185dc8;
        case 0x185dccu: goto label_185dcc;
        case 0x185dd0u: goto label_185dd0;
        case 0x185dd4u: goto label_185dd4;
        case 0x185dd8u: goto label_185dd8;
        case 0x185ddcu: goto label_185ddc;
        case 0x185de0u: goto label_185de0;
        case 0x185de4u: goto label_185de4;
        case 0x185de8u: goto label_185de8;
        case 0x185decu: goto label_185dec;
        case 0x185df0u: goto label_185df0;
        case 0x185df4u: goto label_185df4;
        case 0x185df8u: goto label_185df8;
        case 0x185dfcu: goto label_185dfc;
        case 0x185e00u: goto label_185e00;
        case 0x185e04u: goto label_185e04;
        case 0x185e08u: goto label_185e08;
        case 0x185e0cu: goto label_185e0c;
        case 0x185e10u: goto label_185e10;
        case 0x185e14u: goto label_185e14;
        case 0x185e18u: goto label_185e18;
        case 0x185e1cu: goto label_185e1c;
        case 0x185e20u: goto label_185e20;
        case 0x185e24u: goto label_185e24;
        case 0x185e28u: goto label_185e28;
        case 0x185e2cu: goto label_185e2c;
        case 0x185e30u: goto label_185e30;
        case 0x185e34u: goto label_185e34;
        case 0x185e38u: goto label_185e38;
        case 0x185e3cu: goto label_185e3c;
        case 0x185e40u: goto label_185e40;
        case 0x185e44u: goto label_185e44;
        case 0x185e48u: goto label_185e48;
        case 0x185e4cu: goto label_185e4c;
        case 0x185e50u: goto label_185e50;
        case 0x185e54u: goto label_185e54;
        case 0x185e58u: goto label_185e58;
        case 0x185e5cu: goto label_185e5c;
        case 0x185e60u: goto label_185e60;
        case 0x185e64u: goto label_185e64;
        case 0x185e68u: goto label_185e68;
        case 0x185e6cu: goto label_185e6c;
        case 0x185e70u: goto label_185e70;
        case 0x185e74u: goto label_185e74;
        case 0x185e78u: goto label_185e78;
        case 0x185e7cu: goto label_185e7c;
        case 0x185e80u: goto label_185e80;
        case 0x185e84u: goto label_185e84;
        case 0x185e88u: goto label_185e88;
        case 0x185e8cu: goto label_185e8c;
        case 0x185e90u: goto label_185e90;
        case 0x185e94u: goto label_185e94;
        case 0x185e98u: goto label_185e98;
        case 0x185e9cu: goto label_185e9c;
        case 0x185ea0u: goto label_185ea0;
        case 0x185ea4u: goto label_185ea4;
        case 0x185ea8u: goto label_185ea8;
        case 0x185eacu: goto label_185eac;
        case 0x185eb0u: goto label_185eb0;
        case 0x185eb4u: goto label_185eb4;
        case 0x185eb8u: goto label_185eb8;
        case 0x185ebcu: goto label_185ebc;
        case 0x185ec0u: goto label_185ec0;
        case 0x185ec4u: goto label_185ec4;
        case 0x185ec8u: goto label_185ec8;
        case 0x185eccu: goto label_185ecc;
        case 0x185ed0u: goto label_185ed0;
        case 0x185ed4u: goto label_185ed4;
        default: break;
    }

    ctx->pc = 0x185d40u;

label_185d40:
    // 0x185d40: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x185d40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
label_185d44:
    // 0x185d44: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x185d44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
label_185d48:
    // 0x185d48: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x185d48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_185d4c:
    // 0x185d4c: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x185d4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_185d50:
    // 0x185d50: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x185d50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_185d54:
    // 0x185d54: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x185d54u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_185d58:
    // 0x185d58: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x185d58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_185d5c:
    // 0x185d5c: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x185d5cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_185d60:
    // 0x185d60: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x185d60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_185d64:
    // 0x185d64: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x185d64u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_185d68:
    // 0x185d68: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x185d68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_185d6c:
    // 0x185d6c: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x185d6cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_185d70:
    // 0x185d70: 0x100882d  daddu       $s1, $t0, $zero
    ctx->pc = 0x185d70u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_185d74:
    // 0x185d74: 0x24050014  addiu       $a1, $zero, 0x14
    ctx->pc = 0x185d74u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_185d78:
    // 0x185d78: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x185d78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_185d7c:
    // 0x185d7c: 0xc04e748  jal         func_139D20
label_185d80:
    if (ctx->pc == 0x185D80u) {
        ctx->pc = 0x185D80u;
            // 0x185d80: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->pc = 0x185D84u;
        goto label_185d84;
    }
    ctx->pc = 0x185D7Cu;
    SET_GPR_U32(ctx, 31, 0x185D84u);
    ctx->pc = 0x185D80u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x185D7Cu;
            // 0x185d80: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139D20u;
    if (runtime->hasFunction(0x139D20u)) {
        auto targetFn = runtime->lookupFunction(0x139D20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x185D84u; }
        if (ctx->pc != 0x185D84u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Alloc__9mgCMemoryFi_0x139d20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x185D84u; }
        if (ctx->pc != 0x185D84u) { return; }
    }
    ctx->pc = 0x185D84u;
label_185d84:
    // 0x185d84: 0x24040120  addiu       $a0, $zero, 0x120
    ctx->pc = 0x185d84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 288));
label_185d88:
    // 0x185d88: 0xc04e638  jal         func_1398E0
label_185d8c:
    if (ctx->pc == 0x185D8Cu) {
        ctx->pc = 0x185D8Cu;
            // 0x185d8c: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x185D90u;
        goto label_185d90;
    }
    ctx->pc = 0x185D88u;
    SET_GPR_U32(ctx, 31, 0x185D90u);
    ctx->pc = 0x185D8Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x185D88u;
            // 0x185d8c: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1398E0u;
    if (runtime->hasFunction(0x1398E0u)) {
        auto targetFn = runtime->lookupFunction(0x1398E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x185D90u; }
        if (ctx->pc != 0x185D90u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___nw__FUiP1_0x1398e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x185D90u; }
        if (ctx->pc != 0x185D90u) { return; }
    }
    ctx->pc = 0x185D90u;
label_185d90:
    // 0x185d90: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
label_185d94:
    if (ctx->pc == 0x185D94u) {
        ctx->pc = 0x185D94u;
            // 0x185d94: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x185D98u;
        goto label_185d98;
    }
    ctx->pc = 0x185D90u;
    {
        const bool branch_taken_0x185d90 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x185D94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x185D90u;
            // 0x185d94: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x185d90) {
            ctx->pc = 0x185DBCu;
            goto label_185dbc;
        }
    }
    ctx->pc = 0x185D98u;
label_185d98:
    // 0x185d98: 0xc04d924  jal         func_136490
label_185d9c:
    if (ctx->pc == 0x185D9Cu) {
        ctx->pc = 0x185D9Cu;
            // 0x185d9c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x185DA0u;
        goto label_185da0;
    }
    ctx->pc = 0x185D98u;
    SET_GPR_U32(ctx, 31, 0x185DA0u);
    ctx->pc = 0x185D9Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x185D98u;
            // 0x185d9c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x136490u;
    if (runtime->hasFunction(0x136490u)) {
        auto targetFn = runtime->lookupFunction(0x136490u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x185DA0u; }
        if (ctx->pc != 0x185DA0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___ct__8mgCFrameFv_0x136490(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x185DA0u; }
        if (ctx->pc != 0x185DA0u) { return; }
    }
    ctx->pc = 0x185DA0u;
label_185da0:
    // 0x185da0: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x185da0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
label_185da4:
    // 0x185da4: 0x24425930  addiu       $v0, $v0, 0x5930
    ctx->pc = 0x185da4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 22832));
label_185da8:
    // 0x185da8: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x185da8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_185dac:
    // 0x185dac: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x185dacu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_185db0:
    // 0x185db0: 0x8f39003c  lw          $t9, 0x3C($t9)
    ctx->pc = 0x185db0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 60)));
label_185db4:
    // 0x185db4: 0x320f809  jalr        $t9
label_185db8:
    if (ctx->pc == 0x185DB8u) {
        ctx->pc = 0x185DB8u;
            // 0x185db8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x185DBCu;
        goto label_185dbc;
    }
    ctx->pc = 0x185DB4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x185DBCu);
        ctx->pc = 0x185DB8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x185DB4u;
            // 0x185db8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x185DBCu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x185DBCu; }
            if (ctx->pc != 0x185DBCu) { return; }
        }
        }
    }
    ctx->pc = 0x185DBCu;
label_185dbc:
    // 0x185dbc: 0x16000003  bnez        $s0, . + 4 + (0x3 << 2)
label_185dc0:
    if (ctx->pc == 0x185DC0u) {
        ctx->pc = 0x185DC0u;
            // 0x185dc0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x185DC4u;
        goto label_185dc4;
    }
    ctx->pc = 0x185DBCu;
    {
        const bool branch_taken_0x185dbc = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x185DC0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x185DBCu;
            // 0x185dc0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x185dbc) {
            ctx->pc = 0x185DCCu;
            goto label_185dcc;
        }
    }
    ctx->pc = 0x185DC4u;
label_185dc4:
    // 0x185dc4: 0x1000003a  b           . + 4 + (0x3A << 2)
label_185dc8:
    if (ctx->pc == 0x185DC8u) {
        ctx->pc = 0x185DC8u;
            // 0x185dc8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x185DCCu;
        goto label_185dcc;
    }
    ctx->pc = 0x185DC4u;
    {
        const bool branch_taken_0x185dc4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x185DC8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x185DC4u;
            // 0x185dc8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x185dc4) {
            ctx->pc = 0x185EB0u;
            goto label_185eb0;
        }
    }
    ctx->pc = 0x185DCCu;
label_185dcc:
    // 0x185dcc: 0xc04e748  jal         func_139D20
label_185dd0:
    if (ctx->pc == 0x185DD0u) {
        ctx->pc = 0x185DD0u;
            // 0x185dd0: 0x2405000b  addiu       $a1, $zero, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
        ctx->pc = 0x185DD4u;
        goto label_185dd4;
    }
    ctx->pc = 0x185DCCu;
    SET_GPR_U32(ctx, 31, 0x185DD4u);
    ctx->pc = 0x185DD0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x185DCCu;
            // 0x185dd0: 0x2405000b  addiu       $a1, $zero, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139D20u;
    if (runtime->hasFunction(0x139D20u)) {
        auto targetFn = runtime->lookupFunction(0x139D20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x185DD4u; }
        if (ctx->pc != 0x185DD4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Alloc__9mgCMemoryFi_0x139d20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x185DD4u; }
        if (ctx->pc != 0x185DD4u) { return; }
    }
    ctx->pc = 0x185DD4u;
label_185dd4:
    // 0x185dd4: 0x24040090  addiu       $a0, $zero, 0x90
    ctx->pc = 0x185dd4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 144));
label_185dd8:
    // 0x185dd8: 0xc04e638  jal         func_1398E0
label_185ddc:
    if (ctx->pc == 0x185DDCu) {
        ctx->pc = 0x185DDCu;
            // 0x185ddc: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x185DE0u;
        goto label_185de0;
    }
    ctx->pc = 0x185DD8u;
    SET_GPR_U32(ctx, 31, 0x185DE0u);
    ctx->pc = 0x185DDCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x185DD8u;
            // 0x185ddc: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1398E0u;
    if (runtime->hasFunction(0x1398E0u)) {
        auto targetFn = runtime->lookupFunction(0x1398E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x185DE0u; }
        if (ctx->pc != 0x185DE0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___nw__FUiP1_0x1398e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x185DE0u; }
        if (ctx->pc != 0x185DE0u) { return; }
    }
    ctx->pc = 0x185DE0u;
label_185de0:
    // 0x185de0: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_185de4:
    if (ctx->pc == 0x185DE4u) {
        ctx->pc = 0x185DE4u;
            // 0x185de4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x185DE8u;
        goto label_185de8;
    }
    ctx->pc = 0x185DE0u;
    {
        const bool branch_taken_0x185de0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x185DE4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x185DE0u;
            // 0x185de4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x185de0) {
            ctx->pc = 0x185DF0u;
            goto label_185df0;
        }
    }
    ctx->pc = 0x185DE8u;
label_185de8:
    // 0x185de8: 0xc04d6d8  jal         func_135B60
label_185dec:
    if (ctx->pc == 0x185DECu) {
        ctx->pc = 0x185DF0u;
        goto label_185df0;
    }
    ctx->pc = 0x185DE8u;
    SET_GPR_U32(ctx, 31, 0x185DF0u);
    ctx->pc = 0x135B60u;
    if (runtime->hasFunction(0x135B60u)) {
        auto targetFn = runtime->lookupFunction(0x135B60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x185DF0u; }
        if (ctx->pc != 0x185DF0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___ct__12mgCFrameAttrFv_0x135b60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x185DF0u; }
        if (ctx->pc != 0x185DF0u) { return; }
    }
    ctx->pc = 0x185DF0u;
label_185df0:
    // 0x185df0: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_185df4:
    if (ctx->pc == 0x185DF4u) {
        ctx->pc = 0x185DF4u;
            // 0x185df4: 0xae0200f4  sw          $v0, 0xF4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 244), GPR_U32(ctx, 2));
        ctx->pc = 0x185DF8u;
        goto label_185df8;
    }
    ctx->pc = 0x185DF0u;
    {
        const bool branch_taken_0x185df0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x185DF4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x185DF0u;
            // 0x185df4: 0xae0200f4  sw          $v0, 0xF4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 244), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x185df0) {
            ctx->pc = 0x185E10u;
            goto label_185e10;
        }
    }
    ctx->pc = 0x185DF8u;
label_185df8:
    // 0x185df8: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x185df8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_185dfc:
    // 0x185dfc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x185dfcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_185e00:
    // 0x185e00: 0xac440008  sw          $a0, 0x8($v0)
    ctx->pc = 0x185e00u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 4));
label_185e04:
    // 0x185e04: 0xac43000c  sw          $v1, 0xC($v0)
    ctx->pc = 0x185e04u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 3));
label_185e08:
    // 0x185e08: 0xac440010  sw          $a0, 0x10($v0)
    ctx->pc = 0x185e08u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 16), GPR_U32(ctx, 4));
label_185e0c:
    // 0x185e0c: 0xac430004  sw          $v1, 0x4($v0)
    ctx->pc = 0x185e0cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 3));
label_185e10:
    // 0x185e10: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x185e10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_185e14:
    // 0x185e14: 0xc04e748  jal         func_139D20
label_185e18:
    if (ctx->pc == 0x185E18u) {
        ctx->pc = 0x185E18u;
            // 0x185e18: 0x2405000a  addiu       $a1, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->pc = 0x185E1Cu;
        goto label_185e1c;
    }
    ctx->pc = 0x185E14u;
    SET_GPR_U32(ctx, 31, 0x185E1Cu);
    ctx->pc = 0x185E18u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x185E14u;
            // 0x185e18: 0x2405000a  addiu       $a1, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139D20u;
    if (runtime->hasFunction(0x139D20u)) {
        auto targetFn = runtime->lookupFunction(0x139D20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x185E1Cu; }
        if (ctx->pc != 0x185E1Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Alloc__9mgCMemoryFi_0x139d20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x185E1Cu; }
        if (ctx->pc != 0x185E1Cu) { return; }
    }
    ctx->pc = 0x185E1Cu;
label_185e1c:
    // 0x185e1c: 0x24040080  addiu       $a0, $zero, 0x80
    ctx->pc = 0x185e1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_185e20:
    // 0x185e20: 0xc04e638  jal         func_1398E0
label_185e24:
    if (ctx->pc == 0x185E24u) {
        ctx->pc = 0x185E24u;
            // 0x185e24: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x185E28u;
        goto label_185e28;
    }
    ctx->pc = 0x185E20u;
    SET_GPR_U32(ctx, 31, 0x185E28u);
    ctx->pc = 0x185E24u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x185E20u;
            // 0x185e24: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1398E0u;
    if (runtime->hasFunction(0x1398E0u)) {
        auto targetFn = runtime->lookupFunction(0x1398E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x185E28u; }
        if (ctx->pc != 0x185E28u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___nw__FUiP1_0x1398e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x185E28u; }
        if (ctx->pc != 0x185E28u) { return; }
    }
    ctx->pc = 0x185E28u;
label_185e28:
    // 0x185e28: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_185e2c:
    if (ctx->pc == 0x185E2Cu) {
        ctx->pc = 0x185E2Cu;
            // 0x185e2c: 0x40b02d  daddu       $s6, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x185E30u;
        goto label_185e30;
    }
    ctx->pc = 0x185E28u;
    {
        const bool branch_taken_0x185e28 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x185E2Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x185E28u;
            // 0x185e2c: 0x40b02d  daddu       $s6, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x185e28) {
            ctx->pc = 0x185E3Cu;
            goto label_185e3c;
        }
    }
    ctx->pc = 0x185E30u;
label_185e30:
    // 0x185e30: 0xc06132c  jal         func_184CB0
label_185e34:
    if (ctx->pc == 0x185E34u) {
        ctx->pc = 0x185E34u;
            // 0x185e34: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x185E38u;
        goto label_185e38;
    }
    ctx->pc = 0x185E30u;
    SET_GPR_U32(ctx, 31, 0x185E38u);
    ctx->pc = 0x185E34u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x185E30u;
            // 0x185e34: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x184CB0u;
    if (runtime->hasFunction(0x184CB0u)) {
        auto targetFn = runtime->lookupFunction(0x184CB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x185E38u; }
        if (ctx->pc != 0x185E38u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___ct__6CWaterFv_0x184cb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x185E38u; }
        if (ctx->pc != 0x185E38u) { return; }
    }
    ctx->pc = 0x185E38u;
label_185e38:
    // 0x185e38: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x185e38u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_185e3c:
    // 0x185e3c: 0x16c00003  bnez        $s6, . + 4 + (0x3 << 2)
label_185e40:
    if (ctx->pc == 0x185E40u) {
        ctx->pc = 0x185E40u;
            // 0x185e40: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x185E44u;
        goto label_185e44;
    }
    ctx->pc = 0x185E3Cu;
    {
        const bool branch_taken_0x185e3c = (GPR_U64(ctx, 22) != GPR_U64(ctx, 0));
        ctx->pc = 0x185E40u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x185E3Cu;
            // 0x185e40: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x185e3c) {
            ctx->pc = 0x185E4Cu;
            goto label_185e4c;
        }
    }
    ctx->pc = 0x185E44u;
label_185e44:
    // 0x185e44: 0x1000001a  b           . + 4 + (0x1A << 2)
label_185e48:
    if (ctx->pc == 0x185E48u) {
        ctx->pc = 0x185E48u;
            // 0x185e48: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x185E4Cu;
        goto label_185e4c;
    }
    ctx->pc = 0x185E44u;
    {
        const bool branch_taken_0x185e44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x185E48u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x185E44u;
            // 0x185e48: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x185e44) {
            ctx->pc = 0x185EB0u;
            goto label_185eb0;
        }
    }
    ctx->pc = 0x185E4Cu;
label_185e4c:
    // 0x185e4c: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x185e4cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_185e50:
    // 0x185e50: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x185e50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_185e54:
    // 0x185e54: 0xc0612e0  jal         func_184B80
label_185e58:
    if (ctx->pc == 0x185E58u) {
        ctx->pc = 0x185E58u;
            // 0x185e58: 0x220382d  daddu       $a3, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x185E5Cu;
        goto label_185e5c;
    }
    ctx->pc = 0x185E54u;
    SET_GPR_U32(ctx, 31, 0x185E5Cu);
    ctx->pc = 0x185E58u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x185E54u;
            // 0x185e58: 0x220382d  daddu       $a3, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x184B80u;
    if (runtime->hasFunction(0x184B80u)) {
        auto targetFn = runtime->lookupFunction(0x184B80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x185E5Cu; }
        if (ctx->pc != 0x185E5Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetSize__6CWaterFiiP9mgCMemory_0x184b80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x185E5Cu; }
        if (ctx->pc != 0x185E5Cu) { return; }
    }
    ctx->pc = 0x185E5Cu;
label_185e5c:
    // 0x185e5c: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x185e5cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_185e60:
    // 0x185e60: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x185e60u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_185e64:
    // 0x185e64: 0xc061250  jal         func_184940
label_185e68:
    if (ctx->pc == 0x185E68u) {
        ctx->pc = 0x185E68u;
            // 0x185e68: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x185E6Cu;
        goto label_185e6c;
    }
    ctx->pc = 0x185E64u;
    SET_GPR_U32(ctx, 31, 0x185E6Cu);
    ctx->pc = 0x185E68u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x185E64u;
            // 0x185e68: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x184940u;
    if (runtime->hasFunction(0x184940u)) {
        auto targetFn = runtime->lookupFunction(0x184940u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x185E6Cu; }
        if (ctx->pc != 0x185E6Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetVertex__6CWaterFPfPf_0x184940(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x185E6Cu; }
        if (ctx->pc != 0x185E6Cu) { return; }
    }
    ctx->pc = 0x185E6Cu;
label_185e6c:
    // 0x185e6c: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x185e6cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_185e70:
    // 0x185e70: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x185e70u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_185e74:
    // 0x185e74: 0x8f390048  lw          $t9, 0x48($t9)
    ctx->pc = 0x185e74u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 72)));
label_185e78:
    // 0x185e78: 0x320f809  jalr        $t9
label_185e7c:
    if (ctx->pc == 0x185E7Cu) {
        ctx->pc = 0x185E7Cu;
            // 0x185e7c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x185E80u;
        goto label_185e80;
    }
    ctx->pc = 0x185E78u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x185E80u);
        ctx->pc = 0x185E7Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x185E78u;
            // 0x185e7c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x185E80u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x185E80u; }
            if (ctx->pc != 0x185E80u) { return; }
        }
        }
    }
    ctx->pc = 0x185E80u;
label_185e80:
    // 0x185e80: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x185e80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_185e84:
    // 0x185e84: 0xc04e748  jal         func_139D20
label_185e88:
    if (ctx->pc == 0x185E88u) {
        ctx->pc = 0x185E88u;
            // 0x185e88: 0x2405000d  addiu       $a1, $zero, 0xD (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
        ctx->pc = 0x185E8Cu;
        goto label_185e8c;
    }
    ctx->pc = 0x185E84u;
    SET_GPR_U32(ctx, 31, 0x185E8Cu);
    ctx->pc = 0x185E88u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x185E84u;
            // 0x185e88: 0x2405000d  addiu       $a1, $zero, 0xD (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139D20u;
    if (runtime->hasFunction(0x139D20u)) {
        auto targetFn = runtime->lookupFunction(0x139D20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x185E8Cu; }
        if (ctx->pc != 0x185E8Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Alloc__9mgCMemoryFi_0x139d20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x185E8Cu; }
        if (ctx->pc != 0x185E8Cu) { return; }
    }
    ctx->pc = 0x185E8Cu;
label_185e8c:
    // 0x185e8c: 0x240400b0  addiu       $a0, $zero, 0xB0
    ctx->pc = 0x185e8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 176));
label_185e90:
    // 0x185e90: 0xc04e638  jal         func_1398E0
label_185e94:
    if (ctx->pc == 0x185E94u) {
        ctx->pc = 0x185E94u;
            // 0x185e94: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x185E98u;
        goto label_185e98;
    }
    ctx->pc = 0x185E90u;
    SET_GPR_U32(ctx, 31, 0x185E98u);
    ctx->pc = 0x185E94u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x185E90u;
            // 0x185e94: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1398E0u;
    if (runtime->hasFunction(0x1398E0u)) {
        auto targetFn = runtime->lookupFunction(0x1398E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x185E98u; }
        if (ctx->pc != 0x185E98u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___nw__FUiP1_0x1398e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x185E98u; }
        if (ctx->pc != 0x185E98u) { return; }
    }
    ctx->pc = 0x185E98u;
label_185e98:
    // 0x185e98: 0xae0200f0  sw          $v0, 0xF0($s0)
    ctx->pc = 0x185e98u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 240), GPR_U32(ctx, 2));
label_185e9c:
    // 0x185e9c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x185e9cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_185ea0:
    // 0x185ea0: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x185ea0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_185ea4:
    // 0x185ea4: 0xc04d97c  jal         func_1365F0
label_185ea8:
    if (ctx->pc == 0x185EA8u) {
        ctx->pc = 0x185EA8u;
            // 0x185ea8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x185EACu;
        goto label_185eac;
    }
    ctx->pc = 0x185EA4u;
    SET_GPR_U32(ctx, 31, 0x185EACu);
    ctx->pc = 0x185EA8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x185EA4u;
            // 0x185ea8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1365F0u;
    if (runtime->hasFunction(0x1365F0u)) {
        auto targetFn = runtime->lookupFunction(0x1365F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x185EACu; }
        if (ctx->pc != 0x185EACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetBBox__8mgCFrameFPfPf_0x1365f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x185EACu; }
        if (ctx->pc != 0x185EACu) { return; }
    }
    ctx->pc = 0x185EACu;
label_185eac:
    // 0x185eac: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x185eacu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_185eb0:
    // 0x185eb0: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x185eb0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_185eb4:
    // 0x185eb4: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x185eb4u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_185eb8:
    // 0x185eb8: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x185eb8u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_185ebc:
    // 0x185ebc: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x185ebcu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_185ec0:
    // 0x185ec0: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x185ec0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_185ec4:
    // 0x185ec4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x185ec4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_185ec8:
    // 0x185ec8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x185ec8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_185ecc:
    // 0x185ecc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x185eccu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_185ed0:
    // 0x185ed0: 0x3e00008  jr          $ra
label_185ed4:
    if (ctx->pc == 0x185ED4u) {
        ctx->pc = 0x185ED4u;
            // 0x185ed4: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->pc = 0x185ED8u;
        goto label_fallthrough_0x185ed0;
    }
    ctx->pc = 0x185ED0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x185ED4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x185ED0u;
            // 0x185ed4: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x185ed0:
    ctx->pc = 0x185ED8u;
}
