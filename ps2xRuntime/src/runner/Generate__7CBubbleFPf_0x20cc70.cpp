#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: Generate__7CBubbleFPf
// Address: 0x20cc70 - 0x20ccf8
void Generate__7CBubbleFPf_0x20cc70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Generate__7CBubbleFPf_0x20cc70");
#endif

    switch (ctx->pc) {
        case 0x20ccd4u: goto label_20ccd4;
        default: break;
    }

    ctx->pc = 0x20cc70u;

    // 0x20cc70: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x20cc70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x20cc74: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x20cc74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x20cc78: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x20cc78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x20cc7c: 0x80820001  lb          $v0, 0x1($a0)
    ctx->pc = 0x20cc7cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 1)));
    // 0x20cc80: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x20CC80u;
    {
        const bool branch_taken_0x20cc80 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x20CC84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20CC80u;
            // 0x20cc84: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20cc80) {
            ctx->pc = 0x20CCA4u;
            goto label_20cca4;
        }
    }
    ctx->pc = 0x20CC88u;
    // 0x20cc88: 0x8e030030  lw          $v1, 0x30($s0)
    ctx->pc = 0x20cc88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x20cc8c: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x20cc8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x20cc90: 0x43082b  sltu        $at, $v0, $v1
    ctx->pc = 0x20cc90u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x20cc94: 0x14200003  bnez        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x20CC94u;
    {
        const bool branch_taken_0x20cc94 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x20CC98u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20CC94u;
            // 0x20cc98: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20cc94) {
            ctx->pc = 0x20CCA4u;
            goto label_20cca4;
        }
    }
    ctx->pc = 0x20CC9Cu;
    // 0x20cc9c: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x20CC9Cu;
    {
        const bool branch_taken_0x20cc9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20CCA0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20CC9Cu;
            // 0x20cca0: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20cc9c) {
            ctx->pc = 0x20CCECu;
            goto label_20ccec;
        }
    }
    ctx->pc = 0x20CCA4u;
label_20cca4:
    // 0x20cca4: 0x8e030030  lw          $v1, 0x30($s0)
    ctx->pc = 0x20cca4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x20cca8: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x20cca8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x20ccac: 0x43082b  sltu        $at, $v0, $v1
    ctx->pc = 0x20ccacu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x20ccb0: 0x14200003  bnez        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x20CCB0u;
    {
        const bool branch_taken_0x20ccb0 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x20CCB4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20CCB0u;
            // 0x20ccb4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20ccb0) {
            ctx->pc = 0x20CCC0u;
            goto label_20ccc0;
        }
    }
    ctx->pc = 0x20CCB8u;
    // 0x20ccb8: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x20CCB8u;
    {
        const bool branch_taken_0x20ccb8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x20ccb8) {
            ctx->pc = 0x20CCE8u;
            goto label_20cce8;
        }
    }
    ctx->pc = 0x20CCC0u;
label_20ccc0:
    // 0x20ccc0: 0x78a20000  lq          $v0, 0x0($a1)
    ctx->pc = 0x20ccc0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x20ccc4: 0x7e020010  sq          $v0, 0x10($s0)
    ctx->pc = 0x20ccc4u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 16), GPR_VEC(ctx, 2));
    // 0x20ccc8: 0x8e050004  lw          $a1, 0x4($s0)
    ctx->pc = 0x20ccc8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x20cccc: 0xc0832d8  jal         func_20CB60
    ctx->pc = 0x20CCCCu;
    SET_GPR_U32(ctx, 31, 0x20CCD4u);
    ctx->pc = 0x20CCD0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x20CCCCu;
            // 0x20ccd0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x20CB60u;
    if (runtime->hasFunction(0x20CB60u)) {
        auto targetFn = runtime->lookupFunction(0x20CB60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20CCD4u; }
        if (ctx->pc != 0x20CCD4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Generate__7CBubbleFi_0x20cb60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20CCD4u; }
        if (ctx->pc != 0x20CCD4u) { return; }
    }
    ctx->pc = 0x20CCD4u;
label_20ccd4:
    // 0x20ccd4: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x20ccd4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x20ccd8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x20ccd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x20ccdc: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x20ccdcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x20cce0: 0xae030004  sw          $v1, 0x4($s0)
    ctx->pc = 0x20cce0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 3));
    // 0x20cce4: 0xa2020001  sb          $v0, 0x1($s0)
    ctx->pc = 0x20cce4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 2));
label_20cce8:
    // 0x20cce8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x20cce8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_20ccec:
    // 0x20ccec: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x20ccecu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x20ccf0: 0x3e00008  jr          $ra
    ctx->pc = 0x20CCF0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20CCF4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20CCF0u;
            // 0x20ccf4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x20CCF8u;
}
