#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: Step__11CWaterFrameFv
// Address: 0x185b60 - 0x185bb4
void Step__11CWaterFrameFv_0x185b60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Step__11CWaterFrameFv_0x185b60");
#endif

    switch (ctx->pc) {
        case 0x185b60u: goto label_185b60;
        case 0x185b64u: goto label_185b64;
        case 0x185b68u: goto label_185b68;
        case 0x185b6cu: goto label_185b6c;
        case 0x185b70u: goto label_185b70;
        case 0x185b74u: goto label_185b74;
        case 0x185b78u: goto label_185b78;
        case 0x185b7cu: goto label_185b7c;
        case 0x185b80u: goto label_185b80;
        case 0x185b84u: goto label_185b84;
        case 0x185b88u: goto label_185b88;
        case 0x185b8cu: goto label_185b8c;
        case 0x185b90u: goto label_185b90;
        case 0x185b94u: goto label_185b94;
        case 0x185b98u: goto label_185b98;
        case 0x185b9cu: goto label_185b9c;
        case 0x185ba0u: goto label_185ba0;
        case 0x185ba4u: goto label_185ba4;
        case 0x185ba8u: goto label_185ba8;
        case 0x185bacu: goto label_185bac;
        case 0x185bb0u: goto label_185bb0;
        default: break;
    }

    ctx->pc = 0x185b60u;

label_185b60:
    // 0x185b60: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x185b60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_185b64:
    // 0x185b64: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x185b64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_185b68:
    // 0x185b68: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x185b68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_185b6c:
    // 0x185b6c: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x185b6cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_185b70:
    // 0x185b70: 0x8f39004c  lw          $t9, 0x4C($t9)
    ctx->pc = 0x185b70u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 76)));
label_185b74:
    // 0x185b74: 0x320f809  jalr        $t9
label_185b78:
    if (ctx->pc == 0x185B78u) {
        ctx->pc = 0x185B78u;
            // 0x185b78: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x185B7Cu;
        goto label_185b7c;
    }
    ctx->pc = 0x185B74u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x185B7Cu);
        ctx->pc = 0x185B78u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x185B74u;
            // 0x185b78: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x185B7Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x185B7Cu; }
            if (ctx->pc != 0x185B7Cu) { return; }
        }
        }
    }
    ctx->pc = 0x185B7Cu;
label_185b7c:
    // 0x185b7c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x185b7cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_185b80:
    // 0x185b80: 0x10800008  beqz        $a0, . + 4 + (0x8 << 2)
label_185b84:
    if (ctx->pc == 0x185B84u) {
        ctx->pc = 0x185B88u;
        goto label_185b88;
    }
    ctx->pc = 0x185B80u;
    {
        const bool branch_taken_0x185b80 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x185b80) {
            ctx->pc = 0x185BA4u;
            goto label_185ba4;
        }
    }
    ctx->pc = 0x185B88u;
label_185b88:
    // 0x185b88: 0x8e030114  lw          $v1, 0x114($s0)
    ctx->pc = 0x185b88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 276)));
label_185b8c:
    // 0x185b8c: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
label_185b90:
    if (ctx->pc == 0x185B90u) {
        ctx->pc = 0x185B94u;
        goto label_185b94;
    }
    ctx->pc = 0x185B8Cu;
    {
        const bool branch_taken_0x185b8c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x185b8c) {
            ctx->pc = 0x185B9Cu;
            goto label_185b9c;
        }
    }
    ctx->pc = 0x185B94u;
label_185b94:
    // 0x185b94: 0x10000004  b           . + 4 + (0x4 << 2)
label_185b98:
    if (ctx->pc == 0x185B98u) {
        ctx->pc = 0x185B98u;
            // 0x185b98: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->pc = 0x185B9Cu;
        goto label_185b9c;
    }
    ctx->pc = 0x185B94u;
    {
        const bool branch_taken_0x185b94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x185B98u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x185B94u;
            // 0x185b98: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x185b94) {
            ctx->pc = 0x185BA8u;
            goto label_185ba8;
        }
    }
    ctx->pc = 0x185B9Cu;
label_185b9c:
    // 0x185b9c: 0xc061210  jal         func_184840
label_185ba0:
    if (ctx->pc == 0x185BA0u) {
        ctx->pc = 0x185BA4u;
        goto label_185ba4;
    }
    ctx->pc = 0x185B9Cu;
    SET_GPR_U32(ctx, 31, 0x185BA4u);
    ctx->pc = 0x184840u;
    if (runtime->hasFunction(0x184840u)) {
        auto targetFn = runtime->lookupFunction(0x184840u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x185BA4u; }
        if (ctx->pc != 0x185BA4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Hamon__6CWaterFv_0x184840(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x185BA4u; }
        if (ctx->pc != 0x185BA4u) { return; }
    }
    ctx->pc = 0x185BA4u;
label_185ba4:
    // 0x185ba4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x185ba4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_185ba8:
    // 0x185ba8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x185ba8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_185bac:
    // 0x185bac: 0x3e00008  jr          $ra
label_185bb0:
    if (ctx->pc == 0x185BB0u) {
        ctx->pc = 0x185BB0u;
            // 0x185bb0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x185BB4u;
        goto label_fallthrough_0x185bac;
    }
    ctx->pc = 0x185BACu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x185BB0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x185BACu;
            // 0x185bb0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x185bac:
    ctx->pc = 0x185BB4u;
}
