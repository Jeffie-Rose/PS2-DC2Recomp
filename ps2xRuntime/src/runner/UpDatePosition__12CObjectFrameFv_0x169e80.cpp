#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: UpDatePosition__12CObjectFrameFv
// Address: 0x169e80 - 0x169ee4
void UpDatePosition__12CObjectFrameFv_0x169e80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("UpDatePosition__12CObjectFrameFv_0x169e80");
#endif

    switch (ctx->pc) {
        case 0x169e80u: goto label_169e80;
        case 0x169e84u: goto label_169e84;
        case 0x169e88u: goto label_169e88;
        case 0x169e8cu: goto label_169e8c;
        case 0x169e90u: goto label_169e90;
        case 0x169e94u: goto label_169e94;
        case 0x169e98u: goto label_169e98;
        case 0x169e9cu: goto label_169e9c;
        case 0x169ea0u: goto label_169ea0;
        case 0x169ea4u: goto label_169ea4;
        case 0x169ea8u: goto label_169ea8;
        case 0x169eacu: goto label_169eac;
        case 0x169eb0u: goto label_169eb0;
        case 0x169eb4u: goto label_169eb4;
        case 0x169eb8u: goto label_169eb8;
        case 0x169ebcu: goto label_169ebc;
        case 0x169ec0u: goto label_169ec0;
        case 0x169ec4u: goto label_169ec4;
        case 0x169ec8u: goto label_169ec8;
        case 0x169eccu: goto label_169ecc;
        case 0x169ed0u: goto label_169ed0;
        case 0x169ed4u: goto label_169ed4;
        case 0x169ed8u: goto label_169ed8;
        case 0x169edcu: goto label_169edc;
        case 0x169ee0u: goto label_169ee0;
        default: break;
    }

    ctx->pc = 0x169e80u;

label_169e80:
    // 0x169e80: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x169e80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_169e84:
    // 0x169e84: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x169e84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_169e88:
    // 0x169e88: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x169e88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_169e8c:
    // 0x169e8c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x169e8cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_169e90:
    // 0x169e90: 0x8c840070  lw          $a0, 0x70($a0)
    ctx->pc = 0x169e90u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 112)));
label_169e94:
    // 0x169e94: 0x1080000f  beqz        $a0, . + 4 + (0xF << 2)
label_169e98:
    if (ctx->pc == 0x169E98u) {
        ctx->pc = 0x169E9Cu;
        goto label_169e9c;
    }
    ctx->pc = 0x169E94u;
    {
        const bool branch_taken_0x169e94 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x169e94) {
            ctx->pc = 0x169ED4u;
            goto label_169ed4;
        }
    }
    ctx->pc = 0x169E9Cu;
label_169e9c:
    // 0x169e9c: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x169e9cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_169ea0:
    // 0x169ea0: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x169ea0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_169ea4:
    // 0x169ea4: 0x320f809  jalr        $t9
label_169ea8:
    if (ctx->pc == 0x169EA8u) {
        ctx->pc = 0x169EA8u;
            // 0x169ea8: 0x26050010  addiu       $a1, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->pc = 0x169EACu;
        goto label_169eac;
    }
    ctx->pc = 0x169EA4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x169EACu);
        ctx->pc = 0x169EA8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x169EA4u;
            // 0x169ea8: 0x26050010  addiu       $a1, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x169EACu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x169EACu; }
            if (ctx->pc != 0x169EACu) { return; }
        }
        }
    }
    ctx->pc = 0x169EACu;
label_169eac:
    // 0x169eac: 0x8e040070  lw          $a0, 0x70($s0)
    ctx->pc = 0x169eacu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 112)));
label_169eb0:
    // 0x169eb0: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x169eb0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_169eb4:
    // 0x169eb4: 0x8f39001c  lw          $t9, 0x1C($t9)
    ctx->pc = 0x169eb4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 28)));
label_169eb8:
    // 0x169eb8: 0x320f809  jalr        $t9
label_169ebc:
    if (ctx->pc == 0x169EBCu) {
        ctx->pc = 0x169EBCu;
            // 0x169ebc: 0x26050020  addiu       $a1, $s0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
        ctx->pc = 0x169EC0u;
        goto label_169ec0;
    }
    ctx->pc = 0x169EB8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x169EC0u);
        ctx->pc = 0x169EBCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x169EB8u;
            // 0x169ebc: 0x26050020  addiu       $a1, $s0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x169EC0u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x169EC0u; }
            if (ctx->pc != 0x169EC0u) { return; }
        }
        }
    }
    ctx->pc = 0x169EC0u;
label_169ec0:
    // 0x169ec0: 0x8e040070  lw          $a0, 0x70($s0)
    ctx->pc = 0x169ec0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 112)));
label_169ec4:
    // 0x169ec4: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x169ec4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_169ec8:
    // 0x169ec8: 0x8f390028  lw          $t9, 0x28($t9)
    ctx->pc = 0x169ec8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 40)));
label_169ecc:
    // 0x169ecc: 0x320f809  jalr        $t9
label_169ed0:
    if (ctx->pc == 0x169ED0u) {
        ctx->pc = 0x169ED0u;
            // 0x169ed0: 0x26050030  addiu       $a1, $s0, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
        ctx->pc = 0x169ED4u;
        goto label_169ed4;
    }
    ctx->pc = 0x169ECCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x169ED4u);
        ctx->pc = 0x169ED0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x169ECCu;
            // 0x169ed0: 0x26050030  addiu       $a1, $s0, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x169ED4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x169ED4u; }
            if (ctx->pc != 0x169ED4u) { return; }
        }
        }
    }
    ctx->pc = 0x169ED4u;
label_169ed4:
    // 0x169ed4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x169ed4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_169ed8:
    // 0x169ed8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x169ed8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_169edc:
    // 0x169edc: 0x3e00008  jr          $ra
label_169ee0:
    if (ctx->pc == 0x169EE0u) {
        ctx->pc = 0x169EE0u;
            // 0x169ee0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x169EE4u;
        goto label_fallthrough_0x169edc;
    }
    ctx->pc = 0x169EDCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x169EE0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x169EDCu;
            // 0x169ee0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x169edc:
    ctx->pc = 0x169EE4u;
}
