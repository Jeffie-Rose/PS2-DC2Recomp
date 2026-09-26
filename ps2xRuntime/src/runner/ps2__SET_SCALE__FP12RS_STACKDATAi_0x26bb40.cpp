#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _SET_SCALE__FP12RS_STACKDATAi
// Address: 0x26bb40 - 0x26bc94
void ps2__SET_SCALE__FP12RS_STACKDATAi_0x26bb40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__SET_SCALE__FP12RS_STACKDATAi_0x26bb40");
#endif

    switch (ctx->pc) {
        case 0x26bb40u: goto label_26bb40;
        case 0x26bb44u: goto label_26bb44;
        case 0x26bb48u: goto label_26bb48;
        case 0x26bb4cu: goto label_26bb4c;
        case 0x26bb50u: goto label_26bb50;
        case 0x26bb54u: goto label_26bb54;
        case 0x26bb58u: goto label_26bb58;
        case 0x26bb5cu: goto label_26bb5c;
        case 0x26bb60u: goto label_26bb60;
        case 0x26bb64u: goto label_26bb64;
        case 0x26bb68u: goto label_26bb68;
        case 0x26bb6cu: goto label_26bb6c;
        case 0x26bb70u: goto label_26bb70;
        case 0x26bb74u: goto label_26bb74;
        case 0x26bb78u: goto label_26bb78;
        case 0x26bb7cu: goto label_26bb7c;
        case 0x26bb80u: goto label_26bb80;
        case 0x26bb84u: goto label_26bb84;
        case 0x26bb88u: goto label_26bb88;
        case 0x26bb8cu: goto label_26bb8c;
        case 0x26bb90u: goto label_26bb90;
        case 0x26bb94u: goto label_26bb94;
        case 0x26bb98u: goto label_26bb98;
        case 0x26bb9cu: goto label_26bb9c;
        case 0x26bba0u: goto label_26bba0;
        case 0x26bba4u: goto label_26bba4;
        case 0x26bba8u: goto label_26bba8;
        case 0x26bbacu: goto label_26bbac;
        case 0x26bbb0u: goto label_26bbb0;
        case 0x26bbb4u: goto label_26bbb4;
        case 0x26bbb8u: goto label_26bbb8;
        case 0x26bbbcu: goto label_26bbbc;
        case 0x26bbc0u: goto label_26bbc0;
        case 0x26bbc4u: goto label_26bbc4;
        case 0x26bbc8u: goto label_26bbc8;
        case 0x26bbccu: goto label_26bbcc;
        case 0x26bbd0u: goto label_26bbd0;
        case 0x26bbd4u: goto label_26bbd4;
        case 0x26bbd8u: goto label_26bbd8;
        case 0x26bbdcu: goto label_26bbdc;
        case 0x26bbe0u: goto label_26bbe0;
        case 0x26bbe4u: goto label_26bbe4;
        case 0x26bbe8u: goto label_26bbe8;
        case 0x26bbecu: goto label_26bbec;
        case 0x26bbf0u: goto label_26bbf0;
        case 0x26bbf4u: goto label_26bbf4;
        case 0x26bbf8u: goto label_26bbf8;
        case 0x26bbfcu: goto label_26bbfc;
        case 0x26bc00u: goto label_26bc00;
        case 0x26bc04u: goto label_26bc04;
        case 0x26bc08u: goto label_26bc08;
        case 0x26bc0cu: goto label_26bc0c;
        case 0x26bc10u: goto label_26bc10;
        case 0x26bc14u: goto label_26bc14;
        case 0x26bc18u: goto label_26bc18;
        case 0x26bc1cu: goto label_26bc1c;
        case 0x26bc20u: goto label_26bc20;
        case 0x26bc24u: goto label_26bc24;
        case 0x26bc28u: goto label_26bc28;
        case 0x26bc2cu: goto label_26bc2c;
        case 0x26bc30u: goto label_26bc30;
        case 0x26bc34u: goto label_26bc34;
        case 0x26bc38u: goto label_26bc38;
        case 0x26bc3cu: goto label_26bc3c;
        case 0x26bc40u: goto label_26bc40;
        case 0x26bc44u: goto label_26bc44;
        case 0x26bc48u: goto label_26bc48;
        case 0x26bc4cu: goto label_26bc4c;
        case 0x26bc50u: goto label_26bc50;
        case 0x26bc54u: goto label_26bc54;
        case 0x26bc58u: goto label_26bc58;
        case 0x26bc5cu: goto label_26bc5c;
        case 0x26bc60u: goto label_26bc60;
        case 0x26bc64u: goto label_26bc64;
        case 0x26bc68u: goto label_26bc68;
        case 0x26bc6cu: goto label_26bc6c;
        case 0x26bc70u: goto label_26bc70;
        case 0x26bc74u: goto label_26bc74;
        case 0x26bc78u: goto label_26bc78;
        case 0x26bc7cu: goto label_26bc7c;
        case 0x26bc80u: goto label_26bc80;
        case 0x26bc84u: goto label_26bc84;
        case 0x26bc88u: goto label_26bc88;
        case 0x26bc8cu: goto label_26bc8c;
        case 0x26bc90u: goto label_26bc90;
        default: break;
    }

    ctx->pc = 0x26bb40u;

label_26bb40:
    // 0x26bb40: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x26bb40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_26bb44:
    // 0x26bb44: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x26bb44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_26bb48:
    // 0x26bb48: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x26bb48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_26bb4c:
    // 0x26bb4c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x26bb4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_26bb50:
    // 0x26bb50: 0x10a20036  beq         $a1, $v0, . + 4 + (0x36 << 2)
label_26bb54:
    if (ctx->pc == 0x26BB54u) {
        ctx->pc = 0x26BB54u;
            // 0x26bb54: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->pc = 0x26BB58u;
        goto label_26bb58;
    }
    ctx->pc = 0x26BB50u;
    {
        const bool branch_taken_0x26bb50 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x26BB54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26BB50u;
            // 0x26bb54: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26bb50) {
            ctx->pc = 0x26BC2Cu;
            goto label_26bc2c;
        }
    }
    ctx->pc = 0x26BB58u;
label_26bb58:
    // 0x26bb58: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x26bb58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_26bb5c:
    // 0x26bb5c: 0x10a20003  beq         $a1, $v0, . + 4 + (0x3 << 2)
label_26bb60:
    if (ctx->pc == 0x26BB60u) {
        ctx->pc = 0x26BB64u;
        goto label_26bb64;
    }
    ctx->pc = 0x26BB5Cu;
    {
        const bool branch_taken_0x26bb5c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        if (branch_taken_0x26bb5c) {
            ctx->pc = 0x26BB6Cu;
            goto label_26bb6c;
        }
    }
    ctx->pc = 0x26BB64u;
label_26bb64:
    // 0x26bb64: 0x1000003e  b           . + 4 + (0x3E << 2)
label_26bb68:
    if (ctx->pc == 0x26BB68u) {
        ctx->pc = 0x26BB68u;
            // 0x26bb68: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x26BB6Cu;
        goto label_26bb6c;
    }
    ctx->pc = 0x26BB64u;
    {
        const bool branch_taken_0x26bb64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26BB68u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26BB64u;
            // 0x26bb68: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26bb64) {
            ctx->pc = 0x26BC60u;
            goto label_26bc60;
        }
    }
    ctx->pc = 0x26BB6Cu;
label_26bb6c:
    // 0x26bb6c: 0xc097e18  jal         func_25F860
label_26bb70:
    if (ctx->pc == 0x26BB70u) {
        ctx->pc = 0x26BB74u;
        goto label_26bb74;
    }
    ctx->pc = 0x26BB6Cu;
    SET_GPR_U32(ctx, 31, 0x26BB74u);
    ctx->pc = 0x25F860u;
    if (runtime->hasFunction(0x25F860u)) {
        auto targetFn = runtime->lookupFunction(0x25F860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26BB74u; }
        if (ctx->pc != 0x26BB74u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x25f860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26BB74u; }
        if (ctx->pc != 0x26BB74u) { return; }
    }
    ctx->pc = 0x26BB74u;
label_26bb74:
    // 0x26bb74: 0x3c0101f0  lui         $at, 0x1F0
    ctx->pc = 0x26bb74u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)496 << 16));
label_26bb78:
    // 0x26bb78: 0x8c262a34  lw          $a2, 0x2A34($at)
    ctx->pc = 0x26bb78u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 10804)));
label_26bb7c:
    // 0x26bb7c: 0x14c00003  bnez        $a2, . + 4 + (0x3 << 2)
label_26bb80:
    if (ctx->pc == 0x26BB80u) {
        ctx->pc = 0x26BB80u;
            // 0x26bb80: 0x3c0101f0  lui         $at, 0x1F0 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)496 << 16));
        ctx->pc = 0x26BB84u;
        goto label_26bb84;
    }
    ctx->pc = 0x26BB7Cu;
    {
        const bool branch_taken_0x26bb7c = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x26BB80u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26BB7Cu;
            // 0x26bb80: 0x3c0101f0  lui         $at, 0x1F0 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)496 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26bb7c) {
            ctx->pc = 0x26BB8Cu;
            goto label_26bb8c;
        }
    }
    ctx->pc = 0x26BB84u;
label_26bb84:
    // 0x26bb84: 0x10000018  b           . + 4 + (0x18 << 2)
label_26bb88:
    if (ctx->pc == 0x26BB88u) {
        ctx->pc = 0x26BB88u;
            // 0x26bb88: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x26BB8Cu;
        goto label_26bb8c;
    }
    ctx->pc = 0x26BB84u;
    {
        const bool branch_taken_0x26bb84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26BB88u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26BB84u;
            // 0x26bb88: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26bb84) {
            ctx->pc = 0x26BBE8u;
            goto label_26bbe8;
        }
    }
    ctx->pc = 0x26BB8Cu;
label_26bb8c:
    // 0x26bb8c: 0x8c242a38  lw          $a0, 0x2A38($at)
    ctx->pc = 0x26bb8cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 10808)));
label_26bb90:
    // 0x26bb90: 0x1000000b  b           . + 4 + (0xB << 2)
label_26bb94:
    if (ctx->pc == 0x26BB94u) {
        ctx->pc = 0x26BB94u;
            // 0x26bb94: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x26BB98u;
        goto label_26bb98;
    }
    ctx->pc = 0x26BB90u;
    {
        const bool branch_taken_0x26bb90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26BB94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26BB90u;
            // 0x26bb94: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26bb90) {
            ctx->pc = 0x26BBC0u;
            goto label_26bbc0;
        }
    }
    ctx->pc = 0x26BB98u;
label_26bb98:
    // 0x26bb98: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x26bb98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_26bb9c:
    // 0x26bb9c: 0x1043000b  beq         $v0, $v1, . + 4 + (0xB << 2)
label_26bba0:
    if (ctx->pc == 0x26BBA0u) {
        ctx->pc = 0x26BBA4u;
        goto label_26bba4;
    }
    ctx->pc = 0x26BB9Cu;
    {
        const bool branch_taken_0x26bb9c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x26bb9c) {
            ctx->pc = 0x26BBCCu;
            goto label_26bbcc;
        }
    }
    ctx->pc = 0x26BBA4u;
label_26bba4:
    // 0x26bba4: 0x8cc6000c  lw          $a2, 0xC($a2)
    ctx->pc = 0x26bba4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_26bba8:
    // 0x26bba8: 0x10c00003  beqz        $a2, . + 4 + (0x3 << 2)
label_26bbac:
    if (ctx->pc == 0x26BBACu) {
        ctx->pc = 0x26BBB0u;
        goto label_26bbb0;
    }
    ctx->pc = 0x26BBA8u;
    {
        const bool branch_taken_0x26bba8 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x26bba8) {
            ctx->pc = 0x26BBB8u;
            goto label_26bbb8;
        }
    }
    ctx->pc = 0x26BBB0u;
label_26bbb0:
    // 0x26bbb0: 0x10000003  b           . + 4 + (0x3 << 2)
label_26bbb4:
    if (ctx->pc == 0x26BBB4u) {
        ctx->pc = 0x26BBB4u;
            // 0x26bbb4: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->pc = 0x26BBB8u;
        goto label_26bbb8;
    }
    ctx->pc = 0x26BBB0u;
    {
        const bool branch_taken_0x26bbb0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26BBB4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26BBB0u;
            // 0x26bbb4: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26bbb0) {
            ctx->pc = 0x26BBC0u;
            goto label_26bbc0;
        }
    }
    ctx->pc = 0x26BBB8u;
label_26bbb8:
    // 0x26bbb8: 0x1000000b  b           . + 4 + (0xB << 2)
label_26bbbc:
    if (ctx->pc == 0x26BBBCu) {
        ctx->pc = 0x26BBBCu;
            // 0x26bbbc: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x26BBC0u;
        goto label_26bbc0;
    }
    ctx->pc = 0x26BBB8u;
    {
        const bool branch_taken_0x26bbb8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26BBBCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26BBB8u;
            // 0x26bbbc: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26bbb8) {
            ctx->pc = 0x26BBE8u;
            goto label_26bbe8;
        }
    }
    ctx->pc = 0x26BBC0u;
label_26bbc0:
    // 0x26bbc0: 0xa4182a  slt         $v1, $a1, $a0
    ctx->pc = 0x26bbc0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
label_26bbc4:
    // 0x26bbc4: 0x1460fff4  bnez        $v1, . + 4 + (-0xC << 2)
label_26bbc8:
    if (ctx->pc == 0x26BBC8u) {
        ctx->pc = 0x26BBCCu;
        goto label_26bbcc;
    }
    ctx->pc = 0x26BBC4u;
    {
        const bool branch_taken_0x26bbc4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x26bbc4) {
            ctx->pc = 0x26BB98u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_26bb98;
        }
    }
    ctx->pc = 0x26BBCCu;
label_26bbcc:
    // 0x26bbcc: 0x0  nop
    ctx->pc = 0x26bbccu;
    // NOP
label_26bbd0:
    // 0x26bbd0: 0x14c00003  bnez        $a2, . + 4 + (0x3 << 2)
label_26bbd4:
    if (ctx->pc == 0x26BBD4u) {
        ctx->pc = 0x26BBD4u;
            // 0x26bbd4: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x26BBD8u;
        goto label_26bbd8;
    }
    ctx->pc = 0x26BBD0u;
    {
        const bool branch_taken_0x26bbd0 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x26BBD4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26BBD0u;
            // 0x26bbd4: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26bbd0) {
            ctx->pc = 0x26BBE0u;
            goto label_26bbe0;
        }
    }
    ctx->pc = 0x26BBD8u;
label_26bbd8:
    // 0x26bbd8: 0x10000003  b           . + 4 + (0x3 << 2)
label_26bbdc:
    if (ctx->pc == 0x26BBDCu) {
        ctx->pc = 0x26BBE0u;
        goto label_26bbe0;
    }
    ctx->pc = 0x26BBD8u;
    {
        const bool branch_taken_0x26bbd8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x26bbd8) {
            ctx->pc = 0x26BBE8u;
            goto label_26bbe8;
        }
    }
    ctx->pc = 0x26BBE0u;
label_26bbe0:
    // 0x26bbe0: 0x8cd10004  lw          $s1, 0x4($a2)
    ctx->pc = 0x26bbe0u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
label_26bbe4:
    // 0x26bbe4: 0x0  nop
    ctx->pc = 0x26bbe4u;
    // NOP
label_26bbe8:
    // 0x26bbe8: 0x16200003  bnez        $s1, . + 4 + (0x3 << 2)
label_26bbec:
    if (ctx->pc == 0x26BBECu) {
        ctx->pc = 0x26BBECu;
            // 0x26bbec: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x26BBF0u;
        goto label_26bbf0;
    }
    ctx->pc = 0x26BBE8u;
    {
        const bool branch_taken_0x26bbe8 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x26BBECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26BBE8u;
            // 0x26bbec: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26bbe8) {
            ctx->pc = 0x26BBF8u;
            goto label_26bbf8;
        }
    }
    ctx->pc = 0x26BBF0u;
label_26bbf0:
    // 0x26bbf0: 0x10000023  b           . + 4 + (0x23 << 2)
label_26bbf4:
    if (ctx->pc == 0x26BBF4u) {
        ctx->pc = 0x26BBF4u;
            // 0x26bbf4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x26BBF8u;
        goto label_26bbf8;
    }
    ctx->pc = 0x26BBF0u;
    {
        const bool branch_taken_0x26bbf0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26BBF4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26BBF0u;
            // 0x26bbf4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26bbf0) {
            ctx->pc = 0x26BC80u;
            goto label_26bc80;
        }
    }
    ctx->pc = 0x26BBF8u;
label_26bbf8:
    // 0x26bbf8: 0xc097f6c  jal         func_25FDB0
label_26bbfc:
    if (ctx->pc == 0x26BBFCu) {
        ctx->pc = 0x26BBFCu;
            // 0x26bbfc: 0x24910008  addiu       $s1, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->pc = 0x26BC00u;
        goto label_26bc00;
    }
    ctx->pc = 0x26BBF8u;
    SET_GPR_U32(ctx, 31, 0x26BC00u);
    ctx->pc = 0x26BBFCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26BBF8u;
            // 0x26bbfc: 0x24910008  addiu       $s1, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25FDB0u;
    if (runtime->hasFunction(0x25FDB0u)) {
        auto targetFn = runtime->lookupFunction(0x25FDB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26BC00u; }
        if (ctx->pc != 0x26BC00u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetArgInt__FP8ARG_DATA_0x25fdb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26BC00u; }
        if (ctx->pc != 0x26BC00u) { return; }
    }
    ctx->pc = 0x26BC00u;
label_26bc00:
    // 0x26bc00: 0xc09ac74  jal         func_26B1D0
label_26bc04:
    if (ctx->pc == 0x26BC04u) {
        ctx->pc = 0x26BC04u;
            // 0x26bc04: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x26BC08u;
        goto label_26bc08;
    }
    ctx->pc = 0x26BC00u;
    SET_GPR_U32(ctx, 31, 0x26BC08u);
    ctx->pc = 0x26BC04u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26BC00u;
            // 0x26bc04: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x26B1D0u;
    if (runtime->hasFunction(0x26B1D0u)) {
        auto targetFn = runtime->lookupFunction(0x26B1D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26BC08u; }
        if (ctx->pc != 0x26BC08u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetChara__Fi_0x26b1d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26BC08u; }
        if (ctx->pc != 0x26BC08u) { return; }
    }
    ctx->pc = 0x26BC08u;
label_26bc08:
    // 0x26bc08: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_26bc0c:
    if (ctx->pc == 0x26BC0Cu) {
        ctx->pc = 0x26BC0Cu;
            // 0x26bc0c: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x26BC10u;
        goto label_26bc10;
    }
    ctx->pc = 0x26BC08u;
    {
        const bool branch_taken_0x26bc08 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x26BC0Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26BC08u;
            // 0x26bc0c: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26bc08) {
            ctx->pc = 0x26BC18u;
            goto label_26bc18;
        }
    }
    ctx->pc = 0x26BC10u;
label_26bc10:
    // 0x26bc10: 0x1000001b  b           . + 4 + (0x1B << 2)
label_26bc14:
    if (ctx->pc == 0x26BC14u) {
        ctx->pc = 0x26BC14u;
            // 0x26bc14: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x26BC18u;
        goto label_26bc18;
    }
    ctx->pc = 0x26BC10u;
    {
        const bool branch_taken_0x26bc10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26BC14u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26BC10u;
            // 0x26bc14: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26bc10) {
            ctx->pc = 0x26BC80u;
            goto label_26bc80;
        }
    }
    ctx->pc = 0x26BC18u;
label_26bc18:
    // 0x26bc18: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x26bc18u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_26bc1c:
    // 0x26bc1c: 0xc097fa8  jal         func_25FEA0
label_26bc20:
    if (ctx->pc == 0x26BC20u) {
        ctx->pc = 0x26BC20u;
            // 0x26bc20: 0x27a40030  addiu       $a0, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x26BC24u;
        goto label_26bc24;
    }
    ctx->pc = 0x26BC1Cu;
    SET_GPR_U32(ctx, 31, 0x26BC24u);
    ctx->pc = 0x26BC20u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26BC1Cu;
            // 0x26bc20: 0x27a40030  addiu       $a0, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25FEA0u;
    if (runtime->hasFunction(0x25FEA0u)) {
        auto targetFn = runtime->lookupFunction(0x25FEA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26BC24u; }
        if (ctx->pc != 0x26BC24u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetArgVector__FPfP8ARG_DATA_0x25fea0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26BC24u; }
        if (ctx->pc != 0x26BC24u) { return; }
    }
    ctx->pc = 0x26BC24u;
label_26bc24:
    // 0x26bc24: 0x10000011  b           . + 4 + (0x11 << 2)
label_26bc28:
    if (ctx->pc == 0x26BC28u) {
        ctx->pc = 0x26BC28u;
            // 0x26bc28: 0x8e190000  lw          $t9, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->pc = 0x26BC2Cu;
        goto label_26bc2c;
    }
    ctx->pc = 0x26BC24u;
    {
        const bool branch_taken_0x26bc24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26BC28u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26BC24u;
            // 0x26bc28: 0x8e190000  lw          $t9, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26bc24) {
            ctx->pc = 0x26BC6Cu;
            goto label_26bc6c;
        }
    }
    ctx->pc = 0x26BC2Cu;
label_26bc2c:
    // 0x26bc2c: 0xc097e18  jal         func_25F860
label_26bc30:
    if (ctx->pc == 0x26BC30u) {
        ctx->pc = 0x26BC30u;
            // 0x26bc30: 0x24910008  addiu       $s1, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->pc = 0x26BC34u;
        goto label_26bc34;
    }
    ctx->pc = 0x26BC2Cu;
    SET_GPR_U32(ctx, 31, 0x26BC34u);
    ctx->pc = 0x26BC30u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26BC2Cu;
            // 0x26bc30: 0x24910008  addiu       $s1, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F860u;
    if (runtime->hasFunction(0x25F860u)) {
        auto targetFn = runtime->lookupFunction(0x25F860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26BC34u; }
        if (ctx->pc != 0x26BC34u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x25f860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26BC34u; }
        if (ctx->pc != 0x26BC34u) { return; }
    }
    ctx->pc = 0x26BC34u;
label_26bc34:
    // 0x26bc34: 0xc09ac74  jal         func_26B1D0
label_26bc38:
    if (ctx->pc == 0x26BC38u) {
        ctx->pc = 0x26BC38u;
            // 0x26bc38: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x26BC3Cu;
        goto label_26bc3c;
    }
    ctx->pc = 0x26BC34u;
    SET_GPR_U32(ctx, 31, 0x26BC3Cu);
    ctx->pc = 0x26BC38u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26BC34u;
            // 0x26bc38: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x26B1D0u;
    if (runtime->hasFunction(0x26B1D0u)) {
        auto targetFn = runtime->lookupFunction(0x26B1D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26BC3Cu; }
        if (ctx->pc != 0x26BC3Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetChara__Fi_0x26b1d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26BC3Cu; }
        if (ctx->pc != 0x26BC3Cu) { return; }
    }
    ctx->pc = 0x26BC3Cu;
label_26bc3c:
    // 0x26bc3c: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_26bc40:
    if (ctx->pc == 0x26BC40u) {
        ctx->pc = 0x26BC40u;
            // 0x26bc40: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x26BC44u;
        goto label_26bc44;
    }
    ctx->pc = 0x26BC3Cu;
    {
        const bool branch_taken_0x26bc3c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x26BC40u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26BC3Cu;
            // 0x26bc40: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26bc3c) {
            ctx->pc = 0x26BC4Cu;
            goto label_26bc4c;
        }
    }
    ctx->pc = 0x26BC44u;
label_26bc44:
    // 0x26bc44: 0x1000000e  b           . + 4 + (0xE << 2)
label_26bc48:
    if (ctx->pc == 0x26BC48u) {
        ctx->pc = 0x26BC48u;
            // 0x26bc48: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x26BC4Cu;
        goto label_26bc4c;
    }
    ctx->pc = 0x26BC44u;
    {
        const bool branch_taken_0x26bc44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26BC48u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26BC44u;
            // 0x26bc48: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26bc44) {
            ctx->pc = 0x26BC80u;
            goto label_26bc80;
        }
    }
    ctx->pc = 0x26BC4Cu;
label_26bc4c:
    // 0x26bc4c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x26bc4cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_26bc50:
    // 0x26bc50: 0xc097e34  jal         func_25F8D0
label_26bc54:
    if (ctx->pc == 0x26BC54u) {
        ctx->pc = 0x26BC54u;
            // 0x26bc54: 0x27a40030  addiu       $a0, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x26BC58u;
        goto label_26bc58;
    }
    ctx->pc = 0x26BC50u;
    SET_GPR_U32(ctx, 31, 0x26BC58u);
    ctx->pc = 0x26BC54u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26BC50u;
            // 0x26bc54: 0x27a40030  addiu       $a0, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F8D0u;
    if (runtime->hasFunction(0x25F8D0u)) {
        auto targetFn = runtime->lookupFunction(0x25F8D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26BC58u; }
        if (ctx->pc != 0x26BC58u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackVector__FPfP12RS_STACKDATA_0x25f8d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26BC58u; }
        if (ctx->pc != 0x26BC58u) { return; }
    }
    ctx->pc = 0x26BC58u;
label_26bc58:
    // 0x26bc58: 0x10000003  b           . + 4 + (0x3 << 2)
label_26bc5c:
    if (ctx->pc == 0x26BC5Cu) {
        ctx->pc = 0x26BC60u;
        goto label_26bc60;
    }
    ctx->pc = 0x26BC58u;
    {
        const bool branch_taken_0x26bc58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x26bc58) {
            ctx->pc = 0x26BC68u;
            goto label_26bc68;
        }
    }
    ctx->pc = 0x26BC60u;
label_26bc60:
    // 0x26bc60: 0x10000008  b           . + 4 + (0x8 << 2)
label_26bc64:
    if (ctx->pc == 0x26BC64u) {
        ctx->pc = 0x26BC64u;
            // 0x26bc64: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->pc = 0x26BC68u;
        goto label_26bc68;
    }
    ctx->pc = 0x26BC60u;
    {
        const bool branch_taken_0x26bc60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26BC64u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26BC60u;
            // 0x26bc64: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26bc60) {
            ctx->pc = 0x26BC84u;
            goto label_26bc84;
        }
    }
    ctx->pc = 0x26BC68u;
label_26bc68:
    // 0x26bc68: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x26bc68u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_26bc6c:
    // 0x26bc6c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x26bc6cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_26bc70:
    // 0x26bc70: 0x8f390028  lw          $t9, 0x28($t9)
    ctx->pc = 0x26bc70u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 40)));
label_26bc74:
    // 0x26bc74: 0x320f809  jalr        $t9
label_26bc78:
    if (ctx->pc == 0x26BC78u) {
        ctx->pc = 0x26BC78u;
            // 0x26bc78: 0x27a50030  addiu       $a1, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x26BC7Cu;
        goto label_26bc7c;
    }
    ctx->pc = 0x26BC74u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x26BC7Cu);
        ctx->pc = 0x26BC78u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26BC74u;
            // 0x26bc78: 0x27a50030  addiu       $a1, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x26BC7Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x26BC7Cu; }
            if (ctx->pc != 0x26BC7Cu) { return; }
        }
        }
    }
    ctx->pc = 0x26BC7Cu;
label_26bc7c:
    // 0x26bc7c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x26bc7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_26bc80:
    // 0x26bc80: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x26bc80u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_26bc84:
    // 0x26bc84: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x26bc84u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_26bc88:
    // 0x26bc88: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x26bc88u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_26bc8c:
    // 0x26bc8c: 0x3e00008  jr          $ra
label_26bc90:
    if (ctx->pc == 0x26BC90u) {
        ctx->pc = 0x26BC90u;
            // 0x26bc90: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = 0x26BC94u;
        goto label_fallthrough_0x26bc8c;
    }
    ctx->pc = 0x26BC8Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x26BC90u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26BC8Cu;
            // 0x26bc90: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x26bc8c:
    ctx->pc = 0x26BC94u;
}
