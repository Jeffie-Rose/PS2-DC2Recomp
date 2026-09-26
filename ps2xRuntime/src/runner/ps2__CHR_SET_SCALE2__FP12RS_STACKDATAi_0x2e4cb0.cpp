#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _CHR_SET_SCALE2__FP12RS_STACKDATAi
// Address: 0x2e4cb0 - 0x2e4d1c
void ps2__CHR_SET_SCALE2__FP12RS_STACKDATAi_0x2e4cb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__CHR_SET_SCALE2__FP12RS_STACKDATAi_0x2e4cb0");
#endif

    switch (ctx->pc) {
        case 0x2e4cb0u: goto label_2e4cb0;
        case 0x2e4cb4u: goto label_2e4cb4;
        case 0x2e4cb8u: goto label_2e4cb8;
        case 0x2e4cbcu: goto label_2e4cbc;
        case 0x2e4cc0u: goto label_2e4cc0;
        case 0x2e4cc4u: goto label_2e4cc4;
        case 0x2e4cc8u: goto label_2e4cc8;
        case 0x2e4cccu: goto label_2e4ccc;
        case 0x2e4cd0u: goto label_2e4cd0;
        case 0x2e4cd4u: goto label_2e4cd4;
        case 0x2e4cd8u: goto label_2e4cd8;
        case 0x2e4cdcu: goto label_2e4cdc;
        case 0x2e4ce0u: goto label_2e4ce0;
        case 0x2e4ce4u: goto label_2e4ce4;
        case 0x2e4ce8u: goto label_2e4ce8;
        case 0x2e4cecu: goto label_2e4cec;
        case 0x2e4cf0u: goto label_2e4cf0;
        case 0x2e4cf4u: goto label_2e4cf4;
        case 0x2e4cf8u: goto label_2e4cf8;
        case 0x2e4cfcu: goto label_2e4cfc;
        case 0x2e4d00u: goto label_2e4d00;
        case 0x2e4d04u: goto label_2e4d04;
        case 0x2e4d08u: goto label_2e4d08;
        case 0x2e4d0cu: goto label_2e4d0c;
        case 0x2e4d10u: goto label_2e4d10;
        case 0x2e4d14u: goto label_2e4d14;
        case 0x2e4d18u: goto label_2e4d18;
        default: break;
    }

    ctx->pc = 0x2e4cb0u;

label_2e4cb0:
    // 0x2e4cb0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2e4cb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_2e4cb4:
    // 0x2e4cb4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2e4cb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_2e4cb8:
    // 0x2e4cb8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2e4cb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_2e4cbc:
    // 0x2e4cbc: 0xc0b8ca0  jal         func_2E3280
label_2e4cc0:
    if (ctx->pc == 0x2E4CC0u) {
        ctx->pc = 0x2E4CC0u;
            // 0x2e4cc0: 0x24900008  addiu       $s0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->pc = 0x2E4CC4u;
        goto label_2e4cc4;
    }
    ctx->pc = 0x2E4CBCu;
    SET_GPR_U32(ctx, 31, 0x2E4CC4u);
    ctx->pc = 0x2E4CC0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E4CBCu;
            // 0x2e4cc0: 0x24900008  addiu       $s0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E3280u;
    if (runtime->hasFunction(0x2E3280u)) {
        auto targetFn = runtime->lookupFunction(0x2E3280u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E4CC4u; }
        if (ctx->pc != 0x2E4CC4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x2e3280(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E4CC4u; }
        if (ctx->pc != 0x2E4CC4u) { return; }
    }
    ctx->pc = 0x2E4CC4u;
label_2e4cc4:
    // 0x2e4cc4: 0x23880  sll         $a3, $v0, 2
    ctx->pc = 0x2e4cc4u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_2e4cc8:
    // 0x2e4cc8: 0x8f829ed0  lw          $v0, -0x6130($gp)
    ctx->pc = 0x2e4cc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942416)));
label_2e4ccc:
    // 0x2e4ccc: 0xe21021  addu        $v0, $a3, $v0
    ctx->pc = 0x2e4cccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
label_2e4cd0:
    // 0x2e4cd0: 0x8c420010  lw          $v0, 0x10($v0)
    ctx->pc = 0x2e4cd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
label_2e4cd4:
    // 0x2e4cd4: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_2e4cd8:
    if (ctx->pc == 0x2E4CD8u) {
        ctx->pc = 0x2E4CD8u;
            // 0x2e4cd8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2E4CDCu;
        goto label_2e4cdc;
    }
    ctx->pc = 0x2E4CD4u;
    {
        const bool branch_taken_0x2e4cd4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E4CD8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E4CD4u;
            // 0x2e4cd8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e4cd4) {
            ctx->pc = 0x2E4CE4u;
            goto label_2e4ce4;
        }
    }
    ctx->pc = 0x2E4CDCu;
label_2e4cdc:
    // 0x2e4cdc: 0x1000000b  b           . + 4 + (0xB << 2)
label_2e4ce0:
    if (ctx->pc == 0x2E4CE0u) {
        ctx->pc = 0x2E4CE0u;
            // 0x2e4ce0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2E4CE4u;
        goto label_2e4ce4;
    }
    ctx->pc = 0x2E4CDCu;
    {
        const bool branch_taken_0x2e4cdc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E4CE0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E4CDCu;
            // 0x2e4ce0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e4cdc) {
            ctx->pc = 0x2E4D0Cu;
            goto label_2e4d0c;
        }
    }
    ctx->pc = 0x2E4CE4u;
label_2e4ce4:
    // 0x2e4ce4: 0xc0b8cbc  jal         func_2E32F0
label_2e4ce8:
    if (ctx->pc == 0x2E4CE8u) {
        ctx->pc = 0x2E4CE8u;
            // 0x2e4ce8: 0x27a40020  addiu       $a0, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x2E4CECu;
        goto label_2e4cec;
    }
    ctx->pc = 0x2E4CE4u;
    SET_GPR_U32(ctx, 31, 0x2E4CECu);
    ctx->pc = 0x2E4CE8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E4CE4u;
            // 0x2e4ce8: 0x27a40020  addiu       $a0, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E32F0u;
    if (runtime->hasFunction(0x2E32F0u)) {
        auto targetFn = runtime->lookupFunction(0x2E32F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E4CECu; }
        if (ctx->pc != 0x2E4CECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackVector__FPfP12RS_STACKDATA_0x2e32f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E4CECu; }
        if (ctx->pc != 0x2E4CECu) { return; }
    }
    ctx->pc = 0x2E4CECu;
label_2e4cec:
    // 0x2e4cec: 0x8f829ed0  lw          $v0, -0x6130($gp)
    ctx->pc = 0x2e4cecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942416)));
label_2e4cf0:
    // 0x2e4cf0: 0xe21021  addu        $v0, $a3, $v0
    ctx->pc = 0x2e4cf0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
label_2e4cf4:
    // 0x2e4cf4: 0x8c440010  lw          $a0, 0x10($v0)
    ctx->pc = 0x2e4cf4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
label_2e4cf8:
    // 0x2e4cf8: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x2e4cf8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2e4cfc:
    // 0x2e4cfc: 0x8f390028  lw          $t9, 0x28($t9)
    ctx->pc = 0x2e4cfcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 40)));
label_2e4d00:
    // 0x2e4d00: 0x320f809  jalr        $t9
label_2e4d04:
    if (ctx->pc == 0x2E4D04u) {
        ctx->pc = 0x2E4D04u;
            // 0x2e4d04: 0x27a50020  addiu       $a1, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x2E4D08u;
        goto label_2e4d08;
    }
    ctx->pc = 0x2E4D00u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2E4D08u);
        ctx->pc = 0x2E4D04u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E4D00u;
            // 0x2e4d04: 0x27a50020  addiu       $a1, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2E4D08u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2E4D08u; }
            if (ctx->pc != 0x2E4D08u) { return; }
        }
        }
    }
    ctx->pc = 0x2E4D08u;
label_2e4d08:
    // 0x2e4d08: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2e4d08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2e4d0c:
    // 0x2e4d0c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2e4d0cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_2e4d10:
    // 0x2e4d10: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2e4d10u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_2e4d14:
    // 0x2e4d14: 0x3e00008  jr          $ra
label_2e4d18:
    if (ctx->pc == 0x2E4D18u) {
        ctx->pc = 0x2E4D18u;
            // 0x2e4d18: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x2E4D1Cu;
        goto label_fallthrough_0x2e4d14;
    }
    ctx->pc = 0x2E4D14u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E4D18u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E4D14u;
            // 0x2e4d18: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x2e4d14:
    ctx->pc = 0x2E4D1Cu;
}
