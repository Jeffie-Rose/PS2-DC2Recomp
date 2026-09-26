#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: GetePlaceParts__8CEditMapFPc
// Address: 0x1b0ca0 - 0x1b0d60
void GetePlaceParts__8CEditMapFPc_0x1b0ca0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetePlaceParts__8CEditMapFPc_0x1b0ca0");
#endif

    switch (ctx->pc) {
        case 0x1b0cd0u: goto label_1b0cd0;
        case 0x1b0d18u: goto label_1b0d18;
        default: break;
    }

    ctx->pc = 0x1b0ca0u;

    // 0x1b0ca0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x1b0ca0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x1b0ca4: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x1b0ca4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x1b0ca8: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x1b0ca8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x1b0cac: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1b0cacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1b0cb0: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x1b0cb0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b0cb4: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1b0cb4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1b0cb8: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x1b0cb8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b0cbc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1b0cbcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1b0cc0: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x1b0cc0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b0cc4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1b0cc4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1b0cc8: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x1B0CC8u;
    {
        const bool branch_taken_0x1b0cc8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B0CCCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B0CC8u;
            // 0x1b0ccc: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b0cc8) {
            ctx->pc = 0x1B0D30u;
            goto label_1b0d30;
        }
    }
    ctx->pc = 0x1B0CD0u;
label_1b0cd0:
    // 0x1b0cd0: 0x8e820d44  lw          $v0, 0xD44($s4)
    ctx->pc = 0x1b0cd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 3396)));
    // 0x1b0cd4: 0x528821  addu        $s1, $v0, $s2
    ctx->pc = 0x1b0cd4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x1b0cd8: 0x82220070  lb          $v0, 0x70($s1)
    ctx->pc = 0x1b0cd8u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 112)));
    // 0x1b0cdc: 0x401026  xor         $v0, $v0, $zero
    ctx->pc = 0x1b0cdcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 0));
    // 0x1b0ce0: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x1b0ce0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x1b0ce4: 0x14400010  bnez        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x1B0CE4u;
    {
        const bool branch_taken_0x1b0ce4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b0ce4) {
            ctx->pc = 0x1B0D28u;
            goto label_1b0d28;
        }
    }
    ctx->pc = 0x1B0CECu;
    // 0x1b0cec: 0x8e220310  lw          $v0, 0x310($s1)
    ctx->pc = 0x1b0cecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 784)));
    // 0x1b0cf0: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x1B0CF0u;
    {
        const bool branch_taken_0x1b0cf0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b0cf0) {
            ctx->pc = 0x1B0D28u;
            goto label_1b0d28;
        }
    }
    ctx->pc = 0x1B0CF8u;
    // 0x1b0cf8: 0x8e220324  lw          $v0, 0x324($s1)
    ctx->pc = 0x1b0cf8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 804)));
    // 0x1b0cfc: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x1B0CFCu;
    {
        const bool branch_taken_0x1b0cfc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b0cfc) {
            ctx->pc = 0x1B0D28u;
            goto label_1b0d28;
        }
    }
    ctx->pc = 0x1B0D04u;
    // 0x1b0d04: 0x8c440040  lw          $a0, 0x40($v0)
    ctx->pc = 0x1b0d04u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
    // 0x1b0d08: 0x10800007  beqz        $a0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1B0D08u;
    {
        const bool branch_taken_0x1b0d08 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B0D0Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B0D08u;
            // 0x1b0d0c: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b0d08) {
            ctx->pc = 0x1B0D28u;
            goto label_1b0d28;
        }
    }
    ctx->pc = 0x1B0D10u;
    // 0x1b0d10: 0xc04a38a  jal         func_128E28
    ctx->pc = 0x1B0D10u;
    SET_GPR_U32(ctx, 31, 0x1B0D18u);
    ctx->pc = 0x128E28u;
    if (runtime->hasFunction(0x128E28u)) {
        auto targetFn = runtime->lookupFunction(0x128E28u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B0D18u; }
        if (ctx->pc != 0x1B0D18u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcmp_0x128e28(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B0D18u; }
        if (ctx->pc != 0x1B0D18u) { return; }
    }
    ctx->pc = 0x1B0D18u;
label_1b0d18:
    // 0x1b0d18: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1B0D18u;
    {
        const bool branch_taken_0x1b0d18 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B0D1Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B0D18u;
            // 0x1b0d1c: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b0d18) {
            ctx->pc = 0x1B0D28u;
            goto label_1b0d28;
        }
    }
    ctx->pc = 0x1B0D20u;
    // 0x1b0d20: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1B0D20u;
    {
        const bool branch_taken_0x1b0d20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B0D24u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B0D20u;
            // 0x1b0d24: 0xdfbf0050  ld          $ra, 0x50($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b0d20) {
            ctx->pc = 0x1B0D44u;
            goto label_1b0d44;
        }
    }
    ctx->pc = 0x1B0D28u;
label_1b0d28:
    // 0x1b0d28: 0x26520330  addiu       $s2, $s2, 0x330
    ctx->pc = 0x1b0d28u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 816));
    // 0x1b0d2c: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1b0d2cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_1b0d30:
    // 0x1b0d30: 0x8e820d40  lw          $v0, 0xD40($s4)
    ctx->pc = 0x1b0d30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 3392)));
    // 0x1b0d34: 0x202102a  slt         $v0, $s0, $v0
    ctx->pc = 0x1b0d34u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1b0d38: 0x1440ffe5  bnez        $v0, . + 4 + (-0x1B << 2)
    ctx->pc = 0x1B0D38u;
    {
        const bool branch_taken_0x1b0d38 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B0D3Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B0D38u;
            // 0x1b0d3c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b0d38) {
            ctx->pc = 0x1B0CD0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1b0cd0;
        }
    }
    ctx->pc = 0x1B0D40u;
    // 0x1b0d40: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x1b0d40u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_1b0d44:
    // 0x1b0d44: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x1b0d44u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1b0d48: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1b0d48u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1b0d4c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1b0d4cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1b0d50: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1b0d50u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b0d54: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1b0d54u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b0d58: 0x3e00008  jr          $ra
    ctx->pc = 0x1B0D58u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B0D5Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B0D58u;
            // 0x1b0d5c: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1B0D60u;
}
