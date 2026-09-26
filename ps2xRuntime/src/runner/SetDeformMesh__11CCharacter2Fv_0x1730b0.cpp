#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: SetDeformMesh__11CCharacter2Fv
// Address: 0x1730b0 - 0x173118
void SetDeformMesh__11CCharacter2Fv_0x1730b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SetDeformMesh__11CCharacter2Fv_0x1730b0");
#endif

    switch (ctx->pc) {
        case 0x1730d4u: goto label_1730d4;
        case 0x1730e8u: goto label_1730e8;
        default: break;
    }

    ctx->pc = 0x1730b0u;

    // 0x1730b0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x1730b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x1730b4: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1730b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x1730b8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1730b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1730bc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1730bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1730c0: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1730c0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1730c4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1730c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1730c8: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1730c8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1730cc: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1730CCu;
    {
        const bool branch_taken_0x1730cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1730D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1730CCu;
            // 0x1730d0: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1730cc) {
            ctx->pc = 0x1730F0u;
            goto label_1730f0;
        }
    }
    ctx->pc = 0x1730D4u;
label_1730d4:
    // 0x1730d4: 0x8c6402e8  lw          $a0, 0x2E8($v1)
    ctx->pc = 0x1730d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 744)));
    // 0x1730d8: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1730D8u;
    {
        const bool branch_taken_0x1730d8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1730DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1730D8u;
            // 0x1730dc: 0x27a50040  addiu       $a1, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1730d8) {
            ctx->pc = 0x1730E8u;
            goto label_1730e8;
        }
    }
    ctx->pc = 0x1730E0u;
    // 0x1730e0: 0xc04da00  jal         func_136800
    ctx->pc = 0x1730E0u;
    SET_GPR_U32(ctx, 31, 0x1730E8u);
    ctx->pc = 0x1730E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1730E0u;
            // 0x1730e4: 0x27a60050  addiu       $a2, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
    ctx->pc = 0x136800u;
    if (runtime->hasFunction(0x136800u)) {
        auto targetFn = runtime->lookupFunction(0x136800u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1730E8u; }
        if (ctx->pc != 0x1730E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        RemakeBBox__8mgCFrameFPfPf_0x136800(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1730E8u; }
        if (ctx->pc != 0x1730E8u) { return; }
    }
    ctx->pc = 0x1730E8u;
label_1730e8:
    // 0x1730e8: 0x26310004  addiu       $s1, $s1, 0x4
    ctx->pc = 0x1730e8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
    // 0x1730ec: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1730ecu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_1730f0:
    // 0x1730f0: 0x8e430348  lw          $v1, 0x348($s2)
    ctx->pc = 0x1730f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 840)));
    // 0x1730f4: 0x203182a  slt         $v1, $s0, $v1
    ctx->pc = 0x1730f4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x1730f8: 0x1460fff6  bnez        $v1, . + 4 + (-0xA << 2)
    ctx->pc = 0x1730F8u;
    {
        const bool branch_taken_0x1730f8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1730FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1730F8u;
            // 0x1730fc: 0x2511821  addu        $v1, $s2, $s1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 17)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1730f8) {
            ctx->pc = 0x1730D4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1730d4;
        }
    }
    ctx->pc = 0x173100u;
    // 0x173100: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x173100u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x173104: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x173104u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x173108: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x173108u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17310c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x17310cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x173110: 0x3e00008  jr          $ra
    ctx->pc = 0x173110u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x173114u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x173110u;
            // 0x173114: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x173118u;
}
