#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: SetFloor__11CCharacter2Ff
// Address: 0x1744a0 - 0x174514
void SetFloor__11CCharacter2Ff_0x1744a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SetFloor__11CCharacter2Ff_0x1744a0");
#endif

    switch (ctx->pc) {
        case 0x1744ccu: goto label_1744cc;
        case 0x1744dcu: goto label_1744dc;
        default: break;
    }

    ctx->pc = 0x1744a0u;

    // 0x1744a0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1744a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1744a4: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x1744a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x1744a8: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x1744a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x1744ac: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x1744acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x1744b0: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1744b0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1744b4: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1744b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1744b8: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1744b8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1744bc: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x1744bcu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x1744c0: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1744c0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1744c4: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1744C4u;
    {
        const bool branch_taken_0x1744c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1744C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1744C4u;
            // 0x1744c8: 0x46006506  mov.s       $f20, $f12 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1744c4) {
            ctx->pc = 0x1744E4u;
            goto label_1744e4;
        }
    }
    ctx->pc = 0x1744CCu;
label_1744cc:
    // 0x1744cc: 0x8e420130  lw          $v0, 0x130($s2)
    ctx->pc = 0x1744ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 304)));
    // 0x1744d0: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x1744d0u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x1744d4: 0xc05e7a4  jal         func_179E90
    ctx->pc = 0x1744D4u;
    SET_GPR_U32(ctx, 31, 0x1744DCu);
    ctx->pc = 0x1744D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1744D4u;
            // 0x1744d8: 0x512021  addu        $a0, $v0, $s1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x179E90u;
    if (runtime->hasFunction(0x179E90u)) {
        auto targetFn = runtime->lookupFunction(0x179E90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1744DCu; }
        if (ctx->pc != 0x1744DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetFloor__13CDynamicAnimeFf_0x179e90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1744DCu; }
        if (ctx->pc != 0x1744DCu) { return; }
    }
    ctx->pc = 0x1744DCu;
label_1744dc:
    // 0x1744dc: 0x26310090  addiu       $s1, $s1, 0x90
    ctx->pc = 0x1744dcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 144));
    // 0x1744e0: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1744e0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_1744e4:
    // 0x1744e4: 0x0  nop
    ctx->pc = 0x1744e4u;
    // NOP
    // 0x1744e8: 0x8e43012c  lw          $v1, 0x12C($s2)
    ctx->pc = 0x1744e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 300)));
    // 0x1744ec: 0x203182a  slt         $v1, $s0, $v1
    ctx->pc = 0x1744ecu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x1744f0: 0x1460fff6  bnez        $v1, . + 4 + (-0xA << 2)
    ctx->pc = 0x1744F0u;
    {
        const bool branch_taken_0x1744f0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1744f0) {
            ctx->pc = 0x1744CCu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1744cc;
        }
    }
    ctx->pc = 0x1744F8u;
    // 0x1744f8: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x1744f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1744fc: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x1744fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x174500: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x174500u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x174504: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x174504u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x174508: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x174508u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17450c: 0x3e00008  jr          $ra
    ctx->pc = 0x17450Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x174510u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17450Cu;
            // 0x174510: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x174514u;
}
