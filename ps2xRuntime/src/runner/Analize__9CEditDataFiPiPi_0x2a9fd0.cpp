#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: Analize__9CEditDataFiPiPi
// Address: 0x2a9fd0 - 0x2aa09c
void Analize__9CEditDataFiPiPi_0x2a9fd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Analize__9CEditDataFiPiPi_0x2a9fd0");
#endif

    switch (ctx->pc) {
        case 0x2aa004u: goto label_2aa004;
        case 0x2aa038u: goto label_2aa038;
        case 0x2aa058u: goto label_2aa058;
        default: break;
    }

    ctx->pc = 0x2a9fd0u;

    // 0x2a9fd0: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x2a9fd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x2a9fd4: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x2a9fd4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x2a9fd8: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x2a9fd8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x2a9fdc: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x2a9fdcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x2a9fe0: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x2a9fe0u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a9fe4: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2a9fe4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x2a9fe8: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x2a9fe8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a9fec: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2a9fecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2a9ff0: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x2a9ff0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a9ff4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2a9ff4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2a9ff8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2a9ff8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a9ffc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2a9ffcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2aa000: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2aa000u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2aa004:
    // 0x2aa004: 0x2671821  addu        $v1, $s3, $a3
    ctx->pc = 0x2aa004u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 7)));
    // 0x2aa008: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x2aa008u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2aa00c: 0x4610004  bgez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2AA00Cu;
    {
        const bool branch_taken_0x2aa00c = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x2AA010u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2AA00Cu;
            // 0x2aa010: 0xc72021  addu        $a0, $a2, $a3 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2aa00c) {
            ctx->pc = 0x2AA020u;
            goto label_2aa020;
        }
    }
    ctx->pc = 0x2AA014u;
    // 0x2aa014: 0x2a51821  addu        $v1, $s5, $a1
    ctx->pc = 0x2aa014u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 5)));
    // 0x2aa018: 0x80840000  lb          $a0, 0x0($a0)
    ctx->pc = 0x2aa018u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2aa01c: 0xa0645050  sb          $a0, 0x5050($v1)
    ctx->pc = 0x2aa01cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 20560), (uint8_t)GPR_U32(ctx, 4));
label_2aa020:
    // 0x2aa020: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x2aa020u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x2aa024: 0x28a30040  slti        $v1, $a1, 0x40
    ctx->pc = 0x2aa024u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)64) ? 1 : 0);
    // 0x2aa028: 0x1460fff6  bnez        $v1, . + 4 + (-0xA << 2)
    ctx->pc = 0x2AA028u;
    {
        const bool branch_taken_0x2aa028 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2AA02Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2AA028u;
            // 0x2aa02c: 0x24e70004  addiu       $a3, $a3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2aa028) {
            ctx->pc = 0x2AA004u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2aa004;
        }
    }
    ctx->pc = 0x2AA030u;
    // 0x2aa030: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x2aa030u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2aa034: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x2aa034u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2aa038:
    // 0x2aa038: 0x2719021  addu        $s2, $s3, $s1
    ctx->pc = 0x2aa038u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 17)));
    // 0x2aa03c: 0x8e450000  lw          $a1, 0x0($s2)
    ctx->pc = 0x2aa03cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x2aa040: 0x4a00009  bltz        $a1, . + 4 + (0x9 << 2)
    ctx->pc = 0x2AA040u;
    {
        const bool branch_taken_0x2aa040 = (GPR_S32(ctx, 5) < 0);
        ctx->pc = 0x2AA044u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2AA040u;
            // 0x2aa044: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2aa040) {
            ctx->pc = 0x2AA068u;
            goto label_2aa068;
        }
    }
    ctx->pc = 0x2AA048u;
    // 0x2aa048: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x2aa048u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2aa04c: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x2aa04cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2aa050: 0xc0aa7a8  jal         func_2A9EA0
    ctx->pc = 0x2AA050u;
    SET_GPR_U32(ctx, 31, 0x2AA058u);
    ctx->pc = 0x2AA054u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2AA050u;
            // 0x2aa054: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A9EA0u;
    if (runtime->hasFunction(0x2A9EA0u)) {
        auto targetFn = runtime->lookupFunction(0x2A9EA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AA058u; }
        if (ctx->pc != 0x2AA058u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Analyze__9CEditDataFiiPii_0x2a9ea0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AA058u; }
        if (ctx->pc != 0x2AA058u) { return; }
    }
    ctx->pc = 0x2AA058u;
label_2aa058:
    // 0x2aa058: 0x2b02021  addu        $a0, $s5, $s0
    ctx->pc = 0x2aa058u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 16)));
    // 0x2aa05c: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x2aa05cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2aa060: 0xa0825050  sb          $v0, 0x5050($a0)
    ctx->pc = 0x2aa060u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 20560), (uint8_t)GPR_U32(ctx, 2));
    // 0x2aa064: 0xae430000  sw          $v1, 0x0($s2)
    ctx->pc = 0x2aa064u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 3));
label_2aa068:
    // 0x2aa068: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x2aa068u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x2aa06c: 0x2a030040  slti        $v1, $s0, 0x40
    ctx->pc = 0x2aa06cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)64) ? 1 : 0);
    // 0x2aa070: 0x1460fff1  bnez        $v1, . + 4 + (-0xF << 2)
    ctx->pc = 0x2AA070u;
    {
        const bool branch_taken_0x2aa070 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2AA074u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2AA070u;
            // 0x2aa074: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2aa070) {
            ctx->pc = 0x2AA038u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2aa038;
        }
    }
    ctx->pc = 0x2AA078u;
    // 0x2aa078: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x2aa078u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2aa07c: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x2aa07cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2aa080: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x2aa080u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2aa084: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2aa084u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2aa088: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2aa088u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2aa08c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2aa08cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2aa090: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2aa090u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2aa094: 0x3e00008  jr          $ra
    ctx->pc = 0x2AA094u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2AA098u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2AA094u;
            // 0x2aa098: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2AA09Cu;
}
