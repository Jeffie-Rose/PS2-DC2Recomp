#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _FCAMERA_STEP__FP12RS_STACKDATAi
// Address: 0x268c70 - 0x268cd8
void ps2__FCAMERA_STEP__FP12RS_STACKDATAi_0x268c70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__FCAMERA_STEP__FP12RS_STACKDATAi_0x268c70");
#endif

    switch (ctx->pc) {
        case 0x268c70u: goto label_268c70;
        case 0x268c74u: goto label_268c74;
        case 0x268c78u: goto label_268c78;
        case 0x268c7cu: goto label_268c7c;
        case 0x268c80u: goto label_268c80;
        case 0x268c84u: goto label_268c84;
        case 0x268c88u: goto label_268c88;
        case 0x268c8cu: goto label_268c8c;
        case 0x268c90u: goto label_268c90;
        case 0x268c94u: goto label_268c94;
        case 0x268c98u: goto label_268c98;
        case 0x268c9cu: goto label_268c9c;
        case 0x268ca0u: goto label_268ca0;
        case 0x268ca4u: goto label_268ca4;
        case 0x268ca8u: goto label_268ca8;
        case 0x268cacu: goto label_268cac;
        case 0x268cb0u: goto label_268cb0;
        case 0x268cb4u: goto label_268cb4;
        case 0x268cb8u: goto label_268cb8;
        case 0x268cbcu: goto label_268cbc;
        case 0x268cc0u: goto label_268cc0;
        case 0x268cc4u: goto label_268cc4;
        case 0x268cc8u: goto label_268cc8;
        case 0x268cccu: goto label_268ccc;
        case 0x268cd0u: goto label_268cd0;
        case 0x268cd4u: goto label_268cd4;
        default: break;
    }

    ctx->pc = 0x268c70u;

label_268c70:
    // 0x268c70: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x268c70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_268c74:
    // 0x268c74: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x268c74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_268c78:
    // 0x268c78: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x268c78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_268c7c:
    // 0x268c7c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x268c7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_268c80:
    // 0x268c80: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x268c80u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_268c84:
    // 0x268c84: 0x8f8497dc  lw          $a0, -0x6824($gp)
    ctx->pc = 0x268c84u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940636)));
label_268c88:
    // 0x268c88: 0xc0a0e30  jal         func_2838C0
label_268c8c:
    if (ctx->pc == 0x268C8Cu) {
        ctx->pc = 0x268C8Cu;
            // 0x268c8c: 0x8c852e54  lw          $a1, 0x2E54($a0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 11860)));
        ctx->pc = 0x268C90u;
        goto label_268c90;
    }
    ctx->pc = 0x268C88u;
    SET_GPR_U32(ctx, 31, 0x268C90u);
    ctx->pc = 0x268C8Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x268C88u;
            // 0x268c8c: 0x8c852e54  lw          $a1, 0x2E54($a0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 11860)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2838C0u;
    if (runtime->hasFunction(0x2838C0u)) {
        auto targetFn = runtime->lookupFunction(0x2838C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x268C90u; }
        if (ctx->pc != 0x268C90u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetCamera__6CSceneFi_0x2838c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x268C90u; }
        if (ctx->pc != 0x268C90u) { return; }
    }
    ctx->pc = 0x268C90u;
label_268c90:
    // 0x268c90: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x268c90u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_268c94:
    // 0x268c94: 0x16000003  bnez        $s0, . + 4 + (0x3 << 2)
label_268c98:
    if (ctx->pc == 0x268C98u) {
        ctx->pc = 0x268C98u;
            // 0x268c98: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x268C9Cu;
        goto label_268c9c;
    }
    ctx->pc = 0x268C94u;
    {
        const bool branch_taken_0x268c94 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x268C98u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x268C94u;
            // 0x268c98: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x268c94) {
            ctx->pc = 0x268CA4u;
            goto label_268ca4;
        }
    }
    ctx->pc = 0x268C9Cu;
label_268c9c:
    // 0x268c9c: 0x10000009  b           . + 4 + (0x9 << 2)
label_268ca0:
    if (ctx->pc == 0x268CA0u) {
        ctx->pc = 0x268CA0u;
            // 0x268ca0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x268CA4u;
        goto label_268ca4;
    }
    ctx->pc = 0x268C9Cu;
    {
        const bool branch_taken_0x268c9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x268CA0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x268C9Cu;
            // 0x268ca0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x268c9c) {
            ctx->pc = 0x268CC4u;
            goto label_268cc4;
        }
    }
    ctx->pc = 0x268CA4u;
label_268ca4:
    // 0x268ca4: 0xc097e18  jal         func_25F860
label_268ca8:
    if (ctx->pc == 0x268CA8u) {
        ctx->pc = 0x268CACu;
        goto label_268cac;
    }
    ctx->pc = 0x268CA4u;
    SET_GPR_U32(ctx, 31, 0x268CACu);
    ctx->pc = 0x25F860u;
    if (runtime->hasFunction(0x25F860u)) {
        auto targetFn = runtime->lookupFunction(0x25F860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x268CACu; }
        if (ctx->pc != 0x268CACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x25f860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x268CACu; }
        if (ctx->pc != 0x268CACu) { return; }
    }
    ctx->pc = 0x268CACu;
label_268cac:
    // 0x268cac: 0x8e190060  lw          $t9, 0x60($s0)
    ctx->pc = 0x268cacu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 96)));
label_268cb0:
    // 0x268cb0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x268cb0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_268cb4:
    // 0x268cb4: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x268cb4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_268cb8:
    // 0x268cb8: 0x320f809  jalr        $t9
label_268cbc:
    if (ctx->pc == 0x268CBCu) {
        ctx->pc = 0x268CBCu;
            // 0x268cbc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x268CC0u;
        goto label_268cc0;
    }
    ctx->pc = 0x268CB8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x268CC0u);
        ctx->pc = 0x268CBCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x268CB8u;
            // 0x268cbc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x268CC0u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x268CC0u; }
            if (ctx->pc != 0x268CC0u) { return; }
        }
        }
    }
    ctx->pc = 0x268CC0u;
label_268cc0:
    // 0x268cc0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x268cc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_268cc4:
    // 0x268cc4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x268cc4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_268cc8:
    // 0x268cc8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x268cc8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_268ccc:
    // 0x268ccc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x268cccu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_268cd0:
    // 0x268cd0: 0x3e00008  jr          $ra
label_268cd4:
    if (ctx->pc == 0x268CD4u) {
        ctx->pc = 0x268CD4u;
            // 0x268cd4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x268CD8u;
        goto label_fallthrough_0x268cd0;
    }
    ctx->pc = 0x268CD0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x268CD4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x268CD0u;
            // 0x268cd4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x268cd0:
    ctx->pc = 0x268CD8u;
}
