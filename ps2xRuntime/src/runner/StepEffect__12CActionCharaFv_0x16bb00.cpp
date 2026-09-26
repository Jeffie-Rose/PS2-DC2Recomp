#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: StepEffect__12CActionCharaFv
// Address: 0x16bb00 - 0x16bc88
void StepEffect__12CActionCharaFv_0x16bb00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("StepEffect__12CActionCharaFv_0x16bb00");
#endif

    switch (ctx->pc) {
        case 0x16bb00u: goto label_16bb00;
        case 0x16bb04u: goto label_16bb04;
        case 0x16bb08u: goto label_16bb08;
        case 0x16bb0cu: goto label_16bb0c;
        case 0x16bb10u: goto label_16bb10;
        case 0x16bb14u: goto label_16bb14;
        case 0x16bb18u: goto label_16bb18;
        case 0x16bb1cu: goto label_16bb1c;
        case 0x16bb20u: goto label_16bb20;
        case 0x16bb24u: goto label_16bb24;
        case 0x16bb28u: goto label_16bb28;
        case 0x16bb2cu: goto label_16bb2c;
        case 0x16bb30u: goto label_16bb30;
        case 0x16bb34u: goto label_16bb34;
        case 0x16bb38u: goto label_16bb38;
        case 0x16bb3cu: goto label_16bb3c;
        case 0x16bb40u: goto label_16bb40;
        case 0x16bb44u: goto label_16bb44;
        case 0x16bb48u: goto label_16bb48;
        case 0x16bb4cu: goto label_16bb4c;
        case 0x16bb50u: goto label_16bb50;
        case 0x16bb54u: goto label_16bb54;
        case 0x16bb58u: goto label_16bb58;
        case 0x16bb5cu: goto label_16bb5c;
        case 0x16bb60u: goto label_16bb60;
        case 0x16bb64u: goto label_16bb64;
        case 0x16bb68u: goto label_16bb68;
        case 0x16bb6cu: goto label_16bb6c;
        case 0x16bb70u: goto label_16bb70;
        case 0x16bb74u: goto label_16bb74;
        case 0x16bb78u: goto label_16bb78;
        case 0x16bb7cu: goto label_16bb7c;
        case 0x16bb80u: goto label_16bb80;
        case 0x16bb84u: goto label_16bb84;
        case 0x16bb88u: goto label_16bb88;
        case 0x16bb8cu: goto label_16bb8c;
        case 0x16bb90u: goto label_16bb90;
        case 0x16bb94u: goto label_16bb94;
        case 0x16bb98u: goto label_16bb98;
        case 0x16bb9cu: goto label_16bb9c;
        case 0x16bba0u: goto label_16bba0;
        case 0x16bba4u: goto label_16bba4;
        case 0x16bba8u: goto label_16bba8;
        case 0x16bbacu: goto label_16bbac;
        case 0x16bbb0u: goto label_16bbb0;
        case 0x16bbb4u: goto label_16bbb4;
        case 0x16bbb8u: goto label_16bbb8;
        case 0x16bbbcu: goto label_16bbbc;
        case 0x16bbc0u: goto label_16bbc0;
        case 0x16bbc4u: goto label_16bbc4;
        case 0x16bbc8u: goto label_16bbc8;
        case 0x16bbccu: goto label_16bbcc;
        case 0x16bbd0u: goto label_16bbd0;
        case 0x16bbd4u: goto label_16bbd4;
        case 0x16bbd8u: goto label_16bbd8;
        case 0x16bbdcu: goto label_16bbdc;
        case 0x16bbe0u: goto label_16bbe0;
        case 0x16bbe4u: goto label_16bbe4;
        case 0x16bbe8u: goto label_16bbe8;
        case 0x16bbecu: goto label_16bbec;
        case 0x16bbf0u: goto label_16bbf0;
        case 0x16bbf4u: goto label_16bbf4;
        case 0x16bbf8u: goto label_16bbf8;
        case 0x16bbfcu: goto label_16bbfc;
        case 0x16bc00u: goto label_16bc00;
        case 0x16bc04u: goto label_16bc04;
        case 0x16bc08u: goto label_16bc08;
        case 0x16bc0cu: goto label_16bc0c;
        case 0x16bc10u: goto label_16bc10;
        case 0x16bc14u: goto label_16bc14;
        case 0x16bc18u: goto label_16bc18;
        case 0x16bc1cu: goto label_16bc1c;
        case 0x16bc20u: goto label_16bc20;
        case 0x16bc24u: goto label_16bc24;
        case 0x16bc28u: goto label_16bc28;
        case 0x16bc2cu: goto label_16bc2c;
        case 0x16bc30u: goto label_16bc30;
        case 0x16bc34u: goto label_16bc34;
        case 0x16bc38u: goto label_16bc38;
        case 0x16bc3cu: goto label_16bc3c;
        case 0x16bc40u: goto label_16bc40;
        case 0x16bc44u: goto label_16bc44;
        case 0x16bc48u: goto label_16bc48;
        case 0x16bc4cu: goto label_16bc4c;
        case 0x16bc50u: goto label_16bc50;
        case 0x16bc54u: goto label_16bc54;
        case 0x16bc58u: goto label_16bc58;
        case 0x16bc5cu: goto label_16bc5c;
        case 0x16bc60u: goto label_16bc60;
        case 0x16bc64u: goto label_16bc64;
        case 0x16bc68u: goto label_16bc68;
        case 0x16bc6cu: goto label_16bc6c;
        case 0x16bc70u: goto label_16bc70;
        case 0x16bc74u: goto label_16bc74;
        case 0x16bc78u: goto label_16bc78;
        case 0x16bc7cu: goto label_16bc7c;
        case 0x16bc80u: goto label_16bc80;
        case 0x16bc84u: goto label_16bc84;
        default: break;
    }

    ctx->pc = 0x16bb00u;

label_16bb00:
    // 0x16bb00: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x16bb00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_16bb04:
    // 0x16bb04: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x16bb04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_16bb08:
    // 0x16bb08: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x16bb08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_16bb0c:
    // 0x16bb0c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x16bb0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_16bb10:
    // 0x16bb10: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x16bb10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_16bb14:
    // 0x16bb14: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x16bb14u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_16bb18:
    // 0x16bb18: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x16bb18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_16bb1c:
    // 0x16bb1c: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x16bb1cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_16bb20:
    // 0x16bb20: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x16bb20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_16bb24:
    // 0x16bb24: 0x1000004a  b           . + 4 + (0x4A << 2)
label_16bb28:
    if (ctx->pc == 0x16BB28u) {
        ctx->pc = 0x16BB28u;
            // 0x16bb28: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x16BB2Cu;
        goto label_16bb2c;
    }
    ctx->pc = 0x16BB24u;
    {
        const bool branch_taken_0x16bb24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16BB28u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16BB24u;
            // 0x16bb28: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16bb24) {
            ctx->pc = 0x16BC50u;
            goto label_16bc50;
        }
    }
    ctx->pc = 0x16BB2Cu;
label_16bb2c:
    // 0x16bb2c: 0x245007e4  addiu       $s0, $v0, 0x7E4
    ctx->pc = 0x16bb2cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 2020));
label_16bb30:
    // 0x16bb30: 0x8c4207ec  lw          $v0, 0x7EC($v0)
    ctx->pc = 0x16bb30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2028)));
label_16bb34:
    // 0x16bb34: 0x10400044  beqz        $v0, . + 4 + (0x44 << 2)
label_16bb38:
    if (ctx->pc == 0x16BB38u) {
        ctx->pc = 0x16BB3Cu;
        goto label_16bb3c;
    }
    ctx->pc = 0x16BB34u;
    {
        const bool branch_taken_0x16bb34 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x16bb34) {
            ctx->pc = 0x16BC48u;
            goto label_16bc48;
        }
    }
    ctx->pc = 0x16BB3Cu;
label_16bb3c:
    // 0x16bb3c: 0x8202001f  lb          $v0, 0x1F($s0)
    ctx->pc = 0x16bb3cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 31)));
label_16bb40:
    // 0x16bb40: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
label_16bb44:
    if (ctx->pc == 0x16BB44u) {
        ctx->pc = 0x16BB48u;
        goto label_16bb48;
    }
    ctx->pc = 0x16BB40u;
    {
        const bool branch_taken_0x16bb40 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x16bb40) {
            ctx->pc = 0x16BB54u;
            goto label_16bb54;
        }
    }
    ctx->pc = 0x16BB48u;
label_16bb48:
    // 0x16bb48: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x16bb48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_16bb4c:
    // 0x16bb4c: 0x1000003e  b           . + 4 + (0x3E << 2)
label_16bb50:
    if (ctx->pc == 0x16BB50u) {
        ctx->pc = 0x16BB50u;
            // 0x16bb50: 0xa202001f  sb          $v0, 0x1F($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 31), (uint8_t)GPR_U32(ctx, 2));
        ctx->pc = 0x16BB54u;
        goto label_16bb54;
    }
    ctx->pc = 0x16BB4Cu;
    {
        const bool branch_taken_0x16bb4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16BB50u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16BB4Cu;
            // 0x16bb50: 0xa202001f  sb          $v0, 0x1F($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 31), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16bb4c) {
            ctx->pc = 0x16BC48u;
            goto label_16bc48;
        }
    }
    ctx->pc = 0x16BB54u;
label_16bb54:
    // 0x16bb54: 0x0  nop
    ctx->pc = 0x16bb54u;
    // NOP
label_16bb58:
    // 0x16bb58: 0x8e050004  lw          $a1, 0x4($s0)
    ctx->pc = 0x16bb58u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_16bb5c:
    // 0x16bb5c: 0x10a00004  beqz        $a1, . + 4 + (0x4 << 2)
label_16bb60:
    if (ctx->pc == 0x16BB60u) {
        ctx->pc = 0x16BB60u;
            // 0x16bb60: 0x260a02d  daddu       $s4, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x16BB64u;
        goto label_16bb64;
    }
    ctx->pc = 0x16BB5Cu;
    {
        const bool branch_taken_0x16bb5c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x16BB60u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16BB5Cu;
            // 0x16bb60: 0x260a02d  daddu       $s4, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16bb5c) {
            ctx->pc = 0x16BB70u;
            goto label_16bb70;
        }
    }
    ctx->pc = 0x16BB64u;
label_16bb64:
    // 0x16bb64: 0xc05af24  jal         func_16BC90
label_16bb68:
    if (ctx->pc == 0x16BB68u) {
        ctx->pc = 0x16BB68u;
            // 0x16bb68: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x16BB6Cu;
        goto label_16bb6c;
    }
    ctx->pc = 0x16BB64u;
    SET_GPR_U32(ctx, 31, 0x16BB6Cu);
    ctx->pc = 0x16BB68u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16BB64u;
            // 0x16bb68: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16BC90u;
    if (runtime->hasFunction(0x16BC90u)) {
        auto targetFn = runtime->lookupFunction(0x16BC90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16BB6Cu; }
        if (ctx->pc != 0x16BB6Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SearchChara__12CActionCharaFPc_0x16bc90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16BB6Cu; }
        if (ctx->pc != 0x16BB6Cu) { return; }
    }
    ctx->pc = 0x16BB6Cu;
label_16bb6c:
    // 0x16bb6c: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x16bb6cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_16bb70:
    // 0x16bb70: 0x12800035  beqz        $s4, . + 4 + (0x35 << 2)
label_16bb74:
    if (ctx->pc == 0x16BB74u) {
        ctx->pc = 0x16BB78u;
        goto label_16bb78;
    }
    ctx->pc = 0x16BB70u;
    {
        const bool branch_taken_0x16bb70 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        if (branch_taken_0x16bb70) {
            ctx->pc = 0x16BC48u;
            goto label_16bc48;
        }
    }
    ctx->pc = 0x16BB78u;
label_16bb78:
    // 0x16bb78: 0x8e990000  lw          $t9, 0x0($s4)
    ctx->pc = 0x16bb78u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_16bb7c:
    // 0x16bb7c: 0x8f39008c  lw          $t9, 0x8C($t9)
    ctx->pc = 0x16bb7cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 140)));
label_16bb80:
    // 0x16bb80: 0x320f809  jalr        $t9
label_16bb84:
    if (ctx->pc == 0x16BB84u) {
        ctx->pc = 0x16BB84u;
            // 0x16bb84: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x16BB88u;
        goto label_16bb88;
    }
    ctx->pc = 0x16BB80u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x16BB88u);
        ctx->pc = 0x16BB84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16BB80u;
            // 0x16bb84: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x16BB88u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x16BB88u; }
            if (ctx->pc != 0x16BB88u) { return; }
        }
        }
    }
    ctx->pc = 0x16BB88u;
label_16bb88:
    // 0x16bb88: 0x1040002f  beqz        $v0, . + 4 + (0x2F << 2)
label_16bb8c:
    if (ctx->pc == 0x16BB8Cu) {
        ctx->pc = 0x16BB90u;
        goto label_16bb90;
    }
    ctx->pc = 0x16BB88u;
    {
        const bool branch_taken_0x16bb88 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x16bb88) {
            ctx->pc = 0x16BC48u;
            goto label_16bc48;
        }
    }
    ctx->pc = 0x16BB90u;
label_16bb90:
    // 0x16bb90: 0x8e990000  lw          $t9, 0x0($s4)
    ctx->pc = 0x16bb90u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_16bb94:
    // 0x16bb94: 0x8f39008c  lw          $t9, 0x8C($t9)
    ctx->pc = 0x16bb94u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 140)));
label_16bb98:
    // 0x16bb98: 0x320f809  jalr        $t9
label_16bb9c:
    if (ctx->pc == 0x16BB9Cu) {
        ctx->pc = 0x16BB9Cu;
            // 0x16bb9c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x16BBA0u;
        goto label_16bba0;
    }
    ctx->pc = 0x16BB98u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x16BBA0u);
        ctx->pc = 0x16BB9Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16BB98u;
            // 0x16bb9c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x16BBA0u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x16BBA0u; }
            if (ctx->pc != 0x16BBA0u) { return; }
        }
        }
    }
    ctx->pc = 0x16BBA0u;
label_16bba0:
    // 0x16bba0: 0x8e050008  lw          $a1, 0x8($s0)
    ctx->pc = 0x16bba0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_16bba4:
    // 0x16bba4: 0xc04a38a  jal         func_128E28
label_16bba8:
    if (ctx->pc == 0x16BBA8u) {
        ctx->pc = 0x16BBA8u;
            // 0x16bba8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x16BBACu;
        goto label_16bbac;
    }
    ctx->pc = 0x16BBA4u;
    SET_GPR_U32(ctx, 31, 0x16BBACu);
    ctx->pc = 0x16BBA8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16BBA4u;
            // 0x16bba8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128E28u;
    if (runtime->hasFunction(0x128E28u)) {
        auto targetFn = runtime->lookupFunction(0x128E28u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16BBACu; }
        if (ctx->pc != 0x16BBACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcmp_0x128e28(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16BBACu; }
        if (ctx->pc != 0x16BBACu) { return; }
    }
    ctx->pc = 0x16BBACu;
label_16bbac:
    // 0x16bbac: 0x14400026  bnez        $v0, . + 4 + (0x26 << 2)
label_16bbb0:
    if (ctx->pc == 0x16BBB0u) {
        ctx->pc = 0x16BBB4u;
        goto label_16bbb4;
    }
    ctx->pc = 0x16BBACu;
    {
        const bool branch_taken_0x16bbac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x16bbac) {
            ctx->pc = 0x16BC48u;
            goto label_16bc48;
        }
    }
    ctx->pc = 0x16BBB4u;
label_16bbb4:
    // 0x16bbb4: 0x8e990000  lw          $t9, 0x0($s4)
    ctx->pc = 0x16bbb4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_16bbb8:
    // 0x16bbb8: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x16bbb8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_16bbbc:
    // 0x16bbbc: 0x8f390104  lw          $t9, 0x104($t9)
    ctx->pc = 0x16bbbcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 260)));
label_16bbc0:
    // 0x16bbc0: 0x320f809  jalr        $t9
label_16bbc4:
    if (ctx->pc == 0x16BBC4u) {
        ctx->pc = 0x16BBC4u;
            // 0x16bbc4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x16BBC8u;
        goto label_16bbc8;
    }
    ctx->pc = 0x16BBC0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x16BBC8u);
        ctx->pc = 0x16BBC4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16BBC0u;
            // 0x16bbc4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x16BBC8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x16BBC8u; }
            if (ctx->pc != 0x16BBC8u) { return; }
        }
        }
    }
    ctx->pc = 0x16BBC8u;
label_16bbc8:
    // 0x16bbc8: 0xc601000c  lwc1        $f1, 0xC($s0)
    ctx->pc = 0x16bbc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_16bbcc:
    // 0x16bbcc: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x16bbccu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_16bbd0:
    // 0x16bbd0: 0x0  nop
    ctx->pc = 0x16bbd0u;
    // NOP
label_16bbd4:
    // 0x16bbd4: 0x4501001c  bc1t        . + 4 + (0x1C << 2)
label_16bbd8:
    if (ctx->pc == 0x16BBD8u) {
        ctx->pc = 0x16BBDCu;
        goto label_16bbdc;
    }
    ctx->pc = 0x16BBD4u;
    {
        const bool branch_taken_0x16bbd4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x16bbd4) {
            ctx->pc = 0x16BC48u;
            goto label_16bc48;
        }
    }
    ctx->pc = 0x16BBDCu;
label_16bbdc:
    // 0x16bbdc: 0xc6010010  lwc1        $f1, 0x10($s0)
    ctx->pc = 0x16bbdcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_16bbe0:
    // 0x16bbe0: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x16bbe0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_16bbe4:
    // 0x16bbe4: 0x0  nop
    ctx->pc = 0x16bbe4u;
    // NOP
label_16bbe8:
    // 0x16bbe8: 0x45000017  bc1f        . + 4 + (0x17 << 2)
label_16bbec:
    if (ctx->pc == 0x16BBECu) {
        ctx->pc = 0x16BBF0u;
        goto label_16bbf0;
    }
    ctx->pc = 0x16BBE8u;
    {
        const bool branch_taken_0x16bbe8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x16bbe8) {
            ctx->pc = 0x16BC48u;
            goto label_16bc48;
        }
    }
    ctx->pc = 0x16BBF0u;
label_16bbf0:
    // 0x16bbf0: 0x8e050014  lw          $a1, 0x14($s0)
    ctx->pc = 0x16bbf0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
label_16bbf4:
    // 0x16bbf4: 0xc05af3c  jal         func_16BCF0
label_16bbf8:
    if (ctx->pc == 0x16BBF8u) {
        ctx->pc = 0x16BBF8u;
            // 0x16bbf8: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x16BBFCu;
        goto label_16bbfc;
    }
    ctx->pc = 0x16BBF4u;
    SET_GPR_U32(ctx, 31, 0x16BBFCu);
    ctx->pc = 0x16BBF8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16BBF4u;
            // 0x16bbf8: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16BCF0u;
    if (runtime->hasFunction(0x16BCF0u)) {
        auto targetFn = runtime->lookupFunction(0x16BCF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16BBFCu; }
        if (ctx->pc != 0x16BBFCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SearchObject__12CActionCharaFPc_0x16bcf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16BBFCu; }
        if (ctx->pc != 0x16BBFCu) { return; }
    }
    ctx->pc = 0x16BBFCu;
label_16bbfc:
    // 0x16bbfc: 0x8e050018  lw          $a1, 0x18($s0)
    ctx->pc = 0x16bbfcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
label_16bc00:
    // 0x16bc00: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x16bc00u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_16bc04:
    // 0x16bc04: 0xc05af3c  jal         func_16BCF0
label_16bc08:
    if (ctx->pc == 0x16BC08u) {
        ctx->pc = 0x16BC08u;
            // 0x16bc08: 0x40a02d  daddu       $s4, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x16BC0Cu;
        goto label_16bc0c;
    }
    ctx->pc = 0x16BC04u;
    SET_GPR_U32(ctx, 31, 0x16BC0Cu);
    ctx->pc = 0x16BC08u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16BC04u;
            // 0x16bc08: 0x40a02d  daddu       $s4, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16BCF0u;
    if (runtime->hasFunction(0x16BCF0u)) {
        auto targetFn = runtime->lookupFunction(0x16BCF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16BC0Cu; }
        if (ctx->pc != 0x16BC0Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SearchObject__12CActionCharaFPc_0x16bcf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16BC0Cu; }
        if (ctx->pc != 0x16BC0Cu) { return; }
    }
    ctx->pc = 0x16BC0Cu;
label_16bc0c:
    // 0x16bc0c: 0x1280000e  beqz        $s4, . + 4 + (0xE << 2)
label_16bc10:
    if (ctx->pc == 0x16BC10u) {
        ctx->pc = 0x16BC14u;
        goto label_16bc14;
    }
    ctx->pc = 0x16BC0Cu;
    {
        const bool branch_taken_0x16bc0c = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        if (branch_taken_0x16bc0c) {
            ctx->pc = 0x16BC48u;
            goto label_16bc48;
        }
    }
    ctx->pc = 0x16BC14u;
label_16bc14:
    // 0x16bc14: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
label_16bc18:
    if (ctx->pc == 0x16BC18u) {
        ctx->pc = 0x16BC18u;
            // 0x16bc18: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x16BC1Cu;
        goto label_16bc1c;
    }
    ctx->pc = 0x16BC14u;
    {
        const bool branch_taken_0x16bc14 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x16BC18u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16BC14u;
            // 0x16bc18: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16bc14) {
            ctx->pc = 0x16BC48u;
            goto label_16bc48;
        }
    }
    ctx->pc = 0x16BC1Cu;
label_16bc1c:
    // 0x16bc1c: 0x8207001c  lb          $a3, 0x1C($s0)
    ctx->pc = 0x16bc1cu;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 28)));
label_16bc20:
    // 0x16bc20: 0x86020000  lh          $v0, 0x0($s0)
    ctx->pc = 0x16bc20u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
label_16bc24:
    // 0x16bc24: 0x8208001e  lb          $t0, 0x1E($s0)
    ctx->pc = 0x16bc24u;
    SET_GPR_S32(ctx, 8, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 30)));
label_16bc28:
    // 0x16bc28: 0x8209001d  lb          $t1, 0x1D($s0)
    ctx->pc = 0x16bc28u;
    SET_GPR_S32(ctx, 9, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 29)));
label_16bc2c:
    // 0x16bc2c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x16bc2cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_16bc30:
    // 0x16bc30: 0x2621021  addu        $v0, $s3, $v0
    ctx->pc = 0x16bc30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
label_16bc34:
    // 0x16bc34: 0x8c440570  lw          $a0, 0x570($v0)
    ctx->pc = 0x16bc34u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1392)));
label_16bc38:
    // 0x16bc38: 0xc0bd738  jal         func_2F5CE0
label_16bc3c:
    if (ctx->pc == 0x16BC3Cu) {
        ctx->pc = 0x16BC3Cu;
            // 0x16bc3c: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x16BC40u;
        goto label_16bc40;
    }
    ctx->pc = 0x16BC38u;
    SET_GPR_U32(ctx, 31, 0x16BC40u);
    ctx->pc = 0x16BC3Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16BC38u;
            // 0x16bc3c: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F5CE0u;
    if (runtime->hasFunction(0x2F5CE0u)) {
        auto targetFn = runtime->lookupFunction(0x2F5CE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16BC40u; }
        if (ctx->pc != 0x16BC40u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        StartEffect__17CSWordAfterEffectFP8mgCFrameP8mgCFrameiii_0x2f5ce0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16BC40u; }
        if (ctx->pc != 0x16BC40u) { return; }
    }
    ctx->pc = 0x16BC40u;
label_16bc40:
    // 0x16bc40: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x16bc40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_16bc44:
    // 0x16bc44: 0xa202001f  sb          $v0, 0x1F($s0)
    ctx->pc = 0x16bc44u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 31), (uint8_t)GPR_U32(ctx, 2));
label_16bc48:
    // 0x16bc48: 0x26520020  addiu       $s2, $s2, 0x20
    ctx->pc = 0x16bc48u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
label_16bc4c:
    // 0x16bc4c: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x16bc4cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_16bc50:
    // 0x16bc50: 0x82620904  lb          $v0, 0x904($s3)
    ctx->pc = 0x16bc50u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 2308)));
label_16bc54:
    // 0x16bc54: 0x222102a  slt         $v0, $s1, $v0
    ctx->pc = 0x16bc54u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_16bc58:
    // 0x16bc58: 0x1440ffb4  bnez        $v0, . + 4 + (-0x4C << 2)
label_16bc5c:
    if (ctx->pc == 0x16BC5Cu) {
        ctx->pc = 0x16BC5Cu;
            // 0x16bc5c: 0x2721021  addu        $v0, $s3, $s2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 18)));
        ctx->pc = 0x16BC60u;
        goto label_16bc60;
    }
    ctx->pc = 0x16BC58u;
    {
        const bool branch_taken_0x16bc58 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x16BC5Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16BC58u;
            // 0x16bc5c: 0x2721021  addu        $v0, $s3, $s2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 18)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16bc58) {
            ctx->pc = 0x16BB2Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_16bb2c;
        }
    }
    ctx->pc = 0x16BC60u;
label_16bc60:
    // 0x16bc60: 0xc05df00  jal         func_177C00
label_16bc64:
    if (ctx->pc == 0x16BC64u) {
        ctx->pc = 0x16BC64u;
            // 0x16bc64: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x16BC68u;
        goto label_16bc68;
    }
    ctx->pc = 0x16BC60u;
    SET_GPR_U32(ctx, 31, 0x16BC68u);
    ctx->pc = 0x16BC64u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16BC60u;
            // 0x16bc64: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x177C00u;
    if (runtime->hasFunction(0x177C00u)) {
        auto targetFn = runtime->lookupFunction(0x177C00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16BC68u; }
        if (ctx->pc != 0x16BC68u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        StepEffect__11CCharacter2Fv_0x177c00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16BC68u; }
        if (ctx->pc != 0x16BC68u) { return; }
    }
    ctx->pc = 0x16BC68u;
label_16bc68:
    // 0x16bc68: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x16bc68u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_16bc6c:
    // 0x16bc6c: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x16bc6cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_16bc70:
    // 0x16bc70: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x16bc70u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_16bc74:
    // 0x16bc74: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x16bc74u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_16bc78:
    // 0x16bc78: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x16bc78u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_16bc7c:
    // 0x16bc7c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x16bc7cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_16bc80:
    // 0x16bc80: 0x3e00008  jr          $ra
label_16bc84:
    if (ctx->pc == 0x16BC84u) {
        ctx->pc = 0x16BC84u;
            // 0x16bc84: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = 0x16BC88u;
        goto label_fallthrough_0x16bc80;
    }
    ctx->pc = 0x16BC80u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16BC84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16BC80u;
            // 0x16bc84: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x16bc80:
    ctx->pc = 0x16BC88u;
}
