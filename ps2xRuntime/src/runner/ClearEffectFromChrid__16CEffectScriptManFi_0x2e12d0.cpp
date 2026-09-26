#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: ClearEffectFromChrid__16CEffectScriptManFi
// Address: 0x2e12d0 - 0x2e1340
void ClearEffectFromChrid__16CEffectScriptManFi_0x2e12d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ClearEffectFromChrid__16CEffectScriptManFi_0x2e12d0");
#endif

    switch (ctx->pc) {
        case 0x2e12f4u: goto label_2e12f4;
        case 0x2e130cu: goto label_2e130c;
        default: break;
    }

    ctx->pc = 0x2e12d0u;

    // 0x2e12d0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2e12d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2e12d4: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x2e12d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x2e12d8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2e12d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2e12dc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2e12dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2e12e0: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x2e12e0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e12e4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2e12e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2e12e8: 0x8c901188  lw          $s0, 0x1188($a0)
    ctx->pc = 0x2e12e8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4488)));
    // 0x2e12ec: 0x1200000e  beqz        $s0, . + 4 + (0xE << 2)
    ctx->pc = 0x2E12ECu;
    {
        const bool branch_taken_0x2e12ec = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E12F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E12ECu;
            // 0x2e12f0: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e12ec) {
            ctx->pc = 0x2E1328u;
            goto label_2e1328;
        }
    }
    ctx->pc = 0x2E12F4u;
label_2e12f4:
    // 0x2e12f4: 0x8e0300a8  lw          $v1, 0xA8($s0)
    ctx->pc = 0x2e12f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 168)));
    // 0x2e12f8: 0x14710006  bne         $v1, $s1, . + 4 + (0x6 << 2)
    ctx->pc = 0x2E12F8u;
    {
        const bool branch_taken_0x2e12f8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 17));
        ctx->pc = 0x2E12FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E12F8u;
            // 0x2e12fc: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e12f8) {
            ctx->pc = 0x2E1314u;
            goto label_2e1314;
        }
    }
    ctx->pc = 0x2E1300u;
    // 0x2e1300: 0x8e100144  lw          $s0, 0x144($s0)
    ctx->pc = 0x2e1300u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 324)));
    // 0x2e1304: 0xc0b84ec  jal         func_2E13B0
    ctx->pc = 0x2E1304u;
    SET_GPR_U32(ctx, 31, 0x2E130Cu);
    ctx->pc = 0x2E1308u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E1304u;
            // 0x2e1308: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E13B0u;
    if (runtime->hasFunction(0x2E13B0u)) {
        auto targetFn = runtime->lookupFunction(0x2E13B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E130Cu; }
        if (ctx->pc != 0x2E130Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DeleteEffSpt__16CEffectScriptManFP11_EFF_SCRIPT_0x2e13b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E130Cu; }
        if (ctx->pc != 0x2E130Cu) { return; }
    }
    ctx->pc = 0x2E130Cu;
label_2e130c:
    // 0x2e130c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2E130Cu;
    {
        const bool branch_taken_0x2e130c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e130c) {
            ctx->pc = 0x2E1320u;
            goto label_2e1320;
        }
    }
    ctx->pc = 0x2E1314u;
label_2e1314:
    // 0x2e1314: 0x0  nop
    ctx->pc = 0x2e1314u;
    // NOP
    // 0x2e1318: 0x8e100144  lw          $s0, 0x144($s0)
    ctx->pc = 0x2e1318u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 324)));
    // 0x2e131c: 0x0  nop
    ctx->pc = 0x2e131cu;
    // NOP
label_2e1320:
    // 0x2e1320: 0x1600fff4  bnez        $s0, . + 4 + (-0xC << 2)
    ctx->pc = 0x2E1320u;
    {
        const bool branch_taken_0x2e1320 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x2e1320) {
            ctx->pc = 0x2E12F4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2e12f4;
        }
    }
    ctx->pc = 0x2E1328u;
label_2e1328:
    // 0x2e1328: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x2e1328u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2e132c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2e132cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2e1330: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2e1330u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2e1334: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2e1334u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2e1338: 0x3e00008  jr          $ra
    ctx->pc = 0x2E1338u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E133Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E1338u;
            // 0x2e133c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2E1340u;
}
