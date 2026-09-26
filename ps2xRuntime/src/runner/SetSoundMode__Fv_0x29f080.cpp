#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: SetSoundMode__Fv
// Address: 0x29f080 - 0x29f0e0
void SetSoundMode__Fv_0x29f080(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SetSoundMode__Fv_0x29f080");
#endif

    switch (ctx->pc) {
        case 0x29f090u: goto label_29f090;
        case 0x29f0c0u: goto label_29f0c0;
        case 0x29f0d4u: goto label_29f0d4;
        default: break;
    }

    ctx->pc = 0x29f080u;

    // 0x29f080: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x29f080u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x29f084: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x29f084u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x29f088: 0xc064220  jal         func_190880
    ctx->pc = 0x29F088u;
    SET_GPR_U32(ctx, 31, 0x29F090u);
    ctx->pc = 0x190880u;
    if (runtime->hasFunction(0x190880u)) {
        auto targetFn = runtime->lookupFunction(0x190880u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29F090u; }
        if (ctx->pc != 0x29F090u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetSaveData__Fv_0x190880(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29F090u; }
        if (ctx->pc != 0x29F090u) { return; }
    }
    ctx->pc = 0x29F090u;
label_29f090:
    // 0x29f090: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x29F090u;
    {
        const bool branch_taken_0x29f090 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x29F094u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29F090u;
            // 0x29f094: 0x3c010001  lui         $at, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29f090) {
            ctx->pc = 0x29F0D4u;
            goto label_29f0d4;
        }
    }
    ctx->pc = 0x29F098u;
    // 0x29f098: 0x3421c574  ori         $at, $at, 0xC574
    ctx->pc = 0x29f098u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)50548);
    // 0x29f09c: 0x411021  addu        $v0, $v0, $at
    ctx->pc = 0x29f09cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 1)));
    // 0x29f0a0: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x29F0A0u;
    {
        const bool branch_taken_0x29f0a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x29F0A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29F0A0u;
            // 0x29f0a4: 0x27848af0  addiu       $a0, $gp, -0x7510 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 28), 4294937328));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29f0a0) {
            ctx->pc = 0x29F0C8u;
            goto label_29f0c8;
        }
    }
    ctx->pc = 0x29F0A8u;
    // 0x29f0a8: 0x8c42000c  lw          $v0, 0xC($v0)
    ctx->pc = 0x29f0a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x29f0ac: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x29F0ACu;
    {
        const bool branch_taken_0x29f0ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x29F0B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29F0ACu;
            // 0x29f0b0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29f0ac) {
            ctx->pc = 0x29F0CCu;
            goto label_29f0cc;
        }
    }
    ctx->pc = 0x29F0B4u;
    // 0x29f0b4: 0x27848af0  addiu       $a0, $gp, -0x7510
    ctx->pc = 0x29f0b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 28), 4294937328));
    // 0x29f0b8: 0xc0628c8  jal         func_18A320
    ctx->pc = 0x29F0B8u;
    SET_GPR_U32(ctx, 31, 0x29F0C0u);
    ctx->pc = 0x29F0BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x29F0B8u;
            // 0x29f0bc: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18A320u;
    if (runtime->hasFunction(0x18A320u)) {
        auto targetFn = runtime->lookupFunction(0x18A320u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29F0C0u; }
        if (ctx->pc != 0x29F0C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetStereoMode__6CSoundFi_0x18a320(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29F0C0u; }
        if (ctx->pc != 0x29F0C0u) { return; }
    }
    ctx->pc = 0x29F0C0u;
label_29f0c0:
    // 0x29f0c0: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x29F0C0u;
    {
        const bool branch_taken_0x29f0c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29F0C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29F0C0u;
            // 0x29f0c4: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29f0c0) {
            ctx->pc = 0x29F0D8u;
            goto label_29f0d8;
        }
    }
    ctx->pc = 0x29F0C8u;
label_29f0c8:
    // 0x29f0c8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x29f0c8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_29f0cc:
    // 0x29f0cc: 0xc0628c8  jal         func_18A320
    ctx->pc = 0x29F0CCu;
    SET_GPR_U32(ctx, 31, 0x29F0D4u);
    ctx->pc = 0x18A320u;
    if (runtime->hasFunction(0x18A320u)) {
        auto targetFn = runtime->lookupFunction(0x18A320u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29F0D4u; }
        if (ctx->pc != 0x29F0D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetStereoMode__6CSoundFi_0x18a320(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29F0D4u; }
        if (ctx->pc != 0x29F0D4u) { return; }
    }
    ctx->pc = 0x29F0D4u;
label_29f0d4:
    // 0x29f0d4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x29f0d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_29f0d8:
    // 0x29f0d8: 0x3e00008  jr          $ra
    ctx->pc = 0x29F0D8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29F0DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29F0D8u;
            // 0x29f0dc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x29F0E0u;
}
