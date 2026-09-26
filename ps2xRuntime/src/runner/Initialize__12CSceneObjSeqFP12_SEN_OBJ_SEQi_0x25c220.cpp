#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: Initialize__12CSceneObjSeqFP12_SEN_OBJ_SEQi
// Address: 0x25c220 - 0x25c2a0
void Initialize__12CSceneObjSeqFP12_SEN_OBJ_SEQi_0x25c220(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Initialize__12CSceneObjSeqFP12_SEN_OBJ_SEQi_0x25c220");
#endif

    switch (ctx->pc) {
        case 0x25c244u: goto label_25c244;
        case 0x25c264u: goto label_25c264;
        case 0x25c270u: goto label_25c270;
        default: break;
    }

    ctx->pc = 0x25c220u;

    // 0x25c220: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x25c220u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x25c224: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x25c224u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x25c228: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x25c228u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x25c22c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x25c22cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x25c230: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x25c230u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x25c234: 0xac850000  sw          $a1, 0x0($a0)
    ctx->pc = 0x25c234u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 5));
    // 0x25c238: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x25c238u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25c23c: 0xc0970a8  jal         func_25C2A0
    ctx->pc = 0x25C23Cu;
    SET_GPR_U32(ctx, 31, 0x25C244u);
    ctx->pc = 0x25C240u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x25C23Cu;
            // 0x25c240: 0xac860004  sw          $a2, 0x4($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25C2A0u;
    if (runtime->hasFunction(0x25C2A0u)) {
        auto targetFn = runtime->lookupFunction(0x25C2A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25C244u; }
        if (ctx->pc != 0x25C244u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Clear__12CSceneObjSeqFv_0x25c2a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25C244u; }
        if (ctx->pc != 0x25C244u) { return; }
    }
    ctx->pc = 0x25C244u;
label_25c244:
    // 0x25c244: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x25c244u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x25c248: 0x1060000f  beqz        $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x25C248u;
    {
        const bool branch_taken_0x25c248 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x25c248) {
            ctx->pc = 0x25C288u;
            goto label_25c288;
        }
    }
    ctx->pc = 0x25C250u;
    // 0x25c250: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x25c250u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x25c254: 0x1860000c  blez        $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x25C254u;
    {
        const bool branch_taken_0x25c254 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x25C258u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25C254u;
            // 0x25c258: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25c254) {
            ctx->pc = 0x25C288u;
            goto label_25c288;
        }
    }
    ctx->pc = 0x25C25Cu;
    // 0x25c25c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x25C25Cu;
    {
        const bool branch_taken_0x25c25c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25C260u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25C25Cu;
            // 0x25c260: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25c25c) {
            ctx->pc = 0x25C278u;
            goto label_25c278;
        }
    }
    ctx->pc = 0x25C264u;
label_25c264:
    // 0x25c264: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x25c264u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x25c268: 0xc09705c  jal         func_25C170
    ctx->pc = 0x25C268u;
    SET_GPR_U32(ctx, 31, 0x25C270u);
    ctx->pc = 0x25C26Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x25C268u;
            // 0x25c26c: 0x522021  addu        $a0, $v0, $s2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25C170u;
    if (runtime->hasFunction(0x25C170u)) {
        auto targetFn = runtime->lookupFunction(0x25C170u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25C270u; }
        if (ctx->pc != 0x25C270u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        InitSceneObjSeq__FP12_SEN_OBJ_SEQ_0x25c170(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25C270u; }
        if (ctx->pc != 0x25C270u) { return; }
    }
    ctx->pc = 0x25C270u;
label_25c270:
    // 0x25c270: 0x26520050  addiu       $s2, $s2, 0x50
    ctx->pc = 0x25c270u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 80));
    // 0x25c274: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x25c274u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_25c278:
    // 0x25c278: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x25c278u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x25c27c: 0x223182a  slt         $v1, $s1, $v1
    ctx->pc = 0x25c27cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x25c280: 0x1460fff8  bnez        $v1, . + 4 + (-0x8 << 2)
    ctx->pc = 0x25C280u;
    {
        const bool branch_taken_0x25c280 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x25c280) {
            ctx->pc = 0x25C264u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_25c264;
        }
    }
    ctx->pc = 0x25C288u;
label_25c288:
    // 0x25c288: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x25c288u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x25c28c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x25c28cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x25c290: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x25c290u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x25c294: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x25c294u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x25c298: 0x3e00008  jr          $ra
    ctx->pc = 0x25C298u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x25C29Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25C298u;
            // 0x25c29c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x25C2A0u;
}
