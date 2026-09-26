#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: GetBuffMesIdPtr__FPcii
// Address: 0x1529a0 - 0x152a58
void GetBuffMesIdPtr__FPcii_0x1529a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetBuffMesIdPtr__FPcii_0x1529a0");
#endif

    switch (ctx->pc) {
        case 0x1529d0u: goto label_1529d0;
        case 0x1529e8u: goto label_1529e8;
        case 0x1529f8u: goto label_1529f8;
        default: break;
    }

    ctx->pc = 0x1529a0u;

    // 0x1529a0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x1529a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x1529a4: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x1529a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x1529a8: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x1529a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x1529ac: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1529acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1529b0: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x1529b0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1529b4: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1529b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1529b8: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x1529b8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1529bc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1529bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1529c0: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x1529c0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1529c4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1529c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1529c8: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x1529C8u;
    {
        const bool branch_taken_0x1529c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1529CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1529C8u;
            // 0x1529cc: 0x280802d  daddu       $s0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1529c8) {
            ctx->pc = 0x152A28u;
            goto label_152a28;
        }
    }
    ctx->pc = 0x1529D0u;
label_1529d0:
    // 0x1529d0: 0x82030000  lb          $v1, 0x0($s0)
    ctx->pc = 0x1529d0u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1529d4: 0x24020040  addiu       $v0, $zero, 0x40
    ctx->pc = 0x1529d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x1529d8: 0x14620012  bne         $v1, $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x1529D8u;
    {
        const bool branch_taken_0x1529d8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1529DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1529D8u;
            // 0x1529dc: 0x26040001  addiu       $a0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1529d8) {
            ctx->pc = 0x152A24u;
            goto label_152a24;
        }
    }
    ctx->pc = 0x1529E0u;
    // 0x1529e0: 0xc048fc0  jal         func_123F00
    ctx->pc = 0x1529E0u;
    SET_GPR_U32(ctx, 31, 0x1529E8u);
    ctx->pc = 0x123F00u;
    if (runtime->hasFunction(0x123F00u)) {
        auto targetFn = runtime->lookupFunction(0x123F00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1529E8u; }
        if (ctx->pc != 0x1529E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        atoi_0x123f00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1529E8u; }
        if (ctx->pc != 0x1529E8u) { return; }
    }
    ctx->pc = 0x1529E8u;
label_1529e8:
    // 0x1529e8: 0x1642000e  bne         $s2, $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x1529E8u;
    {
        const bool branch_taken_0x1529e8 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 2));
        ctx->pc = 0x1529ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1529E8u;
            // 0x1529ec: 0x2403000a  addiu       $v1, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1529e8) {
            ctx->pc = 0x152A24u;
            goto label_152a24;
        }
    }
    ctx->pc = 0x1529F0u;
    // 0x1529f0: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1529F0u;
    {
        const bool branch_taken_0x1529f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1529f0) {
            ctx->pc = 0x152A10u;
            goto label_152a10;
        }
    }
    ctx->pc = 0x1529F8u;
label_1529f8:
    // 0x1529f8: 0x82020000  lb          $v0, 0x0($s0)
    ctx->pc = 0x1529f8u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1529fc: 0x14430003  bne         $v0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1529FCu;
    {
        const bool branch_taken_0x1529fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x152A00u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1529FCu;
            // 0x152a00: 0x26020001  addiu       $v0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1529fc) {
            ctx->pc = 0x152A0Cu;
            goto label_152a0c;
        }
    }
    ctx->pc = 0x152A04u;
    // 0x152a04: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x152A04u;
    {
        const bool branch_taken_0x152a04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x152A08u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x152A04u;
            // 0x152a08: 0xdfbf0050  ld          $ra, 0x50($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x152a04) {
            ctx->pc = 0x152A3Cu;
            goto label_152a3c;
        }
    }
    ctx->pc = 0x152A0Cu;
label_152a0c:
    // 0x152a0c: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x152a0cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_152a10:
    // 0x152a10: 0x211102b  sltu        $v0, $s0, $s1
    ctx->pc = 0x152a10u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
    // 0x152a14: 0x1440fff8  bnez        $v0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x152A14u;
    {
        const bool branch_taken_0x152a14 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x152A18u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x152A14u;
            // 0x152a18: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x152a14) {
            ctx->pc = 0x1529F8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1529f8;
        }
    }
    ctx->pc = 0x152A1Cu;
    // 0x152a1c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x152A1Cu;
    {
        const bool branch_taken_0x152a1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x152a1c) {
            ctx->pc = 0x152A38u;
            goto label_152a38;
        }
    }
    ctx->pc = 0x152A24u;
label_152a24:
    // 0x152a24: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x152a24u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_152a28:
    // 0x152a28: 0x2938821  addu        $s1, $s4, $s3
    ctx->pc = 0x152a28u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 19)));
    // 0x152a2c: 0x211102b  sltu        $v0, $s0, $s1
    ctx->pc = 0x152a2cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
    // 0x152a30: 0x1440ffe7  bnez        $v0, . + 4 + (-0x19 << 2)
    ctx->pc = 0x152A30u;
    {
        const bool branch_taken_0x152a30 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x152A34u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x152A30u;
            // 0x152a34: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x152a30) {
            ctx->pc = 0x1529D0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1529d0;
        }
    }
    ctx->pc = 0x152A38u;
label_152a38:
    // 0x152a38: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x152a38u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_152a3c:
    // 0x152a3c: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x152a3cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x152a40: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x152a40u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x152a44: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x152a44u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x152a48: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x152a48u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x152a4c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x152a4cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x152a50: 0x3e00008  jr          $ra
    ctx->pc = 0x152A50u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x152A54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x152A50u;
            // 0x152a54: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x152A58u;
}
