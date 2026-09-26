#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: scsSetEohFramePos__FP12_SEN_OBJ_SEQP12CSceneObjSeq
// Address: 0x25b030 - 0x25b0d0
void scsSetEohFramePos__FP12_SEN_OBJ_SEQP12CSceneObjSeq_0x25b030(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("scsSetEohFramePos__FP12_SEN_OBJ_SEQP12CSceneObjSeq_0x25b030");
#endif

    switch (ctx->pc) {
        case 0x25b060u: goto label_25b060;
        case 0x25b07cu: goto label_25b07c;
        default: break;
    }

    ctx->pc = 0x25b030u;

    // 0x25b030: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x25b030u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x25b034: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x25b034u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x25b038: 0x27a70030  addiu       $a3, $sp, 0x30
    ctx->pc = 0x25b038u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x25b03c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x25b03cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x25b040: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x25b040u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x25b044: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x25b044u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25b048: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x25b048u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25b04c: 0x3c0401ed  lui         $a0, 0x1ED
    ctx->pc = 0x25b04cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)493 << 16));
    // 0x25b050: 0x8e250020  lw          $a1, 0x20($s1)
    ctx->pc = 0x25b050u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x25b054: 0x2484e880  addiu       $a0, $a0, -0x1780
    ctx->pc = 0x25b054u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961280));
    // 0x25b058: 0xc097cd0  jal         func_25F340
    ctx->pc = 0x25B058u;
    SET_GPR_U32(ctx, 31, 0x25B060u);
    ctx->pc = 0x25B05Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x25B058u;
            // 0x25b05c: 0x2626002c  addiu       $a2, $s1, 0x2C (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 44));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F340u;
    if (runtime->hasFunction(0x25F340u)) {
        auto targetFn = runtime->lookupFunction(0x25F340u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25B060u; }
        if (ctx->pc != 0x25B060u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetFramePos__10CEohMotherFiPcPf_0x25f340(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25B060u; }
        if (ctx->pc != 0x25B060u) { return; }
    }
    ctx->pc = 0x25B060u;
label_25b060:
    // 0x25b060: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x25B060u;
    {
        const bool branch_taken_0x25b060 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x25B064u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25B060u;
            // 0x25b064: 0x26040070  addiu       $a0, $s0, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 112));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25b060) {
            ctx->pc = 0x25B070u;
            goto label_25b070;
        }
    }
    ctx->pc = 0x25B068u;
    // 0x25b068: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x25B068u;
    {
        const bool branch_taken_0x25b068 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25B06Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25B068u;
            // 0x25b06c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25b068) {
            ctx->pc = 0x25B0BCu;
            goto label_25b0bc;
        }
    }
    ctx->pc = 0x25B070u;
label_25b070:
    // 0x25b070: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x25b070u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x25b074: 0xc041c38  jal         func_1070E0
    ctx->pc = 0x25B074u;
    SET_GPR_U32(ctx, 31, 0x25B07Cu);
    ctx->pc = 0x25B078u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x25B074u;
            // 0x25b078: 0x26260010  addiu       $a2, $s1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1070E0u;
    if (runtime->hasFunction(0x1070E0u)) {
        auto targetFn = runtime->lookupFunction(0x1070E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25B07Cu; }
        if (ctx->pc != 0x25B07Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0AddVector_0x1070e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25B07Cu; }
        if (ctx->pc != 0x25B07Cu) { return; }
    }
    ctx->pc = 0x25B07Cu;
label_25b07c:
    // 0x25b07c: 0x8e230024  lw          $v1, 0x24($s1)
    ctx->pc = 0x25b07cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
    // 0x25b080: 0x4600008  bltz        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x25B080u;
    {
        const bool branch_taken_0x25b080 = (GPR_S32(ctx, 3) < 0);
        if (branch_taken_0x25b080) {
            ctx->pc = 0x25B0A4u;
            goto label_25b0a4;
        }
    }
    ctx->pc = 0x25B088u;
    // 0x25b088: 0x8e020040  lw          $v0, 0x40($s0)
    ctx->pc = 0x25b088u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 64)));
    // 0x25b08c: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x25b08cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x25b090: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x25B090u;
    {
        const bool branch_taken_0x25b090 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x25b090) {
            ctx->pc = 0x25B0A4u;
            goto label_25b0a4;
        }
    }
    ctx->pc = 0x25B098u;
    // 0x25b098: 0xae000040  sw          $zero, 0x40($s0)
    ctx->pc = 0x25b098u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 64), GPR_U32(ctx, 0));
    // 0x25b09c: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x25B09Cu;
    {
        const bool branch_taken_0x25b09c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25B0A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25B09Cu;
            // 0x25b0a0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25b09c) {
            ctx->pc = 0x25B0BCu;
            goto label_25b0bc;
        }
    }
    ctx->pc = 0x25B0A4u;
label_25b0a4:
    // 0x25b0a4: 0x18600005  blez        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x25B0A4u;
    {
        const bool branch_taken_0x25b0a4 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x25B0A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25B0A4u;
            // 0x25b0a8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25b0a4) {
            ctx->pc = 0x25B0BCu;
            goto label_25b0bc;
        }
    }
    ctx->pc = 0x25B0ACu;
    // 0x25b0ac: 0x8e020040  lw          $v0, 0x40($s0)
    ctx->pc = 0x25b0acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 64)));
    // 0x25b0b0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x25b0b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x25b0b4: 0xae020040  sw          $v0, 0x40($s0)
    ctx->pc = 0x25b0b4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 64), GPR_U32(ctx, 2));
    // 0x25b0b8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x25b0b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_25b0bc:
    // 0x25b0bc: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x25b0bcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x25b0c0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x25b0c0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x25b0c4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x25b0c4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x25b0c8: 0x3e00008  jr          $ra
    ctx->pc = 0x25B0C8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x25B0CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25B0C8u;
            // 0x25b0cc: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x25B0D0u;
}
