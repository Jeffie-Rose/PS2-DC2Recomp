#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: InitAllData__6CSceneFv
// Address: 0x282e40 - 0x282e9c
void InitAllData__6CSceneFv_0x282e40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("InitAllData__6CSceneFv_0x282e40");
#endif

    switch (ctx->pc) {
        case 0x282e40u: goto label_282e40;
        case 0x282e44u: goto label_282e44;
        case 0x282e48u: goto label_282e48;
        case 0x282e4cu: goto label_282e4c;
        case 0x282e50u: goto label_282e50;
        case 0x282e54u: goto label_282e54;
        case 0x282e58u: goto label_282e58;
        case 0x282e5cu: goto label_282e5c;
        case 0x282e60u: goto label_282e60;
        case 0x282e64u: goto label_282e64;
        case 0x282e68u: goto label_282e68;
        case 0x282e6cu: goto label_282e6c;
        case 0x282e70u: goto label_282e70;
        case 0x282e74u: goto label_282e74;
        case 0x282e78u: goto label_282e78;
        case 0x282e7cu: goto label_282e7c;
        case 0x282e80u: goto label_282e80;
        case 0x282e84u: goto label_282e84;
        case 0x282e88u: goto label_282e88;
        case 0x282e8cu: goto label_282e8c;
        case 0x282e90u: goto label_282e90;
        case 0x282e94u: goto label_282e94;
        case 0x282e98u: goto label_282e98;
        default: break;
    }

    ctx->pc = 0x282e40u;

label_282e40:
    // 0x282e40: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x282e40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_282e44:
    // 0x282e44: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x282e44u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
label_282e48:
    // 0x282e48: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x282e48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_282e4c:
    // 0x282e4c: 0x810821  addu        $at, $a0, $at
    ctx->pc = 0x282e4cu;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 1)));
label_282e50:
    // 0x282e50: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x282e50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_282e54:
    // 0x282e54: 0x8c390548  lw          $t9, 0x548($at)
    ctx->pc = 0x282e54u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 1352)));
label_282e58:
    // 0x282e58: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x282e58u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_282e5c:
    // 0x282e5c: 0x320f809  jalr        $t9
label_282e60:
    if (ctx->pc == 0x282E60u) {
        ctx->pc = 0x282E60u;
            // 0x282e60: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x282E64u;
        goto label_282e64;
    }
    ctx->pc = 0x282E5Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x282E64u);
        ctx->pc = 0x282E60u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x282E5Cu;
            // 0x282e60: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x282E64u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x282E64u; }
            if (ctx->pc != 0x282E64u) { return; }
        }
        }
    }
    ctx->pc = 0x282E64u;
label_282e64:
    // 0x282e64: 0xae002f6c  sw          $zero, 0x2F6C($s0)
    ctx->pc = 0x282e64u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12140), GPR_U32(ctx, 0));
label_282e68:
    // 0x282e68: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x282e68u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_282e6c:
    // 0x282e6c: 0xae002f68  sw          $zero, 0x2F68($s0)
    ctx->pc = 0x282e6cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12136), GPR_U32(ctx, 0));
label_282e70:
    // 0x282e70: 0xae003040  sw          $zero, 0x3040($s0)
    ctx->pc = 0x282e70u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12352), GPR_U32(ctx, 0));
label_282e74:
    // 0x282e74: 0xae032e60  sw          $v1, 0x2E60($s0)
    ctx->pc = 0x282e74u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 11872), GPR_U32(ctx, 3));
label_282e78:
    // 0x282e78: 0xae032e64  sw          $v1, 0x2E64($s0)
    ctx->pc = 0x282e78u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 11876), GPR_U32(ctx, 3));
label_282e7c:
    // 0x282e7c: 0xae032e68  sw          $v1, 0x2E68($s0)
    ctx->pc = 0x282e7cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 11880), GPR_U32(ctx, 3));
label_282e80:
    // 0x282e80: 0xae032e6c  sw          $v1, 0x2E6C($s0)
    ctx->pc = 0x282e80u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 11884), GPR_U32(ctx, 3));
label_282e84:
    // 0x282e84: 0xae003038  sw          $zero, 0x3038($s0)
    ctx->pc = 0x282e84u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12344), GPR_U32(ctx, 0));
label_282e88:
    // 0x282e88: 0xae00303c  sw          $zero, 0x303C($s0)
    ctx->pc = 0x282e88u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12348), GPR_U32(ctx, 0));
label_282e8c:
    // 0x282e8c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x282e8cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_282e90:
    // 0x282e90: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x282e90u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_282e94:
    // 0x282e94: 0x3e00008  jr          $ra
label_282e98:
    if (ctx->pc == 0x282E98u) {
        ctx->pc = 0x282E98u;
            // 0x282e98: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x282E9Cu;
        goto label_fallthrough_0x282e94;
    }
    ctx->pc = 0x282E94u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x282E98u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x282E94u;
            // 0x282e98: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x282e94:
    ctx->pc = 0x282E9Cu;
}
