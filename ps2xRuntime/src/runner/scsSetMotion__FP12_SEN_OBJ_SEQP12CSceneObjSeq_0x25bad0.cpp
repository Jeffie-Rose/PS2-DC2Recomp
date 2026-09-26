#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: scsSetMotion__FP12_SEN_OBJ_SEQP12CSceneObjSeq
// Address: 0x25bad0 - 0x25bb58
void scsSetMotion__FP12_SEN_OBJ_SEQP12CSceneObjSeq_0x25bad0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("scsSetMotion__FP12_SEN_OBJ_SEQP12CSceneObjSeq_0x25bad0");
#endif

    switch (ctx->pc) {
        case 0x25bb04u: goto label_25bb04;
        default: break;
    }

    ctx->pc = 0x25bad0u;

    // 0x25bad0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x25bad0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x25bad4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x25bad4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x25bad8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x25bad8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x25badc: 0x8c820028  lw          $v0, 0x28($a0)
    ctx->pc = 0x25badcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 40)));
    // 0x25bae0: 0x14400018  bnez        $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x25BAE0u;
    {
        const bool branch_taken_0x25bae0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x25BAE4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25BAE0u;
            // 0x25bae4: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25bae0) {
            ctx->pc = 0x25BB44u;
            goto label_25bb44;
        }
    }
    ctx->pc = 0x25BAE8u;
    // 0x25bae8: 0x8ca50064  lw          $a1, 0x64($a1)
    ctx->pc = 0x25bae8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 100)));
    // 0x25baec: 0xc60c0024  lwc1        $f12, 0x24($s0)
    ctx->pc = 0x25baecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x25baf0: 0x8e070020  lw          $a3, 0x20($s0)
    ctx->pc = 0x25baf0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x25baf4: 0x3c0401ed  lui         $a0, 0x1ED
    ctx->pc = 0x25baf4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)493 << 16));
    // 0x25baf8: 0x2484e880  addiu       $a0, $a0, -0x1780
    ctx->pc = 0x25baf8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961280));
    // 0x25bafc: 0xc0978e8  jal         func_25E3A0
    ctx->pc = 0x25BAFCu;
    SET_GPR_U32(ctx, 31, 0x25BB04u);
    ctx->pc = 0x25BB00u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x25BAFCu;
            // 0x25bb00: 0x2606002c  addiu       $a2, $s0, 0x2C (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 44));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25E3A0u;
    if (runtime->hasFunction(0x25E3A0u)) {
        auto targetFn = runtime->lookupFunction(0x25E3A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25BB04u; }
        if (ctx->pc != 0x25BB04u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetMotion__10CEohMotherFiPcif_0x25e3a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25BB04u; }
        if (ctx->pc != 0x25BB04u) { return; }
    }
    ctx->pc = 0x25BB04u;
label_25bb04:
    // 0x25bb04: 0x8e02004c  lw          $v0, 0x4C($s0)
    ctx->pc = 0x25bb04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
    // 0x25bb08: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x25BB08u;
    {
        const bool branch_taken_0x25bb08 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x25bb08) {
            ctx->pc = 0x25BB38u;
            goto label_25bb38;
        }
    }
    ctx->pc = 0x25BB10u;
    // 0x25bb10: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x25bb10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x25bb14: 0x24020019  addiu       $v0, $zero, 0x19
    ctx->pc = 0x25bb14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
    // 0x25bb18: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x25BB18u;
    {
        const bool branch_taken_0x25bb18 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x25BB1Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25BB18u;
            // 0x25bb1c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25bb18) {
            ctx->pc = 0x25BB30u;
            goto label_25bb30;
        }
    }
    ctx->pc = 0x25BB20u;
    // 0x25bb20: 0x2402001d  addiu       $v0, $zero, 0x1D
    ctx->pc = 0x25bb20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 29));
    // 0x25bb24: 0x14620005  bne         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x25BB24u;
    {
        const bool branch_taken_0x25bb24 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x25BB28u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25BB24u;
            // 0x25bb28: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25bb24) {
            ctx->pc = 0x25BB3Cu;
            goto label_25bb3c;
        }
    }
    ctx->pc = 0x25BB2Cu;
    // 0x25bb2c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x25bb2cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_25bb30:
    // 0x25bb30: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x25BB30u;
    {
        const bool branch_taken_0x25bb30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25BB34u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25BB30u;
            // 0x25bb34: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25bb30) {
            ctx->pc = 0x25BB4Cu;
            goto label_25bb4c;
        }
    }
    ctx->pc = 0x25BB38u;
label_25bb38:
    // 0x25bb38: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x25bb38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_25bb3c:
    // 0x25bb3c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x25BB3Cu;
    {
        const bool branch_taken_0x25bb3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25BB40u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25BB3Cu;
            // 0x25bb40: 0xae020028  sw          $v0, 0x28($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25bb3c) {
            ctx->pc = 0x25BB48u;
            goto label_25bb48;
        }
    }
    ctx->pc = 0x25BB44u;
label_25bb44:
    // 0x25bb44: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x25bb44u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_25bb48:
    // 0x25bb48: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x25bb48u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_25bb4c:
    // 0x25bb4c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x25bb4cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x25bb50: 0x3e00008  jr          $ra
    ctx->pc = 0x25BB50u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x25BB54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25BB50u;
            // 0x25bb54: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x25BB58u;
}
