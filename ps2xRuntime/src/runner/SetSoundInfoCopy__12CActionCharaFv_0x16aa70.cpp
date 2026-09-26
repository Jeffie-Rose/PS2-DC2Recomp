#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: SetSoundInfoCopy__12CActionCharaFv
// Address: 0x16aa70 - 0x16aac4
void SetSoundInfoCopy__12CActionCharaFv_0x16aa70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SetSoundInfoCopy__12CActionCharaFv_0x16aa70");
#endif

    switch (ctx->pc) {
        case 0x16aa8cu: goto label_16aa8c;
        case 0x16aa9cu: goto label_16aa9c;
        default: break;
    }

    ctx->pc = 0x16aa70u;

    // 0x16aa70: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x16aa70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x16aa74: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x16aa74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x16aa78: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x16aa78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x16aa7c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x16aa7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x16aa80: 0x8c900678  lw          $s0, 0x678($a0)
    ctx->pc = 0x16aa80u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1656)));
    // 0x16aa84: 0x12000009  beqz        $s0, . + 4 + (0x9 << 2)
    ctx->pc = 0x16AA84u;
    {
        const bool branch_taken_0x16aa84 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x16AA88u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16AA84u;
            // 0x16aa88: 0x2491057c  addiu       $s1, $a0, 0x57C (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), 1404));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16aa84) {
            ctx->pc = 0x16AAACu;
            goto label_16aaac;
        }
    }
    ctx->pc = 0x16AA8Cu;
label_16aa8c:
    // 0x16aa8c: 0x2604057c  addiu       $a0, $s0, 0x57C
    ctx->pc = 0x16aa8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1404));
    // 0x16aa90: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x16aa90u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16aa94: 0xc049c18  jal         func_127060
    ctx->pc = 0x16AA94u;
    SET_GPR_U32(ctx, 31, 0x16AA9Cu);
    ctx->pc = 0x16AA98u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16AA94u;
            // 0x16aa98: 0x24060028  addiu       $a2, $zero, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
        ctx->in_delay_slot = false;
    ctx->pc = 0x127060u;
    if (runtime->hasFunction(0x127060u)) {
        auto targetFn = runtime->lookupFunction(0x127060u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16AA9Cu; }
        if (ctx->pc != 0x16AA9Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        memcpy_0x127060(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16AA9Cu; }
        if (ctx->pc != 0x16AA9Cu) { return; }
    }
    ctx->pc = 0x16AA9Cu;
label_16aa9c:
    // 0x16aa9c: 0x8e100678  lw          $s0, 0x678($s0)
    ctx->pc = 0x16aa9cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1656)));
    // 0x16aaa0: 0x0  nop
    ctx->pc = 0x16aaa0u;
    // NOP
    // 0x16aaa4: 0x1600fff9  bnez        $s0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x16AAA4u;
    {
        const bool branch_taken_0x16aaa4 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x16aaa4) {
            ctx->pc = 0x16AA8Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_16aa8c;
        }
    }
    ctx->pc = 0x16AAACu;
label_16aaac:
    // 0x16aaac: 0x0  nop
    ctx->pc = 0x16aaacu;
    // NOP
    // 0x16aab0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x16aab0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x16aab4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x16aab4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x16aab8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x16aab8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16aabc: 0x3e00008  jr          $ra
    ctx->pc = 0x16AABCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16AAC0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16AABCu;
            // 0x16aac0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x16AAC4u;
}
