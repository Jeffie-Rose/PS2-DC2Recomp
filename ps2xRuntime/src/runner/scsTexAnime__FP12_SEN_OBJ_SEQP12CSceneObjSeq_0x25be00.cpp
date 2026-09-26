#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: scsTexAnime__FP12_SEN_OBJ_SEQP12CSceneObjSeq
// Address: 0x25be00 - 0x25be80
void scsTexAnime__FP12_SEN_OBJ_SEQP12CSceneObjSeq_0x25be00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("scsTexAnime__FP12_SEN_OBJ_SEQP12CSceneObjSeq_0x25be00");
#endif

    switch (ctx->pc) {
        case 0x25be28u: goto label_25be28;
        case 0x25be48u: goto label_25be48;
        case 0x25be68u: goto label_25be68;
        default: break;
    }

    ctx->pc = 0x25be00u;

    // 0x25be00: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x25be00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x25be04: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x25be04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x25be08: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x25be08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x25be0c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x25be0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x25be10: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x25be10u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25be14: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x25be14u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25be18: 0x2624002c  addiu       $a0, $s1, 0x2C
    ctx->pc = 0x25be18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 44));
    // 0x25be1c: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x25be1cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x25be20: 0xc04a38a  jal         func_128E28
    ctx->pc = 0x25BE20u;
    SET_GPR_U32(ctx, 31, 0x25BE28u);
    ctx->pc = 0x25BE24u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x25BE20u;
            // 0x25be24: 0x24a5c428  addiu       $a1, $a1, -0x3BD8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294951976));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128E28u;
    if (runtime->hasFunction(0x128E28u)) {
        auto targetFn = runtime->lookupFunction(0x128E28u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25BE28u; }
        if (ctx->pc != 0x25BE28u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcmp_0x128e28(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25BE28u; }
        if (ctx->pc != 0x25BE28u) { return; }
    }
    ctx->pc = 0x25BE28u;
label_25be28:
    // 0x25be28: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x25BE28u;
    {
        const bool branch_taken_0x25be28 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x25be28) {
            ctx->pc = 0x25BE50u;
            goto label_25be50;
        }
    }
    ctx->pc = 0x25BE30u;
    // 0x25be30: 0x8e050064  lw          $a1, 0x64($s0)
    ctx->pc = 0x25be30u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 100)));
    // 0x25be34: 0x3c0401ed  lui         $a0, 0x1ED
    ctx->pc = 0x25be34u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)493 << 16));
    // 0x25be38: 0x8e260020  lw          $a2, 0x20($s1)
    ctx->pc = 0x25be38u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x25be3c: 0x2484e880  addiu       $a0, $a0, -0x1780
    ctx->pc = 0x25be3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961280));
    // 0x25be40: 0xc0979dc  jal         func_25E770
    ctx->pc = 0x25BE40u;
    SET_GPR_U32(ctx, 31, 0x25BE48u);
    ctx->pc = 0x25BE44u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x25BE40u;
            // 0x25be44: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25E770u;
    if (runtime->hasFunction(0x25E770u)) {
        auto targetFn = runtime->lookupFunction(0x25E770u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25BE48u; }
        if (ctx->pc != 0x25BE48u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetTexAnim__10CEohMotherFiiPc_0x25e770(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25BE48u; }
        if (ctx->pc != 0x25BE48u) { return; }
    }
    ctx->pc = 0x25BE48u;
label_25be48:
    // 0x25be48: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x25BE48u;
    {
        const bool branch_taken_0x25be48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25BE4Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25BE48u;
            // 0x25be4c: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25be48) {
            ctx->pc = 0x25BE6Cu;
            goto label_25be6c;
        }
    }
    ctx->pc = 0x25BE50u;
label_25be50:
    // 0x25be50: 0x8e050064  lw          $a1, 0x64($s0)
    ctx->pc = 0x25be50u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 100)));
    // 0x25be54: 0x3c0401ed  lui         $a0, 0x1ED
    ctx->pc = 0x25be54u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)493 << 16));
    // 0x25be58: 0x8e260020  lw          $a2, 0x20($s1)
    ctx->pc = 0x25be58u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x25be5c: 0x2484e880  addiu       $a0, $a0, -0x1780
    ctx->pc = 0x25be5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961280));
    // 0x25be60: 0xc0979dc  jal         func_25E770
    ctx->pc = 0x25BE60u;
    SET_GPR_U32(ctx, 31, 0x25BE68u);
    ctx->pc = 0x25BE64u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x25BE60u;
            // 0x25be64: 0x2627002c  addiu       $a3, $s1, 0x2C (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 17), 44));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25E770u;
    if (runtime->hasFunction(0x25E770u)) {
        auto targetFn = runtime->lookupFunction(0x25E770u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25BE68u; }
        if (ctx->pc != 0x25BE68u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetTexAnim__10CEohMotherFiiPc_0x25e770(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25BE68u; }
        if (ctx->pc != 0x25BE68u) { return; }
    }
    ctx->pc = 0x25BE68u;
label_25be68:
    // 0x25be68: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x25be68u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_25be6c:
    // 0x25be6c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x25be6cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25be70: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x25be70u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x25be74: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x25be74u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x25be78: 0x3e00008  jr          $ra
    ctx->pc = 0x25BE78u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x25BE7Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25BE78u;
            // 0x25be7c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x25BE80u;
}
