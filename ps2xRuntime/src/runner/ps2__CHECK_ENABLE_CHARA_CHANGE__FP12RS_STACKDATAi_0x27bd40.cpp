#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _CHECK_ENABLE_CHARA_CHANGE__FP12RS_STACKDATAi
// Address: 0x27bd40 - 0x27bdc4
void ps2__CHECK_ENABLE_CHARA_CHANGE__FP12RS_STACKDATAi_0x27bd40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__CHECK_ENABLE_CHARA_CHANGE__FP12RS_STACKDATAi_0x27bd40");
#endif

    switch (ctx->pc) {
        case 0x27bd68u: goto label_27bd68;
        case 0x27bd70u: goto label_27bd70;
        case 0x27bda0u: goto label_27bda0;
        case 0x27bdacu: goto label_27bdac;
        default: break;
    }

    ctx->pc = 0x27bd40u;

    // 0x27bd40: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x27bd40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x27bd44: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x27bd44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x27bd48: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x27bd48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x27bd4c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x27bd4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x27bd50: 0x10a20003  beq         $a1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x27BD50u;
    {
        const bool branch_taken_0x27bd50 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x27BD54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27BD50u;
            // 0x27bd54: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27bd50) {
            ctx->pc = 0x27BD60u;
            goto label_27bd60;
        }
    }
    ctx->pc = 0x27BD58u;
    // 0x27bd58: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x27BD58u;
    {
        const bool branch_taken_0x27bd58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27BD5Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27BD58u;
            // 0x27bd5c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27bd58) {
            ctx->pc = 0x27BDB0u;
            goto label_27bdb0;
        }
    }
    ctx->pc = 0x27BD60u;
label_27bd60:
    // 0x27bd60: 0xc097e18  jal         func_25F860
    ctx->pc = 0x27BD60u;
    SET_GPR_U32(ctx, 31, 0x27BD68u);
    ctx->pc = 0x27BD64u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27BD60u;
            // 0x27bd64: 0x24910008  addiu       $s1, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F860u;
    if (runtime->hasFunction(0x25F860u)) {
        auto targetFn = runtime->lookupFunction(0x25F860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27BD68u; }
        if (ctx->pc != 0x27BD68u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x25f860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27BD68u; }
        if (ctx->pc != 0x27BD68u) { return; }
    }
    ctx->pc = 0x27BD68u;
label_27bd68:
    // 0x27bd68: 0xc064220  jal         func_190880
    ctx->pc = 0x27BD68u;
    SET_GPR_U32(ctx, 31, 0x27BD70u);
    ctx->pc = 0x27BD6Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27BD68u;
            // 0x27bd6c: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x190880u;
    if (runtime->hasFunction(0x190880u)) {
        auto targetFn = runtime->lookupFunction(0x190880u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27BD70u; }
        if (ctx->pc != 0x27BD70u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetSaveData__Fv_0x190880(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27BD70u; }
        if (ctx->pc != 0x27BD70u) { return; }
    }
    ctx->pc = 0x27BD70u;
label_27bd70:
    // 0x27bd70: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x27BD70u;
    {
        const bool branch_taken_0x27bd70 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x27BD74u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27BD70u;
            // 0x27bd74: 0x3c010001  lui         $at, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27bd70) {
            ctx->pc = 0x27BD80u;
            goto label_27bd80;
        }
    }
    ctx->pc = 0x27BD78u;
    // 0x27bd78: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x27BD78u;
    {
        const bool branch_taken_0x27bd78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27BD7Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27BD78u;
            // 0x27bd7c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27bd78) {
            ctx->pc = 0x27BDB0u;
            goto label_27bdb0;
        }
    }
    ctx->pc = 0x27BD80u;
label_27bd80:
    // 0x27bd80: 0x3421d2a0  ori         $at, $at, 0xD2A0
    ctx->pc = 0x27bd80u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)53920);
    // 0x27bd84: 0x412021  addu        $a0, $v0, $at
    ctx->pc = 0x27bd84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 1)));
    // 0x27bd88: 0x14800003  bnez        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x27BD88u;
    {
        const bool branch_taken_0x27bd88 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x27BD8Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27BD88u;
            // 0x27bd8c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27bd88) {
            ctx->pc = 0x27BD98u;
            goto label_27bd98;
        }
    }
    ctx->pc = 0x27BD90u;
    // 0x27bd90: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x27BD90u;
    {
        const bool branch_taken_0x27bd90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27BD94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27BD90u;
            // 0x27bd94: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27bd90) {
            ctx->pc = 0x27BDB0u;
            goto label_27bdb0;
        }
    }
    ctx->pc = 0x27BD98u;
label_27bd98:
    // 0x27bd98: 0xc066ed0  jal         func_19BB40
    ctx->pc = 0x27BD98u;
    SET_GPR_U32(ctx, 31, 0x27BDA0u);
    ctx->pc = 0x27BD9Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27BD98u;
            // 0x27bd9c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19BB40u;
    if (runtime->hasFunction(0x19BB40u)) {
        auto targetFn = runtime->lookupFunction(0x19BB40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27BDA0u; }
        if (ctx->pc != 0x27BDA0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CheckEnableCharaChange__16CUserDataManagerFiPi_0x19bb40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27BDA0u; }
        if (ctx->pc != 0x27BDA0u) { return; }
    }
    ctx->pc = 0x27BDA0u;
label_27bda0:
    // 0x27bda0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x27bda0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27bda4: 0xc097e4c  jal         func_25F930
    ctx->pc = 0x27BDA4u;
    SET_GPR_U32(ctx, 31, 0x27BDACu);
    ctx->pc = 0x27BDA8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27BDA4u;
            // 0x27bda8: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F930u;
    if (runtime->hasFunction(0x25F930u)) {
        auto targetFn = runtime->lookupFunction(0x25F930u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27BDACu; }
        if (ctx->pc != 0x27BDACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetStack__FP12RS_STACKDATAi_0x25f930(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27BDACu; }
        if (ctx->pc != 0x27BDACu) { return; }
    }
    ctx->pc = 0x27BDACu;
label_27bdac:
    // 0x27bdac: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x27bdacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_27bdb0:
    // 0x27bdb0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x27bdb0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x27bdb4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x27bdb4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x27bdb8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x27bdb8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x27bdbc: 0x3e00008  jr          $ra
    ctx->pc = 0x27BDBCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x27BDC0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27BDBCu;
            // 0x27bdc0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x27BDC4u;
}
