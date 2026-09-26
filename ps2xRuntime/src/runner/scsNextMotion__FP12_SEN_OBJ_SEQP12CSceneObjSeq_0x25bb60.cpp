#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: scsNextMotion__FP12_SEN_OBJ_SEQP12CSceneObjSeq
// Address: 0x25bb60 - 0x25bc04
void scsNextMotion__FP12_SEN_OBJ_SEQP12CSceneObjSeq_0x25bb60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("scsNextMotion__FP12_SEN_OBJ_SEQP12CSceneObjSeq_0x25bb60");
#endif

    switch (ctx->pc) {
        case 0x25bb90u: goto label_25bb90;
        case 0x25bbb4u: goto label_25bbb4;
        default: break;
    }

    ctx->pc = 0x25bb60u;

    // 0x25bb60: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x25bb60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x25bb64: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x25bb64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x25bb68: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x25bb68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x25bb6c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x25bb6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x25bb70: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x25bb70u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25bb74: 0x8c820028  lw          $v0, 0x28($a0)
    ctx->pc = 0x25bb74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 40)));
    // 0x25bb78: 0x1440001c  bnez        $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x25BB78u;
    {
        const bool branch_taken_0x25bb78 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x25BB7Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25BB78u;
            // 0x25bb7c: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25bb78) {
            ctx->pc = 0x25BBECu;
            goto label_25bbec;
        }
    }
    ctx->pc = 0x25BB80u;
    // 0x25bb80: 0x8e050064  lw          $a1, 0x64($s0)
    ctx->pc = 0x25bb80u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 100)));
    // 0x25bb84: 0x3c0401ed  lui         $a0, 0x1ED
    ctx->pc = 0x25bb84u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)493 << 16));
    // 0x25bb88: 0xc097920  jal         func_25E480
    ctx->pc = 0x25BB88u;
    SET_GPR_U32(ctx, 31, 0x25BB90u);
    ctx->pc = 0x25BB8Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x25BB88u;
            // 0x25bb8c: 0x2484e880  addiu       $a0, $a0, -0x1780 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961280));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25E480u;
    if (runtime->hasFunction(0x25E480u)) {
        auto targetFn = runtime->lookupFunction(0x25E480u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25BB90u; }
        if (ctx->pc != 0x25BB90u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CheckMotionEnd__10CEohMotherFi_0x25e480(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25BB90u; }
        if (ctx->pc != 0x25BB90u) { return; }
    }
    ctx->pc = 0x25BB90u;
label_25bb90:
    // 0x25bb90: 0x10400014  beqz        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x25BB90u;
    {
        const bool branch_taken_0x25bb90 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x25BB94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25BB90u;
            // 0x25bb94: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25bb90) {
            ctx->pc = 0x25BBE4u;
            goto label_25bbe4;
        }
    }
    ctx->pc = 0x25BB98u;
    // 0x25bb98: 0x8e050064  lw          $a1, 0x64($s0)
    ctx->pc = 0x25bb98u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 100)));
    // 0x25bb9c: 0xc62c0024  lwc1        $f12, 0x24($s1)
    ctx->pc = 0x25bb9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x25bba0: 0x8e270020  lw          $a3, 0x20($s1)
    ctx->pc = 0x25bba0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x25bba4: 0x3c0401ed  lui         $a0, 0x1ED
    ctx->pc = 0x25bba4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)493 << 16));
    // 0x25bba8: 0x2484e880  addiu       $a0, $a0, -0x1780
    ctx->pc = 0x25bba8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961280));
    // 0x25bbac: 0xc0978e8  jal         func_25E3A0
    ctx->pc = 0x25BBACu;
    SET_GPR_U32(ctx, 31, 0x25BBB4u);
    ctx->pc = 0x25BBB0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x25BBACu;
            // 0x25bbb0: 0x2626002c  addiu       $a2, $s1, 0x2C (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 44));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25E3A0u;
    if (runtime->hasFunction(0x25E3A0u)) {
        auto targetFn = runtime->lookupFunction(0x25E3A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25BBB4u; }
        if (ctx->pc != 0x25BBB4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetMotion__10CEohMotherFiPcif_0x25e3a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25BBB4u; }
        if (ctx->pc != 0x25BBB4u) { return; }
    }
    ctx->pc = 0x25BBB4u;
label_25bbb4:
    // 0x25bbb4: 0x8e22004c  lw          $v0, 0x4C($s1)
    ctx->pc = 0x25bbb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 76)));
    // 0x25bbb8: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x25BBB8u;
    {
        const bool branch_taken_0x25bbb8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x25bbb8) {
            ctx->pc = 0x25BBD8u;
            goto label_25bbd8;
        }
    }
    ctx->pc = 0x25BBC0u;
    // 0x25bbc0: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x25bbc0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x25bbc4: 0x24020019  addiu       $v0, $zero, 0x19
    ctx->pc = 0x25bbc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
    // 0x25bbc8: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x25BBC8u;
    {
        const bool branch_taken_0x25bbc8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x25BBCCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25BBC8u;
            // 0x25bbcc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25bbc8) {
            ctx->pc = 0x25BBDCu;
            goto label_25bbdc;
        }
    }
    ctx->pc = 0x25BBD0u;
    // 0x25bbd0: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x25BBD0u;
    {
        const bool branch_taken_0x25bbd0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25BBD4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25BBD0u;
            // 0x25bbd4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25bbd0) {
            ctx->pc = 0x25BBF0u;
            goto label_25bbf0;
        }
    }
    ctx->pc = 0x25BBD8u;
label_25bbd8:
    // 0x25bbd8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x25bbd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_25bbdc:
    // 0x25bbdc: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x25BBDCu;
    {
        const bool branch_taken_0x25bbdc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25BBE0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25BBDCu;
            // 0x25bbe0: 0xae220028  sw          $v0, 0x28($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 40), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25bbdc) {
            ctx->pc = 0x25BBF0u;
            goto label_25bbf0;
        }
    }
    ctx->pc = 0x25BBE4u;
label_25bbe4:
    // 0x25bbe4: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x25BBE4u;
    {
        const bool branch_taken_0x25bbe4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25BBE8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25BBE4u;
            // 0x25bbe8: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25bbe4) {
            ctx->pc = 0x25BBF4u;
            goto label_25bbf4;
        }
    }
    ctx->pc = 0x25BBECu;
label_25bbec:
    // 0x25bbec: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x25bbecu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_25bbf0:
    // 0x25bbf0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x25bbf0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_25bbf4:
    // 0x25bbf4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x25bbf4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x25bbf8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x25bbf8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x25bbfc: 0x3e00008  jr          $ra
    ctx->pc = 0x25BBFCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x25BC00u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25BBFCu;
            // 0x25bc00: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x25BC04u;
}
