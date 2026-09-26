#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: HowMuchZairyouMakeItem__17CInventDataManageFiiPi
// Address: 0x1ffda0 - 0x1ffe78
void HowMuchZairyouMakeItem__17CInventDataManageFiiPi_0x1ffda0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("HowMuchZairyouMakeItem__17CInventDataManageFiiPi_0x1ffda0");
#endif

    switch (ctx->pc) {
        case 0x1ffdccu: goto label_1ffdcc;
        case 0x1ffdf4u: goto label_1ffdf4;
        case 0x1ffe40u: goto label_1ffe40;
        default: break;
    }

    ctx->pc = 0x1ffda0u;

    // 0x1ffda0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1ffda0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1ffda4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1ffda4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1ffda8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1ffda8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1ffdac: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1ffdacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1ffdb0: 0xe0802d  daddu       $s0, $a3, $zero
    ctx->pc = 0x1ffdb0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ffdb4: 0x16000003  bnez        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1FFDB4u;
    {
        const bool branch_taken_0x1ffdb4 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FFDB8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FFDB4u;
            // 0x1ffdb8: 0xc0882d  daddu       $s1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ffdb4) {
            ctx->pc = 0x1FFDC4u;
            goto label_1ffdc4;
        }
    }
    ctx->pc = 0x1FFDBCu;
    // 0x1ffdbc: 0x10000029  b           . + 4 + (0x29 << 2)
    ctx->pc = 0x1FFDBCu;
    {
        const bool branch_taken_0x1ffdbc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FFDC0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FFDBCu;
            // 0x1ffdc0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ffdbc) {
            ctx->pc = 0x1FFE64u;
            goto label_1ffe64;
        }
    }
    ctx->pc = 0x1FFDC4u;
label_1ffdc4:
    // 0x1ffdc4: 0xc07fef0  jal         func_1FFBC0
    ctx->pc = 0x1FFDC4u;
    SET_GPR_U32(ctx, 31, 0x1FFDCCu);
    ctx->pc = 0x1FFBC0u;
    if (runtime->hasFunction(0x1FFBC0u)) {
        auto targetFn = runtime->lookupFunction(0x1FFBC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FFDCCu; }
        if (ctx->pc != 0x1FFDCCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetInventDataInfoByItemID__17CInventDataManageFi_0x1ffbc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FFDCCu; }
        if (ctx->pc != 0x1FFDCCu) { return; }
    }
    ctx->pc = 0x1FFDCCu;
label_1ffdcc:
    // 0x1ffdcc: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1FFDCCu;
    {
        const bool branch_taken_0x1ffdcc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FFDD0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FFDCCu;
            // 0x1ffdd0: 0x24430008  addiu       $v1, $v0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ffdcc) {
            ctx->pc = 0x1FFDDCu;
            goto label_1ffddc;
        }
    }
    ctx->pc = 0x1FFDD4u;
    // 0x1ffdd4: 0x10000023  b           . + 4 + (0x23 << 2)
    ctx->pc = 0x1FFDD4u;
    {
        const bool branch_taken_0x1ffdd4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FFDD8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FFDD4u;
            // 0x1ffdd8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ffdd4) {
            ctx->pc = 0x1FFE64u;
            goto label_1ffe64;
        }
    }
    ctx->pc = 0x1FFDDCu;
label_1ffddc:
    // 0x1ffddc: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1ffddcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ffde0: 0x8442000c  lh          $v0, 0xC($v0)
    ctx->pc = 0x1ffde0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x1ffde4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1ffde4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ffde8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1ffde8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ffdec: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x1FFDECu;
    {
        const bool branch_taken_0x1ffdec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FFDF0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FFDECu;
            // 0x1ffdf0: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ffdec) {
            ctx->pc = 0x1FFE28u;
            goto label_1ffe28;
        }
    }
    ctx->pc = 0x1FFDF4u;
label_1ffdf4:
    // 0x1ffdf4: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1ffdf4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1ffdf8: 0x2063821  addu        $a3, $s0, $a2
    ctx->pc = 0x1ffdf8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 6)));
    // 0x1ffdfc: 0x24c60008  addiu       $a2, $a2, 0x8
    ctx->pc = 0x1ffdfcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
    // 0x1ffe00: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x1ffe00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x1ffe04: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x1ffe04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x1ffe08: 0x84420000  lh          $v0, 0x0($v0)
    ctx->pc = 0x1ffe08u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1ffe0c: 0xace20004  sw          $v0, 0x4($a3)
    ctx->pc = 0x1ffe0cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 2));
    // 0x1ffe10: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1ffe10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1ffe14: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x1ffe14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x1ffe18: 0x90420002  lbu         $v0, 0x2($v0)
    ctx->pc = 0x1ffe18u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2)));
    // 0x1ffe1c: 0x24a50004  addiu       $a1, $a1, 0x4
    ctx->pc = 0x1ffe1cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
    // 0x1ffe20: 0x2221018  mult        $v0, $s1, $v0
    ctx->pc = 0x1ffe20u;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x1ffe24: 0xace20008  sw          $v0, 0x8($a3)
    ctx->pc = 0x1ffe24u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 8), GPR_U32(ctx, 2));
label_1ffe28:
    // 0x1ffe28: 0x84620004  lh          $v0, 0x4($v1)
    ctx->pc = 0x1ffe28u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x1ffe2c: 0x82102a  slt         $v0, $a0, $v0
    ctx->pc = 0x1ffe2cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1ffe30: 0x1440fff0  bnez        $v0, . + 4 + (-0x10 << 2)
    ctx->pc = 0x1FFE30u;
    {
        const bool branch_taken_0x1ffe30 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FFE34u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FFE30u;
            // 0x1ffe34: 0x28810004  slti        $at, $a0, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)4) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ffe30) {
            ctx->pc = 0x1FFDF4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1ffdf4;
        }
    }
    ctx->pc = 0x1FFE38u;
    // 0x1ffe38: 0x10200009  beqz        $at, . + 4 + (0x9 << 2)
    ctx->pc = 0x1FFE38u;
    {
        const bool branch_taken_0x1ffe38 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FFE3Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FFE38u;
            // 0x1ffe3c: 0x418c0  sll         $v1, $a0, 3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ffe38) {
            ctx->pc = 0x1FFE60u;
            goto label_1ffe60;
        }
    }
    ctx->pc = 0x1FFE40u;
label_1ffe40:
    // 0x1ffe40: 0x2031021  addu        $v0, $s0, $v1
    ctx->pc = 0x1ffe40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x1ffe44: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x1ffe44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x1ffe48: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x1ffe48u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x1ffe4c: 0x24630008  addiu       $v1, $v1, 0x8
    ctx->pc = 0x1ffe4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
    // 0x1ffe50: 0xac400008  sw          $zero, 0x8($v0)
    ctx->pc = 0x1ffe50u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
    // 0x1ffe54: 0x28820004  slti        $v0, $a0, 0x4
    ctx->pc = 0x1ffe54u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x1ffe58: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x1FFE58u;
    {
        const bool branch_taken_0x1ffe58 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ffe58) {
            ctx->pc = 0x1FFE40u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1ffe40;
        }
    }
    ctx->pc = 0x1FFE60u;
label_1ffe60:
    // 0x1ffe60: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1ffe60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1ffe64:
    // 0x1ffe64: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1ffe64u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1ffe68: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1ffe68u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1ffe6c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1ffe6cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ffe70: 0x3e00008  jr          $ra
    ctx->pc = 0x1FFE70u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FFE74u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FFE70u;
            // 0x1ffe74: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1FFE78u;
}
