#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: GetCaptionOff__6ClsMesFv
// Address: 0x151fd0 - 0x152018
void GetCaptionOff__6ClsMesFv_0x151fd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetCaptionOff__6ClsMesFv_0x151fd0");
#endif

    switch (ctx->pc) {
        case 0x151fe4u: goto label_151fe4;
        default: break;
    }

    ctx->pc = 0x151fd0u;

    // 0x151fd0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x151fd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x151fd4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x151fd4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x151fd8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x151fd8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x151fdc: 0xc064220  jal         func_190880
    ctx->pc = 0x151FDCu;
    SET_GPR_U32(ctx, 31, 0x151FE4u);
    ctx->pc = 0x151FE0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x151FDCu;
            // 0x151fe0: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x190880u;
    if (runtime->hasFunction(0x190880u)) {
        auto targetFn = runtime->lookupFunction(0x190880u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x151FE4u; }
        if (ctx->pc != 0x151FE4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetSaveData__Fv_0x190880(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x151FE4u; }
        if (ctx->pc != 0x151FE4u) { return; }
    }
    ctx->pc = 0x151FE4u;
label_151fe4:
    // 0x151fe4: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x151FE4u;
    {
        const bool branch_taken_0x151fe4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x151FE8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x151FE4u;
            // 0x151fe8: 0x3c010001  lui         $at, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x151fe4) {
            ctx->pc = 0x152004u;
            goto label_152004;
        }
    }
    ctx->pc = 0x151FECu;
    // 0x151fec: 0x3421c574  ori         $at, $at, 0xC574
    ctx->pc = 0x151fecu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)50548);
    // 0x151ff0: 0x411021  addu        $v0, $v0, $at
    ctx->pc = 0x151ff0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 1)));
    // 0x151ff4: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x151FF4u;
    {
        const bool branch_taken_0x151ff4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x151ff4) {
            ctx->pc = 0x152004u;
            goto label_152004;
        }
    }
    ctx->pc = 0x151FFCu;
    // 0x151ffc: 0x80500034  lb          $s0, 0x34($v0)
    ctx->pc = 0x151ffcu;
    SET_GPR_S32(ctx, 16, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 52)));
    // 0x152000: 0x0  nop
    ctx->pc = 0x152000u;
    // NOP
label_152004:
    // 0x152004: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x152004u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x152008: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x152008u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x15200c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x15200cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x152010: 0x3e00008  jr          $ra
    ctx->pc = 0x152010u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x152014u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x152010u;
            // 0x152014: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x152018u;
}
