#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _CHR_ADD_POS__FP12RS_STACKDATAi
// Address: 0x2e49c0 - 0x2e4a38
void ps2__CHR_ADD_POS__FP12RS_STACKDATAi_0x2e49c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__CHR_ADD_POS__FP12RS_STACKDATAi_0x2e49c0");
#endif

    switch (ctx->pc) {
        case 0x2e49c0u: goto label_2e49c0;
        case 0x2e49c4u: goto label_2e49c4;
        case 0x2e49c8u: goto label_2e49c8;
        case 0x2e49ccu: goto label_2e49cc;
        case 0x2e49d0u: goto label_2e49d0;
        case 0x2e49d4u: goto label_2e49d4;
        case 0x2e49d8u: goto label_2e49d8;
        case 0x2e49dcu: goto label_2e49dc;
        case 0x2e49e0u: goto label_2e49e0;
        case 0x2e49e4u: goto label_2e49e4;
        case 0x2e49e8u: goto label_2e49e8;
        case 0x2e49ecu: goto label_2e49ec;
        case 0x2e49f0u: goto label_2e49f0;
        case 0x2e49f4u: goto label_2e49f4;
        case 0x2e49f8u: goto label_2e49f8;
        case 0x2e49fcu: goto label_2e49fc;
        case 0x2e4a00u: goto label_2e4a00;
        case 0x2e4a04u: goto label_2e4a04;
        case 0x2e4a08u: goto label_2e4a08;
        case 0x2e4a0cu: goto label_2e4a0c;
        case 0x2e4a10u: goto label_2e4a10;
        case 0x2e4a14u: goto label_2e4a14;
        case 0x2e4a18u: goto label_2e4a18;
        case 0x2e4a1cu: goto label_2e4a1c;
        case 0x2e4a20u: goto label_2e4a20;
        case 0x2e4a24u: goto label_2e4a24;
        case 0x2e4a28u: goto label_2e4a28;
        case 0x2e4a2cu: goto label_2e4a2c;
        case 0x2e4a30u: goto label_2e4a30;
        case 0x2e4a34u: goto label_2e4a34;
        default: break;
    }

    ctx->pc = 0x2e49c0u;

label_2e49c0:
    // 0x2e49c0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2e49c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_2e49c4:
    // 0x2e49c4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2e49c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_2e49c8:
    // 0x2e49c8: 0x8f829ed0  lw          $v0, -0x6130($gp)
    ctx->pc = 0x2e49c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942416)));
label_2e49cc:
    // 0x2e49cc: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x2e49ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_2e49d0:
    // 0x2e49d0: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_2e49d4:
    if (ctx->pc == 0x2E49D4u) {
        ctx->pc = 0x2E49D4u;
            // 0x2e49d4: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2E49D8u;
        goto label_2e49d8;
    }
    ctx->pc = 0x2E49D0u;
    {
        const bool branch_taken_0x2e49d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E49D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E49D0u;
            // 0x2e49d4: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e49d0) {
            ctx->pc = 0x2E49E0u;
            goto label_2e49e0;
        }
    }
    ctx->pc = 0x2E49D8u;
label_2e49d8:
    // 0x2e49d8: 0x10000014  b           . + 4 + (0x14 << 2)
label_2e49dc:
    if (ctx->pc == 0x2E49DCu) {
        ctx->pc = 0x2E49DCu;
            // 0x2e49dc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2E49E0u;
        goto label_2e49e0;
    }
    ctx->pc = 0x2E49D8u;
    {
        const bool branch_taken_0x2e49d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E49DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E49D8u;
            // 0x2e49dc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e49d8) {
            ctx->pc = 0x2E4A2Cu;
            goto label_2e4a2c;
        }
    }
    ctx->pc = 0x2E49E0u;
label_2e49e0:
    // 0x2e49e0: 0xc0b8cbc  jal         func_2E32F0
label_2e49e4:
    if (ctx->pc == 0x2E49E4u) {
        ctx->pc = 0x2E49E4u;
            // 0x2e49e4: 0x27a40010  addiu       $a0, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x2E49E8u;
        goto label_2e49e8;
    }
    ctx->pc = 0x2E49E0u;
    SET_GPR_U32(ctx, 31, 0x2E49E8u);
    ctx->pc = 0x2E49E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E49E0u;
            // 0x2e49e4: 0x27a40010  addiu       $a0, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E32F0u;
    if (runtime->hasFunction(0x2E32F0u)) {
        auto targetFn = runtime->lookupFunction(0x2E32F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E49E8u; }
        if (ctx->pc != 0x2E49E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackVector__FPfP12RS_STACKDATA_0x2e32f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E49E8u; }
        if (ctx->pc != 0x2E49E8u) { return; }
    }
    ctx->pc = 0x2E49E8u;
label_2e49e8:
    // 0x2e49e8: 0x8f829ed0  lw          $v0, -0x6130($gp)
    ctx->pc = 0x2e49e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942416)));
label_2e49ec:
    // 0x2e49ec: 0x8c440008  lw          $a0, 0x8($v0)
    ctx->pc = 0x2e49ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_2e49f0:
    // 0x2e49f0: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x2e49f0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2e49f4:
    // 0x2e49f4: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x2e49f4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_2e49f8:
    // 0x2e49f8: 0x320f809  jalr        $t9
label_2e49fc:
    if (ctx->pc == 0x2E49FCu) {
        ctx->pc = 0x2E49FCu;
            // 0x2e49fc: 0x27a50020  addiu       $a1, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x2E4A00u;
        goto label_2e4a00;
    }
    ctx->pc = 0x2E49F8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2E4A00u);
        ctx->pc = 0x2E49FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E49F8u;
            // 0x2e49fc: 0x27a50020  addiu       $a1, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2E4A00u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2E4A00u; }
            if (ctx->pc != 0x2E4A00u) { return; }
        }
        }
    }
    ctx->pc = 0x2E4A00u;
label_2e4a00:
    // 0x2e4a00: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x2e4a00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_2e4a04:
    // 0x2e4a04: 0x27a60010  addiu       $a2, $sp, 0x10
    ctx->pc = 0x2e4a04u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_2e4a08:
    // 0x2e4a08: 0xc041c38  jal         func_1070E0
label_2e4a0c:
    if (ctx->pc == 0x2E4A0Cu) {
        ctx->pc = 0x2E4A0Cu;
            // 0x2e4a0c: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2E4A10u;
        goto label_2e4a10;
    }
    ctx->pc = 0x2E4A08u;
    SET_GPR_U32(ctx, 31, 0x2E4A10u);
    ctx->pc = 0x2E4A0Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E4A08u;
            // 0x2e4a0c: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1070E0u;
    if (runtime->hasFunction(0x1070E0u)) {
        auto targetFn = runtime->lookupFunction(0x1070E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E4A10u; }
        if (ctx->pc != 0x2E4A10u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0AddVector_0x1070e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E4A10u; }
        if (ctx->pc != 0x2E4A10u) { return; }
    }
    ctx->pc = 0x2E4A10u;
label_2e4a10:
    // 0x2e4a10: 0x8f829ed0  lw          $v0, -0x6130($gp)
    ctx->pc = 0x2e4a10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942416)));
label_2e4a14:
    // 0x2e4a14: 0x8c440008  lw          $a0, 0x8($v0)
    ctx->pc = 0x2e4a14u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_2e4a18:
    // 0x2e4a18: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x2e4a18u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2e4a1c:
    // 0x2e4a1c: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x2e4a1cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_2e4a20:
    // 0x2e4a20: 0x320f809  jalr        $t9
label_2e4a24:
    if (ctx->pc == 0x2E4A24u) {
        ctx->pc = 0x2E4A24u;
            // 0x2e4a24: 0x27a50020  addiu       $a1, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x2E4A28u;
        goto label_2e4a28;
    }
    ctx->pc = 0x2E4A20u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2E4A28u);
        ctx->pc = 0x2E4A24u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E4A20u;
            // 0x2e4a24: 0x27a50020  addiu       $a1, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2E4A28u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2E4A28u; }
            if (ctx->pc != 0x2E4A28u) { return; }
        }
        }
    }
    ctx->pc = 0x2E4A28u;
label_2e4a28:
    // 0x2e4a28: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2e4a28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2e4a2c:
    // 0x2e4a2c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2e4a2cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2e4a30:
    // 0x2e4a30: 0x3e00008  jr          $ra
label_2e4a34:
    if (ctx->pc == 0x2E4A34u) {
        ctx->pc = 0x2E4A34u;
            // 0x2e4a34: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x2E4A38u;
        goto label_fallthrough_0x2e4a30;
    }
    ctx->pc = 0x2E4A30u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E4A34u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E4A30u;
            // 0x2e4a34: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x2e4a30:
    ctx->pc = 0x2E4A38u;
}
