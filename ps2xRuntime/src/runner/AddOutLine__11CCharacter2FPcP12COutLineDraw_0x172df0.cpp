#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: AddOutLine__11CCharacter2FPcP12COutLineDraw
// Address: 0x172df0 - 0x172ef8
void AddOutLine__11CCharacter2FPcP12COutLineDraw_0x172df0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("AddOutLine__11CCharacter2FPcP12COutLineDraw_0x172df0");
#endif

    switch (ctx->pc) {
        case 0x172e30u: goto label_172e30;
        case 0x172e48u: goto label_172e48;
        case 0x172e54u: goto label_172e54;
        case 0x172ea8u: goto label_172ea8;
        case 0x172ec4u: goto label_172ec4;
        default: break;
    }

    ctx->pc = 0x172df0u;

    // 0x172df0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x172df0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x172df4: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x172df4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x172df8: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x172df8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x172dfc: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x172dfcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x172e00: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x172e00u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x172e04: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x172e04u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x172e08: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x172e08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x172e0c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x172e0cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x172e10: 0x12600032  beqz        $s3, . + 4 + (0x32 << 2)
    ctx->pc = 0x172E10u;
    {
        const bool branch_taken_0x172e10 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x172E14u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x172E10u;
            // 0x172e14: 0xc0802d  daddu       $s0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x172e10) {
            ctx->pc = 0x172EDCu;
            goto label_172edc;
        }
    }
    ctx->pc = 0x172E18u;
    // 0x172e18: 0x82630000  lb          $v1, 0x0($s3)
    ctx->pc = 0x172e18u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x172e1c: 0x10600013  beqz        $v1, . + 4 + (0x13 << 2)
    ctx->pc = 0x172E1Cu;
    {
        const bool branch_taken_0x172e1c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x172E20u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x172E1Cu;
            // 0x172e20: 0x8e250070  lw          $a1, 0x70($s1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 112)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x172e1c) {
            ctx->pc = 0x172E6Cu;
            goto label_172e6c;
        }
    }
    ctx->pc = 0x172E24u;
    // 0x172e24: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x172e24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x172e28: 0xc04ddb4  jal         func_1376D0
    ctx->pc = 0x172E28u;
    SET_GPR_U32(ctx, 31, 0x172E30u);
    ctx->pc = 0x172E2Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x172E28u;
            // 0x172e2c: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1376D0u;
    if (runtime->hasFunction(0x1376D0u)) {
        auto targetFn = runtime->lookupFunction(0x1376D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x172E30u; }
        if (ctx->pc != 0x172E30u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SearchFrame__8mgCFrameFPc_0x1376d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x172E30u; }
        if (ctx->pc != 0x172E30u) { return; }
    }
    ctx->pc = 0x172E30u;
label_172e30:
    // 0x172e30: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x172e30u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x172e34: 0x14a0000d  bnez        $a1, . + 4 + (0xD << 2)
    ctx->pc = 0x172E34u;
    {
        const bool branch_taken_0x172e34 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x172e34) {
            ctx->pc = 0x172E6Cu;
            goto label_172e6c;
        }
    }
    ctx->pc = 0x172E3Cu;
    // 0x172e3c: 0x8e320124  lw          $s2, 0x124($s1)
    ctx->pc = 0x172e3cu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 292)));
    // 0x172e40: 0x1240000a  beqz        $s2, . + 4 + (0xA << 2)
    ctx->pc = 0x172E40u;
    {
        const bool branch_taken_0x172e40 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x172e40) {
            ctx->pc = 0x172E6Cu;
            goto label_172e6c;
        }
    }
    ctx->pc = 0x172E48u;
label_172e48:
    // 0x172e48: 0x8e440034  lw          $a0, 0x34($s2)
    ctx->pc = 0x172e48u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 52)));
    // 0x172e4c: 0xc04ddb4  jal         func_1376D0
    ctx->pc = 0x172E4Cu;
    SET_GPR_U32(ctx, 31, 0x172E54u);
    ctx->pc = 0x172E50u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x172E4Cu;
            // 0x172e50: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1376D0u;
    if (runtime->hasFunction(0x1376D0u)) {
        auto targetFn = runtime->lookupFunction(0x1376D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x172E54u; }
        if (ctx->pc != 0x172E54u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SearchFrame__8mgCFrameFPc_0x1376d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x172E54u; }
        if (ctx->pc != 0x172E54u) { return; }
    }
    ctx->pc = 0x172E54u;
label_172e54:
    // 0x172e54: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x172e54u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x172e58: 0x14a00004  bnez        $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x172E58u;
    {
        const bool branch_taken_0x172e58 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x172e58) {
            ctx->pc = 0x172E6Cu;
            goto label_172e6c;
        }
    }
    ctx->pc = 0x172E60u;
    // 0x172e60: 0x8e520000  lw          $s2, 0x0($s2)
    ctx->pc = 0x172e60u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x172e64: 0x1640fff8  bnez        $s2, . + 4 + (-0x8 << 2)
    ctx->pc = 0x172E64u;
    {
        const bool branch_taken_0x172e64 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        if (branch_taken_0x172e64) {
            ctx->pc = 0x172E48u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_172e48;
        }
    }
    ctx->pc = 0x172E6Cu;
label_172e6c:
    // 0x172e6c: 0x0  nop
    ctx->pc = 0x172e6cu;
    // NOP
    // 0x172e70: 0x10a0001a  beqz        $a1, . + 4 + (0x1A << 2)
    ctx->pc = 0x172E70u;
    {
        const bool branch_taken_0x172e70 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x172e70) {
            ctx->pc = 0x172EDCu;
            goto label_172edc;
        }
    }
    ctx->pc = 0x172E78u;
    // 0x172e78: 0x8ca20054  lw          $v0, 0x54($a1)
    ctx->pc = 0x172e78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 84)));
    // 0x172e7c: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x172E7Cu;
    {
        const bool branch_taken_0x172e7c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x172E80u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x172E7Cu;
            // 0x172e80: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x172e7c) {
            ctx->pc = 0x172EA0u;
            goto label_172ea0;
        }
    }
    ctx->pc = 0x172E84u;
    // 0x172e84: 0x8ca300f4  lw          $v1, 0xF4($a1)
    ctx->pc = 0x172e84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 244)));
    // 0x172e88: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x172E88u;
    {
        const bool branch_taken_0x172e88 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x172e88) {
            ctx->pc = 0x172E9Cu;
            goto label_172e9c;
        }
    }
    ctx->pc = 0x172E90u;
    // 0x172e90: 0x8c620018  lw          $v0, 0x18($v1)
    ctx->pc = 0x172e90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
    // 0x172e94: 0x34420004  ori         $v0, $v0, 0x4
    ctx->pc = 0x172e94u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4);
    // 0x172e98: 0xac620018  sw          $v0, 0x18($v1)
    ctx->pc = 0x172e98u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 24), GPR_U32(ctx, 2));
label_172e9c:
    // 0x172e9c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x172e9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_172ea0:
    // 0x172ea0: 0xc05f0ac  jal         func_17C2B0
    ctx->pc = 0x172EA0u;
    SET_GPR_U32(ctx, 31, 0x172EA8u);
    ctx->pc = 0x17C2B0u;
    if (runtime->hasFunction(0x17C2B0u)) {
        auto targetFn = runtime->lookupFunction(0x17C2B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x172EA8u; }
        if (ctx->pc != 0x172EA8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetFrame__12COutLineDrawFP8mgCFrame_0x17c2b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x172EA8u; }
        if (ctx->pc != 0x172EA8u) { return; }
    }
    ctx->pc = 0x172EA8u;
label_172ea8:
    // 0x172ea8: 0x8e230124  lw          $v1, 0x124($s1)
    ctx->pc = 0x172ea8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 292)));
    // 0x172eac: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x172EACu;
    {
        const bool branch_taken_0x172eac = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x172eac) {
            ctx->pc = 0x172EBCu;
            goto label_172ebc;
        }
    }
    ctx->pc = 0x172EB4u;
    // 0x172eb4: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x172EB4u;
    {
        const bool branch_taken_0x172eb4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x172EB8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x172EB4u;
            // 0x172eb8: 0xae300124  sw          $s0, 0x124($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 292), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x172eb4) {
            ctx->pc = 0x172EDCu;
            goto label_172edc;
        }
    }
    ctx->pc = 0x172EBCu;
label_172ebc:
    // 0x172ebc: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x172EBCu;
    {
        const bool branch_taken_0x172ebc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x172ebc) {
            ctx->pc = 0x172ED8u;
            goto label_172ed8;
        }
    }
    ctx->pc = 0x172EC4u;
label_172ec4:
    // 0x172ec4: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x172ec4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x172ec8: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x172EC8u;
    {
        const bool branch_taken_0x172ec8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x172ec8) {
            ctx->pc = 0x172ED8u;
            goto label_172ed8;
        }
    }
    ctx->pc = 0x172ED0u;
    // 0x172ed0: 0x1480fffc  bnez        $a0, . + 4 + (-0x4 << 2)
    ctx->pc = 0x172ED0u;
    {
        const bool branch_taken_0x172ed0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x172ED4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x172ED0u;
            // 0x172ed4: 0x80182d  daddu       $v1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x172ed0) {
            ctx->pc = 0x172EC4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_172ec4;
        }
    }
    ctx->pc = 0x172ED8u;
label_172ed8:
    // 0x172ed8: 0xac700000  sw          $s0, 0x0($v1)
    ctx->pc = 0x172ed8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 16));
label_172edc:
    // 0x172edc: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x172edcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x172ee0: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x172ee0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x172ee4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x172ee4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x172ee8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x172ee8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x172eec: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x172eecu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x172ef0: 0x3e00008  jr          $ra
    ctx->pc = 0x172EF0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x172EF4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x172EF0u;
            // 0x172ef4: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x172EF8u;
}
