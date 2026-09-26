#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: GetNextSeq__12CSceneCmrSeqFP12_SEN_CMR_SEQi
// Address: 0x259be0 - 0x259c74
void GetNextSeq__12CSceneCmrSeqFP12_SEN_CMR_SEQi_0x259be0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetNextSeq__12CSceneCmrSeqFP12_SEN_CMR_SEQi_0x259be0");
#endif

    switch (ctx->pc) {
        case 0x259c34u: goto label_259c34;
        case 0x259c50u: goto label_259c50;
        case 0x259c60u: goto label_259c60;
        default: break;
    }

    ctx->pc = 0x259be0u;

    // 0x259be0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x259be0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x259be4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x259be4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x259be8: 0x14a00003  bnez        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x259BE8u;
    {
        const bool branch_taken_0x259be8 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x259BECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x259BE8u;
            // 0x259bec: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x259be8) {
            ctx->pc = 0x259BF8u;
            goto label_259bf8;
        }
    }
    ctx->pc = 0x259BF0u;
    // 0x259bf0: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x259BF0u;
    {
        const bool branch_taken_0x259bf0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x259BF4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x259BF0u;
            // 0x259bf4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x259bf0) {
            ctx->pc = 0x259C64u;
            goto label_259c64;
        }
    }
    ctx->pc = 0x259BF8u;
label_259bf8:
    // 0x259bf8: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x259bf8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x259bfc: 0x10c20016  beq         $a2, $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x259BFCu;
    {
        const bool branch_taken_0x259bfc = (GPR_U64(ctx, 6) == GPR_U64(ctx, 2));
        ctx->pc = 0x259C00u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x259BFCu;
            // 0x259c00: 0x8cb0005c  lw          $s0, 0x5C($a1) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 92)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x259bfc) {
            ctx->pc = 0x259C58u;
            goto label_259c58;
        }
    }
    ctx->pc = 0x259C04u;
    // 0x259c04: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x259c04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x259c08: 0x10c2000c  beq         $a2, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x259C08u;
    {
        const bool branch_taken_0x259c08 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 2));
        if (branch_taken_0x259c08) {
            ctx->pc = 0x259C3Cu;
            goto label_259c3c;
        }
    }
    ctx->pc = 0x259C10u;
    // 0x259c10: 0x10c00003  beqz        $a2, . + 4 + (0x3 << 2)
    ctx->pc = 0x259C10u;
    {
        const bool branch_taken_0x259c10 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x259c10) {
            ctx->pc = 0x259C20u;
            goto label_259c20;
        }
    }
    ctx->pc = 0x259C18u;
    // 0x259c18: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x259C18u;
    {
        const bool branch_taken_0x259c18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x259C1Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x259C18u;
            // 0x259c1c: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x259c18) {
            ctx->pc = 0x259C64u;
            goto label_259c64;
        }
    }
    ctx->pc = 0x259C20u;
label_259c20:
    // 0x259c20: 0x8c820030  lw          $v0, 0x30($a0)
    ctx->pc = 0x259c20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 48)));
    // 0x259c24: 0x1440000e  bnez        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x259C24u;
    {
        const bool branch_taken_0x259c24 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x259C28u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x259C24u;
            // 0x259c28: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x259c24) {
            ctx->pc = 0x259C60u;
            goto label_259c60;
        }
    }
    ctx->pc = 0x259C2Cu;
    // 0x259c2c: 0xc096440  jal         func_259100
    ctx->pc = 0x259C2Cu;
    SET_GPR_U32(ctx, 31, 0x259C34u);
    ctx->pc = 0x259100u;
    if (runtime->hasFunction(0x259100u)) {
        auto targetFn = runtime->lookupFunction(0x259100u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x259C34u; }
        if (ctx->pc != 0x259C34u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        InitSceneCmrSeq__FP12_SEN_CMR_SEQ_0x259100(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x259C34u; }
        if (ctx->pc != 0x259C34u) { return; }
    }
    ctx->pc = 0x259C34u;
label_259c34:
    // 0x259c34: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x259C34u;
    {
        const bool branch_taken_0x259c34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x259c34) {
            ctx->pc = 0x259C60u;
            goto label_259c60;
        }
    }
    ctx->pc = 0x259C3Cu;
label_259c3c:
    // 0x259c3c: 0x8c820034  lw          $v0, 0x34($a0)
    ctx->pc = 0x259c3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 52)));
    // 0x259c40: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x259C40u;
    {
        const bool branch_taken_0x259c40 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x259C44u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x259C40u;
            // 0x259c44: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x259c40) {
            ctx->pc = 0x259C60u;
            goto label_259c60;
        }
    }
    ctx->pc = 0x259C48u;
    // 0x259c48: 0xc096440  jal         func_259100
    ctx->pc = 0x259C48u;
    SET_GPR_U32(ctx, 31, 0x259C50u);
    ctx->pc = 0x259100u;
    if (runtime->hasFunction(0x259100u)) {
        auto targetFn = runtime->lookupFunction(0x259100u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x259C50u; }
        if (ctx->pc != 0x259C50u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        InitSceneCmrSeq__FP12_SEN_CMR_SEQ_0x259100(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x259C50u; }
        if (ctx->pc != 0x259C50u) { return; }
    }
    ctx->pc = 0x259C50u;
label_259c50:
    // 0x259c50: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x259C50u;
    {
        const bool branch_taken_0x259c50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x259c50) {
            ctx->pc = 0x259C60u;
            goto label_259c60;
        }
    }
    ctx->pc = 0x259C58u;
label_259c58:
    // 0x259c58: 0xc096440  jal         func_259100
    ctx->pc = 0x259C58u;
    SET_GPR_U32(ctx, 31, 0x259C60u);
    ctx->pc = 0x259C5Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x259C58u;
            // 0x259c5c: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x259100u;
    if (runtime->hasFunction(0x259100u)) {
        auto targetFn = runtime->lookupFunction(0x259100u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x259C60u; }
        if (ctx->pc != 0x259C60u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        InitSceneCmrSeq__FP12_SEN_CMR_SEQ_0x259100(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x259C60u; }
        if (ctx->pc != 0x259C60u) { return; }
    }
    ctx->pc = 0x259C60u;
label_259c60:
    // 0x259c60: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x259c60u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_259c64:
    // 0x259c64: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x259c64u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x259c68: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x259c68u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x259c6c: 0x3e00008  jr          $ra
    ctx->pc = 0x259C6Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x259C70u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x259C6Cu;
            // 0x259c70: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x259C74u;
}
