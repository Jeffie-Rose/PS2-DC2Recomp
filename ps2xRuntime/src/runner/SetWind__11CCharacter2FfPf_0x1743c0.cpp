#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: SetWind__11CCharacter2FfPf
// Address: 0x1743c0 - 0x174440
void SetWind__11CCharacter2FfPf_0x1743c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SetWind__11CCharacter2FfPf_0x1743c0");
#endif

    switch (ctx->pc) {
        case 0x1743f4u: goto label_1743f4;
        case 0x174408u: goto label_174408;
        default: break;
    }

    ctx->pc = 0x1743c0u;

    // 0x1743c0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x1743c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x1743c4: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x1743c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x1743c8: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x1743c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x1743cc: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x1743ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x1743d0: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x1743d0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1743d4: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x1743d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x1743d8: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x1743d8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1743dc: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1743dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1743e0: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1743e0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1743e4: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x1743e4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x1743e8: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1743e8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1743ec: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1743ECu;
    {
        const bool branch_taken_0x1743ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1743F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1743ECu;
            // 0x1743f0: 0x46006506  mov.s       $f20, $f12 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1743ec) {
            ctx->pc = 0x174410u;
            goto label_174410;
        }
    }
    ctx->pc = 0x1743F4u;
label_1743f4:
    // 0x1743f4: 0x8e620130  lw          $v0, 0x130($s3)
    ctx->pc = 0x1743f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 304)));
    // 0x1743f8: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x1743f8u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x1743fc: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1743fcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x174400: 0xc05e79c  jal         func_179E70
    ctx->pc = 0x174400u;
    SET_GPR_U32(ctx, 31, 0x174408u);
    ctx->pc = 0x174404u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x174400u;
            // 0x174404: 0x512021  addu        $a0, $v0, $s1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x179E70u;
    if (runtime->hasFunction(0x179E70u)) {
        auto targetFn = runtime->lookupFunction(0x179E70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x174408u; }
        if (ctx->pc != 0x174408u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetWind__13CDynamicAnimeFfPf_0x179e70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x174408u; }
        if (ctx->pc != 0x174408u) { return; }
    }
    ctx->pc = 0x174408u;
label_174408:
    // 0x174408: 0x26310090  addiu       $s1, $s1, 0x90
    ctx->pc = 0x174408u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 144));
    // 0x17440c: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x17440cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_174410:
    // 0x174410: 0x8e63012c  lw          $v1, 0x12C($s3)
    ctx->pc = 0x174410u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 300)));
    // 0x174414: 0x203182a  slt         $v1, $s0, $v1
    ctx->pc = 0x174414u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x174418: 0x1460fff6  bnez        $v1, . + 4 + (-0xA << 2)
    ctx->pc = 0x174418u;
    {
        const bool branch_taken_0x174418 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x174418) {
            ctx->pc = 0x1743F4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1743f4;
        }
    }
    ctx->pc = 0x174420u;
    // 0x174420: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x174420u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x174424: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x174424u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x174428: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x174428u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x17442c: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x17442cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x174430: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x174430u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x174434: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x174434u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x174438: 0x3e00008  jr          $ra
    ctx->pc = 0x174438u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17443Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x174438u;
            // 0x17443c: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x174440u;
}
